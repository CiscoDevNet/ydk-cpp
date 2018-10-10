
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SSMXlate-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList>();
        c->parent = this;
        ssmxlate_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ssmxlate_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteGroup-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList>();
        c->parent = this;
        routegroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routegroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteSource-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList>();
        c->parent = this;
        routesource_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routesource_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteOif-list")
    {
        auto c = std::make_shared<System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList>();
        c->parent = this;
        routeoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routeoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ctrlrrunning_items != nullptr)
    {
        children["ctrlrrunning-items"] = ctrlrrunning_items;
    }

    if(upgjob_items != nullptr)
    {
        children["upgjob-items"] = upgjob_items;
    }

    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::CtrlrrunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::UpgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(upgjobfault_items != nullptr)
    {
        children["upgjobfault-items"] = upgjobfault_items;
    }

    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeInMaint-list")
    {
        auto c = std::make_shared<System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList>();
        c->parent = this;
        nodeinmaint_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeinmaint_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(upgjob_items != nullptr)
    {
        children["upgjob-items"] = upgjob_items;
    }

    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::UpgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::UpgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(upgjobfault_items != nullptr)
    {
        children["upgjobfault-items"] = upgjobfault_items;
    }

    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::UpgjobItems::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeInMaint-list")
    {
        auto c = std::make_shared<System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList>();
        c->parent = this;
        nodeinmaint_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::UpgjobItems::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeinmaint_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::CatfwstatuscontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::CatfwstatuscontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(catupgjob_items != nullptr)
    {
        children["catupgjob-items"] = catupgjob_items;
    }

    return children;
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

std::shared_ptr<Entity> System::CatfwstatuscontItems::CatupgjobItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CatfwstatuscontItems::CatupgjobItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    , if_items(std::make_shared<System::IsisItems::IfItems>())
{
    inst_items->parent = this;
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
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::IsisItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
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

std::shared_ptr<Entity> System::IsisItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IsisItems::InstItems>();
        }
        return inst_items;
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
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
    if(name == "inst-items" || name == "if-items" || name == "name" || name == "adminSt" || name == "operSt")
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

std::shared_ptr<Entity> System::IsisItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
{
    dom_items->parent = this;

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
	|| (dom_items !=  nullptr && dom_items->has_data());
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
	|| (dom_items !=  nullptr && dom_items->has_operation());
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
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
    if(name == "dom-items" || name == "name" || name == "operSt" || name == "flushRoutes" || name == "isolate" || name == "adminSt" || name == "ctrl")
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::get_children() const
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
    operst{YType::enumeration, "operSt"}
        ,
    db_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems>())
    , overload_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems>())
    , lvl_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems>())
    , fmtree_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems>())
    , gr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems>())
    , if_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems>())
    , defrtleak_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems>())
    , interleak_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems>())
{
    db_items->parent = this;
    overload_items->parent = this;
    lvl_items->parent = this;
    fmtree_items->parent = this;
    gr_items->parent = this;
    if_items->parent = this;
    defrtleak_items->parent = this;
    interleak_items->parent = this;

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
	|| operst.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (overload_items !=  nullptr && overload_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (fmtree_items !=  nullptr && fmtree_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data());
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
	|| ydk::is_set(operst.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (overload_items !=  nullptr && overload_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (fmtree_items !=  nullptr && fmtree_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation());
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
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems>();
        }
        return interleak_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(overload_items != nullptr)
    {
        children["overload-items"] = overload_items;
    }

    if(lvl_items != nullptr)
    {
        children["lvl-items"] = lvl_items;
    }

    if(fmtree_items != nullptr)
    {
        children["fmtree-items"] = fmtree_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(defrtleak_items != nullptr)
    {
        children["defrtleak-items"] = defrtleak_items;
    }

    if(interleak_items != nullptr)
    {
        children["interleak-items"] = interleak_items;
    }

    return children;
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
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "overload-items" || name == "lvl-items" || name == "fmtree-items" || name == "gr-items" || name == "if-items" || name == "defrtleak-items" || name == "interleak-items" || name == "name" || name == "net" || name == "mtu" || name == "bwRef" || name == "bwRefUnit" || name == "metricStyle" || name == "isType" || name == "lspLifetime" || name == "adminSt" || name == "ctrl" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "operSt")
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::get_children() const
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grp_items != nullptr)
    {
        children["grp-items"] = grp_items;
    }

    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(lsp_items != nullptr)
    {
        children["lsp-items"] = lsp_items;
    }

    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    if(dtep_items != nullptr)
    {
        children["dtep-items"] = dtep_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList>();
        c->parent = this;
        grprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : grprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ftagoif_items != nullptr)
    {
        children["ftagoif-items"] = ftagoif_items;
    }

    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtagOifRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList>();
        c->parent = this;
        ftagoifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ftagoifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList>();
        c->parent = this;
        bdidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList>();
        c->parent = this;
        nodeidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList>();
        c->parent = this;
        noderec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : noderec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grp_items != nullptr)
    {
        children["grp-items"] = grp_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList>();
        c->parent = this;
        grpidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : grpidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LspRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList>();
        c->parent = this;
        lsprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extisrec_items != nullptr)
    {
        children["extisrec-items"] = extisrec_items;
    }

    if(tlvrec_items != nullptr)
    {
        children["tlvRec-items"] = tlvrec_items;
    }

    if(iprec_items != nullptr)
    {
        children["iprec-items"] = iprec_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIsRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList>();
        c->parent = this;
        extisrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extisrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TlvRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList>();
        c->parent = this;
        tlvrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tlvrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList>();
        c->parent = this;
        iprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsnhatt_items != nullptr)
    {
        children["rsnhAtt-items"] = rsnhatt_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNhAtt-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList>();
        c->parent = this;
        rsnhatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsnhatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsNhAtt-list"; yang_parent_name = "rsnhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::~RsNhAttList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DTEp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList>();
        c->parent = this;
        dtep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dtep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomLvl-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList>();
        c->parent = this;
        domlvl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domlvl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
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
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
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
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
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
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(lspgen_items != nullptr)
    {
        children["lspgen-items"] = lspgen_items;
    }

    if(spfcomp_items != nullptr)
    {
        children["spfcomp-items"] = spfcomp_items;
    }

    return children;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "lspgen-items" || name == "spfcomp-items" || name == "type" || name == "ctrl" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "name")
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::get_children() const
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grp_items != nullptr)
    {
        children["grp-items"] = grp_items;
    }

    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(lsp_items != nullptr)
    {
        children["lsp-items"] = lsp_items;
    }

    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    if(dtep_items != nullptr)
    {
        children["dtep-items"] = dtep_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList>();
        c->parent = this;
        grprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : grprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ftagoif_items != nullptr)
    {
        children["ftagoif-items"] = ftagoif_items;
    }

    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtagOifRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList>();
        c->parent = this;
        ftagoifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ftagoifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList>();
        c->parent = this;
        bdidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList>();
        c->parent = this;
        nodeidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList>();
        c->parent = this;
        noderec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : noderec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grp_items != nullptr)
    {
        children["grp-items"] = grp_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList>();
        c->parent = this;
        grpidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : grpidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LspRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList>();
        c->parent = this;
        lsprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extisrec_items != nullptr)
    {
        children["extisrec-items"] = extisrec_items;
    }

    if(tlvrec_items != nullptr)
    {
        children["tlvRec-items"] = tlvrec_items;
    }

    if(iprec_items != nullptr)
    {
        children["iprec-items"] = iprec_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIsRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList>();
        c->parent = this;
        extisrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extisrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecItems()
    :
    tlvrec_list(this, {"type"})
{

    yang_name = "tlvRec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::~TlvRecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_operation() const
{
    for (std::size_t index=0; index<tlvrec_list.len(); index++)
    {
        if(tlvrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlvRec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TlvRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList>();
        c->parent = this;
        tlvrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tlvrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TlvRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::TlvRecList()
    :
    type{YType::uint8, "type"},
    value_{YType::str, "value"},
    name{YType::str, "name"}
{

    yang_name = "TlvRec-list"; yang_parent_name = "tlvRec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::~TlvRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| value_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TlvRec-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IprecItems()
    :
    iprec_list(this, {"pfx"})
{

    yang_name = "iprec-items"; yang_parent_name = "LspRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::~IprecItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_operation() const
{
    for (std::size_t index=0; index<iprec_list.len(); index++)
    {
        if(iprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList>();
        c->parent = this;
        iprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::IpRecList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
{

    yang_name = "IpRec-list"; yang_parent_name = "iprec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::~IpRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpRec-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NhItems()
    :
    nexthop_list(this, {"nhif", "addr"})
{

    yang_name = "nh-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::~NhItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::NexthopList()
    :
    nhif{YType::str, "nhIf"},
    addr{YType::str, "addr"},
    if_{YType::uint32, "if"},
    name{YType::str, "name"}
{

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::~NexthopList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return nhif.is_set
	|| addr.is_set
	|| if_.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhif.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(nhif, "nhIf");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhif.is_set || is_set(nhif.yfilter)) leaf_name_data.push_back(nhif.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhIf" || name == "addr" || name == "if" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    rsnhatt_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>())
{
    rsnhatt_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsnhatt_items !=  nullptr && rsnhatt_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsnhAtt-items")
    {
        if(rsnhatt_items == nullptr)
        {
            rsnhatt_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems>();
        }
        return rsnhatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsnhatt_items != nullptr)
    {
        children["rsnhAtt-items"] = rsnhatt_items;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsnhAtt-items" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsnhAttItems()
    :
    rsnhatt_list(this, {"tdn"})
{

    yang_name = "rsnhAtt-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::~RsnhAttItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsnhatt_list.len(); index++)
    {
        if(rsnhatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsnhAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNhAtt-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList>();
        c->parent = this;
        rsnhatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsnhatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsNhAtt-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::RsNhAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsNhAtt-list"; yang_parent_name = "rsnhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::~RsNhAttList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsNhAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DtepItems()
    :
    dtep_list(this, {"id"})
{

    yang_name = "dtep-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::~DtepItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_operation() const
{
    for (std::size_t index=0; index<dtep_list.len(); index++)
    {
        if(dtep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DTEp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList>();
        c->parent = this;
        dtep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dtep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DTEp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::DTEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    encapt{YType::enumeration, "encapt"},
    type{YType::str, "type"},
    role{YType::enumeration, "role"}
{

    yang_name = "DTEp-list"; yang_parent_name = "dtep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::~DTEpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| encapt.is_set
	|| type.is_set
	|| role.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapt.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DTEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapt.is_set || is_set(encapt.yfilter)) leaf_name_data.push_back(encapt.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "encapt" || name == "type" || name == "role")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::LspgenItems()
    :
    initintvl{YType::uint32, "initIntvl"},
    secintvl{YType::uint32, "secIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "lspgen-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::~LspgenItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_data() const
{
    if (is_presence_container) return true;
    return initintvl.is_set
	|| secintvl.is_set
	|| maxintvl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(secintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspgen-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (secintvl.is_set || is_set(secintvl.yfilter)) leaf_name_data.push_back(secintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secIntvl")
    {
        secintvl = value;
        secintvl.value_namespace = name_space;
        secintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "secIntvl")
    {
        secintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initIntvl" || name == "secIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::SpfcompItems()
    :
    initintvl{YType::uint32, "initIntvl"},
    secintvl{YType::uint32, "secIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "spfcomp-items"; yang_parent_name = "DomLvl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::~SpfcompItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_data() const
{
    if (is_presence_container) return true;
    return initintvl.is_set
	|| secintvl.is_set
	|| maxintvl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(secintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (secintvl.is_set || is_set(secintvl.yfilter)) leaf_name_data.push_back(secintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secIntvl")
    {
        secintvl = value;
        secintvl.value_namespace = name_space;
        secintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "secIntvl")
    {
        secintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initIntvl" || name == "secIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmtreeItems()
    :
    fmcasttree_list(this, {"id"})
{

    yang_name = "fmtree-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::~FmtreeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fmcasttree_list.len(); index++)
    {
        if(fmcasttree_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_operation() const
{
    for (std::size_t index=0; index<fmcasttree_list.len(); index++)
    {
        if(fmcasttree_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmtree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FmcastTree-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList>();
        c->parent = this;
        fmcasttree_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fmcasttree_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FmcastTree-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::FmcastTreeList()
    :
    id{YType::uint8, "id"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    node_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems>())
    , oifleaf_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems>())
    , oifspine_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems>())
{
    node_items->parent = this;
    oifleaf_items->parent = this;
    oifspine_items->parent = this;

    yang_name = "FmcastTree-list"; yang_parent_name = "fmtree-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::~FmcastTreeList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| name.is_set
	|| (node_items !=  nullptr && node_items->has_data())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_data())
	|| (oifspine_items !=  nullptr && oifspine_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation())
	|| (oifleaf_items !=  nullptr && oifleaf_items->has_operation())
	|| (oifspine_items !=  nullptr && oifspine_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FmcastTree-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems>();
        }
        return node_items;
    }

    if(child_yang_name == "oifleaf-items")
    {
        if(oifleaf_items == nullptr)
        {
            oifleaf_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems>();
        }
        return oifleaf_items;
    }

    if(child_yang_name == "oifspine-items")
    {
        if(oifspine_items == nullptr)
        {
            oifspine_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems>();
        }
        return oifspine_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_items != nullptr)
    {
        children["node-items"] = node_items;
    }

    if(oifleaf_items != nullptr)
    {
        children["oifleaf-items"] = oifleaf_items;
    }

    if(oifspine_items != nullptr)
    {
        children["oifspine-items"] = oifspine_items;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "oifleaf-items" || name == "oifspine-items" || name == "id" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeItems()
    :
    nodeidrec_list(this, {"addr"})
{

    yang_name = "node-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::~NodeItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<nodeidrec_list.len(); index++)
    {
        if(nodeidrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeIdRec-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList>();
        c->parent = this;
        nodeidrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nodeidrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeIdRec-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::NodeIdRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "NodeIdRec-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::~NodeIdRecList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeIdRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifleafItems()
    :
    oiflistleaf_list(this, {"idx"})
{

    yang_name = "oifleaf-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::~OifleafItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistleaf_list.len(); index++)
    {
        if(oiflistleaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifleaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListLeaf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList>();
        c->parent = this;
        oiflistleaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistleaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListLeaf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::OifListLeafList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListLeaf-list"; yang_parent_name = "oifleaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::~OifListLeafList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListLeaf-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifspineItems()
    :
    oiflistspine_list(this, {"idx"})
{

    yang_name = "oifspine-items"; yang_parent_name = "FmcastTree-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::~OifspineItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_operation() const
{
    for (std::size_t index=0; index<oiflistspine_list.len(); index++)
    {
        if(oiflistspine_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifspine-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifListSpine-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList>();
        c->parent = this;
        oiflistspine_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflistspine_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifListSpine-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::OifListSpineList()
    :
    idx{YType::uint8, "idx"},
    name{YType::str, "name"}
{

    yang_name = "OifListSpine-list"; yang_parent_name = "oifspine-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::~OifListSpineList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifListSpine-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::GrItems()
    :
    adminst{YType::enumeration, "adminSt"},
    grt3intvl{YType::uint16, "grT3Intvl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| grt3intvl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(grt3intvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (grt3intvl.is_set || is_set(grt3intvl.yfilter)) leaf_name_data.push_back(grt3intvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grT3Intvl")
    {
        grt3intvl = value;
        grt3intvl.value_namespace = name_space;
        grt3intvl.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "grT3Intvl")
    {
        grt3intvl.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "grT3Intvl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    cktt{YType::enumeration, "cktT"},
    metric{YType::uint32, "metric"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheck{YType::boolean, "authCheck"},
    networktypep2p{YType::boolean, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    passive{YType::enumeration, "passive"},
    hellopad{YType::enumeration, "helloPad"}
        ,
    adj_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>())
    , meshgrp_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems>())
    , lvl_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems>())
    , traffic_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems>())
    , rtvrfmbr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    meshgrp_items->parent = this;
    lvl_items->parent = this;
    traffic_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| cktt.is_set
	|| metric.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheck.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| passive.is_set
	|| hellopad.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (traffic_items !=  nullptr && traffic_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(cktt.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheck.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hellopad.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (traffic_items !=  nullptr && traffic_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (cktt.is_set || is_set(cktt.yfilter)) leaf_name_data.push_back(cktt.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheck.is_set || is_set(authcheck.yfilter)) leaf_name_data.push_back(authcheck.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hellopad.is_set || is_set(hellopad.yfilter)) leaf_name_data.push_back(hellopad.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "meshgrp-items")
    {
        if(meshgrp_items == nullptr)
        {
            meshgrp_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems>();
        }
        return meshgrp_items;
    }

    if(child_yang_name == "lvl-items")
    {
        if(lvl_items == nullptr)
        {
            lvl_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems>();
        }
        return lvl_items;
    }

    if(child_yang_name == "traffic-items")
    {
        if(traffic_items == nullptr)
        {
            traffic_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems>();
        }
        return traffic_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(meshgrp_items != nullptr)
    {
        children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        children["traffic-items"] = traffic_items;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cktT")
    {
        cktt = value;
        cktt.value_namespace = name_space;
        cktt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4enable")
    {
        v4enable = value;
        v4enable.value_namespace = name_space;
        v4enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6enable")
    {
        v6enable = value;
        v6enable.value_namespace = name_space;
        v6enable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authCheck")
    {
        authcheck = value;
        authcheck.value_namespace = name_space;
        authcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p = value;
        networktypep2p.value_namespace = name_space;
        networktypep2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl = value;
        lsprefreshintvl.value_namespace = name_space;
        lsprefreshintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransInterval")
    {
        retransinterval = value;
        retransinterval.value_namespace = name_space;
        retransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval = value;
        retransthrottleinterval.value_namespace = name_space;
        retransthrottleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPad")
    {
        hellopad = value;
        hellopad.value_namespace = name_space;
        hellopad.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cktT")
    {
        cktt.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "v4enable")
    {
        v4enable.yfilter = yfilter;
    }
    if(value_path == "v6enable")
    {
        v6enable.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2.yfilter = yfilter;
    }
    if(value_path == "authCheck")
    {
        authcheck.yfilter = yfilter;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p.yfilter = yfilter;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl.yfilter = yfilter;
    }
    if(value_path == "retransInterval")
    {
        retransinterval.yfilter = yfilter;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "helloPad")
    {
        hellopad.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metric" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheck" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "passive" || name == "helloPad")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"type", "sysid"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    type{YType::enumeration, "type"},
    sysid{YType::str, "sysId"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    addr_items(std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| sysid.is_set
	|| operst.is_set
	|| name.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(sysid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(sysid, "sysId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (sysid.is_set || is_set(sysid.yfilter)) leaf_name_data.push_back(sysid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysId")
    {
        sysid = value;
        sysid.value_namespace = name_space;
        sysid.value_namespace_prefix = name_space_prefix;
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "sysId")
    {
        sysid.yfilter = yfilter;
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "type" || name == "sysId" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::AddrItems()
    :
    peeripaddr_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::~AddrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peeripaddr_list.len(); index++)
    {
        if(peeripaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<peeripaddr_list.len(); index++)
    {
        if(peeripaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PeerIpAddr-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList>();
        c->parent = this;
        peeripaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peeripaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PeerIpAddr-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::PeerIpAddrList()
    :
    addr{YType::str, "addr"}
{

    yang_name = "PeerIpAddr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::~PeerIpAddrList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PeerIpAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshgrpItems()
    :
    meshgrp_list(this, {"id"})
{

    yang_name = "meshgrp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_operation() const
{
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meshgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MeshGrp-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList>();
        c->parent = this;
        meshgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : meshgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MeshGrp-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::MeshGrpList()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "MeshGrp-list"; yang_parent_name = "meshgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::~MeshGrpList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MeshGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::LvlItems()
    :
    iflvl_list(this, {"type"})
{

    yang_name = "lvl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::~LvlItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_operation() const
{
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lvl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList>();
        c->parent = this;
        iflvl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iflvl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfLvl-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::IfLvlList()
    :
    type{YType::enumeration, "type"},
    prioritylvl1{YType::uint8, "priorityLvl1"},
    prioritylvl2{YType::uint8, "priorityLvl2"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellointvllvl1{YType::uint16, "helloIntvlLvl1"},
    hellointvllvl2{YType::uint16, "helloIntvlLvl2"},
    hellomult{YType::uint16, "helloMult"},
    hellomultlvl1{YType::uint16, "helloMultLvl1"},
    hellomultlvl2{YType::uint16, "helloMultLvl2"},
    csnpintvllvl1{YType::uint16, "csnpIntvlLvl1"},
    mt0metriclvl1{YType::uint32, "mt0MetricLvl1"},
    mt0metriclvl2{YType::uint32, "mt0MetricLvl2"},
    mt2metriclvl1{YType::uint32, "mt2MetricLvl1"},
    mt2metriclvl2{YType::uint32, "mt2MetricLvl2"},
    authtype{YType::enumeration, "authType"},
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkey{YType::str, "authKey"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
    name{YType::str, "name"}
{

    yang_name = "IfLvl-list"; yang_parent_name = "lvl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::~IfLvlList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| prioritylvl1.is_set
	|| prioritylvl2.is_set
	|| hellointvl.is_set
	|| hellointvllvl1.is_set
	|| hellointvllvl2.is_set
	|| hellomult.is_set
	|| hellomultlvl1.is_set
	|| hellomultlvl2.is_set
	|| csnpintvllvl1.is_set
	|| mt0metriclvl1.is_set
	|| mt0metriclvl2.is_set
	|| mt2metriclvl1.is_set
	|| mt2metriclvl2.is_set
	|| authtype.is_set
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkey.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
	|| name.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(prioritylvl1.yfilter)
	|| ydk::is_set(prioritylvl2.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellointvllvl1.yfilter)
	|| ydk::is_set(hellointvllvl2.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(hellomultlvl1.yfilter)
	|| ydk::is_set(hellomultlvl2.yfilter)
	|| ydk::is_set(csnpintvllvl1.yfilter)
	|| ydk::is_set(mt0metriclvl1.yfilter)
	|| ydk::is_set(mt0metriclvl2.yfilter)
	|| ydk::is_set(mt2metriclvl1.yfilter)
	|| ydk::is_set(mt2metriclvl2.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfLvl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (prioritylvl1.is_set || is_set(prioritylvl1.yfilter)) leaf_name_data.push_back(prioritylvl1.get_name_leafdata());
    if (prioritylvl2.is_set || is_set(prioritylvl2.yfilter)) leaf_name_data.push_back(prioritylvl2.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellointvllvl1.is_set || is_set(hellointvllvl1.yfilter)) leaf_name_data.push_back(hellointvllvl1.get_name_leafdata());
    if (hellointvllvl2.is_set || is_set(hellointvllvl2.yfilter)) leaf_name_data.push_back(hellointvllvl2.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (hellomultlvl1.is_set || is_set(hellomultlvl1.yfilter)) leaf_name_data.push_back(hellomultlvl1.get_name_leafdata());
    if (hellomultlvl2.is_set || is_set(hellomultlvl2.yfilter)) leaf_name_data.push_back(hellomultlvl2.get_name_leafdata());
    if (csnpintvllvl1.is_set || is_set(csnpintvllvl1.yfilter)) leaf_name_data.push_back(csnpintvllvl1.get_name_leafdata());
    if (mt0metriclvl1.is_set || is_set(mt0metriclvl1.yfilter)) leaf_name_data.push_back(mt0metriclvl1.get_name_leafdata());
    if (mt0metriclvl2.is_set || is_set(mt0metriclvl2.yfilter)) leaf_name_data.push_back(mt0metriclvl2.get_name_leafdata());
    if (mt2metriclvl1.is_set || is_set(mt2metriclvl1.yfilter)) leaf_name_data.push_back(mt2metriclvl1.get_name_leafdata());
    if (mt2metriclvl2.is_set || is_set(mt2metriclvl2.yfilter)) leaf_name_data.push_back(mt2metriclvl2.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1 = value;
        prioritylvl1.value_namespace = name_space;
        prioritylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2 = value;
        prioritylvl2.value_namespace = name_space;
        prioritylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1 = value;
        hellointvllvl1.value_namespace = name_space;
        hellointvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2 = value;
        hellointvllvl2.value_namespace = name_space;
        hellointvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1 = value;
        hellomultlvl1.value_namespace = name_space;
        hellomultlvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2 = value;
        hellomultlvl2.value_namespace = name_space;
        hellomultlvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1 = value;
        csnpintvllvl1.value_namespace = name_space;
        csnpintvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1 = value;
        mt0metriclvl1.value_namespace = name_space;
        mt0metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2 = value;
        mt0metriclvl2.value_namespace = name_space;
        mt0metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1 = value;
        mt2metriclvl1.value_namespace = name_space;
        mt2metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2 = value;
        mt2metriclvl2.value_namespace = name_space;
        mt2metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1.yfilter = yfilter;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priorityLvl1" || name == "priorityLvl2" || name == "helloIntvl" || name == "helloIntvlLvl1" || name == "helloIntvlLvl2" || name == "helloMult" || name == "helloMultLvl1" || name == "helloMultLvl2" || name == "csnpIntvlLvl1" || name == "mt0MetricLvl1" || name == "mt0MetricLvl2" || name == "mt2MetricLvl1" || name == "mt2MetricLvl2" || name == "authType" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKey" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "name")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::TrafficItems()
{

    yang_name = "traffic-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::~InterleakItems()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_children() const
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

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::IsisItems::IfItems::IfItems()
    :
    internalif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::IfItems::~IfItems()
{
}

bool System::IsisItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalIf-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList>();
        c->parent = this;
        internalif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalIf-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::InternalIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    cktt{YType::enumeration, "cktT"},
    metric{YType::uint32, "metric"},
    ctrl{YType::str, "ctrl"},
    v4enable{YType::boolean, "v4enable"},
    v6enable{YType::boolean, "v6enable"},
    authchecklvl1{YType::boolean, "authCheckLvl1"},
    authchecklvl2{YType::boolean, "authCheckLvl2"},
    authcheck{YType::boolean, "authCheck"},
    networktypep2p{YType::boolean, "networkTypeP2P"},
    lsprefreshintvl{YType::uint32, "lspRefreshIntvl"},
    retransinterval{YType::uint16, "retransInterval"},
    retransthrottleinterval{YType::uint16, "retransThrottleInterval"},
    passive{YType::enumeration, "passive"},
    hellopad{YType::enumeration, "helloPad"},
    instance{YType::str, "instance"},
    dom{YType::str, "dom"}
        ,
    meshgrp_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems>())
    , lvl_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems>())
    , traffic_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::TrafficItems>())
    , rtvrfmbr_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems>())
{
    meshgrp_items->parent = this;
    lvl_items->parent = this;
    traffic_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "InternalIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IsisItems::IfItems::InternalIfList::~InternalIfList()
{
}

bool System::IsisItems::IfItems::InternalIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| cktt.is_set
	|| metric.is_set
	|| ctrl.is_set
	|| v4enable.is_set
	|| v6enable.is_set
	|| authchecklvl1.is_set
	|| authchecklvl2.is_set
	|| authcheck.is_set
	|| networktypep2p.is_set
	|| lsprefreshintvl.is_set
	|| retransinterval.is_set
	|| retransthrottleinterval.is_set
	|| passive.is_set
	|| hellopad.is_set
	|| instance.is_set
	|| dom.is_set
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_data())
	|| (lvl_items !=  nullptr && lvl_items->has_data())
	|| (traffic_items !=  nullptr && traffic_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IsisItems::IfItems::InternalIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(cktt.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(v4enable.yfilter)
	|| ydk::is_set(v6enable.yfilter)
	|| ydk::is_set(authchecklvl1.yfilter)
	|| ydk::is_set(authchecklvl2.yfilter)
	|| ydk::is_set(authcheck.yfilter)
	|| ydk::is_set(networktypep2p.yfilter)
	|| ydk::is_set(lsprefreshintvl.yfilter)
	|| ydk::is_set(retransinterval.yfilter)
	|| ydk::is_set(retransthrottleinterval.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(hellopad.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(dom.yfilter)
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_operation())
	|| (lvl_items !=  nullptr && lvl_items->has_operation())
	|| (traffic_items !=  nullptr && traffic_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IsisItems::IfItems::InternalIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/isis-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IsisItems::IfItems::InternalIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (cktt.is_set || is_set(cktt.yfilter)) leaf_name_data.push_back(cktt.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (v4enable.is_set || is_set(v4enable.yfilter)) leaf_name_data.push_back(v4enable.get_name_leafdata());
    if (v6enable.is_set || is_set(v6enable.yfilter)) leaf_name_data.push_back(v6enable.get_name_leafdata());
    if (authchecklvl1.is_set || is_set(authchecklvl1.yfilter)) leaf_name_data.push_back(authchecklvl1.get_name_leafdata());
    if (authchecklvl2.is_set || is_set(authchecklvl2.yfilter)) leaf_name_data.push_back(authchecklvl2.get_name_leafdata());
    if (authcheck.is_set || is_set(authcheck.yfilter)) leaf_name_data.push_back(authcheck.get_name_leafdata());
    if (networktypep2p.is_set || is_set(networktypep2p.yfilter)) leaf_name_data.push_back(networktypep2p.get_name_leafdata());
    if (lsprefreshintvl.is_set || is_set(lsprefreshintvl.yfilter)) leaf_name_data.push_back(lsprefreshintvl.get_name_leafdata());
    if (retransinterval.is_set || is_set(retransinterval.yfilter)) leaf_name_data.push_back(retransinterval.get_name_leafdata());
    if (retransthrottleinterval.is_set || is_set(retransthrottleinterval.yfilter)) leaf_name_data.push_back(retransthrottleinterval.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (hellopad.is_set || is_set(hellopad.yfilter)) leaf_name_data.push_back(hellopad.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (dom.is_set || is_set(dom.yfilter)) leaf_name_data.push_back(dom.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "meshgrp-items")
    {
        if(meshgrp_items == nullptr)
        {
            meshgrp_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems>();
        }
        return meshgrp_items;
    }

    if(child_yang_name == "lvl-items")
    {
        if(lvl_items == nullptr)
        {
            lvl_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems>();
        }
        return lvl_items;
    }

    if(child_yang_name == "traffic-items")
    {
        if(traffic_items == nullptr)
        {
            traffic_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::TrafficItems>();
        }
        return traffic_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(meshgrp_items != nullptr)
    {
        children["meshgrp-items"] = meshgrp_items;
    }

    if(lvl_items != nullptr)
    {
        children["lvl-items"] = lvl_items;
    }

    if(traffic_items != nullptr)
    {
        children["traffic-items"] = traffic_items;
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

void System::IsisItems::IfItems::InternalIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cktT")
    {
        cktt = value;
        cktt.value_namespace = name_space;
        cktt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v4enable")
    {
        v4enable = value;
        v4enable.value_namespace = name_space;
        v4enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6enable")
    {
        v6enable = value;
        v6enable.value_namespace = name_space;
        v6enable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authCheck")
    {
        authcheck = value;
        authcheck.value_namespace = name_space;
        authcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p = value;
        networktypep2p.value_namespace = name_space;
        networktypep2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl = value;
        lsprefreshintvl.value_namespace = name_space;
        lsprefreshintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransInterval")
    {
        retransinterval = value;
        retransinterval.value_namespace = name_space;
        retransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval = value;
        retransthrottleinterval.value_namespace = name_space;
        retransthrottleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPad")
    {
        hellopad = value;
        hellopad.value_namespace = name_space;
        hellopad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dom")
    {
        dom = value;
        dom.value_namespace = name_space;
        dom.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cktT")
    {
        cktt.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "v4enable")
    {
        v4enable.yfilter = yfilter;
    }
    if(value_path == "v6enable")
    {
        v6enable.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl1")
    {
        authchecklvl1.yfilter = yfilter;
    }
    if(value_path == "authCheckLvl2")
    {
        authchecklvl2.yfilter = yfilter;
    }
    if(value_path == "authCheck")
    {
        authcheck.yfilter = yfilter;
    }
    if(value_path == "networkTypeP2P")
    {
        networktypep2p.yfilter = yfilter;
    }
    if(value_path == "lspRefreshIntvl")
    {
        lsprefreshintvl.yfilter = yfilter;
    }
    if(value_path == "retransInterval")
    {
        retransinterval.yfilter = yfilter;
    }
    if(value_path == "retransThrottleInterval")
    {
        retransthrottleinterval.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "helloPad")
    {
        hellopad.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "dom")
    {
        dom.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "meshgrp-items" || name == "lvl-items" || name == "traffic-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "cktT" || name == "metric" || name == "ctrl" || name == "v4enable" || name == "v6enable" || name == "authCheckLvl1" || name == "authCheckLvl2" || name == "authCheck" || name == "networkTypeP2P" || name == "lspRefreshIntvl" || name == "retransInterval" || name == "retransThrottleInterval" || name == "passive" || name == "helloPad" || name == "instance" || name == "dom")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshgrpItems()
    :
    meshgrp_list(this, {"id"})
{

    yang_name = "meshgrp-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_operation() const
{
    for (std::size_t index=0; index<meshgrp_list.len(); index++)
    {
        if(meshgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meshgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MeshGrp-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList>();
        c->parent = this;
        meshgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : meshgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MeshGrp-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::MeshGrpList()
    :
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "MeshGrp-list"; yang_parent_name = "meshgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::~MeshGrpList()
{
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MeshGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::LvlItems::LvlItems()
    :
    iflvl_list(this, {"type"})
{

    yang_name = "lvl-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::LvlItems::~LvlItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_operation() const
{
    for (std::size_t index=0; index<iflvl_list.len(); index++)
    {
        if(iflvl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::LvlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lvl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::LvlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfLvl-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList>();
        c->parent = this;
        iflvl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iflvl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfLvl-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::IfLvlList()
    :
    type{YType::enumeration, "type"},
    prioritylvl1{YType::uint8, "priorityLvl1"},
    prioritylvl2{YType::uint8, "priorityLvl2"},
    hellointvl{YType::uint16, "helloIntvl"},
    hellointvllvl1{YType::uint16, "helloIntvlLvl1"},
    hellointvllvl2{YType::uint16, "helloIntvlLvl2"},
    hellomult{YType::uint16, "helloMult"},
    hellomultlvl1{YType::uint16, "helloMultLvl1"},
    hellomultlvl2{YType::uint16, "helloMultLvl2"},
    csnpintvllvl1{YType::uint16, "csnpIntvlLvl1"},
    mt0metriclvl1{YType::uint32, "mt0MetricLvl1"},
    mt0metriclvl2{YType::uint32, "mt0MetricLvl2"},
    mt2metriclvl1{YType::uint32, "mt2MetricLvl1"},
    mt2metriclvl2{YType::uint32, "mt2MetricLvl2"},
    authtype{YType::enumeration, "authType"},
    authtypelvl1{YType::enumeration, "authTypeLvl1"},
    authtypelvl2{YType::enumeration, "authTypeLvl2"},
    authkey{YType::str, "authKey"},
    authkeylvl1{YType::str, "authKeyLvl1"},
    authkeylvl2{YType::str, "authKeyLvl2"},
    name{YType::str, "name"}
{

    yang_name = "IfLvl-list"; yang_parent_name = "lvl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::~IfLvlList()
{
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| prioritylvl1.is_set
	|| prioritylvl2.is_set
	|| hellointvl.is_set
	|| hellointvllvl1.is_set
	|| hellointvllvl2.is_set
	|| hellomult.is_set
	|| hellomultlvl1.is_set
	|| hellomultlvl2.is_set
	|| csnpintvllvl1.is_set
	|| mt0metriclvl1.is_set
	|| mt0metriclvl2.is_set
	|| mt2metriclvl1.is_set
	|| mt2metriclvl2.is_set
	|| authtype.is_set
	|| authtypelvl1.is_set
	|| authtypelvl2.is_set
	|| authkey.is_set
	|| authkeylvl1.is_set
	|| authkeylvl2.is_set
	|| name.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(prioritylvl1.yfilter)
	|| ydk::is_set(prioritylvl2.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(hellointvllvl1.yfilter)
	|| ydk::is_set(hellointvllvl2.yfilter)
	|| ydk::is_set(hellomult.yfilter)
	|| ydk::is_set(hellomultlvl1.yfilter)
	|| ydk::is_set(hellomultlvl2.yfilter)
	|| ydk::is_set(csnpintvllvl1.yfilter)
	|| ydk::is_set(mt0metriclvl1.yfilter)
	|| ydk::is_set(mt0metriclvl2.yfilter)
	|| ydk::is_set(mt2metriclvl1.yfilter)
	|| ydk::is_set(mt2metriclvl2.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authtypelvl1.yfilter)
	|| ydk::is_set(authtypelvl2.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(authkeylvl1.yfilter)
	|| ydk::is_set(authkeylvl2.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfLvl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (prioritylvl1.is_set || is_set(prioritylvl1.yfilter)) leaf_name_data.push_back(prioritylvl1.get_name_leafdata());
    if (prioritylvl2.is_set || is_set(prioritylvl2.yfilter)) leaf_name_data.push_back(prioritylvl2.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (hellointvllvl1.is_set || is_set(hellointvllvl1.yfilter)) leaf_name_data.push_back(hellointvllvl1.get_name_leafdata());
    if (hellointvllvl2.is_set || is_set(hellointvllvl2.yfilter)) leaf_name_data.push_back(hellointvllvl2.get_name_leafdata());
    if (hellomult.is_set || is_set(hellomult.yfilter)) leaf_name_data.push_back(hellomult.get_name_leafdata());
    if (hellomultlvl1.is_set || is_set(hellomultlvl1.yfilter)) leaf_name_data.push_back(hellomultlvl1.get_name_leafdata());
    if (hellomultlvl2.is_set || is_set(hellomultlvl2.yfilter)) leaf_name_data.push_back(hellomultlvl2.get_name_leafdata());
    if (csnpintvllvl1.is_set || is_set(csnpintvllvl1.yfilter)) leaf_name_data.push_back(csnpintvllvl1.get_name_leafdata());
    if (mt0metriclvl1.is_set || is_set(mt0metriclvl1.yfilter)) leaf_name_data.push_back(mt0metriclvl1.get_name_leafdata());
    if (mt0metriclvl2.is_set || is_set(mt0metriclvl2.yfilter)) leaf_name_data.push_back(mt0metriclvl2.get_name_leafdata());
    if (mt2metriclvl1.is_set || is_set(mt2metriclvl1.yfilter)) leaf_name_data.push_back(mt2metriclvl1.get_name_leafdata());
    if (mt2metriclvl2.is_set || is_set(mt2metriclvl2.yfilter)) leaf_name_data.push_back(mt2metriclvl2.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authtypelvl1.is_set || is_set(authtypelvl1.yfilter)) leaf_name_data.push_back(authtypelvl1.get_name_leafdata());
    if (authtypelvl2.is_set || is_set(authtypelvl2.yfilter)) leaf_name_data.push_back(authtypelvl2.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (authkeylvl1.is_set || is_set(authkeylvl1.yfilter)) leaf_name_data.push_back(authkeylvl1.get_name_leafdata());
    if (authkeylvl2.is_set || is_set(authkeylvl2.yfilter)) leaf_name_data.push_back(authkeylvl2.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1 = value;
        prioritylvl1.value_namespace = name_space;
        prioritylvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2 = value;
        prioritylvl2.value_namespace = name_space;
        prioritylvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1 = value;
        hellointvllvl1.value_namespace = name_space;
        hellointvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2 = value;
        hellointvllvl2.value_namespace = name_space;
        hellointvllvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMult")
    {
        hellomult = value;
        hellomult.value_namespace = name_space;
        hellomult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1 = value;
        hellomultlvl1.value_namespace = name_space;
        hellomultlvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2 = value;
        hellomultlvl2.value_namespace = name_space;
        hellomultlvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1 = value;
        csnpintvllvl1.value_namespace = name_space;
        csnpintvllvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1 = value;
        mt0metriclvl1.value_namespace = name_space;
        mt0metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2 = value;
        mt0metriclvl2.value_namespace = name_space;
        mt0metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1 = value;
        mt2metriclvl1.value_namespace = name_space;
        mt2metriclvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2 = value;
        mt2metriclvl2.value_namespace = name_space;
        mt2metriclvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "priorityLvl1")
    {
        prioritylvl1.yfilter = yfilter;
    }
    if(value_path == "priorityLvl2")
    {
        prioritylvl2.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl1")
    {
        hellointvllvl1.yfilter = yfilter;
    }
    if(value_path == "helloIntvlLvl2")
    {
        hellointvllvl2.yfilter = yfilter;
    }
    if(value_path == "helloMult")
    {
        hellomult.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl1")
    {
        hellomultlvl1.yfilter = yfilter;
    }
    if(value_path == "helloMultLvl2")
    {
        hellomultlvl2.yfilter = yfilter;
    }
    if(value_path == "csnpIntvlLvl1")
    {
        csnpintvllvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl1")
    {
        mt0metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt0MetricLvl2")
    {
        mt0metriclvl2.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl1")
    {
        mt2metriclvl1.yfilter = yfilter;
    }
    if(value_path == "mt2MetricLvl2")
    {
        mt2metriclvl2.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl1")
    {
        authtypelvl1.yfilter = yfilter;
    }
    if(value_path == "authTypeLvl2")
    {
        authtypelvl2.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl1")
    {
        authkeylvl1.yfilter = yfilter;
    }
    if(value_path == "authKeyLvl2")
    {
        authkeylvl2.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "priorityLvl1" || name == "priorityLvl2" || name == "helloIntvl" || name == "helloIntvlLvl1" || name == "helloIntvlLvl2" || name == "helloMult" || name == "helloMultLvl1" || name == "helloMultLvl2" || name == "csnpIntvlLvl1" || name == "mt0MetricLvl1" || name == "mt0MetricLvl2" || name == "mt2MetricLvl1" || name == "mt2MetricLvl2" || name == "authType" || name == "authTypeLvl1" || name == "authTypeLvl2" || name == "authKey" || name == "authKeyLvl1" || name == "authKeyLvl2" || name == "name")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::TrafficItems()
{

    yang_name = "traffic-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::TrafficItems::~TrafficItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::TrafficItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::TrafficItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::TrafficItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::TrafficItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::TrafficItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::get_children() const
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

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LacpItems::LacpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::LacpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "lacp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LacpItems::~LacpItems()
{
}

bool System::LacpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::LacpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::LacpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LacpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LacpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LacpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::LacpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LacpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::LacpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::LacpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LacpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}


}
}

