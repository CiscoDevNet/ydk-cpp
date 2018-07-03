
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_29.hpp"
#include "Cisco_NX_OS_device_30.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::PoeItems::InstItems::InstItems()
    :
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "inst-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::InstItems::~InstItems()
{
}

bool System::PoeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::PoeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::PoeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PoeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::PoeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::PoeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysifItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "physif-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::PhysifItems::~PhysifItems()
{
}

bool System::PoeItems::PhysifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PoeItems::PhysifItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PoeItems::PhysifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::PhysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::PhysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto c = std::make_shared<System::PoeItems::PhysifItems::PhysIfList>();
        c->parent = this;
        physif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::PhysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : physif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PoeItems::PhysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PoeItems::PhysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PoeItems::PhysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    portmode{YType::enumeration, "portMode"},
    maxconsumption{YType::uint64, "maxConsumption"},
    portpriority{YType::enumeration, "portPriority"},
    portpolice{YType::enumeration, "portPolice"},
    portdefaultconsumption{YType::uint64, "portDefaultConsumption"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rtvrfmbr_items(std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "physif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PoeItems::PhysifItems::PhysIfList::~PhysIfList()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| portmode.is_set
	|| maxconsumption.is_set
	|| portpriority.is_set
	|| portpolice.is_set
	|| portdefaultconsumption.is_set
	|| name.is_set
	|| descr.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PoeItems::PhysifItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(portmode.yfilter)
	|| ydk::is_set(maxconsumption.yfilter)
	|| ydk::is_set(portpriority.yfilter)
	|| ydk::is_set(portpolice.yfilter)
	|| ydk::is_set(portdefaultconsumption.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PoeItems::PhysifItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/poe-items/physif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PoeItems::PhysifItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (portmode.is_set || is_set(portmode.yfilter)) leaf_name_data.push_back(portmode.get_name_leafdata());
    if (maxconsumption.is_set || is_set(maxconsumption.yfilter)) leaf_name_data.push_back(maxconsumption.get_name_leafdata());
    if (portpriority.is_set || is_set(portpriority.yfilter)) leaf_name_data.push_back(portpriority.get_name_leafdata());
    if (portpolice.is_set || is_set(portpolice.yfilter)) leaf_name_data.push_back(portpolice.get_name_leafdata());
    if (portdefaultconsumption.is_set || is_set(portdefaultconsumption.yfilter)) leaf_name_data.push_back(portdefaultconsumption.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::PhysifItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::PhysifItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::PoeItems::PhysifItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portMode")
    {
        portmode = value;
        portmode.value_namespace = name_space;
        portmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxConsumption")
    {
        maxconsumption = value;
        maxconsumption.value_namespace = name_space;
        maxconsumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPriority")
    {
        portpriority = value;
        portpriority.value_namespace = name_space;
        portpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPolice")
    {
        portpolice = value;
        portpolice.value_namespace = name_space;
        portpolice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portDefaultConsumption")
    {
        portdefaultconsumption = value;
        portdefaultconsumption.value_namespace = name_space;
        portdefaultconsumption.value_namespace_prefix = name_space_prefix;
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

void System::PoeItems::PhysifItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portMode")
    {
        portmode.yfilter = yfilter;
    }
    if(value_path == "maxConsumption")
    {
        maxconsumption.yfilter = yfilter;
    }
    if(value_path == "portPriority")
    {
        portpriority.yfilter = yfilter;
    }
    if(value_path == "portPolice")
    {
        portpolice.yfilter = yfilter;
    }
    if(value_path == "portDefaultConsumption")
    {
        portdefaultconsumption.yfilter = yfilter;
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

bool System::PoeItems::PhysifItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "portMode" || name == "maxConsumption" || name == "portPriority" || name == "portPolice" || name == "portDefaultConsumption" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::QosmItems::QosmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    class_items(std::make_shared<System::QosmItems::ClassItems>())
    , if_items(std::make_shared<System::QosmItems::IfItems>())
    , classp_items(std::make_shared<System::QosmItems::ClasspItems>())
    , dscp_items(std::make_shared<System::QosmItems::DscpItems>())
    , dot1p_items(std::make_shared<System::QosmItems::Dot1pItems>())
    , ip_items(std::make_shared<System::QosmItems::IpItems>())
{
    class_items->parent = this;
    if_items->parent = this;
    classp_items->parent = this;
    dscp_items->parent = this;
    dot1p_items->parent = this;
    ip_items->parent = this;

    yang_name = "qosm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::~QosmItems()
{
}

bool System::QosmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (class_items !=  nullptr && class_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (classp_items !=  nullptr && classp_items->has_data())
	|| (dscp_items !=  nullptr && dscp_items->has_data())
	|| (dot1p_items !=  nullptr && dot1p_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::QosmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (class_items !=  nullptr && class_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (classp_items !=  nullptr && classp_items->has_operation())
	|| (dscp_items !=  nullptr && dscp_items->has_operation())
	|| (dot1p_items !=  nullptr && dot1p_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::QosmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qosm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-items")
    {
        if(class_items == nullptr)
        {
            class_items = std::make_shared<System::QosmItems::ClassItems>();
        }
        return class_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::QosmItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "classp-items")
    {
        if(classp_items == nullptr)
        {
            classp_items = std::make_shared<System::QosmItems::ClasspItems>();
        }
        return classp_items;
    }

    if(child_yang_name == "dscp-items")
    {
        if(dscp_items == nullptr)
        {
            dscp_items = std::make_shared<System::QosmItems::DscpItems>();
        }
        return dscp_items;
    }

    if(child_yang_name == "dot1p-items")
    {
        if(dot1p_items == nullptr)
        {
            dot1p_items = std::make_shared<System::QosmItems::Dot1pItems>();
        }
        return dot1p_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::QosmItems::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(class_items != nullptr)
    {
        children["class-items"] = class_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(classp_items != nullptr)
    {
        children["classp-items"] = classp_items;
    }

    if(dscp_items != nullptr)
    {
        children["dscp-items"] = dscp_items;
    }

    if(dot1p_items != nullptr)
    {
        children["dot1p-items"] = dot1p_items;
    }

    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    return children;
}

void System::QosmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::QosmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::QosmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-items" || name == "if-items" || name == "classp-items" || name == "dscp-items" || name == "dot1p-items" || name == "ip-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::QosmItems::ClassItems::ClassItems()
    :
    class_list(this, {"qosgrp"})
{

    yang_name = "class-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClassItems::~ClassItems()
{
}

bool System::QosmItems::ClassItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::ClassItems::has_operation() const
{
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::ClassItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClassItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClassItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClassItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Class-list")
    {
        auto c = std::make_shared<System::QosmItems::ClassItems::ClassList>();
        c->parent = this;
        class_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClassItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::ClassItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::ClassItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::ClassItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Class-list")
        return true;
    return false;
}

System::QosmItems::ClassItems::ClassList::ClassList()
    :
    qosgrp{YType::enumeration, "qosGrp"},
    ppfinstid{YType::uint32, "ppfInstId"},
    ppfstartid{YType::uint32, "ppfStartId"},
    stateid{YType::enumeration, "stateId"}
{

    yang_name = "Class-list"; yang_parent_name = "class-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClassItems::ClassList::~ClassList()
{
}

bool System::QosmItems::ClassItems::ClassList::has_data() const
{
    if (is_presence_container) return true;
    return qosgrp.is_set
	|| ppfinstid.is_set
	|| ppfstartid.is_set
	|| stateid.is_set;
}

bool System::QosmItems::ClassItems::ClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(ppfinstid.yfilter)
	|| ydk::is_set(ppfstartid.yfilter)
	|| ydk::is_set(stateid.yfilter);
}

std::string System::QosmItems::ClassItems::ClassList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/class-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClassItems::ClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Class-list";
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClassItems::ClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (ppfinstid.is_set || is_set(ppfinstid.yfilter)) leaf_name_data.push_back(ppfinstid.get_name_leafdata());
    if (ppfstartid.is_set || is_set(ppfstartid.yfilter)) leaf_name_data.push_back(ppfstartid.get_name_leafdata());
    if (stateid.is_set || is_set(stateid.yfilter)) leaf_name_data.push_back(stateid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClassItems::ClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClassItems::ClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::ClassItems::ClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppfInstId")
    {
        ppfinstid = value;
        ppfinstid.value_namespace = name_space;
        ppfinstid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppfStartId")
    {
        ppfstartid = value;
        ppfstartid.value_namespace = name_space;
        ppfstartid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateId")
    {
        stateid = value;
        stateid.value_namespace = name_space;
        stateid.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClassItems::ClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "ppfInstId")
    {
        ppfinstid.yfilter = yfilter;
    }
    if(value_path == "ppfStartId")
    {
        ppfstartid.yfilter = yfilter;
    }
    if(value_path == "stateId")
    {
        stateid.yfilter = yfilter;
    }
}

bool System::QosmItems::ClassItems::ClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qosGrp" || name == "ppfInstId" || name == "ppfStartId" || name == "stateId")
        return true;
    return false;
}

System::QosmItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IfItems::~IfItems()
{
}

bool System::QosmItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::QosmItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"}
        ,
    class_items(std::make_shared<System::QosmItems::IfItems::IfList::ClassItems>())
{
    class_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IfItems::IfList::~IfList()
{
}

bool System::QosmItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (class_items !=  nullptr && class_items->has_data());
}

bool System::QosmItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (class_items !=  nullptr && class_items->has_operation());
}

std::string System::QosmItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-items")
    {
        if(class_items == nullptr)
        {
            class_items = std::make_shared<System::QosmItems::IfItems::IfList::ClassItems>();
        }
        return class_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(class_items != nullptr)
    {
        children["class-items"] = class_items;
    }

    return children;
}

void System::QosmItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::QosmItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-items" || name == "id")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::ClassItems::ClassItems()
    :
    ifclass_list(this, {"id"})
{

    yang_name = "class-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::IfItems::IfList::ClassItems::~ClassItems()
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifclass_list.len(); index++)
    {
        if(ifclass_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_operation() const
{
    for (std::size_t index=0; index<ifclass_list.len(); index++)
    {
        if(ifclass_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IfItems::IfList::ClassItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::ClassItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IfItems::IfList::ClassItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfClass-list")
    {
        auto c = std::make_shared<System::QosmItems::IfItems::IfList::ClassItems::IfClassList>();
        c->parent = this;
        ifclass_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IfItems::IfList::ClassItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifclass_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::IfItems::IfList::ClassItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IfItems::IfList::ClassItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfClass-list")
        return true;
    return false;
}

System::QosmItems::IfItems::IfList::ClassItems::IfClassList::IfClassList()
    :
    id{YType::enumeration, "id"}
{

    yang_name = "IfClass-list"; yang_parent_name = "class-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::IfItems::IfList::ClassItems::IfClassList::~IfClassList()
{
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfClass-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IfItems::IfList::ClassItems::IfClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::IfItems::IfList::ClassItems::IfClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::IfItems::IfList::ClassItems::IfClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::QosmItems::IfItems::IfList::ClassItems::IfClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClasspItems()
    :
    class_list(this, {"qosgrp"})
{

    yang_name = "classp-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClasspItems::~ClasspItems()
{
}

bool System::QosmItems::ClasspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::ClasspItems::has_operation() const
{
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::ClasspItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClasspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Class-list")
    {
        auto c = std::make_shared<System::QosmItems::ClasspItems::ClassList>();
        c->parent = this;
        class_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::ClasspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::ClasspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::ClasspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Class-list")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::ClassList()
    :
    qosgrp{YType::enumeration, "qosGrp"},
    admin{YType::enumeration, "admin"},
    mtu{YType::uint16, "mtu"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    cong_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::CongItems>())
    , queue_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::QueueItems>())
    , buffer_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::BufferItems>())
    , sched_items(std::make_shared<System::QosmItems::ClasspItems::ClassList::SchedItems>())
{
    cong_items->parent = this;
    queue_items->parent = this;
    buffer_items->parent = this;
    sched_items->parent = this;

    yang_name = "Class-list"; yang_parent_name = "classp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::ClasspItems::ClassList::~ClassList()
{
}

bool System::QosmItems::ClasspItems::ClassList::has_data() const
{
    if (is_presence_container) return true;
    return qosgrp.is_set
	|| admin.is_set
	|| mtu.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| descr.is_set
	|| (cong_items !=  nullptr && cong_items->has_data())
	|| (queue_items !=  nullptr && queue_items->has_data())
	|| (buffer_items !=  nullptr && buffer_items->has_data())
	|| (sched_items !=  nullptr && sched_items->has_data());
}

bool System::QosmItems::ClasspItems::ClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(admin.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (cong_items !=  nullptr && cong_items->has_operation())
	|| (queue_items !=  nullptr && queue_items->has_operation())
	|| (buffer_items !=  nullptr && buffer_items->has_operation())
	|| (sched_items !=  nullptr && sched_items->has_operation());
}

std::string System::QosmItems::ClasspItems::ClassList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/classp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::ClasspItems::ClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Class-list";
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (admin.is_set || is_set(admin.yfilter)) leaf_name_data.push_back(admin.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::ClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cong-items")
    {
        if(cong_items == nullptr)
        {
            cong_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::CongItems>();
        }
        return cong_items;
    }

    if(child_yang_name == "queue-items")
    {
        if(queue_items == nullptr)
        {
            queue_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::QueueItems>();
        }
        return queue_items;
    }

    if(child_yang_name == "buffer-items")
    {
        if(buffer_items == nullptr)
        {
            buffer_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::BufferItems>();
        }
        return buffer_items;
    }

    if(child_yang_name == "sched-items")
    {
        if(sched_items == nullptr)
        {
            sched_items = std::make_shared<System::QosmItems::ClasspItems::ClassList::SchedItems>();
        }
        return sched_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::ClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cong_items != nullptr)
    {
        children["cong-items"] = cong_items;
    }

    if(queue_items != nullptr)
    {
        children["queue-items"] = queue_items;
    }

    if(buffer_items != nullptr)
    {
        children["buffer-items"] = buffer_items;
    }

    if(sched_items != nullptr)
    {
        children["sched-items"] = sched_items;
    }

    return children;
}

void System::QosmItems::ClasspItems::ClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin")
    {
        admin = value;
        admin.value_namespace = name_space;
        admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "admin")
    {
        admin.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
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
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cong-items" || name == "queue-items" || name == "buffer-items" || name == "sched-items" || name == "qosGrp" || name == "admin" || name == "mtu" || name == "operSt" || name == "operStQual" || name == "name" || name == "descr")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::CongItems::CongItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    algo{YType::enumeration, "algo"},
    ecn{YType::enumeration, "ecn"}
{

    yang_name = "cong-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::CongItems::~CongItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| algo.is_set
	|| ecn.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(algo.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::CongItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cong-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::CongItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (algo.is_set || is_set(algo.yfilter)) leaf_name_data.push_back(algo.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::ClassList::CongItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::ClassList::CongItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::ClasspItems::ClassList::CongItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "algo")
    {
        algo = value;
        algo.value_namespace = name_space;
        algo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::CongItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "algo")
    {
        algo.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::CongItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "algo" || name == "ecn")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::QueueItems::QueueItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    meth{YType::enumeration, "meth"},
    limit{YType::uint16, "limit"}
{

    yang_name = "queue-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::QueueItems::~QueueItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| meth.is_set
	|| limit.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(meth.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::QueueItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::QueueItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (meth.is_set || is_set(meth.yfilter)) leaf_name_data.push_back(meth.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::ClassList::QueueItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::ClassList::QueueItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::ClasspItems::ClassList::QueueItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "meth")
    {
        meth = value;
        meth.value_namespace = name_space;
        meth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::QueueItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "meth")
    {
        meth.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::QueueItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "meth" || name == "limit")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::BufferItems::BufferItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    min{YType::uint8, "min"}
{

    yang_name = "buffer-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::BufferItems::~BufferItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| min.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::BufferItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::BufferItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::ClassList::BufferItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::ClassList::BufferItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::ClasspItems::ClassList::BufferItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::BufferItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::BufferItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "min")
        return true;
    return false;
}

System::QosmItems::ClasspItems::ClassList::SchedItems::SchedItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    meth{YType::enumeration, "meth"},
    bw{YType::uint8, "bw"}
{

    yang_name = "sched-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::QosmItems::ClasspItems::ClassList::SchedItems::~SchedItems()
{
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| meth.is_set
	|| bw.is_set;
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(meth.yfilter)
	|| ydk::is_set(bw.yfilter);
}

std::string System::QosmItems::ClasspItems::ClassList::SchedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sched-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::ClasspItems::ClassList::SchedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (meth.is_set || is_set(meth.yfilter)) leaf_name_data.push_back(meth.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::ClasspItems::ClassList::SchedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::ClasspItems::ClassList::SchedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::ClasspItems::ClassList::SchedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "meth")
    {
        meth = value;
        meth.value_namespace = name_space;
        meth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
}

void System::QosmItems::ClasspItems::ClassList::SchedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "meth")
    {
        meth.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
}

bool System::QosmItems::ClasspItems::ClassList::SchedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "meth" || name == "bw")
        return true;
    return false;
}

System::QosmItems::DscpItems::DscpItems()
    :
    dscprule_list(this, {"from", "to", "qosgrp", "markdscp"})
{

    yang_name = "dscp-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::DscpItems::~DscpItems()
{
}

bool System::QosmItems::DscpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscprule_list.len(); index++)
    {
        if(dscprule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::DscpItems::has_operation() const
{
    for (std::size_t index=0; index<dscprule_list.len(); index++)
    {
        if(dscprule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::DscpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::DscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::DscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::DscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DscpRule-list")
    {
        auto c = std::make_shared<System::QosmItems::DscpItems::DscpRuleList>();
        c->parent = this;
        dscprule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::DscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dscprule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::DscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::DscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::DscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DscpRule-list")
        return true;
    return false;
}

System::QosmItems::DscpItems::DscpRuleList::DscpRuleList()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "DscpRule-list"; yang_parent_name = "dscp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::DscpItems::DscpRuleList::~DscpRuleList()
{
}

bool System::QosmItems::DscpItems::DscpRuleList::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| name.is_set
	|| descr.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::QosmItems::DscpItems::DscpRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::QosmItems::DscpItems::DscpRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/dscp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::DscpItems::DscpRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DscpRule-list";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    ADD_KEY_TOKEN(markdscp, "markDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::DscpItems::DscpRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::DscpItems::DscpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::DscpItems::DscpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::DscpItems::DscpRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
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
}

void System::QosmItems::DscpItems::DscpRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::QosmItems::DscpItems::DscpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to" || name == "qosGrp" || name == "markDscp" || name == "name" || name == "descr" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::QosmItems::Dot1pItems::Dot1pItems()
    :
    dot1prule_list(this, {"from", "to", "qosgrp", "markdscp"})
{

    yang_name = "dot1p-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::Dot1pItems::~Dot1pItems()
{
}

bool System::QosmItems::Dot1pItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1prule_list.len(); index++)
    {
        if(dot1prule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::Dot1pItems::has_operation() const
{
    for (std::size_t index=0; index<dot1prule_list.len(); index++)
    {
        if(dot1prule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::Dot1pItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::Dot1pItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::Dot1pItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::Dot1pItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dot1pRule-list")
    {
        auto c = std::make_shared<System::QosmItems::Dot1pItems::Dot1pRuleList>();
        c->parent = this;
        dot1prule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::Dot1pItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1prule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::Dot1pItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::Dot1pItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::Dot1pItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dot1pRule-list")
        return true;
    return false;
}

System::QosmItems::Dot1pItems::Dot1pRuleList::Dot1pRuleList()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "Dot1pRule-list"; yang_parent_name = "dot1p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::Dot1pItems::Dot1pRuleList::~Dot1pRuleList()
{
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| name.is_set
	|| descr.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::QosmItems::Dot1pItems::Dot1pRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/dot1p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::Dot1pItems::Dot1pRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dot1pRule-list";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    ADD_KEY_TOKEN(qosgrp, "qosGrp");
    ADD_KEY_TOKEN(markdscp, "markDscp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::Dot1pItems::Dot1pRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::Dot1pItems::Dot1pRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::Dot1pItems::Dot1pRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::Dot1pItems::Dot1pRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
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
}

void System::QosmItems::Dot1pItems::Dot1pRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::QosmItems::Dot1pItems::Dot1pRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to" || name == "qosGrp" || name == "markDscp" || name == "name" || name == "descr" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::QosmItems::IpItems::IpItems()
    :
    iprule_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "qosm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IpItems::~IpItems()
{
}

bool System::QosmItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iprule_list.len(); index++)
    {
        if(iprule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::QosmItems::IpItems::has_operation() const
{
    for (std::size_t index=0; index<iprule_list.len(); index++)
    {
        if(iprule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::QosmItems::IpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRule-list")
    {
        auto c = std::make_shared<System::QosmItems::IpItems::IpRuleList>();
        c->parent = this;
        iprule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iprule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::QosmItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::QosmItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::QosmItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpRule-list")
        return true;
    return false;
}

System::QosmItems::IpItems::IpRuleList::IpRuleList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    qosgrp{YType::enumeration, "qosGrp"},
    markdscp{YType::uint8, "markDscp"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
{

    yang_name = "IpRule-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::QosmItems::IpItems::IpRuleList::~IpRuleList()
{
}

bool System::QosmItems::IpItems::IpRuleList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| qosgrp.is_set
	|| markdscp.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::QosmItems::IpItems::IpRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(qosgrp.yfilter)
	|| ydk::is_set(markdscp.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::QosmItems::IpItems::IpRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/qosm-items/ip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::QosmItems::IpItems::IpRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpRule-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::QosmItems::IpItems::IpRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (qosgrp.is_set || is_set(qosgrp.yfilter)) leaf_name_data.push_back(qosgrp.get_name_leafdata());
    if (markdscp.is_set || is_set(markdscp.yfilter)) leaf_name_data.push_back(markdscp.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::QosmItems::IpItems::IpRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::QosmItems::IpItems::IpRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::QosmItems::IpItems::IpRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "qosGrp")
    {
        qosgrp = value;
        qosgrp.value_namespace = name_space;
        qosgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "markDscp")
    {
        markdscp = value;
        markdscp.value_namespace = name_space;
        markdscp.value_namespace_prefix = name_space_prefix;
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
}

void System::QosmItems::IpItems::IpRuleList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "qosGrp")
    {
        qosgrp.yfilter = yfilter;
    }
    if(value_path == "markDscp")
    {
        markdscp.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::QosmItems::IpItems::IpRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "qosGrp" || name == "markDscp" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::SisfItems::SisfItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    snooping_items(std::make_shared<System::SisfItems::SnoopingItems>())
    , neighborbinding_items(std::make_shared<System::SisfItems::NeighborbindingItems>())
    , dhcpguard_items(std::make_shared<System::SisfItems::DhcpguardItems>())
    , raguard_items(std::make_shared<System::SisfItems::RaguardItems>())
    , fhsif_items(std::make_shared<System::SisfItems::FhsifItems>())
    , fhsvlan_items(std::make_shared<System::SisfItems::FhsvlanItems>())
{
    snooping_items->parent = this;
    neighborbinding_items->parent = this;
    dhcpguard_items->parent = this;
    raguard_items->parent = this;
    fhsif_items->parent = this;
    fhsvlan_items->parent = this;

    yang_name = "sisf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::~SisfItems()
{
}

bool System::SisfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (snooping_items !=  nullptr && snooping_items->has_data())
	|| (neighborbinding_items !=  nullptr && neighborbinding_items->has_data())
	|| (dhcpguard_items !=  nullptr && dhcpguard_items->has_data())
	|| (raguard_items !=  nullptr && raguard_items->has_data())
	|| (fhsif_items !=  nullptr && fhsif_items->has_data())
	|| (fhsvlan_items !=  nullptr && fhsvlan_items->has_data());
}

bool System::SisfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (snooping_items !=  nullptr && snooping_items->has_operation())
	|| (neighborbinding_items !=  nullptr && neighborbinding_items->has_operation())
	|| (dhcpguard_items !=  nullptr && dhcpguard_items->has_operation())
	|| (raguard_items !=  nullptr && raguard_items->has_operation())
	|| (fhsif_items !=  nullptr && fhsif_items->has_operation())
	|| (fhsvlan_items !=  nullptr && fhsvlan_items->has_operation());
}

std::string System::SisfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sisf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping-items")
    {
        if(snooping_items == nullptr)
        {
            snooping_items = std::make_shared<System::SisfItems::SnoopingItems>();
        }
        return snooping_items;
    }

    if(child_yang_name == "neighborbinding-items")
    {
        if(neighborbinding_items == nullptr)
        {
            neighborbinding_items = std::make_shared<System::SisfItems::NeighborbindingItems>();
        }
        return neighborbinding_items;
    }

    if(child_yang_name == "dhcpguard-items")
    {
        if(dhcpguard_items == nullptr)
        {
            dhcpguard_items = std::make_shared<System::SisfItems::DhcpguardItems>();
        }
        return dhcpguard_items;
    }

    if(child_yang_name == "raguard-items")
    {
        if(raguard_items == nullptr)
        {
            raguard_items = std::make_shared<System::SisfItems::RaguardItems>();
        }
        return raguard_items;
    }

    if(child_yang_name == "fhsif-items")
    {
        if(fhsif_items == nullptr)
        {
            fhsif_items = std::make_shared<System::SisfItems::FhsifItems>();
        }
        return fhsif_items;
    }

    if(child_yang_name == "fhsvlan-items")
    {
        if(fhsvlan_items == nullptr)
        {
            fhsvlan_items = std::make_shared<System::SisfItems::FhsvlanItems>();
        }
        return fhsvlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping_items != nullptr)
    {
        children["snooping-items"] = snooping_items;
    }

    if(neighborbinding_items != nullptr)
    {
        children["neighborbinding-items"] = neighborbinding_items;
    }

    if(dhcpguard_items != nullptr)
    {
        children["dhcpguard-items"] = dhcpguard_items;
    }

    if(raguard_items != nullptr)
    {
        children["raguard-items"] = raguard_items;
    }

    if(fhsif_items != nullptr)
    {
        children["fhsif-items"] = fhsif_items;
    }

    if(fhsvlan_items != nullptr)
    {
        children["fhsvlan-items"] = fhsvlan_items;
    }

    return children;
}

void System::SisfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping-items" || name == "neighborbinding-items" || name == "dhcpguard-items" || name == "raguard-items" || name == "fhsif-items" || name == "fhsvlan-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::SnoopingItems::SnoopingItems()
    :
    instsnooping_list(this, {"policyname"})
{

    yang_name = "snooping-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::SnoopingItems::~SnoopingItems()
{
}

bool System::SisfItems::SnoopingItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instsnooping_list.len(); index++)
    {
        if(instsnooping_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::SnoopingItems::has_operation() const
{
    for (std::size_t index=0; index<instsnooping_list.len(); index++)
    {
        if(instsnooping_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::SnoopingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::SnoopingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::SnoopingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::SnoopingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstSnooping-list")
    {
        auto c = std::make_shared<System::SisfItems::SnoopingItems::InstSnoopingList>();
        c->parent = this;
        instsnooping_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::SnoopingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instsnooping_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::SnoopingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::SnoopingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::SnoopingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstSnooping-list")
        return true;
    return false;
}

System::SisfItems::SnoopingItems::InstSnoopingList::InstSnoopingList()
    :
    policyname{YType::str, "policyName"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    devicerole{YType::enumeration, "deviceRole"},
    ndpprotocol{YType::enumeration, "ndpProtocol"},
    dhcpprotocol{YType::enumeration, "dhcpProtocol"},
    securitylevel{YType::enumeration, "securityLevel"},
    limitaddresscount{YType::uint16, "limitAddressCount"},
    tracking{YType::enumeration, "tracking"},
    reachablelifetimer{YType::uint64, "reachableLifetimer"},
    stalelifetimer{YType::uint64, "staleLifetimer"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstSnooping-list"; yang_parent_name = "snooping-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::SnoopingItems::InstSnoopingList::~InstSnoopingList()
{
}

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| trustedportenabled.is_set
	|| devicerole.is_set
	|| ndpprotocol.is_set
	|| dhcpprotocol.is_set
	|| securitylevel.is_set
	|| limitaddresscount.is_set
	|| tracking.is_set
	|| reachablelifetimer.is_set
	|| stalelifetimer.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(ndpprotocol.yfilter)
	|| ydk::is_set(dhcpprotocol.yfilter)
	|| ydk::is_set(securitylevel.yfilter)
	|| ydk::is_set(limitaddresscount.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(stalelifetimer.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::SnoopingItems::InstSnoopingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/snooping-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::SnoopingItems::InstSnoopingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstSnooping-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::SnoopingItems::InstSnoopingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (ndpprotocol.is_set || is_set(ndpprotocol.yfilter)) leaf_name_data.push_back(ndpprotocol.get_name_leafdata());
    if (dhcpprotocol.is_set || is_set(dhcpprotocol.yfilter)) leaf_name_data.push_back(dhcpprotocol.get_name_leafdata());
    if (securitylevel.is_set || is_set(securitylevel.yfilter)) leaf_name_data.push_back(securitylevel.get_name_leafdata());
    if (limitaddresscount.is_set || is_set(limitaddresscount.yfilter)) leaf_name_data.push_back(limitaddresscount.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (stalelifetimer.is_set || is_set(stalelifetimer.yfilter)) leaf_name_data.push_back(stalelifetimer.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::SnoopingItems::InstSnoopingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::SnoopingItems::InstSnoopingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::SnoopingItems::InstSnoopingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndpProtocol")
    {
        ndpprotocol = value;
        ndpprotocol.value_namespace = name_space;
        ndpprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpProtocol")
    {
        dhcpprotocol = value;
        dhcpprotocol.value_namespace = name_space;
        dhcpprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityLevel")
    {
        securitylevel = value;
        securitylevel.value_namespace = name_space;
        securitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limitAddressCount")
    {
        limitaddresscount = value;
        limitaddresscount.value_namespace = name_space;
        limitaddresscount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer = value;
        stalelifetimer.value_namespace = name_space;
        stalelifetimer.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::SnoopingItems::InstSnoopingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "ndpProtocol")
    {
        ndpprotocol.yfilter = yfilter;
    }
    if(value_path == "dhcpProtocol")
    {
        dhcpprotocol.yfilter = yfilter;
    }
    if(value_path == "securityLevel")
    {
        securitylevel.yfilter = yfilter;
    }
    if(value_path == "limitAddressCount")
    {
        limitaddresscount.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer.yfilter = yfilter;
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

bool System::SisfItems::SnoopingItems::InstSnoopingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "trustedPortEnabled" || name == "deviceRole" || name == "ndpProtocol" || name == "dhcpProtocol" || name == "securityLevel" || name == "limitAddressCount" || name == "tracking" || name == "reachableLifetimer" || name == "staleLifetimer" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::NeighborbindingItems()
    :
    logging{YType::boolean, "logging"},
    maxentries{YType::uint32, "maxEntries"},
    vlanlimit{YType::uint32, "vlanLimit"},
    maclimit{YType::uint32, "macLimit"},
    portlimit{YType::uint32, "portLimit"},
    reachablelifetimer{YType::uint64, "reachableLifetimer"},
    stalelifetimer{YType::uint64, "staleLifetimer"},
    downlifetimer{YType::uint64, "downLifetimer"},
    tracking{YType::boolean, "tracking"},
    retryinterval{YType::uint16, "retryInterval"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    bindingip_items(std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems>())
{
    bindingip_items->parent = this;

    yang_name = "neighborbinding-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::~NeighborbindingItems()
{
}

bool System::SisfItems::NeighborbindingItems::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| maxentries.is_set
	|| vlanlimit.is_set
	|| maclimit.is_set
	|| portlimit.is_set
	|| reachablelifetimer.is_set
	|| stalelifetimer.is_set
	|| downlifetimer.is_set
	|| tracking.is_set
	|| retryinterval.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (bindingip_items !=  nullptr && bindingip_items->has_data());
}

bool System::SisfItems::NeighborbindingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(maxentries.yfilter)
	|| ydk::is_set(vlanlimit.yfilter)
	|| ydk::is_set(maclimit.yfilter)
	|| ydk::is_set(portlimit.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(stalelifetimer.yfilter)
	|| ydk::is_set(downlifetimer.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(retryinterval.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (bindingip_items !=  nullptr && bindingip_items->has_operation());
}

std::string System::SisfItems::NeighborbindingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighborbinding-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (maxentries.is_set || is_set(maxentries.yfilter)) leaf_name_data.push_back(maxentries.get_name_leafdata());
    if (vlanlimit.is_set || is_set(vlanlimit.yfilter)) leaf_name_data.push_back(vlanlimit.get_name_leafdata());
    if (maclimit.is_set || is_set(maclimit.yfilter)) leaf_name_data.push_back(maclimit.get_name_leafdata());
    if (portlimit.is_set || is_set(portlimit.yfilter)) leaf_name_data.push_back(portlimit.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (stalelifetimer.is_set || is_set(stalelifetimer.yfilter)) leaf_name_data.push_back(stalelifetimer.get_name_leafdata());
    if (downlifetimer.is_set || is_set(downlifetimer.yfilter)) leaf_name_data.push_back(downlifetimer.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (retryinterval.is_set || is_set(retryinterval.yfilter)) leaf_name_data.push_back(retryinterval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::NeighborbindingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bindingip-items")
    {
        if(bindingip_items == nullptr)
        {
            bindingip_items = std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems>();
        }
        return bindingip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::NeighborbindingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bindingip_items != nullptr)
    {
        children["bindingip-items"] = bindingip_items;
    }

    return children;
}

void System::SisfItems::NeighborbindingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEntries")
    {
        maxentries = value;
        maxentries.value_namespace = name_space;
        maxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanLimit")
    {
        vlanlimit = value;
        vlanlimit.value_namespace = name_space;
        vlanlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macLimit")
    {
        maclimit = value;
        maclimit.value_namespace = name_space;
        maclimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portLimit")
    {
        portlimit = value;
        portlimit.value_namespace = name_space;
        portlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer = value;
        stalelifetimer.value_namespace = name_space;
        stalelifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downLifetimer")
    {
        downlifetimer = value;
        downlifetimer.value_namespace = name_space;
        downlifetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryInterval")
    {
        retryinterval = value;
        retryinterval.value_namespace = name_space;
        retryinterval.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::NeighborbindingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "maxEntries")
    {
        maxentries.yfilter = yfilter;
    }
    if(value_path == "vlanLimit")
    {
        vlanlimit.yfilter = yfilter;
    }
    if(value_path == "macLimit")
    {
        maclimit.yfilter = yfilter;
    }
    if(value_path == "portLimit")
    {
        portlimit.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
    }
    if(value_path == "staleLifetimer")
    {
        stalelifetimer.yfilter = yfilter;
    }
    if(value_path == "downLifetimer")
    {
        downlifetimer.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "retryInterval")
    {
        retryinterval.yfilter = yfilter;
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

bool System::SisfItems::NeighborbindingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bindingip-items" || name == "logging" || name == "maxEntries" || name == "vlanLimit" || name == "macLimit" || name == "portLimit" || name == "reachableLifetimer" || name == "staleLifetimer" || name == "downLifetimer" || name == "tracking" || name == "retryInterval" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::BindingipItems::BindingipItems()
    :
    staticbinding_list(this, {"v6addr", "vlanid"})
{

    yang_name = "bindingip-items"; yang_parent_name = "neighborbinding-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::BindingipItems::~BindingipItems()
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticbinding_list.len(); index++)
    {
        if(staticbinding_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_operation() const
{
    for (std::size_t index=0; index<staticbinding_list.len(); index++)
    {
        if(staticbinding_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/neighborbinding-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindingip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::BindingipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::NeighborbindingItems::BindingipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticBinding-list")
    {
        auto c = std::make_shared<System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList>();
        c->parent = this;
        staticbinding_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::NeighborbindingItems::BindingipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : staticbinding_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::NeighborbindingItems::BindingipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::NeighborbindingItems::BindingipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticBinding-list")
        return true;
    return false;
}

System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::StaticBindingList()
    :
    v6addr{YType::str, "v6Addr"},
    vlanid{YType::uint16, "vlanID"},
    interface{YType::str, "interface"},
    mac{YType::str, "mac"},
    tracking{YType::enumeration, "tracking"},
    retryinterval{YType::int16, "retryInterval"},
    reachablelifetimer{YType::int32, "reachableLifetimer"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "StaticBinding-list"; yang_parent_name = "bindingip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::~StaticBindingList()
{
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_data() const
{
    if (is_presence_container) return true;
    return v6addr.is_set
	|| vlanid.is_set
	|| interface.is_set
	|| mac.is_set
	|| tracking.is_set
	|| retryinterval.is_set
	|| reachablelifetimer.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(tracking.yfilter)
	|| ydk::is_set(retryinterval.yfilter)
	|| ydk::is_set(reachablelifetimer.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/neighborbinding-items/bindingip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticBinding-list";
    ADD_KEY_TOKEN(v6addr, "v6Addr");
    ADD_KEY_TOKEN(vlanid, "vlanID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());
    if (retryinterval.is_set || is_set(retryinterval.yfilter)) leaf_name_data.push_back(retryinterval.get_name_leafdata());
    if (reachablelifetimer.is_set || is_set(reachablelifetimer.yfilter)) leaf_name_data.push_back(reachablelifetimer.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v6Addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanID")
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
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryInterval")
    {
        retryinterval = value;
        retryinterval.value_namespace = name_space;
        retryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer = value;
        reachablelifetimer.value_namespace = name_space;
        reachablelifetimer.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v6Addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "vlanID")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
    if(value_path == "retryInterval")
    {
        retryinterval.yfilter = yfilter;
    }
    if(value_path == "reachableLifetimer")
    {
        reachablelifetimer.yfilter = yfilter;
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

bool System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v6Addr" || name == "vlanID" || name == "interface" || name == "mac" || name == "tracking" || name == "retryInterval" || name == "reachableLifetimer" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::DhcpguardItems::DhcpguardItems()
    :
    instdhcpguard_list(this, {"policyname"})
{

    yang_name = "dhcpguard-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::DhcpguardItems::~DhcpguardItems()
{
}

bool System::SisfItems::DhcpguardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instdhcpguard_list.len(); index++)
    {
        if(instdhcpguard_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::DhcpguardItems::has_operation() const
{
    for (std::size_t index=0; index<instdhcpguard_list.len(); index++)
    {
        if(instdhcpguard_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::DhcpguardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::DhcpguardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcpguard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::DhcpguardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::DhcpguardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstDhcpGuard-list")
    {
        auto c = std::make_shared<System::SisfItems::DhcpguardItems::InstDhcpGuardList>();
        c->parent = this;
        instdhcpguard_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::DhcpguardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instdhcpguard_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::DhcpguardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::DhcpguardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::DhcpguardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstDhcpGuard-list")
        return true;
    return false;
}

System::SisfItems::DhcpguardItems::InstDhcpGuardList::InstDhcpGuardList()
    :
    policyname{YType::str, "policyName"},
    devicerole{YType::enumeration, "deviceRole"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    preferencemax{YType::uint16, "preferenceMax"},
    preferencemin{YType::uint16, "preferenceMin"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstDhcpGuard-list"; yang_parent_name = "dhcpguard-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::DhcpguardItems::InstDhcpGuardList::~InstDhcpGuardList()
{
}

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| devicerole.is_set
	|| trustedportenabled.is_set
	|| preferencemax.is_set
	|| preferencemin.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(preferencemax.yfilter)
	|| ydk::is_set(preferencemin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/dhcpguard-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstDhcpGuard-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (preferencemax.is_set || is_set(preferencemax.yfilter)) leaf_name_data.push_back(preferencemax.get_name_leafdata());
    if (preferencemin.is_set || is_set(preferencemin.yfilter)) leaf_name_data.push_back(preferencemin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::DhcpguardItems::InstDhcpGuardList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::DhcpguardItems::InstDhcpGuardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferenceMax")
    {
        preferencemax = value;
        preferencemax.value_namespace = name_space;
        preferencemax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferenceMin")
    {
        preferencemin = value;
        preferencemin.value_namespace = name_space;
        preferencemin.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::DhcpguardItems::InstDhcpGuardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "preferenceMax")
    {
        preferencemax.yfilter = yfilter;
    }
    if(value_path == "preferenceMin")
    {
        preferencemin.yfilter = yfilter;
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

bool System::SisfItems::DhcpguardItems::InstDhcpGuardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "deviceRole" || name == "trustedPortEnabled" || name == "preferenceMax" || name == "preferenceMin" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::RaguardItems::RaguardItems()
    :
    instraguard_list(this, {"policyname"})
{

    yang_name = "raguard-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::RaguardItems::~RaguardItems()
{
}

bool System::SisfItems::RaguardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instraguard_list.len(); index++)
    {
        if(instraguard_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::RaguardItems::has_operation() const
{
    for (std::size_t index=0; index<instraguard_list.len(); index++)
    {
        if(instraguard_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::RaguardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::RaguardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raguard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::RaguardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::RaguardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstRaGuard-list")
    {
        auto c = std::make_shared<System::SisfItems::RaguardItems::InstRaGuardList>();
        c->parent = this;
        instraguard_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::RaguardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instraguard_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::RaguardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::RaguardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::RaguardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstRaGuard-list")
        return true;
    return false;
}

System::SisfItems::RaguardItems::InstRaGuardList::InstRaGuardList()
    :
    policyname{YType::str, "policyName"},
    devicerole{YType::enumeration, "deviceRole"},
    trustedportenabled{YType::boolean, "trustedPortEnabled"},
    routerpreferencemaximum{YType::enumeration, "routerPreferenceMaximum"},
    hoplimitmax{YType::uint16, "hopLimitMax"},
    hoplimitmin{YType::uint16, "hopLimitMin"},
    managedconfig{YType::enumeration, "managedConfig"},
    otherconfig{YType::enumeration, "otherConfig"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "InstRaGuard-list"; yang_parent_name = "raguard-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::RaguardItems::InstRaGuardList::~InstRaGuardList()
{
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| devicerole.is_set
	|| trustedportenabled.is_set
	|| routerpreferencemaximum.is_set
	|| hoplimitmax.is_set
	|| hoplimitmin.is_set
	|| managedconfig.is_set
	|| otherconfig.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::SisfItems::RaguardItems::InstRaGuardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(devicerole.yfilter)
	|| ydk::is_set(trustedportenabled.yfilter)
	|| ydk::is_set(routerpreferencemaximum.yfilter)
	|| ydk::is_set(hoplimitmax.yfilter)
	|| ydk::is_set(hoplimitmin.yfilter)
	|| ydk::is_set(managedconfig.yfilter)
	|| ydk::is_set(otherconfig.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/raguard-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::RaguardItems::InstRaGuardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstRaGuard-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::RaguardItems::InstRaGuardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (devicerole.is_set || is_set(devicerole.yfilter)) leaf_name_data.push_back(devicerole.get_name_leafdata());
    if (trustedportenabled.is_set || is_set(trustedportenabled.yfilter)) leaf_name_data.push_back(trustedportenabled.get_name_leafdata());
    if (routerpreferencemaximum.is_set || is_set(routerpreferencemaximum.yfilter)) leaf_name_data.push_back(routerpreferencemaximum.get_name_leafdata());
    if (hoplimitmax.is_set || is_set(hoplimitmax.yfilter)) leaf_name_data.push_back(hoplimitmax.get_name_leafdata());
    if (hoplimitmin.is_set || is_set(hoplimitmin.yfilter)) leaf_name_data.push_back(hoplimitmin.get_name_leafdata());
    if (managedconfig.is_set || is_set(managedconfig.yfilter)) leaf_name_data.push_back(managedconfig.get_name_leafdata());
    if (otherconfig.is_set || is_set(otherconfig.yfilter)) leaf_name_data.push_back(otherconfig.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::RaguardItems::InstRaGuardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::RaguardItems::InstRaGuardList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::RaguardItems::InstRaGuardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deviceRole")
    {
        devicerole = value;
        devicerole.value_namespace = name_space;
        devicerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled = value;
        trustedportenabled.value_namespace = name_space;
        trustedportenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum = value;
        routerpreferencemaximum.value_namespace = name_space;
        routerpreferencemaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax = value;
        hoplimitmax.value_namespace = name_space;
        hoplimitmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin = value;
        hoplimitmin.value_namespace = name_space;
        hoplimitmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managedConfig")
    {
        managedconfig = value;
        managedconfig.value_namespace = name_space;
        managedconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherConfig")
    {
        otherconfig = value;
        otherconfig.value_namespace = name_space;
        otherconfig.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::RaguardItems::InstRaGuardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "deviceRole")
    {
        devicerole.yfilter = yfilter;
    }
    if(value_path == "trustedPortEnabled")
    {
        trustedportenabled.yfilter = yfilter;
    }
    if(value_path == "routerPreferenceMaximum")
    {
        routerpreferencemaximum.yfilter = yfilter;
    }
    if(value_path == "hopLimitMax")
    {
        hoplimitmax.yfilter = yfilter;
    }
    if(value_path == "hopLimitMin")
    {
        hoplimitmin.yfilter = yfilter;
    }
    if(value_path == "managedConfig")
    {
        managedconfig.yfilter = yfilter;
    }
    if(value_path == "otherConfig")
    {
        otherconfig.yfilter = yfilter;
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

bool System::SisfItems::RaguardItems::InstRaGuardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "deviceRole" || name == "trustedPortEnabled" || name == "routerPreferenceMaximum" || name == "hopLimitMax" || name == "hopLimitMin" || name == "managedConfig" || name == "otherConfig" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsifItems()
    :
    fhsif_list(this, {"id"})
{

    yang_name = "fhsif-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::~FhsifItems()
{
}

bool System::SisfItems::FhsifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::has_operation() const
{
    for (std::size_t index=0; index<fhsif_list.len(); index++)
    {
        if(fhsif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsIf-list")
    {
        auto c = std::make_shared<System::SisfItems::FhsifItems::FhsIfList>();
        c->parent = this;
        fhsif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fhsif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::FhsifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::FhsIfList()
    :
    id{YType::str, "id"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "FhsIf-list"; yang_parent_name = "fhsif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsifItems::FhsIfList::~FhsIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::SisfItems::FhsifItems::FhsIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsifItems::FhsIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsifItems::FhsIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsifItems::FhsIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::SisfItems::FhsifItems::FhsIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
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

void System::SisfItems::FhsifItems::FhsIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
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

bool System::SisfItems::FhsifItems::FhsIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "FhsIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsvlanItems()
    :
    fhsvlan_list(this, {"vlanid"})
{

    yang_name = "fhsvlan-items"; yang_parent_name = "sisf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::~FhsvlanItems()
{
}

bool System::SisfItems::FhsvlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SisfItems::FhsvlanItems::has_operation() const
{
    for (std::size_t index=0; index<fhsvlan_list.len(); index++)
    {
        if(fhsvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SisfItems::FhsvlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhsvlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FhsVlan-list")
    {
        auto c = std::make_shared<System::SisfItems::FhsvlanItems::FhsVlanList>();
        c->parent = this;
        fhsvlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fhsvlan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SisfItems::FhsvlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SisfItems::FhsvlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SisfItems::FhsvlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FhsVlan-list")
        return true;
    return false;
}

System::SisfItems::FhsvlanItems::FhsVlanList::FhsVlanList()
    :
    vlanid{YType::uint16, "vlanID"},
    snoopingpolicyname{YType::str, "snoopingPolicyName"},
    dhcpguardpolicyname{YType::str, "dhcpGuardPolicyName"},
    raguardpolicyname{YType::str, "raGuardPolicyName"},
    deleted{YType::boolean, "deleted"}
{

    yang_name = "FhsVlan-list"; yang_parent_name = "fhsvlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SisfItems::FhsvlanItems::FhsVlanList::~FhsVlanList()
{
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| snoopingpolicyname.is_set
	|| dhcpguardpolicyname.is_set
	|| raguardpolicyname.is_set
	|| deleted.is_set;
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(snoopingpolicyname.yfilter)
	|| ydk::is_set(dhcpguardpolicyname.yfilter)
	|| ydk::is_set(raguardpolicyname.yfilter)
	|| ydk::is_set(deleted.yfilter);
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sisf-items/fhsvlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SisfItems::FhsvlanItems::FhsVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FhsVlan-list";
    ADD_KEY_TOKEN(vlanid, "vlanID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SisfItems::FhsvlanItems::FhsVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (snoopingpolicyname.is_set || is_set(snoopingpolicyname.yfilter)) leaf_name_data.push_back(snoopingpolicyname.get_name_leafdata());
    if (dhcpguardpolicyname.is_set || is_set(dhcpguardpolicyname.yfilter)) leaf_name_data.push_back(dhcpguardpolicyname.get_name_leafdata());
    if (raguardpolicyname.is_set || is_set(raguardpolicyname.yfilter)) leaf_name_data.push_back(raguardpolicyname.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SisfItems::FhsvlanItems::FhsVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SisfItems::FhsvlanItems::FhsVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanID")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname = value;
        snoopingpolicyname.value_namespace = name_space;
        snoopingpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname = value;
        dhcpguardpolicyname.value_namespace = name_space;
        dhcpguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname = value;
        raguardpolicyname.value_namespace = name_space;
        raguardpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleted")
    {
        deleted = value;
        deleted.value_namespace = name_space;
        deleted.value_namespace_prefix = name_space_prefix;
    }
}

void System::SisfItems::FhsvlanItems::FhsVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanID")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "snoopingPolicyName")
    {
        snoopingpolicyname.yfilter = yfilter;
    }
    if(value_path == "dhcpGuardPolicyName")
    {
        dhcpguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "raGuardPolicyName")
    {
        raguardpolicyname.yfilter = yfilter;
    }
    if(value_path == "deleted")
    {
        deleted.yfilter = yfilter;
    }
}

bool System::SisfItems::FhsvlanItems::FhsVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanID" || name == "snoopingPolicyName" || name == "dhcpGuardPolicyName" || name == "raGuardPolicyName" || name == "deleted")
        return true;
    return false;
}

System::StsItems::StsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::StsItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "sts-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::~StsItems()
{
}

bool System::StsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::StsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::StsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::StsItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::StsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::StsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::StsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::StsItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    chain_items(std::make_shared<System::StsItems::InstItems::ChainItems>())
    , node_items(std::make_shared<System::StsItems::InstItems::NodeItems>())
{
    chain_items->parent = this;
    node_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "sts-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::InstItems::~InstItems()
{
}

bool System::StsItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (chain_items !=  nullptr && chain_items->has_data())
	|| (node_items !=  nullptr && node_items->has_data());
}

bool System::StsItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (chain_items !=  nullptr && chain_items->has_operation())
	|| (node_items !=  nullptr && node_items->has_operation());
}

std::string System::StsItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sts-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain-items")
    {
        if(chain_items == nullptr)
        {
            chain_items = std::make_shared<System::StsItems::InstItems::ChainItems>();
        }
        return chain_items;
    }

    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::StsItems::InstItems::NodeItems>();
        }
        return node_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chain_items != nullptr)
    {
        children["chain-items"] = chain_items;
    }

    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    return children;
}

void System::StsItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::StsItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::StsItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain-items" || name == "node-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainItems()
    :
    chain_list(this, {"id"})
{

    yang_name = "chain-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::InstItems::ChainItems::~ChainItems()
{
}

bool System::StsItems::InstItems::ChainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chain_list.len(); index++)
    {
        if(chain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::has_operation() const
{
    for (std::size_t index=0; index<chain_list.len(); index++)
    {
        if(chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sts-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::InstItems::ChainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Chain-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList>();
        c->parent = this;
        chain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Chain-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::ChainList()
    :
    id{YType::uint32, "id"}
        ,
    stage_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems>())
{
    stage_items->parent = this;

    yang_name = "Chain-list"; yang_parent_name = "chain-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::InstItems::ChainItems::ChainList::~ChainList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (stage_items !=  nullptr && stage_items->has_data());
}

bool System::StsItems::InstItems::ChainItems::ChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (stage_items !=  nullptr && stage_items->has_operation());
}

std::string System::StsItems::InstItems::ChainItems::ChainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sts-items/inst-items/chain-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::InstItems::ChainItems::ChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Chain-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stage-items")
    {
        if(stage_items == nullptr)
        {
            stage_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems>();
        }
        return stage_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stage_items != nullptr)
    {
        children["stage-items"] = stage_items;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage-items" || name == "id")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageItems()
    :
    stage_list(this, {"id"})
{

    yang_name = "stage-items"; yang_parent_name = "Chain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::~StageItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stage_list.len(); index++)
    {
        if(stage_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::has_operation() const
{
    for (std::size_t index=0; index<stage_list.len(); index++)
    {
        if(stage_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stage-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList>();
        c->parent = this;
        stage_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stage_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stage-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::StageList()
    :
    id{YType::uint16, "id"},
    ctrl{YType::str, "ctrl"}
        ,
    vnode_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems>())
{
    vnode_items->parent = this;

    yang_name = "Stage-list"; yang_parent_name = "stage-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::~StageList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| (vnode_items !=  nullptr && vnode_items->has_data());
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (vnode_items !=  nullptr && vnode_items->has_operation());
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stage-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems>();
        }
        return vnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vnode_items != nullptr)
    {
        children["vnode-items"] = vnode_items;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnode-items" || name == "id" || name == "ctrl")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"id"})
{

    yang_name = "vnode-items"; yang_parent_name = "Stage-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::~VnodeItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList>();
        c->parent = this;
        vnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::VNodeList()
    :
    id{YType::uint16, "id"},
    ctrl{YType::str, "ctrl"},
    order{YType::uint16, "order"},
    weight{YType::uint8, "weight"},
    vrf{YType::str, "vrf"},
    vrfencap{YType::str, "vrfEncap"},
    ip{YType::str, "ip"},
    rwmac{YType::str, "rwMac"},
    nwreachst{YType::enumeration, "nwReachSt"}
        ,
    extin_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems>())
    , extout_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems>())
    , fabin_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems>())
    , fabinrev_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems>())
    , fabout_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems>())
    , faboutrev_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems>())
    , rsnodeatt_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems>())
{
    extin_items->parent = this;
    extout_items->parent = this;
    fabin_items->parent = this;
    fabinrev_items->parent = this;
    fabout_items->parent = this;
    faboutrev_items->parent = this;
    rsnodeatt_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| order.is_set
	|| weight.is_set
	|| vrf.is_set
	|| vrfencap.is_set
	|| ip.is_set
	|| rwmac.is_set
	|| nwreachst.is_set
	|| (extin_items !=  nullptr && extin_items->has_data())
	|| (extout_items !=  nullptr && extout_items->has_data())
	|| (fabin_items !=  nullptr && fabin_items->has_data())
	|| (fabinrev_items !=  nullptr && fabinrev_items->has_data())
	|| (fabout_items !=  nullptr && fabout_items->has_data())
	|| (faboutrev_items !=  nullptr && faboutrev_items->has_data())
	|| (rsnodeatt_items !=  nullptr && rsnodeatt_items->has_data());
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrfencap.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(rwmac.yfilter)
	|| ydk::is_set(nwreachst.yfilter)
	|| (extin_items !=  nullptr && extin_items->has_operation())
	|| (extout_items !=  nullptr && extout_items->has_operation())
	|| (fabin_items !=  nullptr && fabin_items->has_operation())
	|| (fabinrev_items !=  nullptr && fabinrev_items->has_operation())
	|| (fabout_items !=  nullptr && fabout_items->has_operation())
	|| (faboutrev_items !=  nullptr && faboutrev_items->has_operation())
	|| (rsnodeatt_items !=  nullptr && rsnodeatt_items->has_operation());
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrfencap.is_set || is_set(vrfencap.yfilter)) leaf_name_data.push_back(vrfencap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (rwmac.is_set || is_set(rwmac.yfilter)) leaf_name_data.push_back(rwmac.get_name_leafdata());
    if (nwreachst.is_set || is_set(nwreachst.yfilter)) leaf_name_data.push_back(nwreachst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extin-items")
    {
        if(extin_items == nullptr)
        {
            extin_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems>();
        }
        return extin_items;
    }

    if(child_yang_name == "extout-items")
    {
        if(extout_items == nullptr)
        {
            extout_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems>();
        }
        return extout_items;
    }

    if(child_yang_name == "fabin-items")
    {
        if(fabin_items == nullptr)
        {
            fabin_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems>();
        }
        return fabin_items;
    }

    if(child_yang_name == "fabinrev-items")
    {
        if(fabinrev_items == nullptr)
        {
            fabinrev_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems>();
        }
        return fabinrev_items;
    }

    if(child_yang_name == "fabout-items")
    {
        if(fabout_items == nullptr)
        {
            fabout_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems>();
        }
        return fabout_items;
    }

    if(child_yang_name == "faboutrev-items")
    {
        if(faboutrev_items == nullptr)
        {
            faboutrev_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems>();
        }
        return faboutrev_items;
    }

    if(child_yang_name == "rsnodeAtt-items")
    {
        if(rsnodeatt_items == nullptr)
        {
            rsnodeatt_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems>();
        }
        return rsnodeatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extin_items != nullptr)
    {
        children["extin-items"] = extin_items;
    }

    if(extout_items != nullptr)
    {
        children["extout-items"] = extout_items;
    }

    if(fabin_items != nullptr)
    {
        children["fabin-items"] = fabin_items;
    }

    if(fabinrev_items != nullptr)
    {
        children["fabinrev-items"] = fabinrev_items;
    }

    if(fabout_items != nullptr)
    {
        children["fabout-items"] = fabout_items;
    }

    if(faboutrev_items != nullptr)
    {
        children["faboutrev-items"] = faboutrev_items;
    }

    if(rsnodeatt_items != nullptr)
    {
        children["rsnodeAtt-items"] = rsnodeatt_items;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap = value;
        vrfencap.value_namespace = name_space;
        vrfencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rwMac")
    {
        rwmac = value;
        rwmac.value_namespace = name_space;
        rwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwReachSt")
    {
        nwreachst = value;
        nwreachst.value_namespace = name_space;
        nwreachst.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "rwMac")
    {
        rwmac.yfilter = yfilter;
    }
    if(value_path == "nwReachSt")
    {
        nwreachst.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extin-items" || name == "extout-items" || name == "fabin-items" || name == "fabinrev-items" || name == "fabout-items" || name == "faboutrev-items" || name == "rsnodeAtt-items" || name == "id" || name == "ctrl" || name == "order" || name == "weight" || name == "vrf" || name == "vrfEncap" || name == "ip" || name == "rwMac" || name == "nwReachSt")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtinItems()
    :
    extin_list(this, {"encap"})
{

    yang_name = "extin-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::~ExtinItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extin_list.len(); index++)
    {
        if(extin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::has_operation() const
{
    for (std::size_t index=0; index<extin_list.len(); index++)
    {
        if(extin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIn-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList>();
        c->parent = this;
        extin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIn-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::ExtInList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"},
    vrf{YType::str, "vrf"},
    vrfencap{YType::str, "vrfEncap"},
    ip{YType::str, "ip"}
{

    yang_name = "ExtIn-list"; yang_parent_name = "extin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::~ExtInList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set
	|| vrf.is_set
	|| vrfencap.is_set
	|| ip.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrfencap.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIn-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrfencap.is_set || is_set(vrfencap.yfilter)) leaf_name_data.push_back(vrfencap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap = value;
        vrfencap.value_namespace = name_space;
        vrfencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name" || name == "ctrl" || name == "id" || name == "vrf" || name == "vrfEncap" || name == "ip")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtoutItems()
    :
    extout_list(this, {"encap"})
{

    yang_name = "extout-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::~ExtoutItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extout_list.len(); index++)
    {
        if(extout_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::has_operation() const
{
    for (std::size_t index=0; index<extout_list.len(); index++)
    {
        if(extout_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtOut-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList>();
        c->parent = this;
        extout_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extout_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtOut-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::ExtOutList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"},
    vrf{YType::str, "vrf"},
    vrfencap{YType::str, "vrfEncap"},
    ip{YType::str, "ip"}
{

    yang_name = "ExtOut-list"; yang_parent_name = "extout-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::~ExtOutList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set
	|| vrf.is_set
	|| vrfencap.is_set
	|| ip.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrfencap.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtOut-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrfencap.is_set || is_set(vrfencap.yfilter)) leaf_name_data.push_back(vrfencap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap = value;
        vrfencap.value_namespace = name_space;
        vrfencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name" || name == "ctrl" || name == "id" || name == "vrf" || name == "vrfEncap" || name == "ip")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabinItems()
    :
    fabin_list(this, {"encap"})
{

    yang_name = "fabin-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::~FabinItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabin_list.len(); index++)
    {
        if(fabin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::has_operation() const
{
    for (std::size_t index=0; index<fabin_list.len(); index++)
    {
        if(fabin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabIn-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList>();
        c->parent = this;
        fabin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabIn-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::FabInList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"}
        ,
    tap_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems>())
{
    tap_items->parent = this;

    yang_name = "FabIn-list"; yang_parent_name = "fabin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::~FabInList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set
	|| (tap_items !=  nullptr && tap_items->has_data());
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (tap_items !=  nullptr && tap_items->has_operation());
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabIn-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tap-items")
    {
        if(tap_items == nullptr)
        {
            tap_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems>();
        }
        return tap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tap_items != nullptr)
    {
        children["tap-items"] = tap_items;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tap-items" || name == "encap" || name == "name" || name == "ctrl" || name == "id")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapItems()
    :
    tap_list(this, {"port", "encap"})
{

    yang_name = "tap-items"; yang_parent_name = "FabIn-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::~TapItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tap_list.len(); index++)
    {
        if(tap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::has_operation() const
{
    for (std::size_t index=0; index<tap_list.len(); index++)
    {
        if(tap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tap-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList>();
        c->parent = this;
        tap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tap-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::TapList()
    :
    port{YType::str, "port"},
    encap{YType::str, "encap"}
{

    yang_name = "Tap-list"; yang_parent_name = "tap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::~TapList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| encap.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(encap.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tap-list";
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "encap")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabinrevItems()
    :
    fabinrev_list(this, {"encap"})
{

    yang_name = "fabinrev-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::~FabinrevItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabinrev_list.len(); index++)
    {
        if(fabinrev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::has_operation() const
{
    for (std::size_t index=0; index<fabinrev_list.len(); index++)
    {
        if(fabinrev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabinrev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabInRev-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList>();
        c->parent = this;
        fabinrev_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabinrev_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabInRev-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::FabInRevList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"}
{

    yang_name = "FabInRev-list"; yang_parent_name = "fabinrev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::~FabInRevList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabInRev-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name" || name == "ctrl" || name == "id")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FaboutItems()
    :
    fabout_list(this, {"encap"})
{

    yang_name = "fabout-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::~FaboutItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabout_list.len(); index++)
    {
        if(fabout_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::has_operation() const
{
    for (std::size_t index=0; index<fabout_list.len(); index++)
    {
        if(fabout_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabOut-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList>();
        c->parent = this;
        fabout_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabout_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabOut-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::FabOutList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"},
    spctag{YType::uint32, "sPcTag"},
    order{YType::uint16, "order"},
    vrf{YType::str, "vrf"},
    vrfencap{YType::str, "vrfEncap"},
    ip{YType::str, "ip"}
        ,
    tap_items(std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems>())
{
    tap_items->parent = this;

    yang_name = "FabOut-list"; yang_parent_name = "fabout-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::~FabOutList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set
	|| spctag.is_set
	|| order.is_set
	|| vrf.is_set
	|| vrfencap.is_set
	|| ip.is_set
	|| (tap_items !=  nullptr && tap_items->has_data());
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrfencap.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (tap_items !=  nullptr && tap_items->has_operation());
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabOut-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrfencap.is_set || is_set(vrfencap.yfilter)) leaf_name_data.push_back(vrfencap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tap-items")
    {
        if(tap_items == nullptr)
        {
            tap_items = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems>();
        }
        return tap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tap_items != nullptr)
    {
        children["tap-items"] = tap_items;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap = value;
        vrfencap.value_namespace = name_space;
        vrfencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tap-items" || name == "encap" || name == "name" || name == "ctrl" || name == "id" || name == "sPcTag" || name == "order" || name == "vrf" || name == "vrfEncap" || name == "ip")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapItems()
    :
    tap_list(this, {"port", "encap"})
{

    yang_name = "tap-items"; yang_parent_name = "FabOut-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::~TapItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tap_list.len(); index++)
    {
        if(tap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::has_operation() const
{
    for (std::size_t index=0; index<tap_list.len(); index++)
    {
        if(tap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tap-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList>();
        c->parent = this;
        tap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tap-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::TapList()
    :
    port{YType::str, "port"},
    encap{YType::str, "encap"}
{

    yang_name = "Tap-list"; yang_parent_name = "tap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::~TapList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| encap.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(encap.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tap-list";
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "encap")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FaboutrevItems()
    :
    faboutrev_list(this, {"encap"})
{

    yang_name = "faboutrev-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::~FaboutrevItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<faboutrev_list.len(); index++)
    {
        if(faboutrev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::has_operation() const
{
    for (std::size_t index=0; index<faboutrev_list.len(); index++)
    {
        if(faboutrev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "faboutrev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabOutRev-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList>();
        c->parent = this;
        faboutrev_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : faboutrev_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabOutRev-list")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::FabOutRevList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    id{YType::uint32, "id"},
    spctag{YType::uint32, "sPcTag"},
    order{YType::uint16, "order"},
    vrf{YType::str, "vrf"},
    vrfencap{YType::str, "vrfEncap"},
    ip{YType::str, "ip"}
{

    yang_name = "FabOutRev-list"; yang_parent_name = "faboutrev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::~FabOutRevList()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| ctrl.is_set
	|| id.is_set
	|| spctag.is_set
	|| order.is_set
	|| vrf.is_set
	|| vrfencap.is_set
	|| ip.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrfencap.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabOutRev-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrfencap.is_set || is_set(vrfencap.yfilter)) leaf_name_data.push_back(vrfencap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap = value;
        vrfencap.value_namespace = name_space;
        vrfencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrfEncap")
    {
        vrfencap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encap" || name == "name" || name == "ctrl" || name == "id" || name == "sPcTag" || name == "order" || name == "vrf" || name == "vrfEncap" || name == "ip")
        return true;
    return false;
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::RsnodeAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsnodeAtt-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::~RsnodeAttItems()
{
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsnodeAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::StsItems::InstItems::NodeItems::NodeItems()
    :
    node_list(this, {"id"})
{

    yang_name = "node-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::InstItems::NodeItems::~NodeItems()
{
}

bool System::StsItems::InstItems::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StsItems::InstItems::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StsItems::InstItems::NodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sts-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::InstItems::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Node-list")
    {
        auto c = std::make_shared<System::StsItems::InstItems::NodeItems::NodeList>();
        c->parent = this;
        node_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : node_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StsItems::InstItems::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StsItems::InstItems::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StsItems::InstItems::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Node-list")
        return true;
    return false;
}

System::StsItems::InstItems::NodeItems::NodeList::NodeList()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    vrf{YType::str, "vrf"},
    tepdst{YType::str, "tepDst"}
{

    yang_name = "Node-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StsItems::InstItems::NodeItems::NodeList::~NodeList()
{
}

bool System::StsItems::InstItems::NodeItems::NodeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| vrf.is_set
	|| tepdst.is_set;
}

bool System::StsItems::InstItems::NodeItems::NodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(tepdst.yfilter);
}

std::string System::StsItems::InstItems::NodeItems::NodeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sts-items/inst-items/node-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StsItems::InstItems::NodeItems::NodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Node-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StsItems::InstItems::NodeItems::NodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (tepdst.is_set || is_set(tepdst.yfilter)) leaf_name_data.push_back(tepdst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StsItems::InstItems::NodeItems::NodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StsItems::InstItems::NodeItems::NodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StsItems::InstItems::NodeItems::NodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tepDst")
    {
        tepdst = value;
        tepdst.value_namespace = name_space;
        tepdst.value_namespace_prefix = name_space_prefix;
    }
}

void System::StsItems::InstItems::NodeItems::NodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "tepDst")
    {
        tepdst.yfilter = yfilter;
    }
}

bool System::StsItems::InstItems::NodeItems::NodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctrl" || name == "vrf" || name == "tepDst")
        return true;
    return false;
}

System::TmItems::TmItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    certificate_items(std::make_shared<System::TmItems::CertificateItems>())
    , destprof_items(std::make_shared<System::TmItems::DestprofItems>())
    , sensor_items(std::make_shared<System::TmItems::SensorItems>())
    , dest_items(std::make_shared<System::TmItems::DestItems>())
    , subs_items(std::make_shared<System::TmItems::SubsItems>())
{
    certificate_items->parent = this;
    destprof_items->parent = this;
    sensor_items->parent = this;
    dest_items->parent = this;
    subs_items->parent = this;

    yang_name = "tm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::~TmItems()
{
}

bool System::TmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (certificate_items !=  nullptr && certificate_items->has_data())
	|| (destprof_items !=  nullptr && destprof_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (dest_items !=  nullptr && dest_items->has_data())
	|| (subs_items !=  nullptr && subs_items->has_data());
}

bool System::TmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (certificate_items !=  nullptr && certificate_items->has_operation())
	|| (destprof_items !=  nullptr && destprof_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (dest_items !=  nullptr && dest_items->has_operation())
	|| (subs_items !=  nullptr && subs_items->has_operation());
}

std::string System::TmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-items")
    {
        if(certificate_items == nullptr)
        {
            certificate_items = std::make_shared<System::TmItems::CertificateItems>();
        }
        return certificate_items;
    }

    if(child_yang_name == "destprof-items")
    {
        if(destprof_items == nullptr)
        {
            destprof_items = std::make_shared<System::TmItems::DestprofItems>();
        }
        return destprof_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::TmItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "dest-items")
    {
        if(dest_items == nullptr)
        {
            dest_items = std::make_shared<System::TmItems::DestItems>();
        }
        return dest_items;
    }

    if(child_yang_name == "subs-items")
    {
        if(subs_items == nullptr)
        {
            subs_items = std::make_shared<System::TmItems::SubsItems>();
        }
        return subs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(certificate_items != nullptr)
    {
        children["certificate-items"] = certificate_items;
    }

    if(destprof_items != nullptr)
    {
        children["destprof-items"] = destprof_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(dest_items != nullptr)
    {
        children["dest-items"] = dest_items;
    }

    if(subs_items != nullptr)
    {
        children["subs-items"] = subs_items;
    }

    return children;
}

void System::TmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-items" || name == "destprof-items" || name == "sensor-items" || name == "dest-items" || name == "subs-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::CertificateItems::CertificateItems()
    :
    filename{YType::str, "filename"},
    hostname{YType::str, "hostname"}
{

    yang_name = "certificate-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::CertificateItems::~CertificateItems()
{
}

bool System::TmItems::CertificateItems::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set
	|| hostname.is_set;
}

bool System::TmItems::CertificateItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string System::TmItems::CertificateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::CertificateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::CertificateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::CertificateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::CertificateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::CertificateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::CertificateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool System::TmItems::CertificateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename" || name == "hostname")
        return true;
    return false;
}

System::TmItems::DestprofItems::DestprofItems()
    :
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::TmItems::DestprofItems::VrfItems>())
    , compression_items(std::make_shared<System::TmItems::DestprofItems::CompressionItems>())
    , sourceinterface_items(std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>())
{
    vrf_items->parent = this;
    compression_items->parent = this;
    sourceinterface_items->parent = this;

    yang_name = "destprof-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::~DestprofItems()
{
}

bool System::TmItems::DestprofItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (compression_items !=  nullptr && compression_items->has_data())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_data());
}

bool System::TmItems::DestprofItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (compression_items !=  nullptr && compression_items->has_operation())
	|| (sourceinterface_items !=  nullptr && sourceinterface_items->has_operation());
}

std::string System::TmItems::DestprofItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destprof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestprofItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::TmItems::DestprofItems::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "compression-items")
    {
        if(compression_items == nullptr)
        {
            compression_items = std::make_shared<System::TmItems::DestprofItems::CompressionItems>();
        }
        return compression_items;
    }

    if(child_yang_name == "sourceinterface-items")
    {
        if(sourceinterface_items == nullptr)
        {
            sourceinterface_items = std::make_shared<System::TmItems::DestprofItems::SourceinterfaceItems>();
        }
        return sourceinterface_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestprofItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    if(compression_items != nullptr)
    {
        children["compression-items"] = compression_items;
    }

    if(sourceinterface_items != nullptr)
    {
        children["sourceinterface-items"] = sourceinterface_items;
    }

    return children;
}

void System::TmItems::DestprofItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "compression-items" || name == "sourceinterface-items" || name == "adminSt")
        return true;
    return false;
}

System::TmItems::DestprofItems::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::VrfItems::~VrfItems()
{
}

bool System::TmItems::DestprofItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestprofItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestprofItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::DestprofItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::CompressionItems::CompressionItems()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "compression-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::CompressionItems::~CompressionItems()
{
}

bool System::TmItems::DestprofItems::CompressionItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::CompressionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::CompressionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::CompressionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::CompressionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestprofItems::CompressionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestprofItems::CompressionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::DestprofItems::CompressionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::CompressionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::CompressionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::DestprofItems::SourceinterfaceItems::SourceinterfaceItems()
    :
    name{YType::str, "name"}
{

    yang_name = "sourceinterface-items"; yang_parent_name = "destprof-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestprofItems::SourceinterfaceItems::~SourceinterfaceItems()
{
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/destprof-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestprofItems::SourceinterfaceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourceinterface-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestprofItems::SourceinterfaceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestprofItems::SourceinterfaceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestprofItems::SourceinterfaceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestprofItems::SourceinterfaceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TmItems::DestprofItems::SourceinterfaceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorItems()
    :
    sensorgroup_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::~SensorItems()
{
}

bool System::TmItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensorgroup_list.len(); index++)
    {
        if(sensorgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorGroup-list")
    {
        auto c = std::make_shared<System::TmItems::SensorItems::SensorGroupList>();
        c->parent = this;
        sensorgroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensorgroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorGroup-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::SensorGroupList()
    :
    id{YType::str, "id"},
    datasrc{YType::enumeration, "dataSrc"}
        ,
    path_items(std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>())
{
    path_items->parent = this;

    yang_name = "SensorGroup-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SensorItems::SensorGroupList::~SensorGroupList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| datasrc.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::TmItems::SensorItems::SensorGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(datasrc.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::TmItems::SensorItems::SensorGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/sensor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SensorItems::SensorGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (datasrc.is_set || is_set(datasrc.yfilter)) leaf_name_data.push_back(datasrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::SensorGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::SensorGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_items != nullptr)
    {
        children["path-items"] = path_items;
    }

    return children;
}

void System::TmItems::SensorItems::SensorGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataSrc")
    {
        datasrc = value;
        datasrc.value_namespace = name_space;
        datasrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dataSrc")
    {
        datasrc.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id" || name == "dataSrc")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::PathItems()
    :
    sensorpath_list(this, {"path"})
{

    yang_name = "path-items"; yang_parent_name = "SensorGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::~PathItems()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<sensorpath_list.len(); index++)
    {
        if(sensorpath_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SensorPath-list")
    {
        auto c = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList>();
        c->parent = this;
        sensorpath_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensorpath_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SensorPath-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::SensorPathList()
    :
    path{YType::str, "path"},
    querycondition{YType::str, "queryCondition"},
    filtercondition{YType::str, "filterCondition"},
    excludefilter{YType::str, "excludeFilter"},
    secondarypath{YType::str, "secondaryPath"},
    secondarygroup{YType::uint64, "secondaryGroup"},
    depth{YType::uint32, "depth"}
        ,
    include_items(std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems>())
{
    include_items->parent = this;

    yang_name = "SensorPath-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::~SensorPathList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| querycondition.is_set
	|| filtercondition.is_set
	|| excludefilter.is_set
	|| secondarypath.is_set
	|| secondarygroup.is_set
	|| depth.is_set
	|| (include_items !=  nullptr && include_items->has_data());
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(querycondition.yfilter)
	|| ydk::is_set(filtercondition.yfilter)
	|| ydk::is_set(excludefilter.yfilter)
	|| ydk::is_set(secondarypath.yfilter)
	|| ydk::is_set(secondarygroup.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| (include_items !=  nullptr && include_items->has_operation());
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SensorPath-list";
    ADD_KEY_TOKEN(path, "path");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (querycondition.is_set || is_set(querycondition.yfilter)) leaf_name_data.push_back(querycondition.get_name_leafdata());
    if (filtercondition.is_set || is_set(filtercondition.yfilter)) leaf_name_data.push_back(filtercondition.get_name_leafdata());
    if (excludefilter.is_set || is_set(excludefilter.yfilter)) leaf_name_data.push_back(excludefilter.get_name_leafdata());
    if (secondarypath.is_set || is_set(secondarypath.yfilter)) leaf_name_data.push_back(secondarypath.get_name_leafdata());
    if (secondarygroup.is_set || is_set(secondarygroup.yfilter)) leaf_name_data.push_back(secondarygroup.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-items")
    {
        if(include_items == nullptr)
        {
            include_items = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems>();
        }
        return include_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(include_items != nullptr)
    {
        children["include-items"] = include_items;
    }

    return children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryCondition")
    {
        querycondition = value;
        querycondition.value_namespace = name_space;
        querycondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterCondition")
    {
        filtercondition = value;
        filtercondition.value_namespace = name_space;
        filtercondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excludeFilter")
    {
        excludefilter = value;
        excludefilter.value_namespace = name_space;
        excludefilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryPath")
    {
        secondarypath = value;
        secondarypath.value_namespace = name_space;
        secondarypath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryGroup")
    {
        secondarygroup = value;
        secondarygroup.value_namespace = name_space;
        secondarygroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "queryCondition")
    {
        querycondition.yfilter = yfilter;
    }
    if(value_path == "filterCondition")
    {
        filtercondition.yfilter = yfilter;
    }
    if(value_path == "excludeFilter")
    {
        excludefilter.yfilter = yfilter;
    }
    if(value_path == "secondaryPath")
    {
        secondarypath.yfilter = yfilter;
    }
    if(value_path == "secondaryGroup")
    {
        secondarygroup.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-items" || name == "path" || name == "queryCondition" || name == "filterCondition" || name == "excludeFilter" || name == "secondaryPath" || name == "secondaryGroup" || name == "depth")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeItems()
    :
    includefilter_list(this, {"filter"})
{

    yang_name = "include-items"; yang_parent_name = "SensorPath-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::~IncludeItems()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<includefilter_list.len(); index++)
    {
        if(includefilter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_operation() const
{
    for (std::size_t index=0; index<includefilter_list.len(); index++)
    {
        if(includefilter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IncludeFilter-list")
    {
        auto c = std::make_shared<System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList>();
        c->parent = this;
        includefilter_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : includefilter_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IncludeFilter-list")
        return true;
    return false;
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::IncludeFilterList()
    :
    filter{YType::str, "filter"}
{

    yang_name = "IncludeFilter-list"; yang_parent_name = "include-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::~IncludeFilterList()
{
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_data() const
{
    if (is_presence_container) return true;
    return filter.is_set;
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter);
}

std::string System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IncludeFilter-list";
    ADD_KEY_TOKEN(filter, "filter");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

System::TmItems::DestItems::DestItems()
    :
    destgroup_list(this, {"id"})
{

    yang_name = "dest-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::~DestItems()
{
}

bool System::TmItems::DestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::has_operation() const
{
    for (std::size_t index=0; index<destgroup_list.len(); index++)
    {
        if(destgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DestGroup-list")
    {
        auto c = std::make_shared<System::TmItems::DestItems::DestGroupList>();
        c->parent = this;
        destgroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : destgroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::DestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DestGroup-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::DestGroupList()
    :
    id{YType::str, "id"}
        ,
    addr_items(std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "DestGroup-list"; yang_parent_name = "dest-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::DestItems::DestGroupList::~DestGroupList()
{
}

bool System::TmItems::DestItems::DestGroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::TmItems::DestItems::DestGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::TmItems::DestItems::DestGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/dest-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::DestItems::DestGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DestGroup-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestItems::DestGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestItems::DestGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    return children;
}

void System::TmItems::DestItems::DestGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "id")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::AddrItems()
    :
    dest_list(this, {"addr", "port"})
{

    yang_name = "addr-items"; yang_parent_name = "DestGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::~AddrItems()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<dest_list.len(); index++)
    {
        if(dest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestItems::DestGroupList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dest-list")
    {
        auto c = std::make_shared<System::TmItems::DestItems::DestGroupList::AddrItems::DestList>();
        c->parent = this;
        dest_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dest_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::DestItems::DestGroupList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dest-list")
        return true;
    return false;
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::DestList()
    :
    addr{YType::str, "addr"},
    port{YType::uint16, "port"},
    proto{YType::enumeration, "proto"},
    enc{YType::enumeration, "enc"}
{

    yang_name = "Dest-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::DestItems::DestGroupList::AddrItems::DestList::~DestList()
{
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| port.is_set
	|| proto.is_set
	|| enc.is_set;
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(enc.yfilter);
}

std::string System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dest-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::DestItems::DestGroupList::AddrItems::DestList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::DestItems::DestGroupList::AddrItems::DestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
}

bool System::TmItems::DestItems::DestGroupList::AddrItems::DestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "port" || name == "proto" || name == "enc")
        return true;
    return false;
}

System::TmItems::SubsItems::SubsItems()
    :
    subscription_list(this, {"id"})
{

    yang_name = "subs-items"; yang_parent_name = "tm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::~SubsItems()
{
}

bool System::TmItems::SubsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::has_operation() const
{
    for (std::size_t index=0; index<subscription_list.len(); index++)
    {
        if(subscription_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Subscription-list")
    {
        auto c = std::make_shared<System::TmItems::SubsItems::SubscriptionList>();
        c->parent = this;
        subscription_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : subscription_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SubsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Subscription-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::SubscriptionList()
    :
    id{YType::uint64, "id"}
        ,
    rssensorgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>())
    , rsdestgrouprel_items(std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>())
{
    rssensorgrouprel_items->parent = this;
    rsdestgrouprel_items->parent = this;

    yang_name = "Subscription-list"; yang_parent_name = "subs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TmItems::SubsItems::SubscriptionList::~SubscriptionList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_data())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_data());
}

bool System::TmItems::SubsItems::SubscriptionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rssensorgrouprel_items !=  nullptr && rssensorgrouprel_items->has_operation())
	|| (rsdestgrouprel_items !=  nullptr && rsdestgrouprel_items->has_operation());
}

std::string System::TmItems::SubsItems::SubscriptionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tm-items/subs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TmItems::SubsItems::SubscriptionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Subscription-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::SubscriptionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssensorGroupRel-items")
    {
        if(rssensorgrouprel_items == nullptr)
        {
            rssensorgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems>();
        }
        return rssensorgrouprel_items;
    }

    if(child_yang_name == "rsdestGroupRel-items")
    {
        if(rsdestgrouprel_items == nullptr)
        {
            rsdestgrouprel_items = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems>();
        }
        return rsdestgrouprel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::SubscriptionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rssensorgrouprel_items != nullptr)
    {
        children["rssensorGroupRel-items"] = rssensorgrouprel_items;
    }

    if(rsdestgrouprel_items != nullptr)
    {
        children["rsdestGroupRel-items"] = rsdestgrouprel_items;
    }

    return children;
}

void System::TmItems::SubsItems::SubscriptionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssensorGroupRel-items" || name == "rsdestGroupRel-items" || name == "id")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RssensorGroupRelItems()
    :
    rssensorgrouprel_list(this, {"tdn"})
{

    yang_name = "rssensorGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::~RssensorGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rssensorgrouprel_list.len(); index++)
    {
        if(rssensorgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssensorGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSensorGroupRel-list")
    {
        auto c = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList>();
        c->parent = this;
        rssensorgrouprel_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rssensorgrouprel_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSensorGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::RsSensorGroupRelList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    sampleintvl{YType::uint64, "sampleIntvl"}
{

    yang_name = "RsSensorGroupRel-list"; yang_parent_name = "rssensorGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::~RsSensorGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| sampleintvl.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(sampleintvl.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSensorGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (sampleintvl.is_set || is_set(sampleintvl.yfilter)) leaf_name_data.push_back(sampleintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sampleIntvl")
    {
        sampleintvl = value;
        sampleintvl.value_namespace = name_space;
        sampleintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "sampleIntvl")
    {
        sampleintvl.yfilter = yfilter;
    }
}

bool System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "sampleIntvl")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsdestGroupRelItems()
    :
    rsdestgrouprel_list(this, {"tdn"})
{

    yang_name = "rsdestGroupRel-items"; yang_parent_name = "Subscription-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::~RsdestGroupRelItems()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_operation() const
{
    for (std::size_t index=0; index<rsdestgrouprel_list.len(); index++)
    {
        if(rsdestgrouprel_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdestGroupRel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsDestGroupRel-list")
    {
        auto c = std::make_shared<System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList>();
        c->parent = this;
        rsdestgrouprel_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsdestgrouprel_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsDestGroupRel-list")
        return true;
    return false;
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::RsDestGroupRelList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsDestGroupRel-list"; yang_parent_name = "rsdestGroupRel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::~RsDestGroupRelList()
{
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsDestGroupRel-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TopoctrlItems::TopoctrlItems()
    :
    name{YType::str, "name"}
        ,
    lbp_items(std::make_shared<System::TopoctrlItems::LbpItems>())
    , shrdnp_items(std::make_shared<System::TopoctrlItems::ShrdnpItems>())
    , virtdom_items(std::make_shared<System::TopoctrlItems::VirtdomItems>())
    , vxlanp_items(std::make_shared<System::TopoctrlItems::VxlanpItems>())
{
    lbp_items->parent = this;
    shrdnp_items->parent = this;
    virtdom_items->parent = this;
    vxlanp_items->parent = this;

    yang_name = "topoctrl-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::~TopoctrlItems()
{
}

bool System::TopoctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (lbp_items !=  nullptr && lbp_items->has_data())
	|| (shrdnp_items !=  nullptr && shrdnp_items->has_data())
	|| (virtdom_items !=  nullptr && virtdom_items->has_data())
	|| (vxlanp_items !=  nullptr && vxlanp_items->has_data());
}

bool System::TopoctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lbp_items !=  nullptr && lbp_items->has_operation())
	|| (shrdnp_items !=  nullptr && shrdnp_items->has_operation())
	|| (virtdom_items !=  nullptr && virtdom_items->has_operation())
	|| (vxlanp_items !=  nullptr && vxlanp_items->has_operation());
}

std::string System::TopoctrlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topoctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbp-items")
    {
        if(lbp_items == nullptr)
        {
            lbp_items = std::make_shared<System::TopoctrlItems::LbpItems>();
        }
        return lbp_items;
    }

    if(child_yang_name == "shrdnp-items")
    {
        if(shrdnp_items == nullptr)
        {
            shrdnp_items = std::make_shared<System::TopoctrlItems::ShrdnpItems>();
        }
        return shrdnp_items;
    }

    if(child_yang_name == "virtdom-items")
    {
        if(virtdom_items == nullptr)
        {
            virtdom_items = std::make_shared<System::TopoctrlItems::VirtdomItems>();
        }
        return virtdom_items;
    }

    if(child_yang_name == "vxlanp-items")
    {
        if(vxlanp_items == nullptr)
        {
            vxlanp_items = std::make_shared<System::TopoctrlItems::VxlanpItems>();
        }
        return vxlanp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbp_items != nullptr)
    {
        children["lbp-items"] = lbp_items;
    }

    if(shrdnp_items != nullptr)
    {
        children["shrdnp-items"] = shrdnp_items;
    }

    if(virtdom_items != nullptr)
    {
        children["virtdom-items"] = virtdom_items;
    }

    if(vxlanp_items != nullptr)
    {
        children["vxlanp-items"] = vxlanp_items;
    }

    return children;
}

void System::TopoctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::TopoctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::TopoctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbp-items" || name == "shrdnp-items" || name == "virtdom-items" || name == "vxlanp-items" || name == "name")
        return true;
    return false;
}

System::TopoctrlItems::LbpItems::LbpItems()
    :
    mode{YType::enumeration, "mode"},
    dlbmode{YType::enumeration, "dlbMode"},
    pri{YType::enumeration, "pri"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "lbp-items"; yang_parent_name = "topoctrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::LbpItems::~LbpItems()
{
}

bool System::TopoctrlItems::LbpItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| dlbmode.is_set
	|| pri.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::TopoctrlItems::LbpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dlbmode.yfilter)
	|| ydk::is_set(pri.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::TopoctrlItems::LbpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::LbpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::LbpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dlbmode.is_set || is_set(dlbmode.yfilter)) leaf_name_data.push_back(dlbmode.get_name_leafdata());
    if (pri.is_set || is_set(pri.yfilter)) leaf_name_data.push_back(pri.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::LbpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::LbpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TopoctrlItems::LbpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlbMode")
    {
        dlbmode = value;
        dlbmode.value_namespace = name_space;
        dlbmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pri")
    {
        pri = value;
        pri.value_namespace = name_space;
        pri.value_namespace_prefix = name_space_prefix;
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

void System::TopoctrlItems::LbpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dlbMode")
    {
        dlbmode.yfilter = yfilter;
    }
    if(value_path == "pri")
    {
        pri.yfilter = yfilter;
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

bool System::TopoctrlItems::LbpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "dlbMode" || name == "pri" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TopoctrlItems::ShrdnpItems::ShrdnpItems()
    :
    factor{YType::uint8, "factor"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "shrdnp-items"; yang_parent_name = "topoctrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::ShrdnpItems::~ShrdnpItems()
{
}

bool System::TopoctrlItems::ShrdnpItems::has_data() const
{
    if (is_presence_container) return true;
    return factor.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::TopoctrlItems::ShrdnpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(factor.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::TopoctrlItems::ShrdnpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::ShrdnpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shrdnp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::ShrdnpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (factor.is_set || is_set(factor.yfilter)) leaf_name_data.push_back(factor.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::ShrdnpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::ShrdnpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TopoctrlItems::ShrdnpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "factor")
    {
        factor = value;
        factor.value_namespace = name_space;
        factor.value_namespace_prefix = name_space_prefix;
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

void System::TopoctrlItems::ShrdnpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "factor")
    {
        factor.yfilter = yfilter;
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

bool System::TopoctrlItems::ShrdnpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "factor" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TopoctrlItems::VirtdomItems::VirtdomItems()
    :
    mcastaddr{YType::str, "mcastAddr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    from_items(std::make_shared<System::TopoctrlItems::VirtdomItems::FromItems>())
{
    from_items->parent = this;

    yang_name = "virtdom-items"; yang_parent_name = "topoctrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::VirtdomItems::~VirtdomItems()
{
}

bool System::TopoctrlItems::VirtdomItems::has_data() const
{
    if (is_presence_container) return true;
    return mcastaddr.is_set
	|| name.is_set
	|| descr.is_set
	|| (from_items !=  nullptr && from_items->has_data());
}

bool System::TopoctrlItems::VirtdomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastaddr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (from_items !=  nullptr && from_items->has_operation());
}

std::string System::TopoctrlItems::VirtdomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::VirtdomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtdom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::VirtdomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastaddr.is_set || is_set(mcastaddr.yfilter)) leaf_name_data.push_back(mcastaddr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::VirtdomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "from-items")
    {
        if(from_items == nullptr)
        {
            from_items = std::make_shared<System::TopoctrlItems::VirtdomItems::FromItems>();
        }
        return from_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::VirtdomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(from_items != nullptr)
    {
        children["from-items"] = from_items;
    }

    return children;
}

void System::TopoctrlItems::VirtdomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastAddr")
    {
        mcastaddr = value;
        mcastaddr.value_namespace = name_space;
        mcastaddr.value_namespace_prefix = name_space_prefix;
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

void System::TopoctrlItems::VirtdomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastAddr")
    {
        mcastaddr.yfilter = yfilter;
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

bool System::TopoctrlItems::VirtdomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-items" || name == "mcastAddr" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TopoctrlItems::VirtdomItems::FromItems::FromItems()
    :
    encapblk_list(this, {"from", "to"})
{

    yang_name = "from-items"; yang_parent_name = "virtdom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::VirtdomItems::FromItems::~FromItems()
{
}

bool System::TopoctrlItems::VirtdomItems::FromItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encapblk_list.len(); index++)
    {
        if(encapblk_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TopoctrlItems::VirtdomItems::FromItems::has_operation() const
{
    for (std::size_t index=0; index<encapblk_list.len(); index++)
    {
        if(encapblk_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TopoctrlItems::VirtdomItems::FromItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/virtdom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::VirtdomItems::FromItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "from-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::VirtdomItems::FromItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::VirtdomItems::FromItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EncapBlk-list")
    {
        auto c = std::make_shared<System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList>();
        c->parent = this;
        encapblk_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::VirtdomItems::FromItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : encapblk_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TopoctrlItems::VirtdomItems::FromItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TopoctrlItems::VirtdomItems::FromItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TopoctrlItems::VirtdomItems::FromItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EncapBlk-list")
        return true;
    return false;
}

System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::EncapBlkList()
    :
    from{YType::str, "from"},
    to{YType::str, "to"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "EncapBlk-list"; yang_parent_name = "from-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::~EncapBlkList()
{
}

bool System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/virtdom-items/from-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EncapBlk-list";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
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

void System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
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

bool System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TopoctrlItems::VxlanpItems::VxlanpItems()
    :
    udpport{YType::uint16, "udpPort"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "vxlanp-items"; yang_parent_name = "topoctrl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TopoctrlItems::VxlanpItems::~VxlanpItems()
{
}

bool System::TopoctrlItems::VxlanpItems::has_data() const
{
    if (is_presence_container) return true;
    return udpport.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::TopoctrlItems::VxlanpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udpport.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::TopoctrlItems::VxlanpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/topoctrl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TopoctrlItems::VxlanpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlanp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TopoctrlItems::VxlanpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udpport.is_set || is_set(udpport.yfilter)) leaf_name_data.push_back(udpport.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TopoctrlItems::VxlanpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TopoctrlItems::VxlanpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TopoctrlItems::VxlanpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpPort")
    {
        udpport = value;
        udpport.value_namespace = name_space;
        udpport.value_namespace_prefix = name_space_prefix;
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

void System::TopoctrlItems::VxlanpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpPort")
    {
        udpport.yfilter = yfilter;
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

bool System::TopoctrlItems::VxlanpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpPort" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TrackItems::TrackItems()
    :
    object_items(std::make_shared<System::TrackItems::ObjectItems>())
{
    object_items->parent = this;

    yang_name = "track-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::~TrackItems()
{
}

bool System::TrackItems::has_data() const
{
    if (is_presence_container) return true;
    return (object_items !=  nullptr && object_items->has_data());
}

bool System::TrackItems::has_operation() const
{
    return is_set(yfilter)
	|| (object_items !=  nullptr && object_items->has_operation());
}

std::string System::TrackItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-items")
    {
        if(object_items == nullptr)
        {
            object_items = std::make_shared<System::TrackItems::ObjectItems>();
        }
        return object_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(object_items != nullptr)
    {
        children["object-items"] = object_items;
    }

    return children;
}

void System::TrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-items")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectItems()
    :
    object_list(this, {"id"})
{

    yang_name = "object-items"; yang_parent_name = "track-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::~ObjectItems()
{
}

bool System::TrackItems::ObjectItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::has_operation() const
{
    for (std::size_t index=0; index<object_list.len(); index++)
    {
        if(object_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Object-list")
    {
        auto c = std::make_shared<System::TrackItems::ObjectItems::ObjectList>();
        c->parent = this;
        object_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : object_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TrackItems::ObjectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Object-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ObjectList()
    :
    id{YType::uint16, "id"},
    clients{YType::uint16, "clients"}
        ,
    if_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>())
    , iprt_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>())
    , ipsla_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>())
    , list_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>())
{
    if_items->parent = this;
    iprt_items->parent = this;
    ipsla_items->parent = this;
    list_items->parent = this;

    yang_name = "Object-list"; yang_parent_name = "object-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TrackItems::ObjectItems::ObjectList::~ObjectList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| clients.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (iprt_items !=  nullptr && iprt_items->has_data())
	|| (ipsla_items !=  nullptr && ipsla_items->has_data())
	|| (list_items !=  nullptr && list_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clients.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (iprt_items !=  nullptr && iprt_items->has_operation())
	|| (ipsla_items !=  nullptr && ipsla_items->has_operation())
	|| (list_items !=  nullptr && list_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/track-items/object-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TrackItems::ObjectItems::ObjectList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Object-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clients.is_set || is_set(clients.yfilter)) leaf_name_data.push_back(clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "iprt-items")
    {
        if(iprt_items == nullptr)
        {
            iprt_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IprtItems>();
        }
        return iprt_items;
    }

    if(child_yang_name == "ipsla-items")
    {
        if(ipsla_items == nullptr)
        {
            ipsla_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::IpslaItems>();
        }
        return ipsla_items;
    }

    if(child_yang_name == "list-items")
    {
        if(list_items == nullptr)
        {
            list_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems>();
        }
        return list_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(iprt_items != nullptr)
    {
        children["iprt-items"] = iprt_items;
    }

    if(ipsla_items != nullptr)
    {
        children["ipsla-items"] = ipsla_items;
    }

    if(list_items != nullptr)
    {
        children["list-items"] = list_items;
    }

    return children;
}

void System::TrackItems::ObjectItems::ObjectList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clients")
    {
        clients = value;
        clients.value_namespace = name_space;
        clients.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "iprt-items" || name == "ipsla-items" || name == "list-items" || name == "id" || name == "clients")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IfItems::IfItems()
    :
    id{YType::str, "id"},
    protocoltype{YType::enumeration, "protocolType"}
{

    yang_name = "if-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IfItems::~IfItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| protocoltype.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(protocoltype.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "protocolType")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::IprtItems()
    :
    af{YType::enumeration, "af"},
    prefix{YType::str, "prefix"},
    routestate{YType::enumeration, "routeState"},
    vrf{YType::str, "vrf"},
    routeowner{YType::enumeration, "routeOwner"}
{

    yang_name = "iprt-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IprtItems::~IprtItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| prefix.is_set
	|| routestate.is_set
	|| vrf.is_set
	|| routeowner.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(routestate.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(routeowner.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IprtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IprtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (routestate.is_set || is_set(routestate.yfilter)) leaf_name_data.push_back(routestate.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (routeowner.is_set || is_set(routeowner.yfilter)) leaf_name_data.push_back(routeowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::IprtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeState")
    {
        routestate = value;
        routestate.value_namespace = name_space;
        routestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeOwner")
    {
        routeowner = value;
        routeowner.value_namespace = name_space;
        routeowner.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IprtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "routeState")
    {
        routestate.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "routeOwner")
    {
        routeowner.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IprtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "prefix" || name == "routeState" || name == "vrf" || name == "routeOwner")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::IpslaItems()
    :
    probeid{YType::uint32, "probeId"},
    probestate{YType::enumeration, "probeState"}
{

    yang_name = "ipsla-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::IpslaItems::~IpslaItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_data() const
{
    if (is_presence_container) return true;
    return probeid.is_set
	|| probestate.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probeid.yfilter)
	|| ydk::is_set(probestate.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probeid.is_set || is_set(probeid.yfilter)) leaf_name_data.push_back(probeid.get_name_leafdata());
    if (probestate.is_set || is_set(probestate.yfilter)) leaf_name_data.push_back(probestate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::IpslaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probeId")
    {
        probeid = value;
        probeid.value_namespace = name_space;
        probeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeState")
    {
        probestate = value;
        probestate.value_namespace = name_space;
        probestate.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::IpslaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probeId")
    {
        probeid.yfilter = yfilter;
    }
    if(value_path == "probeState")
    {
        probestate.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::IpslaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probeId" || name == "probeState")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ListItems()
    :
    type{YType::enumeration, "type"},
    percentageup{YType::uint16, "percentageUp"},
    percentagedown{YType::uint16, "percentageDown"},
    weightup{YType::uint16, "weightUp"},
    weightdown{YType::uint16, "weightDown"}
        ,
    obj_items(std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>())
{
    obj_items->parent = this;

    yang_name = "list-items"; yang_parent_name = "Object-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::~ListItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| percentageup.is_set
	|| percentagedown.is_set
	|| weightup.is_set
	|| weightdown.is_set
	|| (obj_items !=  nullptr && obj_items->has_data());
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(percentageup.yfilter)
	|| ydk::is_set(percentagedown.yfilter)
	|| ydk::is_set(weightup.yfilter)
	|| ydk::is_set(weightdown.yfilter)
	|| (obj_items !=  nullptr && obj_items->has_operation());
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (percentageup.is_set || is_set(percentageup.yfilter)) leaf_name_data.push_back(percentageup.get_name_leafdata());
    if (percentagedown.is_set || is_set(percentagedown.yfilter)) leaf_name_data.push_back(percentagedown.get_name_leafdata());
    if (weightup.is_set || is_set(weightup.yfilter)) leaf_name_data.push_back(weightup.get_name_leafdata());
    if (weightdown.is_set || is_set(weightdown.yfilter)) leaf_name_data.push_back(weightdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-items")
    {
        if(obj_items == nullptr)
        {
            obj_items = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems>();
        }
        return obj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(obj_items != nullptr)
    {
        children["obj-items"] = obj_items;
    }

    return children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageUp")
    {
        percentageup = value;
        percentageup.value_namespace = name_space;
        percentageup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentageDown")
    {
        percentagedown = value;
        percentagedown.value_namespace = name_space;
        percentagedown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightUp")
    {
        weightup = value;
        weightup.value_namespace = name_space;
        weightup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weightDown")
    {
        weightdown = value;
        weightdown.value_namespace = name_space;
        weightdown.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "percentageUp")
    {
        percentageup.yfilter = yfilter;
    }
    if(value_path == "percentageDown")
    {
        percentagedown.yfilter = yfilter;
    }
    if(value_path == "weightUp")
    {
        weightup.yfilter = yfilter;
    }
    if(value_path == "weightDown")
    {
        weightdown.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-items" || name == "type" || name == "percentageUp" || name == "percentageDown" || name == "weightUp" || name == "weightDown")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::ObjItems()
    :
    member_list(this, {"id"})
{

    yang_name = "obj-items"; yang_parent_name = "list-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::~ObjItems()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_operation() const
{
    for (std::size_t index=0; index<member_list.len(); index++)
    {
        if(member_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Member-list")
    {
        auto c = std::make_shared<System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList>();
        c->parent = this;
        member_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : member_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Member-list")
        return true;
    return false;
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::MemberList()
    :
    id{YType::uint16, "id"},
    weight{YType::uint16, "weight"},
    not_{YType::boolean, "not"}
{

    yang_name = "Member-list"; yang_parent_name = "obj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::~MemberList()
{
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| weight.is_set
	|| not_.is_set;
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(not_.yfilter);
}

std::string System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Member-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (not_.is_set || is_set(not_.yfilter)) leaf_name_data.push_back(not_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not")
    {
        not_ = value;
        not_.value_namespace = name_space;
        not_.value_namespace_prefix = name_space_prefix;
    }
}

void System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "not")
    {
        not_.yfilter = yfilter;
    }
}

bool System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "weight" || name == "not")
        return true;
    return false;
}

System::UdldItems::UdldItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::UdldItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "udld-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::~UdldItems()
{
}

bool System::UdldItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::UdldItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::UdldItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::UdldItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::UdldItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::UdldItems::InstItems::InstItems()
    :
    aggressive{YType::enumeration, "aggressive"},
    msgintvl{YType::uint8, "msgIntvl"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    physif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems>())
{
    physif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "udld-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::~InstItems()
{
}

bool System::UdldItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| msgintvl.is_set
	|| error.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (physif_items !=  nullptr && physif_items->has_data());
}

bool System::UdldItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(msgintvl.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (physif_items !=  nullptr && physif_items->has_operation());
}

std::string System::UdldItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (msgintvl.is_set || is_set(msgintvl.yfilter)) leaf_name_data.push_back(msgintvl.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "physif-items")
    {
        if(physif_items == nullptr)
        {
            physif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems>();
        }
        return physif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(physif_items != nullptr)
    {
        children["physif-items"] = physif_items;
    }

    return children;
}

void System::UdldItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl = value;
        msgintvl.value_namespace = name_space;
        msgintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "msgIntvl")
    {
        msgintvl.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "physif-items" || name == "aggressive" || name == "msgIntvl" || name == "error" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysifItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "physif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::~PhysifItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto c = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList>();
        c->parent = this;
        physif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : physif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UdldItems::InstItems::PhysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    aggressive{YType::enumeration, "aggressive"},
    bidirdetect{YType::enumeration, "biDirDetect"},
    fiber{YType::enumeration, "fiber"},
    linkstate{YType::enumeration, "linkState"},
    currbidirstate{YType::enumeration, "currBiDirState"},
    bidirdetectstate{YType::enumeration, "biDirDetectState"},
    fsmstate{YType::enumeration, "fsmState"},
    deeppktinspcnt{YType::uint64, "deepPktInspCnt"},
    pktmismatchcnt{YType::uint64, "pktMismatchCnt"},
    pktdropcnt{YType::uint64, "pktDropCnt"},
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ptimest_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>())
    , rtvrfmbr_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>())
{
    ptimest_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "physif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::~PhysIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| aggressive.is_set
	|| bidirdetect.is_set
	|| fiber.is_set
	|| linkstate.is_set
	|| currbidirstate.is_set
	|| bidirdetectstate.is_set
	|| fsmstate.is_set
	|| deeppktinspcnt.is_set
	|| pktmismatchcnt.is_set
	|| pktdropcnt.is_set
	|| error.is_set
	|| name.is_set
	|| descr.is_set
	|| (ptimest_items !=  nullptr && ptimest_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(bidirdetect.yfilter)
	|| ydk::is_set(fiber.yfilter)
	|| ydk::is_set(linkstate.yfilter)
	|| ydk::is_set(currbidirstate.yfilter)
	|| ydk::is_set(bidirdetectstate.yfilter)
	|| ydk::is_set(fsmstate.yfilter)
	|| ydk::is_set(deeppktinspcnt.yfilter)
	|| ydk::is_set(pktmismatchcnt.yfilter)
	|| ydk::is_set(pktdropcnt.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ptimest_items !=  nullptr && ptimest_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/udld-items/inst-items/physif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (bidirdetect.is_set || is_set(bidirdetect.yfilter)) leaf_name_data.push_back(bidirdetect.get_name_leafdata());
    if (fiber.is_set || is_set(fiber.yfilter)) leaf_name_data.push_back(fiber.get_name_leafdata());
    if (linkstate.is_set || is_set(linkstate.yfilter)) leaf_name_data.push_back(linkstate.get_name_leafdata());
    if (currbidirstate.is_set || is_set(currbidirstate.yfilter)) leaf_name_data.push_back(currbidirstate.get_name_leafdata());
    if (bidirdetectstate.is_set || is_set(bidirdetectstate.yfilter)) leaf_name_data.push_back(bidirdetectstate.get_name_leafdata());
    if (fsmstate.is_set || is_set(fsmstate.yfilter)) leaf_name_data.push_back(fsmstate.get_name_leafdata());
    if (deeppktinspcnt.is_set || is_set(deeppktinspcnt.yfilter)) leaf_name_data.push_back(deeppktinspcnt.get_name_leafdata());
    if (pktmismatchcnt.is_set || is_set(pktmismatchcnt.yfilter)) leaf_name_data.push_back(pktmismatchcnt.get_name_leafdata());
    if (pktdropcnt.is_set || is_set(pktdropcnt.yfilter)) leaf_name_data.push_back(pktdropcnt.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptimest-items")
    {
        if(ptimest_items == nullptr)
        {
            ptimest_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems>();
        }
        return ptimest_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ptimest_items != nullptr)
    {
        children["ptimest-items"] = ptimest_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect = value;
        bidirdetect.value_namespace = name_space;
        bidirdetect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiber")
    {
        fiber = value;
        fiber.value_namespace = name_space;
        fiber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkState")
    {
        linkstate = value;
        linkstate.value_namespace = name_space;
        linkstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currBiDirState")
    {
        currbidirstate = value;
        currbidirstate.value_namespace = name_space;
        currbidirstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biDirDetectState")
    {
        bidirdetectstate = value;
        bidirdetectstate.value_namespace = name_space;
        bidirdetectstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmState")
    {
        fsmstate = value;
        fsmstate.value_namespace = name_space;
        fsmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deepPktInspCnt")
    {
        deeppktinspcnt = value;
        deeppktinspcnt.value_namespace = name_space;
        deeppktinspcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktMismatchCnt")
    {
        pktmismatchcnt = value;
        pktmismatchcnt.value_namespace = name_space;
        pktmismatchcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktDropCnt")
    {
        pktdropcnt = value;
        pktdropcnt.value_namespace = name_space;
        pktdropcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "biDirDetect")
    {
        bidirdetect.yfilter = yfilter;
    }
    if(value_path == "fiber")
    {
        fiber.yfilter = yfilter;
    }
    if(value_path == "linkState")
    {
        linkstate.yfilter = yfilter;
    }
    if(value_path == "currBiDirState")
    {
        currbidirstate.yfilter = yfilter;
    }
    if(value_path == "biDirDetectState")
    {
        bidirdetectstate.yfilter = yfilter;
    }
    if(value_path == "fsmState")
    {
        fsmstate.yfilter = yfilter;
    }
    if(value_path == "deepPktInspCnt")
    {
        deeppktinspcnt.yfilter = yfilter;
    }
    if(value_path == "pktMismatchCnt")
    {
        pktmismatchcnt.yfilter = yfilter;
    }
    if(value_path == "pktDropCnt")
    {
        pktdropcnt.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptimest-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "aggressive" || name == "biDirDetect" || name == "fiber" || name == "linkState" || name == "currBiDirState" || name == "biDirDetectState" || name == "fsmState" || name == "deepPktInspCnt" || name == "pktMismatchCnt" || name == "pktDropCnt" || name == "error" || name == "name" || name == "descr")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PtimestItems()
    :
    pktts_list(this, {"dir"})
{

    yang_name = "ptimest-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::~PtimestItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_operation() const
{
    for (std::size_t index=0; index<pktts_list.len(); index++)
    {
        if(pktts_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptimest-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PktTs-list")
    {
        auto c = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList>();
        c->parent = this;
        pktts_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pktts_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PktTs-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::PktTsList()
    :
    dir{YType::enumeration, "dir"},
    total{YType::str, "Total"},
    probe{YType::str, "Probe"},
    echo{YType::str, "Echo"},
    flush{YType::str, "Flush"}
{

    yang_name = "PktTs-list"; yang_parent_name = "ptimest-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::~PktTsList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_data() const
{
    if (is_presence_container) return true;
    return dir.is_set
	|| total.is_set
	|| probe.is_set
	|| echo.is_set
	|| flush.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PktTs-list";
    ADD_KEY_TOKEN(dir, "dir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "Total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "Probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "Echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "Flush")
    {
        flush.yfilter = yfilter;
    }
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dir" || name == "Total" || name == "Probe" || name == "Echo" || name == "Flush")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AcllogItems::AcllogItems()
    :
    inst_items(std::make_shared<System::AcllogItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "acllog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::~AcllogItems()
{
}

bool System::AcllogItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AcllogItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AcllogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acllog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcllogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AcllogItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcllogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::AcllogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::InstItems()
    :
    log_items(std::make_shared<System::AcllogItems::InstItems::LogItems>())
{
    log_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "acllog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::~InstItems()
{
}

bool System::AcllogItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (log_items !=  nullptr && log_items->has_data());
}

bool System::AcllogItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (log_items !=  nullptr && log_items->has_operation());
}

std::string System::AcllogItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcllogItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-items")
    {
        if(log_items == nullptr)
        {
            log_items = std::make_shared<System::AcllogItems::InstItems::LogItems>();
        }
        return log_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcllogItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(log_items != nullptr)
    {
        children["log-items"] = log_items;
    }

    return children;
}

void System::AcllogItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcllogItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcllogItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-items")
        return true;
    return false;
}

System::AcllogItems::InstItems::LogItems::LogItems()
    :
    interval{YType::str, "interval"},
    matchlevel{YType::uint8, "matchLevel"},
    loglevel{YType::uint8, "logLevel"}
{

    yang_name = "log-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcllogItems::InstItems::LogItems::~LogItems()
{
}

bool System::AcllogItems::InstItems::LogItems::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| matchlevel.is_set
	|| loglevel.is_set;
}

bool System::AcllogItems::InstItems::LogItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(matchlevel.yfilter)
	|| ydk::is_set(loglevel.yfilter);
}

std::string System::AcllogItems::InstItems::LogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acllog-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcllogItems::InstItems::LogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcllogItems::InstItems::LogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (matchlevel.is_set || is_set(matchlevel.yfilter)) leaf_name_data.push_back(matchlevel.get_name_leafdata());
    if (loglevel.is_set || is_set(loglevel.yfilter)) leaf_name_data.push_back(loglevel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcllogItems::InstItems::LogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcllogItems::InstItems::LogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcllogItems::InstItems::LogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchLevel")
    {
        matchlevel = value;
        matchlevel.value_namespace = name_space;
        matchlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logLevel")
    {
        loglevel = value;
        loglevel.value_namespace = name_space;
        loglevel.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcllogItems::InstItems::LogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "matchLevel")
    {
        matchlevel.yfilter = yfilter;
    }
    if(value_path == "logLevel")
    {
        loglevel.yfilter = yfilter;
    }
}

bool System::AcllogItems::InstItems::LogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "matchLevel" || name == "logLevel")
        return true;
    return false;
}

System::AibItems::AibItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::AibItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "aib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AibItems::~AibItems()
{
}

bool System::AibItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::AibItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::AibItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::AibItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::AibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AibItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::AibItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "aib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AibItems::DomItems::~DomItems()
{
}

bool System::AibItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AibItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AibItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/aib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AibItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::AibItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AibItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AibItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AibItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::AibItems::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AibItems::DomItems::DomList::~DomList()
{
}

bool System::AibItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::AibItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::AibItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/aib-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AibItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::AibItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::AibItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AibItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AibItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::AibItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AibItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AibItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AibItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AibItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AibItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems>())
{
    adj_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data());
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation());
}

std::string System::AibItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems>();
        }
        return adj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    return children;
}

void System::AibItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AibItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AibItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjItems()
    :
    adj_list(this, {"addr", "if_"})
{

    yang_name = "adj-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::~AdjItems()
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adj_list.len(); index++)
    {
        if(adj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adj_list.len(); index++)
    {
        if(adj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Adj-list")
    {
        auto c = std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList>();
        c->parent = this;
        adj_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adj_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Adj-list")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::AdjList()
    :
    addr{YType::str, "addr"},
    if_{YType::str, "if"},
    name{YType::str, "name"}
        ,
    owner_items(std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems>())
{
    owner_items->parent = this;

    yang_name = "Adj-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::~AdjList()
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| if_.is_set
	|| name.is_set
	|| (owner_items !=  nullptr && owner_items->has_data());
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (owner_items !=  nullptr && owner_items->has_operation());
}

std::string System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Adj-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-items")
    {
        if(owner_items == nullptr)
        {
            owner_items = std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems>();
        }
        return owner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(owner_items != nullptr)
    {
        children["owner-items"] = owner_items;
    }

    return children;
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner-items" || name == "addr" || name == "if" || name == "name")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::OwnerItems()
    :
    adjowner_list(this, {"owner"})
{

    yang_name = "owner-items"; yang_parent_name = "Adj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::~OwnerItems()
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjowner_list.len(); index++)
    {
        if(adjowner_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::has_operation() const
{
    for (std::size_t index=0; index<adjowner_list.len(); index++)
    {
        if(adjowner_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjOwner-list")
    {
        auto c = std::make_shared<System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList>();
        c->parent = this;
        adjowner_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjowner_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjOwner-list")
        return true;
    return false;
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::AdjOwnerList()
    :
    owner{YType::str, "owner"},
    updatets{YType::str, "updateTs"},
    pref{YType::uint16, "pref"},
    mac{YType::str, "mac"},
    l2if{YType::str, "l2If"},
    active{YType::boolean, "active"},
    name{YType::str, "name"}
{

    yang_name = "AdjOwner-list"; yang_parent_name = "owner-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::~AdjOwnerList()
{
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| updatets.is_set
	|| pref.is_set
	|| mac.is_set
	|| l2if.is_set
	|| active.is_set
	|| name.is_set;
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(updatets.yfilter)
	|| ydk::is_set(pref.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(l2if.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjOwner-list";
    ADD_KEY_TOKEN(owner, "owner");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (updatets.is_set || is_set(updatets.yfilter)) leaf_name_data.push_back(updatets.get_name_leafdata());
    if (pref.is_set || is_set(pref.yfilter)) leaf_name_data.push_back(pref.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (l2if.is_set || is_set(l2if.yfilter)) leaf_name_data.push_back(l2if.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateTs")
    {
        updatets = value;
        updatets.value_namespace = name_space;
        updatets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref")
    {
        pref = value;
        pref.value_namespace = name_space;
        pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2If")
    {
        l2if = value;
        l2if.value_namespace = name_space;
        l2if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "updateTs")
    {
        updatets.yfilter = yfilter;
    }
    if(value_path == "pref")
    {
        pref.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "l2If")
    {
        l2if.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "updateTs" || name == "pref" || name == "mac" || name == "l2If" || name == "active" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems()
    :
    descr{YType::str, "descr"},
    sysdefaultsviautostate{YType::enumeration, "sysDefaultSVIAutostate"}
        ,
    vlanconfig_items(std::make_shared<System::BdItems::VlanconfigItems>())
    , bd_items(std::make_shared<System::BdItems::BdItems_>())
    , vlan_items(std::make_shared<System::BdItems::VlanItems>())
    , vxlan_items(std::make_shared<System::BdItems::VxlanItems>())
{
    vlanconfig_items->parent = this;
    bd_items->parent = this;
    vlan_items->parent = this;
    vxlan_items->parent = this;

    yang_name = "bd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::~BdItems()
{
}

bool System::BdItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| sysdefaultsviautostate.is_set
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (vxlan_items !=  nullptr && vxlan_items->has_data());
}

bool System::BdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sysdefaultsviautostate.yfilter)
	|| (vlanconfig_items !=  nullptr && vlanconfig_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (vxlan_items !=  nullptr && vxlan_items->has_operation());
}

std::string System::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sysdefaultsviautostate.is_set || is_set(sysdefaultsviautostate.yfilter)) leaf_name_data.push_back(sysdefaultsviautostate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanconfig-items")
    {
        if(vlanconfig_items == nullptr)
        {
            vlanconfig_items = std::make_shared<System::BdItems::VlanconfigItems>();
        }
        return vlanconfig_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::BdItems::BdItems_>();
        }
        return bd_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "vxlan-items")
    {
        if(vxlan_items == nullptr)
        {
            vxlan_items = std::make_shared<System::BdItems::VxlanItems>();
        }
        return vxlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlanconfig_items != nullptr)
    {
        children["vlanconfig-items"] = vlanconfig_items;
    }

    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    if(vxlan_items != nullptr)
    {
        children["vxlan-items"] = vxlan_items;
    }

    return children;
}

void System::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate = value;
        sysdefaultsviautostate.value_namespace = name_space;
        sysdefaultsviautostate.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sysDefaultSVIAutostate")
    {
        sysdefaultsviautostate.yfilter = yfilter;
    }
}

bool System::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanconfig-items" || name == "bd-items" || name == "vlan-items" || name == "vxlan-items" || name == "descr" || name == "sysDefaultSVIAutostate")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanconfigItems()
    :
    vlanconfig_list(this, {"accencap"})
{

    yang_name = "vlanconfig-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::~VlanconfigItems()
{
}

bool System::BdItems::VlanconfigItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::has_operation() const
{
    for (std::size_t index=0; index<vlanconfig_list.len(); index++)
    {
        if(vlanconfig_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanconfig-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanconfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanConfig-list")
    {
        auto c = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList>();
        c->parent = this;
        vlanconfig_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanconfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanconfig_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VlanconfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanConfig-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::VlanConfigList()
    :
    accencap{YType::str, "accEncap"}
{

    yang_name = "VlanConfig-list"; yang_parent_name = "vlanconfig-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanconfigItems::VlanConfigList::~VlanConfigList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_data() const
{
    if (is_presence_container) return true;
    return accencap.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accencap.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vlanconfig-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanConfig-list";
    ADD_KEY_TOKEN(accencap, "accEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accencap.is_set || is_set(accencap.yfilter)) leaf_name_data.push_back(accencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanconfigItems::VlanConfigList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanconfigItems::VlanConfigList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accEncap")
    {
        accencap = value;
        accencap.value_namespace = name_space;
        accencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accEncap")
    {
        accencap.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accEncap")
        return true;
    return false;
}

System::BdItems::BdItems_::BdItems_()
    :
    bd_list(this, {"fabencap"})
{

    yang_name = "bd-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::BdItems_::~BdItems_()
{
}

bool System::BdItems::BdItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::BdItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BD-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList>();
        c->parent = this;
        bd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BD-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::BDList()
    :
    fabencap{YType::str, "fabEncap"},
    accencap{YType::str, "accEncap"},
    fwdmode{YType::str, "fwdMode"},
    bridgemode{YType::enumeration, "bridgeMode"},
    fwdctrl{YType::str, "fwdCtrl"},
    unkmacucastact{YType::enumeration, "unkMacUcastAct"},
    unkmcastact{YType::enumeration, "unkMcastAct"},
    pctag{YType::uint32, "pcTag"},
    epoperst{YType::str, "epOperSt"},
    bddefdn{YType::str, "bdDefDn"},
    controllerid{YType::str, "controllerId"},
    media{YType::enumeration, "media"},
    bdstate{YType::enumeration, "BdState"},
    bdopername{YType::str, "BdOperName"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"}
        ,
    epret_items(std::make_shared<System::BdItems::BdItems_::BDList::EpretItems>())
    , fmgrp_items(std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems>())
    , db_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems>())
    , vlan_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems>())
    , vxlan_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems>())
    , rsextbd_items(std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems>())
    , rsbdvsanmap_items(std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems>())
    , dbgvlanstats_items(std::make_shared<System::BdItems::BdItems_::BDList::DbgVlanStatsItems>())
{
    epret_items->parent = this;
    fmgrp_items->parent = this;
    db_items->parent = this;
    vlan_items->parent = this;
    vxlan_items->parent = this;
    rsextbd_items->parent = this;
    rsbdvsanmap_items->parent = this;
    rtfvdomifconn_items->parent = this;
    dbgvlanstats_items->parent = this;

    yang_name = "BD-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::BdItems_::BDList::~BDList()
{
}

bool System::BdItems::BdItems_::BDList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| accencap.is_set
	|| fwdmode.is_set
	|| bridgemode.is_set
	|| fwdctrl.is_set
	|| unkmacucastact.is_set
	|| unkmcastact.is_set
	|| pctag.is_set
	|| epoperst.is_set
	|| bddefdn.is_set
	|| controllerid.is_set
	|| media.is_set
	|| bdstate.is_set
	|| bdopername.is_set
	|| name.is_set
	|| type.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| (epret_items !=  nullptr && epret_items->has_data())
	|| (fmgrp_items !=  nullptr && fmgrp_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (vxlan_items !=  nullptr && vxlan_items->has_data())
	|| (rsextbd_items !=  nullptr && rsextbd_items->has_data())
	|| (rsbdvsanmap_items !=  nullptr && rsbdvsanmap_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (dbgvlanstats_items !=  nullptr && dbgvlanstats_items->has_data());
}

bool System::BdItems::BdItems_::BDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(accencap.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(bridgemode.yfilter)
	|| ydk::is_set(fwdctrl.yfilter)
	|| ydk::is_set(unkmacucastact.yfilter)
	|| ydk::is_set(unkmcastact.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(epoperst.yfilter)
	|| ydk::is_set(bddefdn.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(media.yfilter)
	|| ydk::is_set(bdstate.yfilter)
	|| ydk::is_set(bdopername.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (epret_items !=  nullptr && epret_items->has_operation())
	|| (fmgrp_items !=  nullptr && fmgrp_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (vxlan_items !=  nullptr && vxlan_items->has_operation())
	|| (rsextbd_items !=  nullptr && rsextbd_items->has_operation())
	|| (rsbdvsanmap_items !=  nullptr && rsbdvsanmap_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (dbgvlanstats_items !=  nullptr && dbgvlanstats_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::BdItems_::BDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BD-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (accencap.is_set || is_set(accencap.yfilter)) leaf_name_data.push_back(accencap.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (bridgemode.is_set || is_set(bridgemode.yfilter)) leaf_name_data.push_back(bridgemode.get_name_leafdata());
    if (fwdctrl.is_set || is_set(fwdctrl.yfilter)) leaf_name_data.push_back(fwdctrl.get_name_leafdata());
    if (unkmacucastact.is_set || is_set(unkmacucastact.yfilter)) leaf_name_data.push_back(unkmacucastact.get_name_leafdata());
    if (unkmcastact.is_set || is_set(unkmcastact.yfilter)) leaf_name_data.push_back(unkmcastact.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (epoperst.is_set || is_set(epoperst.yfilter)) leaf_name_data.push_back(epoperst.get_name_leafdata());
    if (bddefdn.is_set || is_set(bddefdn.yfilter)) leaf_name_data.push_back(bddefdn.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());
    if (bdstate.is_set || is_set(bdstate.yfilter)) leaf_name_data.push_back(bdstate.get_name_leafdata());
    if (bdopername.is_set || is_set(bdopername.yfilter)) leaf_name_data.push_back(bdopername.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epret-items")
    {
        if(epret_items == nullptr)
        {
            epret_items = std::make_shared<System::BdItems::BdItems_::BDList::EpretItems>();
        }
        return epret_items;
    }

    if(child_yang_name == "fmgrp-items")
    {
        if(fmgrp_items == nullptr)
        {
            fmgrp_items = std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems>();
        }
        return fmgrp_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "vxlan-items")
    {
        if(vxlan_items == nullptr)
        {
            vxlan_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems>();
        }
        return vxlan_items;
    }

    if(child_yang_name == "rsextBD-items")
    {
        if(rsextbd_items == nullptr)
        {
            rsextbd_items = std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems>();
        }
        return rsextbd_items;
    }

    if(child_yang_name == "rsbdVsanMap-items")
    {
        if(rsbdvsanmap_items == nullptr)
        {
            rsbdvsanmap_items = std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems>();
        }
        return rsbdvsanmap_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "dbgVlanStats-items")
    {
        if(dbgvlanstats_items == nullptr)
        {
            dbgvlanstats_items = std::make_shared<System::BdItems::BdItems_::BDList::DbgVlanStatsItems>();
        }
        return dbgvlanstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epret_items != nullptr)
    {
        children["epret-items"] = epret_items;
    }

    if(fmgrp_items != nullptr)
    {
        children["fmgrp-items"] = fmgrp_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    if(vxlan_items != nullptr)
    {
        children["vxlan-items"] = vxlan_items;
    }

    if(rsextbd_items != nullptr)
    {
        children["rsextBD-items"] = rsextbd_items;
    }

    if(rsbdvsanmap_items != nullptr)
    {
        children["rsbdVsanMap-items"] = rsbdvsanmap_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(dbgvlanstats_items != nullptr)
    {
        children["dbgVlanStats-items"] = dbgvlanstats_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accEncap")
    {
        accencap = value;
        accencap.value_namespace = name_space;
        accencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgeMode")
    {
        bridgemode = value;
        bridgemode.value_namespace = name_space;
        bridgemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdCtrl")
    {
        fwdctrl = value;
        fwdctrl.value_namespace = name_space;
        fwdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unkMacUcastAct")
    {
        unkmacucastact = value;
        unkmacucastact.value_namespace = name_space;
        unkmacucastact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unkMcastAct")
    {
        unkmcastact = value;
        unkmcastact.value_namespace = name_space;
        unkmcastact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epOperSt")
    {
        epoperst = value;
        epoperst.value_namespace = name_space;
        epoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdDefDn")
    {
        bddefdn = value;
        bddefdn.value_namespace = name_space;
        bddefdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BdState")
    {
        bdstate = value;
        bdstate.value_namespace = name_space;
        bdstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BdOperName")
    {
        bdopername = value;
        bdopername.value_namespace = name_space;
        bdopername.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "accEncap")
    {
        accencap.yfilter = yfilter;
    }
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "bridgeMode")
    {
        bridgemode.yfilter = yfilter;
    }
    if(value_path == "fwdCtrl")
    {
        fwdctrl.yfilter = yfilter;
    }
    if(value_path == "unkMacUcastAct")
    {
        unkmacucastact.yfilter = yfilter;
    }
    if(value_path == "unkMcastAct")
    {
        unkmcastact.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "epOperSt")
    {
        epoperst.yfilter = yfilter;
    }
    if(value_path == "bdDefDn")
    {
        bddefdn.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
    if(value_path == "BdState")
    {
        bdstate.yfilter = yfilter;
    }
    if(value_path == "BdOperName")
    {
        bdopername.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epret-items" || name == "fmgrp-items" || name == "db-items" || name == "vlan-items" || name == "vxlan-items" || name == "rsextBD-items" || name == "rsbdVsanMap-items" || name == "rtfvDomIfConn-items" || name == "dbgVlanStats-items" || name == "fabEncap" || name == "accEncap" || name == "fwdMode" || name == "bridgeMode" || name == "fwdCtrl" || name == "unkMacUcastAct" || name == "unkMcastAct" || name == "pcTag" || name == "epOperSt" || name == "bdDefDn" || name == "controllerId" || name == "media" || name == "BdState" || name == "BdOperName" || name == "name" || name == "type" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::EpretItems::EpretItems()
    :
    localepageintvl{YType::uint16, "localEpAgeIntvl"},
    remoteepageintvl{YType::uint16, "remoteEpAgeIntvl"},
    bounceageintvl{YType::uint16, "bounceAgeIntvl"},
    bouncetrig{YType::str, "bounceTrig"},
    movefreq{YType::uint16, "moveFreq"},
    holdintvl{YType::uint16, "holdIntvl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "epret-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::EpretItems::~EpretItems()
{
}

bool System::BdItems::BdItems_::BDList::EpretItems::has_data() const
{
    if (is_presence_container) return true;
    return localepageintvl.is_set
	|| remoteepageintvl.is_set
	|| bounceageintvl.is_set
	|| bouncetrig.is_set
	|| movefreq.is_set
	|| holdintvl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BdItems::BdItems_::BDList::EpretItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localepageintvl.yfilter)
	|| ydk::is_set(remoteepageintvl.yfilter)
	|| ydk::is_set(bounceageintvl.yfilter)
	|| ydk::is_set(bouncetrig.yfilter)
	|| ydk::is_set(movefreq.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BdItems::BdItems_::BDList::EpretItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epret-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::EpretItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localepageintvl.is_set || is_set(localepageintvl.yfilter)) leaf_name_data.push_back(localepageintvl.get_name_leafdata());
    if (remoteepageintvl.is_set || is_set(remoteepageintvl.yfilter)) leaf_name_data.push_back(remoteepageintvl.get_name_leafdata());
    if (bounceageintvl.is_set || is_set(bounceageintvl.yfilter)) leaf_name_data.push_back(bounceageintvl.get_name_leafdata());
    if (bouncetrig.is_set || is_set(bouncetrig.yfilter)) leaf_name_data.push_back(bouncetrig.get_name_leafdata());
    if (movefreq.is_set || is_set(movefreq.yfilter)) leaf_name_data.push_back(movefreq.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::EpretItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::EpretItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::EpretItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localEpAgeIntvl")
    {
        localepageintvl = value;
        localepageintvl.value_namespace = name_space;
        localepageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteEpAgeIntvl")
    {
        remoteepageintvl = value;
        remoteepageintvl.value_namespace = name_space;
        remoteepageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bounceAgeIntvl")
    {
        bounceageintvl = value;
        bounceageintvl.value_namespace = name_space;
        bounceageintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bounceTrig")
    {
        bouncetrig = value;
        bouncetrig.value_namespace = name_space;
        bouncetrig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "moveFreq")
    {
        movefreq = value;
        movefreq.value_namespace = name_space;
        movefreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
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

void System::BdItems::BdItems_::BDList::EpretItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localEpAgeIntvl")
    {
        localepageintvl.yfilter = yfilter;
    }
    if(value_path == "remoteEpAgeIntvl")
    {
        remoteepageintvl.yfilter = yfilter;
    }
    if(value_path == "bounceAgeIntvl")
    {
        bounceageintvl.yfilter = yfilter;
    }
    if(value_path == "bounceTrig")
    {
        bouncetrig.yfilter = yfilter;
    }
    if(value_path == "moveFreq")
    {
        movefreq.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
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

bool System::BdItems::BdItems_::BDList::EpretItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localEpAgeIntvl" || name == "remoteEpAgeIntvl" || name == "bounceAgeIntvl" || name == "bounceTrig" || name == "moveFreq" || name == "holdIntvl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::FmgrpItems::FmgrpItems()
    :
    grp_list(this, {"addr"})
{

    yang_name = "fmgrp-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::FmgrpItems::~FmgrpItems()
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grp_list.len(); index++)
    {
        if(grp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_operation() const
{
    for (std::size_t index=0; index<grp_list.len(); index++)
    {
        if(grp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::FmgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::FmgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::FmgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Grp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems::GrpList>();
        c->parent = this;
        grp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::FmgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : grp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::FmgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::FmgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Grp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::GrpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "Grp-list"; yang_parent_name = "fmgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::~GrpList()
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Grp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmaceptoipepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::VlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vlan-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::~VlanItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList>();
        c->parent = this;
        cktep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cktep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    fabencap{YType::str, "fabEncap"},
    operstate{YType::enumeration, "operState"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems>())
    , db_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvlaneppatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems>())
{
    mac_items->parent = this;
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| fabencap.is_set
	|| operstate.is_set
	|| operstqual.is_set
	|| name.is_set
	|| type.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvlanEppAtt-items")
    {
        if(rsvlaneppatt_items == nullptr)
        {
            rsvlaneppatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems>();
        }
        return rsvlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(rtspanspansrctol2cktepatt_items != nullptr)
    {
        children["rtspanSpanSrcToL2CktEpAtt-items"] = rtspanspansrctol2cktepatt_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvlaneppatt_items != nullptr)
    {
        children["rsvlanEppAtt-items"] = rsvlaneppatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items" || name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvlanEppAtt-items" || name == "encap" || name == "fabEncap" || name == "operState" || name == "operStQual" || name == "name" || name == "type" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacItems()
    :
    macep_list(this, {"mac"})
{

    yang_name = "mac-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::MacEpList()
    :
    mac{YType::str, "mac"},
    if_{YType::str, "if"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"}
        ,
    rtfvepdefreftol2macep_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>())
{
    rtfvepdefreftol2macep_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| if_.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefRefToL2MacEp-items")
    {
        if(rtfvepdefreftol2macep_items == nullptr)
        {
            rtfvepdefreftol2macep_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>();
        }
        return rtfvepdefreftol2macep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvepdefreftol2macep_items != nullptr)
    {
        children["rtfvEpDefRefToL2MacEp-items"] = rtfvepdefreftol2macep_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
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
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefRefToL2MacEp-items" || name == "mac" || name == "if" || name == "operSt" || name == "operStQual" || name == "name")
        return true;
    return false;
}


}
}

