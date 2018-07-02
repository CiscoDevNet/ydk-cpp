
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_24.hpp"
#include "Cisco_NX_OS_device_25.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::CounterList()
    :
    name{YType::str, "name"},
    start{YType::uint64, "start"},
    end{YType::uint64, "end"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "Counter-list"; yang_parent_name = "counter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::~CounterList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| start.is_set
	|| end.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Counter-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
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

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
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

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "start" || name == "end" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::StpItems::StpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::StpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "stp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::~StpItems()
{
}

bool System::StpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::StpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::StpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::StpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::StpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::StpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::StpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::StpItems::InstItems::InstItems()
    :
    mode{YType::str, "mode"},
    lcissu{YType::enumeration, "lcIssu"},
    pathcostop{YType::enumeration, "pathcostOp"},
    fcoe{YType::enumeration, "fcoe"},
    bridge{YType::enumeration, "bridge"},
    loopguard{YType::enumeration, "loopguard"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::StpItems::InstItems::IfItems>())
    , mstent_items(std::make_shared<System::StpItems::InstItems::MstentItems>())
    , pseudo_items(std::make_shared<System::StpItems::InstItems::PseudoItems>())
    , vlan_items(std::make_shared<System::StpItems::InstItems::VlanItems>())
{
    if_items->parent = this;
    mstent_items->parent = this;
    pseudo_items->parent = this;
    vlan_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "stp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::~InstItems()
{
}

bool System::StpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| lcissu.is_set
	|| pathcostop.is_set
	|| fcoe.is_set
	|| bridge.is_set
	|| loopguard.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (mstent_items !=  nullptr && mstent_items->has_data())
	|| (pseudo_items !=  nullptr && pseudo_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::StpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(lcissu.yfilter)
	|| ydk::is_set(pathcostop.yfilter)
	|| ydk::is_set(fcoe.yfilter)
	|| ydk::is_set(bridge.yfilter)
	|| ydk::is_set(loopguard.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (mstent_items !=  nullptr && mstent_items->has_operation())
	|| (pseudo_items !=  nullptr && pseudo_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::StpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (lcissu.is_set || is_set(lcissu.yfilter)) leaf_name_data.push_back(lcissu.get_name_leafdata());
    if (pathcostop.is_set || is_set(pathcostop.yfilter)) leaf_name_data.push_back(pathcostop.get_name_leafdata());
    if (fcoe.is_set || is_set(fcoe.yfilter)) leaf_name_data.push_back(fcoe.get_name_leafdata());
    if (bridge.is_set || is_set(bridge.yfilter)) leaf_name_data.push_back(bridge.get_name_leafdata());
    if (loopguard.is_set || is_set(loopguard.yfilter)) leaf_name_data.push_back(loopguard.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::StpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "mstent-items")
    {
        if(mstent_items == nullptr)
        {
            mstent_items = std::make_shared<System::StpItems::InstItems::MstentItems>();
        }
        return mstent_items;
    }

    if(child_yang_name == "pseudo-items")
    {
        if(pseudo_items == nullptr)
        {
            pseudo_items = std::make_shared<System::StpItems::InstItems::PseudoItems>();
        }
        return pseudo_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(mstent_items != nullptr)
    {
        children["mstent-items"] = mstent_items;
    }

    if(pseudo_items != nullptr)
    {
        children["pseudo-items"] = pseudo_items;
    }

    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    return children;
}

void System::StpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcIssu")
    {
        lcissu = value;
        lcissu.value_namespace = name_space;
        lcissu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathcostOp")
    {
        pathcostop = value;
        pathcostop.value_namespace = name_space;
        pathcostop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcoe")
    {
        fcoe = value;
        fcoe.value_namespace = name_space;
        fcoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge")
    {
        bridge = value;
        bridge.value_namespace = name_space;
        bridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopguard")
    {
        loopguard = value;
        loopguard.value_namespace = name_space;
        loopguard.value_namespace_prefix = name_space_prefix;
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

void System::StpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "lcIssu")
    {
        lcissu.yfilter = yfilter;
    }
    if(value_path == "pathcostOp")
    {
        pathcostop.yfilter = yfilter;
    }
    if(value_path == "fcoe")
    {
        fcoe.yfilter = yfilter;
    }
    if(value_path == "bridge")
    {
        bridge.yfilter = yfilter;
    }
    if(value_path == "loopguard")
    {
        loopguard.yfilter = yfilter;
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

bool System::StpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "mstent-items" || name == "pseudo-items" || name == "vlan-items" || name == "mode" || name == "lcIssu" || name == "pathcostOp" || name == "fcoe" || name == "bridge" || name == "loopguard" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::IfItems::~IfItems()
{
}

bool System::StpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::get_children() const
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

void System::StpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    mode{YType::enumeration, "mode"},
    ctrl{YType::str, "ctrl"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    bpdufilter{YType::enumeration, "bpdufilter"},
    bpduguard{YType::enumeration, "bpduguard"},
    lcissu{YType::enumeration, "lcIssu"},
    linktype{YType::enumeration, "linkType"},
    priority{YType::uint8, "priority"},
    portfast{YType::enumeration, "portFast"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vlan_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems>())
    , rtvrfmbr_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    vlan_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| mode.is_set
	|| ctrl.is_set
	|| cost.is_set
	|| guard.is_set
	|| bpdufilter.is_set
	|| bpduguard.is_set
	|| lcissu.is_set
	|| linktype.is_set
	|| priority.is_set
	|| portfast.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::StpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(lcissu.yfilter)
	|| ydk::is_set(linktype.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(portfast.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::StpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (lcissu.is_set || is_set(lcissu.yfilter)) leaf_name_data.push_back(lcissu.get_name_leafdata());
    if (linktype.is_set || is_set(linktype.yfilter)) leaf_name_data.push_back(linktype.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (portfast.is_set || is_set(portfast.yfilter)) leaf_name_data.push_back(portfast.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
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

void System::StpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcIssu")
    {
        lcissu = value;
        lcissu.value_namespace = name_space;
        lcissu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkType")
    {
        linktype = value;
        linktype.value_namespace = name_space;
        linktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portFast")
    {
        portfast = value;
        portfast.value_namespace = name_space;
        portfast.value_namespace_prefix = name_space_prefix;
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

void System::StpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "lcIssu")
    {
        lcissu.yfilter = yfilter;
    }
    if(value_path == "linkType")
    {
        linktype.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "portFast")
    {
        portfast.yfilter = yfilter;
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

bool System::StpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "mode" || name == "ctrl" || name == "cost" || name == "guard" || name == "bpdufilter" || name == "bpduguard" || name == "lcIssu" || name == "linkType" || name == "priority" || name == "portFast" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanItems()
    :
    vlancfg_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlancfg_list.len(); index++)
    {
        if(vlancfg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlancfg_list.len(); index++)
    {
        if(vlancfg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanCfg-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList>();
        c->parent = this;
        vlancfg_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlancfg_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanCfg-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::VlanCfgList()
    :
    vlanid{YType::uint16, "vlanId"},
    priority{YType::uint8, "priority"},
    cost{YType::uint32, "cost"}
{

    yang_name = "VlanCfg-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::~VlanCfgList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| priority.is_set
	|| cost.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanCfg-list";
    ADD_KEY_TOKEN(vlanid, "vlanId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "priority" || name == "cost")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstentItems()
    :
    maxhops{YType::uint8, "maxHops"},
    simulate{YType::enumeration, "simulate"},
    opererr{YType::str, "operErr"},
    adminst{YType::enumeration, "adminSt"},
    fwdtime{YType::uint8, "fwdTime"},
    hellotime{YType::uint8, "helloTime"},
    maxage{YType::uint8, "maxAge"}
        ,
    mst_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems>())
{
    mst_items->parent = this;

    yang_name = "mstent-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::~MstentItems()
{
}

bool System::StpItems::InstItems::MstentItems::has_data() const
{
    if (is_presence_container) return true;
    return maxhops.is_set
	|| simulate.is_set
	|| opererr.is_set
	|| adminst.is_set
	|| fwdtime.is_set
	|| hellotime.is_set
	|| maxage.is_set
	|| (mst_items !=  nullptr && mst_items->has_data());
}

bool System::StpItems::InstItems::MstentItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(simulate.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fwdtime.yfilter)
	|| ydk::is_set(hellotime.yfilter)
	|| ydk::is_set(maxage.yfilter)
	|| (mst_items !=  nullptr && mst_items->has_operation());
}

std::string System::StpItems::InstItems::MstentItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (simulate.is_set || is_set(simulate.yfilter)) leaf_name_data.push_back(simulate.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fwdtime.is_set || is_set(fwdtime.yfilter)) leaf_name_data.push_back(fwdtime.get_name_leafdata());
    if (hellotime.is_set || is_set(hellotime.yfilter)) leaf_name_data.push_back(hellotime.get_name_leafdata());
    if (maxage.is_set || is_set(maxage.yfilter)) leaf_name_data.push_back(maxage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-items")
    {
        if(mst_items == nullptr)
        {
            mst_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems>();
        }
        return mst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mst_items != nullptr)
    {
        children["mst-items"] = mst_items;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simulate")
    {
        simulate = value;
        simulate.value_namespace = name_space;
        simulate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdTime")
    {
        fwdtime = value;
        fwdtime.value_namespace = name_space;
        fwdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloTime")
    {
        hellotime = value;
        hellotime.value_namespace = name_space;
        hellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxAge")
    {
        maxage = value;
        maxage.value_namespace = name_space;
        maxage.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "simulate")
    {
        simulate.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "fwdTime")
    {
        fwdtime.yfilter = yfilter;
    }
    if(value_path == "helloTime")
    {
        hellotime.yfilter = yfilter;
    }
    if(value_path == "maxAge")
    {
        maxage.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-items" || name == "maxHops" || name == "simulate" || name == "operErr" || name == "adminSt" || name == "fwdTime" || name == "helloTime" || name == "maxAge")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstItems()
    :
    region_list(this, {"name"})
{

    yang_name = "mst-items"; yang_parent_name = "mstent-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::MstItems::~MstItems()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<region_list.len(); index++)
    {
        if(region_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_operation() const
{
    for (std::size_t index=0; index<region_list.len(); index++)
    {
        if(region_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/mstent-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::MstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Region-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList>();
        c->parent = this;
        region_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : region_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Region-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::RegionList()
    :
    name{YType::str, "name"},
    regname{YType::str, "regName"},
    rev{YType::uint16, "rev"}
        ,
    mst_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_>())
{
    mst_items->parent = this;

    yang_name = "Region-list"; yang_parent_name = "mst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::~RegionList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| regname.is_set
	|| rev.is_set
	|| (mst_items !=  nullptr && mst_items->has_data());
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(regname.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| (mst_items !=  nullptr && mst_items->has_operation());
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/mstent-items/mst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Region-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::RegionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (regname.is_set || is_set(regname.yfilter)) leaf_name_data.push_back(regname.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::RegionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-items")
    {
        if(mst_items == nullptr)
        {
            mst_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_>();
        }
        return mst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::RegionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mst_items != nullptr)
    {
        children["mst-items"] = mst_items;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regName")
    {
        regname = value;
        regname.value_namespace = name_space;
        regname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "regName")
    {
        regname.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-items" || name == "name" || name == "regName" || name == "rev")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstItems_()
    :
    mstdom_list(this, {"id"})
{

    yang_name = "mst-items"; yang_parent_name = "Region-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::~MstItems_()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mstdom_list.len(); index++)
    {
        if(mstdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::has_operation() const
{
    for (std::size_t index=0; index<mstdom_list.len(); index++)
    {
        if(mstdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MstDom-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList>();
        c->parent = this;
        mstdom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mstdom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MstDom-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::MstDomList()
    :
    id{YType::uint16, "id"},
    root{YType::enumeration, "root"},
    diameter{YType::uint8, "diameter"},
    hellotime{YType::uint8, "helloTime"},
    priority{YType::uint16, "priority"},
    name{YType::str, "name"}
        ,
    vlan_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "MstDom-list"; yang_parent_name = "mst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::~MstDomList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| root.is_set
	|| diameter.is_set
	|| hellotime.is_set
	|| priority.is_set
	|| name.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hellotime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MstDom-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hellotime.is_set || is_set(hellotime.yfilter)) leaf_name_data.push_back(hellotime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloTime")
    {
        hellotime = value;
        hellotime.value_namespace = name_space;
        hellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "helloTime")
    {
        hellotime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "id" || name == "root" || name == "diameter" || name == "helloTime" || name == "priority" || name == "name")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanItems()
    :
    vlanrange_list(this, {"start", "end"})
{

    yang_name = "vlan-items"; yang_parent_name = "MstDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanrange_list.len(); index++)
    {
        if(vlanrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlanrange_list.len(); index++)
    {
        if(vlanrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanRange-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList>();
        c->parent = this;
        vlanrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanRange-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::VlanRangeList()
    :
    start{YType::uint16, "start"},
    end{YType::uint16, "end"}
{

    yang_name = "VlanRange-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::~VlanRangeList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| end.is_set;
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanRange-list";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end")
        return true;
    return false;
}

System::StpItems::InstItems::PseudoItems::PseudoItems()
{

    yang_name = "pseudo-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::PseudoItems::~PseudoItems()
{
}

bool System::StpItems::InstItems::PseudoItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::StpItems::InstItems::PseudoItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::PseudoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::PseudoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::PseudoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::PseudoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::PseudoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::PseudoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::PseudoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::PseudoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::StpItems::InstItems::VlanItems::VlanItems()
    :
    vlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vlan-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList>();
        c->parent = this;
        vlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vlan-list")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::VlanList()
    :
    id{YType::uint16, "id"},
    priority{YType::enumeration, "priority"},
    root{YType::enumeration, "root"},
    diameter{YType::uint8, "diameter"},
    opererr{YType::str, "operErr"},
    protocol{YType::enumeration, "protocol"},
    bridgepriority{YType::uint16, "bridgePriority"},
    bridgeaddress{YType::str, "bridgeAddress"},
    rootpriority{YType::uint16, "rootPriority"},
    rootaddress{YType::str, "rootAddress"},
    rootportpriority{YType::uint16, "rootPortPriority"},
    rootportnumber{YType::uint16, "rootPortNumber"},
    rootport{YType::str, "rootPort"},
    rootpathcost{YType::uint32, "rootPathCost"},
    adminst{YType::enumeration, "adminSt"},
    fwdtime{YType::uint8, "fwdTime"},
    hellotime{YType::uint8, "helloTime"},
    maxage{YType::uint8, "maxAge"}
        ,
    if_items(std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems>())
{
    if_items->parent = this;

    yang_name = "Vlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::VlanItems::VlanList::~VlanList()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| priority.is_set
	|| root.is_set
	|| diameter.is_set
	|| opererr.is_set
	|| protocol.is_set
	|| bridgepriority.is_set
	|| bridgeaddress.is_set
	|| rootpriority.is_set
	|| rootaddress.is_set
	|| rootportpriority.is_set
	|| rootportnumber.is_set
	|| rootport.is_set
	|| rootpathcost.is_set
	|| adminst.is_set
	|| fwdtime.is_set
	|| hellotime.is_set
	|| maxage.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(bridgepriority.yfilter)
	|| ydk::is_set(bridgeaddress.yfilter)
	|| ydk::is_set(rootpriority.yfilter)
	|| ydk::is_set(rootaddress.yfilter)
	|| ydk::is_set(rootportpriority.yfilter)
	|| ydk::is_set(rootportnumber.yfilter)
	|| ydk::is_set(rootport.yfilter)
	|| ydk::is_set(rootpathcost.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fwdtime.yfilter)
	|| ydk::is_set(hellotime.yfilter)
	|| ydk::is_set(maxage.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::StpItems::InstItems::VlanItems::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::VlanItems::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (bridgepriority.is_set || is_set(bridgepriority.yfilter)) leaf_name_data.push_back(bridgepriority.get_name_leafdata());
    if (bridgeaddress.is_set || is_set(bridgeaddress.yfilter)) leaf_name_data.push_back(bridgeaddress.get_name_leafdata());
    if (rootpriority.is_set || is_set(rootpriority.yfilter)) leaf_name_data.push_back(rootpriority.get_name_leafdata());
    if (rootaddress.is_set || is_set(rootaddress.yfilter)) leaf_name_data.push_back(rootaddress.get_name_leafdata());
    if (rootportpriority.is_set || is_set(rootportpriority.yfilter)) leaf_name_data.push_back(rootportpriority.get_name_leafdata());
    if (rootportnumber.is_set || is_set(rootportnumber.yfilter)) leaf_name_data.push_back(rootportnumber.get_name_leafdata());
    if (rootport.is_set || is_set(rootport.yfilter)) leaf_name_data.push_back(rootport.get_name_leafdata());
    if (rootpathcost.is_set || is_set(rootpathcost.yfilter)) leaf_name_data.push_back(rootpathcost.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fwdtime.is_set || is_set(fwdtime.yfilter)) leaf_name_data.push_back(fwdtime.get_name_leafdata());
    if (hellotime.is_set || is_set(hellotime.yfilter)) leaf_name_data.push_back(hellotime.get_name_leafdata());
    if (maxage.is_set || is_set(maxage.yfilter)) leaf_name_data.push_back(maxage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::VlanItems::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::VlanItems::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::StpItems::InstItems::VlanItems::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority = value;
        bridgepriority.value_namespace = name_space;
        bridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress = value;
        bridgeaddress.value_namespace = name_space;
        bridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPriority")
    {
        rootpriority = value;
        rootpriority.value_namespace = name_space;
        rootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootAddress")
    {
        rootaddress = value;
        rootaddress.value_namespace = name_space;
        rootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority = value;
        rootportpriority.value_namespace = name_space;
        rootportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber = value;
        rootportnumber.value_namespace = name_space;
        rootportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPort")
    {
        rootport = value;
        rootport.value_namespace = name_space;
        rootport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost = value;
        rootpathcost.value_namespace = name_space;
        rootpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdTime")
    {
        fwdtime = value;
        fwdtime.value_namespace = name_space;
        fwdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloTime")
    {
        hellotime = value;
        hellotime.value_namespace = name_space;
        hellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxAge")
    {
        maxage = value;
        maxage.value_namespace = name_space;
        maxage.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::VlanItems::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority.yfilter = yfilter;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress.yfilter = yfilter;
    }
    if(value_path == "rootPriority")
    {
        rootpriority.yfilter = yfilter;
    }
    if(value_path == "rootAddress")
    {
        rootaddress.yfilter = yfilter;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority.yfilter = yfilter;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber.yfilter = yfilter;
    }
    if(value_path == "rootPort")
    {
        rootport.yfilter = yfilter;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "fwdTime")
    {
        fwdtime.yfilter = yfilter;
    }
    if(value_path == "helloTime")
    {
        hellotime.yfilter = yfilter;
    }
    if(value_path == "maxAge")
    {
        maxage.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "id" || name == "priority" || name == "root" || name == "diameter" || name == "operErr" || name == "protocol" || name == "bridgePriority" || name == "bridgeAddress" || name == "rootPriority" || name == "rootAddress" || name == "rootPortPriority" || name == "rootPortNumber" || name == "rootPort" || name == "rootPathCost" || name == "adminSt" || name == "fwdTime" || name == "helloTime" || name == "maxAge")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::IfItems()
    :
    vlanif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::~IfItems()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanif_list.len(); index++)
    {
        if(vlanif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<vlanif_list.len(); index++)
    {
        if(vlanif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanIf-list")
    {
        auto c = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList>();
        c->parent = this;
        vlanif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanIf-list")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::VlanIfList()
    :
    id{YType::str, "id"},
    designatedrootpriority{YType::uint16, "designatedRootPriority"},
    designatedrootaddress{YType::str, "designatedRootAddress"},
    designatedrootcost{YType::uint32, "designatedRootCost"},
    designatedbridgepriority{YType::uint16, "designatedBridgePriority"},
    designatedbridgeaddress{YType::str, "designatedBridgeAddress"},
    designatedportpriority{YType::uint16, "designatedPortPriority"},
    designatedportnumber{YType::uint16, "designatedPortNumber"},
    portpriority{YType::uint16, "portPriority"},
    portnumber{YType::uint16, "portNumber"},
    portpathcost{YType::uint32, "portPathCost"},
    portrole{YType::enumeration, "portRole"},
    portstate{YType::enumeration, "portState"}
{

    yang_name = "VlanIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::~VlanIfList()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| designatedrootpriority.is_set
	|| designatedrootaddress.is_set
	|| designatedrootcost.is_set
	|| designatedbridgepriority.is_set
	|| designatedbridgeaddress.is_set
	|| designatedportpriority.is_set
	|| designatedportnumber.is_set
	|| portpriority.is_set
	|| portnumber.is_set
	|| portpathcost.is_set
	|| portrole.is_set
	|| portstate.is_set;
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(designatedrootpriority.yfilter)
	|| ydk::is_set(designatedrootaddress.yfilter)
	|| ydk::is_set(designatedrootcost.yfilter)
	|| ydk::is_set(designatedbridgepriority.yfilter)
	|| ydk::is_set(designatedbridgeaddress.yfilter)
	|| ydk::is_set(designatedportpriority.yfilter)
	|| ydk::is_set(designatedportnumber.yfilter)
	|| ydk::is_set(portpriority.yfilter)
	|| ydk::is_set(portnumber.yfilter)
	|| ydk::is_set(portpathcost.yfilter)
	|| ydk::is_set(portrole.yfilter)
	|| ydk::is_set(portstate.yfilter);
}

std::string System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (designatedrootpriority.is_set || is_set(designatedrootpriority.yfilter)) leaf_name_data.push_back(designatedrootpriority.get_name_leafdata());
    if (designatedrootaddress.is_set || is_set(designatedrootaddress.yfilter)) leaf_name_data.push_back(designatedrootaddress.get_name_leafdata());
    if (designatedrootcost.is_set || is_set(designatedrootcost.yfilter)) leaf_name_data.push_back(designatedrootcost.get_name_leafdata());
    if (designatedbridgepriority.is_set || is_set(designatedbridgepriority.yfilter)) leaf_name_data.push_back(designatedbridgepriority.get_name_leafdata());
    if (designatedbridgeaddress.is_set || is_set(designatedbridgeaddress.yfilter)) leaf_name_data.push_back(designatedbridgeaddress.get_name_leafdata());
    if (designatedportpriority.is_set || is_set(designatedportpriority.yfilter)) leaf_name_data.push_back(designatedportpriority.get_name_leafdata());
    if (designatedportnumber.is_set || is_set(designatedportnumber.yfilter)) leaf_name_data.push_back(designatedportnumber.get_name_leafdata());
    if (portpriority.is_set || is_set(portpriority.yfilter)) leaf_name_data.push_back(portpriority.get_name_leafdata());
    if (portnumber.is_set || is_set(portnumber.yfilter)) leaf_name_data.push_back(portnumber.get_name_leafdata());
    if (portpathcost.is_set || is_set(portpathcost.yfilter)) leaf_name_data.push_back(portpathcost.get_name_leafdata());
    if (portrole.is_set || is_set(portrole.yfilter)) leaf_name_data.push_back(portrole.get_name_leafdata());
    if (portstate.is_set || is_set(portstate.yfilter)) leaf_name_data.push_back(portstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority = value;
        designatedrootpriority.value_namespace = name_space;
        designatedrootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress = value;
        designatedrootaddress.value_namespace = name_space;
        designatedrootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost = value;
        designatedrootcost.value_namespace = name_space;
        designatedrootcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority = value;
        designatedbridgepriority.value_namespace = name_space;
        designatedbridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress = value;
        designatedbridgeaddress.value_namespace = name_space;
        designatedbridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority = value;
        designatedportpriority.value_namespace = name_space;
        designatedportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber = value;
        designatedportnumber.value_namespace = name_space;
        designatedportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPriority")
    {
        portpriority = value;
        portpriority.value_namespace = name_space;
        portpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portNumber")
    {
        portnumber = value;
        portnumber.value_namespace = name_space;
        portnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPathCost")
    {
        portpathcost = value;
        portpathcost.value_namespace = name_space;
        portpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portRole")
    {
        portrole = value;
        portrole.value_namespace = name_space;
        portrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portState")
    {
        portstate = value;
        portstate.value_namespace = name_space;
        portstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority.yfilter = yfilter;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress.yfilter = yfilter;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost.yfilter = yfilter;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority.yfilter = yfilter;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress.yfilter = yfilter;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority.yfilter = yfilter;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber.yfilter = yfilter;
    }
    if(value_path == "portPriority")
    {
        portpriority.yfilter = yfilter;
    }
    if(value_path == "portNumber")
    {
        portnumber.yfilter = yfilter;
    }
    if(value_path == "portPathCost")
    {
        portpathcost.yfilter = yfilter;
    }
    if(value_path == "portRole")
    {
        portrole.yfilter = yfilter;
    }
    if(value_path == "portState")
    {
        portstate.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "designatedRootPriority" || name == "designatedRootAddress" || name == "designatedRootCost" || name == "designatedBridgePriority" || name == "designatedBridgeAddress" || name == "designatedPortPriority" || name == "designatedPortNumber" || name == "portPriority" || name == "portNumber" || name == "portPathCost" || name == "portRole" || name == "portState")
        return true;
    return false;
}

System::BdTableItems::BdTableItems()
    :
    vlan_items(std::make_shared<System::BdTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "bdTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::~BdTableItems()
{
}

bool System::BdTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::BdTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::BdTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    return children;
}

void System::BdTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::VlanItems()
    :
    bdentry_list(this, {"vlan"})
{

    yang_name = "vlan-items"; yang_parent_name = "bdTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::VlanItems::~VlanItems()
{
}

bool System::BdTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdentry_list.len(); index++)
    {
        if(bdentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<bdentry_list.len(); index++)
    {
        if(bdentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bdTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdEntry-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList>();
        c->parent = this;
        bdentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BdEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::BdEntryList()
    :
    vlan{YType::str, "vlan"},
    bd{YType::uint32, "bd"},
    vnid{YType::str, "vnid"},
    replicationmode{YType::enumeration, "replicationMode"},
    ingressrepprotocol{YType::enumeration, "ingressRepProtocol"},
    gipo{YType::str, "gipo"},
    suppressarp{YType::enumeration, "suppressArp"},
    resourcestatus{YType::enumeration, "resourceStatus"},
    isl3{YType::enumeration, "isL3"},
    description{YType::str, "description"}
        ,
    floodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems>())
    , af_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems>())
    , rtaggregatevlanmemberatt_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems>())
{
    floodlist_items->parent = this;
    af_items->parent = this;
    rtaggregatevlanmemberatt_items->parent = this;

    yang_name = "BdEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::VlanItems::BdEntryList::~BdEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| bd.is_set
	|| vnid.is_set
	|| replicationmode.is_set
	|| ingressrepprotocol.is_set
	|| gipo.is_set
	|| suppressarp.is_set
	|| resourcestatus.is_set
	|| isl3.is_set
	|| description.is_set
	|| (floodlist_items !=  nullptr && floodlist_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (rtaggregatevlanmemberatt_items !=  nullptr && rtaggregatevlanmemberatt_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(bd.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(replicationmode.yfilter)
	|| ydk::is_set(ingressrepprotocol.yfilter)
	|| ydk::is_set(gipo.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(resourcestatus.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (floodlist_items !=  nullptr && floodlist_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (rtaggregatevlanmemberatt_items !=  nullptr && rtaggregatevlanmemberatt_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bdTable-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::VlanItems::BdEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BdEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (bd.is_set || is_set(bd.yfilter)) leaf_name_data.push_back(bd.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (replicationmode.is_set || is_set(replicationmode.yfilter)) leaf_name_data.push_back(replicationmode.get_name_leafdata());
    if (ingressrepprotocol.is_set || is_set(ingressrepprotocol.yfilter)) leaf_name_data.push_back(ingressrepprotocol.get_name_leafdata());
    if (gipo.is_set || is_set(gipo.yfilter)) leaf_name_data.push_back(gipo.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (resourcestatus.is_set || is_set(resourcestatus.yfilter)) leaf_name_data.push_back(resourcestatus.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "floodList-items")
    {
        if(floodlist_items == nullptr)
        {
            floodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems>();
        }
        return floodlist_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "rtaggregateVlanMemberAtt-items")
    {
        if(rtaggregatevlanmemberatt_items == nullptr)
        {
            rtaggregatevlanmemberatt_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems>();
        }
        return rtaggregatevlanmemberatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(floodlist_items != nullptr)
    {
        children["floodList-items"] = floodlist_items;
    }

    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(rtaggregatevlanmemberatt_items != nullptr)
    {
        children["rtaggregateVlanMemberAtt-items"] = rtaggregatevlanmemberatt_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd")
    {
        bd = value;
        bd.value_namespace = name_space;
        bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicationMode")
    {
        replicationmode = value;
        replicationmode.value_namespace = name_space;
        replicationmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressRepProtocol")
    {
        ingressrepprotocol = value;
        ingressrepprotocol.value_namespace = name_space;
        ingressrepprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gipo")
    {
        gipo = value;
        gipo.value_namespace = name_space;
        gipo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressArp")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceStatus")
    {
        resourcestatus = value;
        resourcestatus.value_namespace = name_space;
        resourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "bd")
    {
        bd.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "replicationMode")
    {
        replicationmode.yfilter = yfilter;
    }
    if(value_path == "ingressRepProtocol")
    {
        ingressrepprotocol.yfilter = yfilter;
    }
    if(value_path == "gipo")
    {
        gipo.yfilter = yfilter;
    }
    if(value_path == "suppressArp")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "resourceStatus")
    {
        resourcestatus.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "floodList-items" || name == "af-items" || name == "rtaggregateVlanMemberAtt-items" || name == "vlan" || name == "bd" || name == "vnid" || name == "replicationMode" || name == "ingressRepProtocol" || name == "gipo" || name == "suppressArp" || name == "resourceStatus" || name == "isL3" || name == "description")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::FloodListItems()
    :
    localfloodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems>())
    , remotefloodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems>())
{
    localfloodlist_items->parent = this;
    remotefloodlist_items->parent = this;

    yang_name = "floodList-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::~FloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (localfloodlist_items !=  nullptr && localfloodlist_items->has_data())
	|| (remotefloodlist_items !=  nullptr && remotefloodlist_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (localfloodlist_items !=  nullptr && localfloodlist_items->has_operation())
	|| (remotefloodlist_items !=  nullptr && remotefloodlist_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "floodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localFloodList-items")
    {
        if(localfloodlist_items == nullptr)
        {
            localfloodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems>();
        }
        return localfloodlist_items;
    }

    if(child_yang_name == "remoteFloodList-items")
    {
        if(remotefloodlist_items == nullptr)
        {
            remotefloodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems>();
        }
        return remotefloodlist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(localfloodlist_items != nullptr)
    {
        children["localFloodList-items"] = localfloodlist_items;
    }

    if(remotefloodlist_items != nullptr)
    {
        children["remoteFloodList-items"] = remotefloodlist_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localFloodList-items" || name == "remoteFloodList-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::LocalFloodListItems()
    :
    intf_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "localFloodList-items"; yang_parent_name = "floodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::~LocalFloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localFloodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::IntfItems()
    :
    localfloodlistentry_list(this, {"intf"})
{

    yang_name = "intf-items"; yang_parent_name = "localFloodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::~IntfItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<localfloodlistentry_list.len(); index++)
    {
        if(localfloodlistentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<localfloodlistentry_list.len(); index++)
    {
        if(localfloodlistentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocalFloodListEntry-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList>();
        c->parent = this;
        localfloodlistentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : localfloodlistentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocalFloodListEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::LocalFloodListEntryList()
    :
    intf{YType::str, "intf"}
{

    yang_name = "LocalFloodListEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::~LocalFloodListEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocalFloodListEntry-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::RemoteFloodListItems()
    :
    vtep_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems>())
{
    vtep_items->parent = this;

    yang_name = "remoteFloodList-items"; yang_parent_name = "floodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::~RemoteFloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (vtep_items !=  nullptr && vtep_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (vtep_items !=  nullptr && vtep_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteFloodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtep-items")
    {
        if(vtep_items == nullptr)
        {
            vtep_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems>();
        }
        return vtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vtep_items != nullptr)
    {
        children["vtep-items"] = vtep_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtep-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::VtepItems()
    :
    remotefloodlistentry_list(this, {"vtep"})
{

    yang_name = "vtep-items"; yang_parent_name = "remoteFloodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::~VtepItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remotefloodlistentry_list.len(); index++)
    {
        if(remotefloodlistentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_operation() const
{
    for (std::size_t index=0; index<remotefloodlistentry_list.len(); index++)
    {
        if(remotefloodlistentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteFloodListEntry-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList>();
        c->parent = this;
        remotefloodlistentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remotefloodlistentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteFloodListEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RemoteFloodListEntryList()
    :
    vtep{YType::str, "vtep"}
        ,
    rsvtepatt_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems>())
{
    rsvtepatt_items->parent = this;

    yang_name = "RemoteFloodListEntry-list"; yang_parent_name = "vtep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::~RemoteFloodListEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vtep.is_set
	|| (rsvtepatt_items !=  nullptr && rsvtepatt_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| (rsvtepatt_items !=  nullptr && rsvtepatt_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteFloodListEntry-list";
    ADD_KEY_TOKEN(vtep, "vtep");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvtepAtt-items")
    {
        if(rsvtepatt_items == nullptr)
        {
            rsvtepatt_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems>();
        }
        return rsvtepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvtepatt_items != nullptr)
    {
        children["rsvtepAtt-items"] = rsvtepatt_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvtepAtt-items" || name == "vtep")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsvtepAttItems()
    :
    rsvtepatt_list(this, {"tdn"})
{

    yang_name = "rsvtepAtt-items"; yang_parent_name = "RemoteFloodListEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::~RsvtepAttItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvtepatt_list.len(); index++)
    {
        if(rsvtepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvtepatt_list.len(); index++)
    {
        if(rsvtepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvtepAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVtepAtt-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList>();
        c->parent = this;
        rsvtepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvtepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVtepAtt-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::RsVtepAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVtepAtt-list"; yang_parent_name = "rsvtepAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::~RsVtepAttList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVtepAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::AfItems()
    :
    domainaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::~AfItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomainAf-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList>();
        c->parent = this;
        domainaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domainaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomainAf-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::DomainAfList()
    :
    type{YType::enumeration, "type"},
    vrf{YType::str, "vrf"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems>())
    , ctrl_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems>())
{
    rttp_items->parent = this;
    ctrl_items->parent = this;

    yang_name = "DomainAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::~DomainAfList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vrf.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data())
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation())
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomainAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems>();
        }
        return rttp_items;
    }

    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    if(ctrl_items != nullptr)
    {
        children["ctrl-items"] = ctrl_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "ctrl-items" || name == "type" || name == "vrf" || name == "rd")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::~RttpItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::~RttPList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::~CtrlItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList>();
        c->parent = this;
        afctrl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : afctrl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"}
        ,
    rttp_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtaggregateVlanMemberAttItems()
    :
    rtaggregatevlanmemberatt_list(this, {"tdn"})
{

    yang_name = "rtaggregateVlanMemberAtt-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::~RtaggregateVlanMemberAttItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaggregatevlanmemberatt_list.len(); index++)
    {
        if(rtaggregatevlanmemberatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtaggregatevlanmemberatt_list.len(); index++)
    {
        if(rtaggregatevlanmemberatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaggregateVlanMemberAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAggregateVlanMemberAtt-list")
    {
        auto c = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList>();
        c->parent = this;
        rtaggregatevlanmemberatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtaggregatevlanmemberatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAggregateVlanMemberAtt-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::RtAggregateVlanMemberAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtAggregateVlanMemberAtt-list"; yang_parent_name = "rtaggregateVlanMemberAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::~RtAggregateVlanMemberAttList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAggregateVlanMemberAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::GlobalConfTableItems::GlobalConfTableItems()
    :
    vxlanmc{YType::enumeration, "vxLanMC"},
    agmac{YType::str, "agMac"}
{

    yang_name = "globalConfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GlobalConfTableItems::~GlobalConfTableItems()
{
}

bool System::GlobalConfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return vxlanmc.is_set
	|| agmac.is_set;
}

bool System::GlobalConfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlanmc.yfilter)
	|| ydk::is_set(agmac.yfilter);
}

std::string System::GlobalConfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GlobalConfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalConfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GlobalConfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlanmc.is_set || is_set(vxlanmc.yfilter)) leaf_name_data.push_back(vxlanmc.get_name_leafdata());
    if (agmac.is_set || is_set(agmac.yfilter)) leaf_name_data.push_back(agmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GlobalConfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GlobalConfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::GlobalConfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxLanMC")
    {
        vxlanmc = value;
        vxlanmc.value_namespace = name_space;
        vxlanmc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agMac")
    {
        agmac = value;
        agmac.value_namespace = name_space;
        agmac.value_namespace_prefix = name_space_prefix;
    }
}

void System::GlobalConfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxLanMC")
    {
        vxlanmc.yfilter = yfilter;
    }
    if(value_path == "agMac")
    {
        agmac.yfilter = yfilter;
    }
}

bool System::GlobalConfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxLanMC" || name == "agMac")
        return true;
    return false;
}

System::IntfTableItems::IntfTableItems()
    :
    intf_items(std::make_shared<System::IntfTableItems::IntfItems>())
    , svi_items(std::make_shared<System::IntfTableItems::SviItems>())
{
    intf_items->parent = this;
    svi_items->parent = this;

    yang_name = "intfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::~IntfTableItems()
{
}

bool System::IntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (svi_items !=  nullptr && svi_items->has_data());
}

bool System::IntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (svi_items !=  nullptr && svi_items->has_operation());
}

std::string System::IntfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IntfTableItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "svi-items")
    {
        if(svi_items == nullptr)
        {
            svi_items = std::make_shared<System::IntfTableItems::SviItems>();
        }
        return svi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(svi_items != nullptr)
    {
        children["svi-items"] = svi_items;
    }

    return children;
}

void System::IntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "svi-items")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfItems()
    :
    intfentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "intfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::IntfItems::~IntfItems()
{
}

bool System::IntfTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<intfentry_list.len(); index++)
    {
        if(intfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<intfentry_list.len(); index++)
    {
        if(intfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IntfEntry-list")
    {
        auto c = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList>();
        c->parent = this;
        intfentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : intfentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IntfTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IntfEntry-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::IntfEntryList()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    trunkvlans{YType::str, "trunkVlans"},
    iscontrollerownedintf{YType::boolean, "isControllerOwnedIntf"},
    ownercontrollersidlist{YType::str, "ownerControllersIdList"},
    untaggedvlan{YType::str, "untaggedVlan"},
    untaggedvlanctrluse{YType::boolean, "untaggedVlanCtrlUse"},
    untaggedvlanexplicitmap{YType::boolean, "untaggedVlanExplicitMap"}
        ,
    vlanmembertable_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems>())
    , rtvpcintfentryatt_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems>())
{
    vlanmembertable_items->parent = this;
    rtvpcintfentryatt_items->parent = this;

    yang_name = "IntfEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::IntfItems::IntfEntryList::~IntfEntryList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| trunkvlans.is_set
	|| iscontrollerownedintf.is_set
	|| ownercontrollersidlist.is_set
	|| untaggedvlan.is_set
	|| untaggedvlanctrluse.is_set
	|| untaggedvlanexplicitmap.is_set
	|| (vlanmembertable_items !=  nullptr && vlanmembertable_items->has_data())
	|| (rtvpcintfentryatt_items !=  nullptr && rtvpcintfentryatt_items->has_data());
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(trunkvlans.yfilter)
	|| ydk::is_set(iscontrollerownedintf.yfilter)
	|| ydk::is_set(ownercontrollersidlist.yfilter)
	|| ydk::is_set(untaggedvlan.yfilter)
	|| ydk::is_set(untaggedvlanctrluse.yfilter)
	|| ydk::is_set(untaggedvlanexplicitmap.yfilter)
	|| (vlanmembertable_items !=  nullptr && vlanmembertable_items->has_operation())
	|| (rtvpcintfentryatt_items !=  nullptr && rtvpcintfentryatt_items->has_operation());
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IntfEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (trunkvlans.is_set || is_set(trunkvlans.yfilter)) leaf_name_data.push_back(trunkvlans.get_name_leafdata());
    if (iscontrollerownedintf.is_set || is_set(iscontrollerownedintf.yfilter)) leaf_name_data.push_back(iscontrollerownedintf.get_name_leafdata());
    if (ownercontrollersidlist.is_set || is_set(ownercontrollersidlist.yfilter)) leaf_name_data.push_back(ownercontrollersidlist.get_name_leafdata());
    if (untaggedvlan.is_set || is_set(untaggedvlan.yfilter)) leaf_name_data.push_back(untaggedvlan.get_name_leafdata());
    if (untaggedvlanctrluse.is_set || is_set(untaggedvlanctrluse.yfilter)) leaf_name_data.push_back(untaggedvlanctrluse.get_name_leafdata());
    if (untaggedvlanexplicitmap.is_set || is_set(untaggedvlanexplicitmap.yfilter)) leaf_name_data.push_back(untaggedvlanexplicitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlanMemberTable-items")
    {
        if(vlanmembertable_items == nullptr)
        {
            vlanmembertable_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems>();
        }
        return vlanmembertable_items;
    }

    if(child_yang_name == "rtvpcIntfEntryAtt-items")
    {
        if(rtvpcintfentryatt_items == nullptr)
        {
            rtvpcintfentryatt_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems>();
        }
        return rtvpcintfentryatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlanmembertable_items != nullptr)
    {
        children["vlanMemberTable-items"] = vlanmembertable_items;
    }

    if(rtvpcintfentryatt_items != nullptr)
    {
        children["rtvpcIntfEntryAtt-items"] = rtvpcintfentryatt_items;
    }

    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans = value;
        trunkvlans.value_namespace = name_space;
        trunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isControllerOwnedIntf")
    {
        iscontrollerownedintf = value;
        iscontrollerownedintf.value_namespace = name_space;
        iscontrollerownedintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerControllersIdList")
    {
        ownercontrollersidlist = value;
        ownercontrollersidlist.value_namespace = name_space;
        ownercontrollersidlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlan")
    {
        untaggedvlan = value;
        untaggedvlan.value_namespace = name_space;
        untaggedvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlanCtrlUse")
    {
        untaggedvlanctrluse = value;
        untaggedvlanctrluse.value_namespace = name_space;
        untaggedvlanctrluse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untaggedVlanExplicitMap")
    {
        untaggedvlanexplicitmap = value;
        untaggedvlanexplicitmap.value_namespace = name_space;
        untaggedvlanexplicitmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans.yfilter = yfilter;
    }
    if(value_path == "isControllerOwnedIntf")
    {
        iscontrollerownedintf.yfilter = yfilter;
    }
    if(value_path == "ownerControllersIdList")
    {
        ownercontrollersidlist.yfilter = yfilter;
    }
    if(value_path == "untaggedVlan")
    {
        untaggedvlan.yfilter = yfilter;
    }
    if(value_path == "untaggedVlanCtrlUse")
    {
        untaggedvlanctrluse.yfilter = yfilter;
    }
    if(value_path == "untaggedVlanExplicitMap")
    {
        untaggedvlanexplicitmap.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanMemberTable-items" || name == "rtvpcIntfEntryAtt-items" || name == "name" || name == "type" || name == "adminState" || name == "operState" || name == "trunkVlans" || name == "isControllerOwnedIntf" || name == "ownerControllersIdList" || name == "untaggedVlan" || name == "untaggedVlanCtrlUse" || name == "untaggedVlanExplicitMap")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::VlanMemberTableItems()
    :
    member_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems>())
    , rsvlanmemberatt_items(std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems>())
{
    member_items->parent = this;
    rsvlanmemberatt_items->parent = this;

    yang_name = "vlanMemberTable-items"; yang_parent_name = "IntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::~VlanMemberTableItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (member_items !=  nullptr && member_items->has_data())
	|| (rsvlanmemberatt_items !=  nullptr && rsvlanmemberatt_items->has_data());
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (member_items !=  nullptr && member_items->has_operation())
	|| (rsvlanmemberatt_items !=  nullptr && rsvlanmemberatt_items->has_operation());
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanMemberTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-items")
    {
        if(member_items == nullptr)
        {
            member_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems>();
        }
        return member_items;
    }

    if(child_yang_name == "rsvlanMemberAtt-items")
    {
        if(rsvlanmemberatt_items == nullptr)
        {
            rsvlanmemberatt_items = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems>();
        }
        return rsvlanmemberatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(member_items != nullptr)
    {
        children["member-items"] = member_items;
    }

    if(rsvlanmemberatt_items != nullptr)
    {
        children["rsvlanMemberAtt-items"] = rsvlanmemberatt_items;
    }

    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-items" || name == "rsvlanMemberAtt-items")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::MemberItems()
    :
    vlanmemberentry_list(this, {"vlan"})
{

    yang_name = "member-items"; yang_parent_name = "vlanMemberTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::~MemberItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanmemberentry_list.len(); index++)
    {
        if(vlanmemberentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_operation() const
{
    for (std::size_t index=0; index<vlanmemberentry_list.len(); index++)
    {
        if(vlanmemberentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanMemberEntry-list")
    {
        auto c = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList>();
        c->parent = this;
        vlanmemberentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanmemberentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanMemberEntry-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::VlanMemberEntryList()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "VlanMemberEntry-list"; yang_parent_name = "member-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::~VlanMemberEntryList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanMemberEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsvlanMemberAttItems()
    :
    rsvlanmemberatt_list(this, {"tdn"})
{

    yang_name = "rsvlanMemberAtt-items"; yang_parent_name = "vlanMemberTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::~RsvlanMemberAttItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvlanmemberatt_list.len(); index++)
    {
        if(rsvlanmemberatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvlanmemberatt_list.len(); index++)
    {
        if(rsvlanmemberatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanMemberAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVlanMemberAtt-list")
    {
        auto c = std::make_shared<System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList>();
        c->parent = this;
        rsvlanmemberatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvlanmemberatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVlanMemberAtt-list")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::RsVlanMemberAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVlanMemberAtt-list"; yang_parent_name = "rsvlanMemberAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::~RsVlanMemberAttList()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVlanMemberAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::RtvpcIntfEntryAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvpcIntfEntryAtt-items"; yang_parent_name = "IntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::~RtvpcIntfEntryAttItems()
{
}

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvpcIntfEntryAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfTableItems::SviItems::SviItems()
    :
    svi_list(this, {"intf"})
{

    yang_name = "svi-items"; yang_parent_name = "intfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::SviItems::~SviItems()
{
}

bool System::IntfTableItems::SviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<svi_list.len(); index++)
    {
        if(svi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfTableItems::SviItems::has_operation() const
{
    for (std::size_t index=0; index<svi_list.len(); index++)
    {
        if(svi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfTableItems::SviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::SviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "svi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::SviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::SviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Svi-list")
    {
        auto c = std::make_shared<System::IntfTableItems::SviItems::SviList>();
        c->parent = this;
        svi_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::SviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : svi_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IntfTableItems::SviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfTableItems::SviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfTableItems::SviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Svi-list")
        return true;
    return false;
}

System::IntfTableItems::SviItems::SviList::SviList()
    :
    intf{YType::str, "intf"},
    adminstate{YType::enumeration, "adminState"},
    operstate{YType::enumeration, "operState"},
    ip{YType::str, "ip"},
    isctrlrownedintf{YType::boolean, "isCtrlrOwnedIntf"},
    ownerctrlrsidlist{YType::str, "ownerCtrlrsIdList"},
    mtu{YType::uint32, "mtu"},
    bw{YType::uint32, "bw"},
    fwdmode{YType::enumeration, "fwdMode"},
    vrf{YType::str, "vrf"}
{

    yang_name = "Svi-list"; yang_parent_name = "svi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfTableItems::SviItems::SviList::~SviList()
{
}

bool System::IntfTableItems::SviItems::SviList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| adminstate.is_set
	|| operstate.is_set
	|| ip.is_set
	|| isctrlrownedintf.is_set
	|| ownerctrlrsidlist.is_set
	|| mtu.is_set
	|| bw.is_set
	|| fwdmode.is_set
	|| vrf.is_set;
}

bool System::IntfTableItems::SviItems::SviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(isctrlrownedintf.yfilter)
	|| ydk::is_set(ownerctrlrsidlist.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string System::IntfTableItems::SviItems::SviList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intfTable-items/svi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfTableItems::SviItems::SviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Svi-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfTableItems::SviItems::SviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (isctrlrownedintf.is_set || is_set(isctrlrownedintf.yfilter)) leaf_name_data.push_back(isctrlrownedintf.get_name_leafdata());
    if (ownerctrlrsidlist.is_set || is_set(ownerctrlrsidlist.yfilter)) leaf_name_data.push_back(ownerctrlrsidlist.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IntfTableItems::SviItems::SviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IntfTableItems::SviItems::SviList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IntfTableItems::SviItems::SviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isCtrlrOwnedIntf")
    {
        isctrlrownedintf = value;
        isctrlrownedintf.value_namespace = name_space;
        isctrlrownedintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerCtrlrsIdList")
    {
        ownerctrlrsidlist = value;
        ownerctrlrsidlist.value_namespace = name_space;
        ownerctrlrsidlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfTableItems::SviItems::SviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "isCtrlrOwnedIntf")
    {
        isctrlrownedintf.yfilter = yfilter;
    }
    if(value_path == "ownerCtrlrsIdList")
    {
        ownerctrlrsidlist.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::IntfTableItems::SviItems::SviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf" || name == "adminState" || name == "operState" || name == "ip" || name == "isCtrlrOwnedIntf" || name == "ownerCtrlrsIdList" || name == "mtu" || name == "bw" || name == "fwdMode" || name == "vrf")
        return true;
    return false;
}

System::MacTableItems::MacTableItems()
    :
    dynamic_items(std::make_shared<System::MacTableItems::DynamicItems>())
    , static_items(std::make_shared<System::MacTableItems::StaticItems>())
{
    dynamic_items->parent = this;
    static_items->parent = this;

    yang_name = "macTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::~MacTableItems()
{
}

bool System::MacTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic_items !=  nullptr && dynamic_items->has_data())
	|| (static_items !=  nullptr && static_items->has_data());
}

bool System::MacTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_items !=  nullptr && dynamic_items->has_operation())
	|| (static_items !=  nullptr && static_items->has_operation());
}

std::string System::MacTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-items")
    {
        if(dynamic_items == nullptr)
        {
            dynamic_items = std::make_shared<System::MacTableItems::DynamicItems>();
        }
        return dynamic_items;
    }

    if(child_yang_name == "static-items")
    {
        if(static_items == nullptr)
        {
            static_items = std::make_shared<System::MacTableItems::StaticItems>();
        }
        return static_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic_items != nullptr)
    {
        children["dynamic-items"] = dynamic_items;
    }

    if(static_items != nullptr)
    {
        children["static-items"] = static_items;
    }

    return children;
}

void System::MacTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-items" || name == "static-items")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::DynamicItems()
    :
    mac_items(std::make_shared<System::MacTableItems::DynamicItems::MacItems>())
{
    mac_items->parent = this;

    yang_name = "dynamic-items"; yang_parent_name = "macTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::~DynamicItems()
{
}

bool System::MacTableItems::DynamicItems::has_data() const
{
    if (is_presence_container) return true;
    return (mac_items !=  nullptr && mac_items->has_data());
}

bool System::MacTableItems::DynamicItems::has_operation() const
{
    return is_set(yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::MacTableItems::DynamicItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::DynamicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::MacTableItems::DynamicItems::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::DynamicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    return children;
}

void System::MacTableItems::DynamicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::DynamicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::DynamicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacItems()
    :
    macentry_list(this, {"mac", "vlan"})
{

    yang_name = "mac-items"; yang_parent_name = "dynamic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::MacItems::~MacItems()
{
}

bool System::MacTableItems::DynamicItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacTableItems::DynamicItems::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacTableItems::DynamicItems::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/dynamic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::DynamicItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEntry-list")
    {
        auto c = std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList>();
        c->parent = this;
        macentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::DynamicItems::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MacTableItems::DynamicItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::DynamicItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::DynamicItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEntry-list")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::MacEntryList()
    :
    mac{YType::str, "mac"},
    vlan{YType::str, "vlan"},
    intf{YType::str, "intf"},
    tunneldstip{YType::str, "tunnelDstIp"},
    isintf{YType::boolean, "isIntf"},
    type{YType::enumeration, "type"},
    pushedmactobackend{YType::boolean, "pushedMacToBackEnd"}
        ,
    rtmac_items(std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems>())
{
    rtmac_items->parent = this;

    yang_name = "MacEntry-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::~MacEntryList()
{
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| vlan.is_set
	|| intf.is_set
	|| tunneldstip.is_set
	|| isintf.is_set
	|| type.is_set
	|| pushedmactobackend.is_set
	|| (rtmac_items !=  nullptr && rtmac_items->has_data());
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(tunneldstip.yfilter)
	|| ydk::is_set(isintf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pushedmactobackend.yfilter)
	|| (rtmac_items !=  nullptr && rtmac_items->has_operation());
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/dynamic-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEntry-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (tunneldstip.is_set || is_set(tunneldstip.yfilter)) leaf_name_data.push_back(tunneldstip.get_name_leafdata());
    if (isintf.is_set || is_set(isintf.yfilter)) leaf_name_data.push_back(isintf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pushedmactobackend.is_set || is_set(pushedmactobackend.yfilter)) leaf_name_data.push_back(pushedmactobackend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtmac-items")
    {
        if(rtmac_items == nullptr)
        {
            rtmac_items = std::make_shared<System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems>();
        }
        return rtmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::DynamicItems::MacItems::MacEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtmac_items != nullptr)
    {
        children["rtmac-items"] = rtmac_items;
    }

    return children;
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip = value;
        tunneldstip.value_namespace = name_space;
        tunneldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isIntf")
    {
        isintf = value;
        isintf.value_namespace = name_space;
        isintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend = value;
        pushedmactobackend.value_namespace = name_space;
        pushedmactobackend.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip.yfilter = yfilter;
    }
    if(value_path == "isIntf")
    {
        isintf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend.yfilter = yfilter;
    }
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtmac-items" || name == "mac" || name == "vlan" || name == "intf" || name == "tunnelDstIp" || name == "isIntf" || name == "type" || name == "pushedMacToBackEnd")
        return true;
    return false;
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::RtmacItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtmac-items"; yang_parent_name = "MacEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::~RtmacItems()
{
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MacTableItems::StaticItems::StaticItems()
    :
    mac_items(std::make_shared<System::MacTableItems::StaticItems::MacItems>())
{
    mac_items->parent = this;

    yang_name = "static-items"; yang_parent_name = "macTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::~StaticItems()
{
}

bool System::MacTableItems::StaticItems::has_data() const
{
    if (is_presence_container) return true;
    return (mac_items !=  nullptr && mac_items->has_data());
}

bool System::MacTableItems::StaticItems::has_operation() const
{
    return is_set(yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::MacTableItems::StaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::StaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::MacTableItems::StaticItems::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::StaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    return children;
}

void System::MacTableItems::StaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::StaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::StaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacItems()
    :
    macentry_list(this, {"mac", "vlan"})
{

    yang_name = "mac-items"; yang_parent_name = "static-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::MacItems::~MacItems()
{
}

bool System::MacTableItems::StaticItems::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacTableItems::StaticItems::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macentry_list.len(); index++)
    {
        if(macentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacTableItems::StaticItems::MacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/static-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::StaticItems::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEntry-list")
    {
        auto c = std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList>();
        c->parent = this;
        macentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::StaticItems::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MacTableItems::StaticItems::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacTableItems::StaticItems::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacTableItems::StaticItems::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEntry-list")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::MacEntryList()
    :
    mac{YType::str, "mac"},
    vlan{YType::str, "vlan"},
    intf{YType::str, "intf"},
    tunneldstip{YType::str, "tunnelDstIp"},
    isintf{YType::boolean, "isIntf"},
    type{YType::enumeration, "type"},
    pushedmactobackend{YType::boolean, "pushedMacToBackEnd"}
        ,
    rtmac_items(std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems>())
{
    rtmac_items->parent = this;

    yang_name = "MacEntry-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::~MacEntryList()
{
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| vlan.is_set
	|| intf.is_set
	|| tunneldstip.is_set
	|| isintf.is_set
	|| type.is_set
	|| pushedmactobackend.is_set
	|| (rtmac_items !=  nullptr && rtmac_items->has_data());
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(tunneldstip.yfilter)
	|| ydk::is_set(isintf.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(pushedmactobackend.yfilter)
	|| (rtmac_items !=  nullptr && rtmac_items->has_operation());
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macTable-items/static-items/mac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEntry-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::MacEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (tunneldstip.is_set || is_set(tunneldstip.yfilter)) leaf_name_data.push_back(tunneldstip.get_name_leafdata());
    if (isintf.is_set || is_set(isintf.yfilter)) leaf_name_data.push_back(isintf.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (pushedmactobackend.is_set || is_set(pushedmactobackend.yfilter)) leaf_name_data.push_back(pushedmactobackend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::StaticItems::MacItems::MacEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtmac-items")
    {
        if(rtmac_items == nullptr)
        {
            rtmac_items = std::make_shared<System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems>();
        }
        return rtmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::StaticItems::MacItems::MacEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtmac_items != nullptr)
    {
        children["rtmac-items"] = rtmac_items;
    }

    return children;
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip = value;
        tunneldstip.value_namespace = name_space;
        tunneldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isIntf")
    {
        isintf = value;
        isintf.value_namespace = name_space;
        isintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend = value;
        pushedmactobackend.value_namespace = name_space;
        pushedmactobackend.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "tunnelDstIp")
    {
        tunneldstip.yfilter = yfilter;
    }
    if(value_path == "isIntf")
    {
        isintf.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "pushedMacToBackEnd")
    {
        pushedmactobackend.yfilter = yfilter;
    }
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtmac-items" || name == "mac" || name == "vlan" || name == "intf" || name == "tunnelDstIp" || name == "isIntf" || name == "type" || name == "pushedMacToBackEnd")
        return true;
    return false;
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::RtmacItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtmac-items"; yang_parent_name = "MacEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::~RtmacItems()
{
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SystemTableItems::SystemTableItems()
    :
    sttime{YType::str, "stTime"},
    mgmtip{YType::str, "mgmtIp"},
    switchtype{YType::str, "switchType"},
    purgedbrequest{YType::str, "purgeDBRequest"},
    iscontrollerconfigured{YType::boolean, "isControllerConfigured"},
    nxdbenabled{YType::boolean, "nxdbEnabled"}
        ,
    controllertable_items(std::make_shared<System::SystemTableItems::ControllerTableItems>())
    , cputable_items(std::make_shared<System::SystemTableItems::CpuTableItems>())
    , moduletable_items(std::make_shared<System::SystemTableItems::ModuleTableItems>())
    , vxlantable_items(std::make_shared<System::SystemTableItems::VxlanTableItems>())
    , shadowvxlantable_items(std::make_shared<System::SystemTableItems::ShadowVxlanTableItems>())
{
    controllertable_items->parent = this;
    cputable_items->parent = this;
    moduletable_items->parent = this;
    vxlantable_items->parent = this;
    shadowvxlantable_items->parent = this;

    yang_name = "systemTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::~SystemTableItems()
{
}

bool System::SystemTableItems::has_data() const
{
    if (is_presence_container) return true;
    return sttime.is_set
	|| mgmtip.is_set
	|| switchtype.is_set
	|| purgedbrequest.is_set
	|| iscontrollerconfigured.is_set
	|| nxdbenabled.is_set
	|| (controllertable_items !=  nullptr && controllertable_items->has_data())
	|| (cputable_items !=  nullptr && cputable_items->has_data())
	|| (moduletable_items !=  nullptr && moduletable_items->has_data())
	|| (vxlantable_items !=  nullptr && vxlantable_items->has_data())
	|| (shadowvxlantable_items !=  nullptr && shadowvxlantable_items->has_data());
}

bool System::SystemTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sttime.yfilter)
	|| ydk::is_set(mgmtip.yfilter)
	|| ydk::is_set(switchtype.yfilter)
	|| ydk::is_set(purgedbrequest.yfilter)
	|| ydk::is_set(iscontrollerconfigured.yfilter)
	|| ydk::is_set(nxdbenabled.yfilter)
	|| (controllertable_items !=  nullptr && controllertable_items->has_operation())
	|| (cputable_items !=  nullptr && cputable_items->has_operation())
	|| (moduletable_items !=  nullptr && moduletable_items->has_operation())
	|| (vxlantable_items !=  nullptr && vxlantable_items->has_operation())
	|| (shadowvxlantable_items !=  nullptr && shadowvxlantable_items->has_operation());
}

std::string System::SystemTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "systemTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sttime.is_set || is_set(sttime.yfilter)) leaf_name_data.push_back(sttime.get_name_leafdata());
    if (mgmtip.is_set || is_set(mgmtip.yfilter)) leaf_name_data.push_back(mgmtip.get_name_leafdata());
    if (switchtype.is_set || is_set(switchtype.yfilter)) leaf_name_data.push_back(switchtype.get_name_leafdata());
    if (purgedbrequest.is_set || is_set(purgedbrequest.yfilter)) leaf_name_data.push_back(purgedbrequest.get_name_leafdata());
    if (iscontrollerconfigured.is_set || is_set(iscontrollerconfigured.yfilter)) leaf_name_data.push_back(iscontrollerconfigured.get_name_leafdata());
    if (nxdbenabled.is_set || is_set(nxdbenabled.yfilter)) leaf_name_data.push_back(nxdbenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerTable-items")
    {
        if(controllertable_items == nullptr)
        {
            controllertable_items = std::make_shared<System::SystemTableItems::ControllerTableItems>();
        }
        return controllertable_items;
    }

    if(child_yang_name == "cpuTable-items")
    {
        if(cputable_items == nullptr)
        {
            cputable_items = std::make_shared<System::SystemTableItems::CpuTableItems>();
        }
        return cputable_items;
    }

    if(child_yang_name == "moduleTable-items")
    {
        if(moduletable_items == nullptr)
        {
            moduletable_items = std::make_shared<System::SystemTableItems::ModuleTableItems>();
        }
        return moduletable_items;
    }

    if(child_yang_name == "vxlanTable-items")
    {
        if(vxlantable_items == nullptr)
        {
            vxlantable_items = std::make_shared<System::SystemTableItems::VxlanTableItems>();
        }
        return vxlantable_items;
    }

    if(child_yang_name == "shadowVxlanTable-items")
    {
        if(shadowvxlantable_items == nullptr)
        {
            shadowvxlantable_items = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems>();
        }
        return shadowvxlantable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllertable_items != nullptr)
    {
        children["controllerTable-items"] = controllertable_items;
    }

    if(cputable_items != nullptr)
    {
        children["cpuTable-items"] = cputable_items;
    }

    if(moduletable_items != nullptr)
    {
        children["moduleTable-items"] = moduletable_items;
    }

    if(vxlantable_items != nullptr)
    {
        children["vxlanTable-items"] = vxlantable_items;
    }

    if(shadowvxlantable_items != nullptr)
    {
        children["shadowVxlanTable-items"] = shadowvxlantable_items;
    }

    return children;
}

void System::SystemTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stTime")
    {
        sttime = value;
        sttime.value_namespace = name_space;
        sttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip = value;
        mgmtip.value_namespace = name_space;
        mgmtip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchType")
    {
        switchtype = value;
        switchtype.value_namespace = name_space;
        switchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgeDBRequest")
    {
        purgedbrequest = value;
        purgedbrequest.value_namespace = name_space;
        purgedbrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isControllerConfigured")
    {
        iscontrollerconfigured = value;
        iscontrollerconfigured.value_namespace = name_space;
        iscontrollerconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nxdbEnabled")
    {
        nxdbenabled = value;
        nxdbenabled.value_namespace = name_space;
        nxdbenabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stTime")
    {
        sttime.yfilter = yfilter;
    }
    if(value_path == "mgmtIp")
    {
        mgmtip.yfilter = yfilter;
    }
    if(value_path == "switchType")
    {
        switchtype.yfilter = yfilter;
    }
    if(value_path == "purgeDBRequest")
    {
        purgedbrequest.yfilter = yfilter;
    }
    if(value_path == "isControllerConfigured")
    {
        iscontrollerconfigured.yfilter = yfilter;
    }
    if(value_path == "nxdbEnabled")
    {
        nxdbenabled.yfilter = yfilter;
    }
}

bool System::SystemTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerTable-items" || name == "cpuTable-items" || name == "moduleTable-items" || name == "vxlanTable-items" || name == "shadowVxlanTable-items" || name == "stTime" || name == "mgmtIp" || name == "switchType" || name == "purgeDBRequest" || name == "isControllerConfigured" || name == "nxdbEnabled")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerTableItems()
    :
    controller_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems>())
{
    controller_items->parent = this;

    yang_name = "controllerTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::~ControllerTableItems()
{
}

bool System::SystemTableItems::ControllerTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (controller_items !=  nullptr && controller_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (controller_items !=  nullptr && controller_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-items")
    {
        if(controller_items == nullptr)
        {
            controller_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems>();
        }
        return controller_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controller_items != nullptr)
    {
        children["controller-items"] = controller_items;
    }

    return children;
}

void System::SystemTableItems::ControllerTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-items")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerItems()
    :
    controllerentry_list(this, {"id"})
{

    yang_name = "controller-items"; yang_parent_name = "controllerTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::~ControllerItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controllerentry_list.len(); index++)
    {
        if(controllerentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_operation() const
{
    for (std::size_t index=0; index<controllerentry_list.len(); index++)
    {
        if(controllerentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/controllerTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ControllerEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList>();
        c->parent = this;
        controllerentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : controllerentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ControllerEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerEntryList()
    :
    id{YType::uint32, "id"},
    readrole{YType::str, "readRole"},
    writerole{YType::str, "writeRole"},
    controllerdescription{YType::str, "controllerDescription"},
    controllertype{YType::str, "controllerType"},
    dedicatedvlans{YType::str, "dedicatedVlans"},
    sharedvlans{YType::str, "sharedVlans"},
    configuredvlans{YType::str, "configuredVlans"},
    publishedvlans{YType::str, "publishedVlans"},
    vlanresourcestatus{YType::enumeration, "vlanResourceStatus"},
    intfresourcestatus{YType::enumeration, "intfResourceStatus"},
    issystemreadyforcontroller{YType::enumeration, "isSystemReadyForController"},
    controllerconfigmgmt{YType::enumeration, "controllerConfigMgmt"},
    type{YType::enumeration, "type"},
    vrfprefix{YType::str, "vrfPrefix"},
    numvrf{YType::uint32, "numVrf"},
    publishvrf{YType::boolean, "publishVrf"},
    publishnumvrf{YType::uint32, "publishNumVrf"}
        ,
    controllerassignedintftable_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems>())
{
    controllerassignedintftable_items->parent = this;

    yang_name = "ControllerEntry-list"; yang_parent_name = "controller-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::~ControllerEntryList()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| readrole.is_set
	|| writerole.is_set
	|| controllerdescription.is_set
	|| controllertype.is_set
	|| dedicatedvlans.is_set
	|| sharedvlans.is_set
	|| configuredvlans.is_set
	|| publishedvlans.is_set
	|| vlanresourcestatus.is_set
	|| intfresourcestatus.is_set
	|| issystemreadyforcontroller.is_set
	|| controllerconfigmgmt.is_set
	|| type.is_set
	|| vrfprefix.is_set
	|| numvrf.is_set
	|| publishvrf.is_set
	|| publishnumvrf.is_set
	|| (controllerassignedintftable_items !=  nullptr && controllerassignedintftable_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(readrole.yfilter)
	|| ydk::is_set(writerole.yfilter)
	|| ydk::is_set(controllerdescription.yfilter)
	|| ydk::is_set(controllertype.yfilter)
	|| ydk::is_set(dedicatedvlans.yfilter)
	|| ydk::is_set(sharedvlans.yfilter)
	|| ydk::is_set(configuredvlans.yfilter)
	|| ydk::is_set(publishedvlans.yfilter)
	|| ydk::is_set(vlanresourcestatus.yfilter)
	|| ydk::is_set(intfresourcestatus.yfilter)
	|| ydk::is_set(issystemreadyforcontroller.yfilter)
	|| ydk::is_set(controllerconfigmgmt.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrfprefix.yfilter)
	|| ydk::is_set(numvrf.yfilter)
	|| ydk::is_set(publishvrf.yfilter)
	|| ydk::is_set(publishnumvrf.yfilter)
	|| (controllerassignedintftable_items !=  nullptr && controllerassignedintftable_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/controllerTable-items/controller-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ControllerEntry-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (readrole.is_set || is_set(readrole.yfilter)) leaf_name_data.push_back(readrole.get_name_leafdata());
    if (writerole.is_set || is_set(writerole.yfilter)) leaf_name_data.push_back(writerole.get_name_leafdata());
    if (controllerdescription.is_set || is_set(controllerdescription.yfilter)) leaf_name_data.push_back(controllerdescription.get_name_leafdata());
    if (controllertype.is_set || is_set(controllertype.yfilter)) leaf_name_data.push_back(controllertype.get_name_leafdata());
    if (dedicatedvlans.is_set || is_set(dedicatedvlans.yfilter)) leaf_name_data.push_back(dedicatedvlans.get_name_leafdata());
    if (sharedvlans.is_set || is_set(sharedvlans.yfilter)) leaf_name_data.push_back(sharedvlans.get_name_leafdata());
    if (configuredvlans.is_set || is_set(configuredvlans.yfilter)) leaf_name_data.push_back(configuredvlans.get_name_leafdata());
    if (publishedvlans.is_set || is_set(publishedvlans.yfilter)) leaf_name_data.push_back(publishedvlans.get_name_leafdata());
    if (vlanresourcestatus.is_set || is_set(vlanresourcestatus.yfilter)) leaf_name_data.push_back(vlanresourcestatus.get_name_leafdata());
    if (intfresourcestatus.is_set || is_set(intfresourcestatus.yfilter)) leaf_name_data.push_back(intfresourcestatus.get_name_leafdata());
    if (issystemreadyforcontroller.is_set || is_set(issystemreadyforcontroller.yfilter)) leaf_name_data.push_back(issystemreadyforcontroller.get_name_leafdata());
    if (controllerconfigmgmt.is_set || is_set(controllerconfigmgmt.yfilter)) leaf_name_data.push_back(controllerconfigmgmt.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrfprefix.is_set || is_set(vrfprefix.yfilter)) leaf_name_data.push_back(vrfprefix.get_name_leafdata());
    if (numvrf.is_set || is_set(numvrf.yfilter)) leaf_name_data.push_back(numvrf.get_name_leafdata());
    if (publishvrf.is_set || is_set(publishvrf.yfilter)) leaf_name_data.push_back(publishvrf.get_name_leafdata());
    if (publishnumvrf.is_set || is_set(publishnumvrf.yfilter)) leaf_name_data.push_back(publishnumvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerAssignedIntfTable-items")
    {
        if(controllerassignedintftable_items == nullptr)
        {
            controllerassignedintftable_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems>();
        }
        return controllerassignedintftable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllerassignedintftable_items != nullptr)
    {
        children["controllerAssignedIntfTable-items"] = controllerassignedintftable_items;
    }

    return children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "readRole")
    {
        readrole = value;
        readrole.value_namespace = name_space;
        readrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "writeRole")
    {
        writerole = value;
        writerole.value_namespace = name_space;
        writerole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerDescription")
    {
        controllerdescription = value;
        controllerdescription.value_namespace = name_space;
        controllerdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerType")
    {
        controllertype = value;
        controllertype.value_namespace = name_space;
        controllertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dedicatedVlans")
    {
        dedicatedvlans = value;
        dedicatedvlans.value_namespace = name_space;
        dedicatedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharedVlans")
    {
        sharedvlans = value;
        sharedvlans.value_namespace = name_space;
        sharedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuredVlans")
    {
        configuredvlans = value;
        configuredvlans.value_namespace = name_space;
        configuredvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishedVlans")
    {
        publishedvlans = value;
        publishedvlans.value_namespace = name_space;
        publishedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanResourceStatus")
    {
        vlanresourcestatus = value;
        vlanresourcestatus.value_namespace = name_space;
        vlanresourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfResourceStatus")
    {
        intfresourcestatus = value;
        intfresourcestatus.value_namespace = name_space;
        intfresourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isSystemReadyForController")
    {
        issystemreadyforcontroller = value;
        issystemreadyforcontroller.value_namespace = name_space;
        issystemreadyforcontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerConfigMgmt")
    {
        controllerconfigmgmt = value;
        controllerconfigmgmt.value_namespace = name_space;
        controllerconfigmgmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfPrefix")
    {
        vrfprefix = value;
        vrfprefix.value_namespace = name_space;
        vrfprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVrf")
    {
        numvrf = value;
        numvrf.value_namespace = name_space;
        numvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishVrf")
    {
        publishvrf = value;
        publishvrf.value_namespace = name_space;
        publishvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publishNumVrf")
    {
        publishnumvrf = value;
        publishnumvrf.value_namespace = name_space;
        publishnumvrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "readRole")
    {
        readrole.yfilter = yfilter;
    }
    if(value_path == "writeRole")
    {
        writerole.yfilter = yfilter;
    }
    if(value_path == "controllerDescription")
    {
        controllerdescription.yfilter = yfilter;
    }
    if(value_path == "controllerType")
    {
        controllertype.yfilter = yfilter;
    }
    if(value_path == "dedicatedVlans")
    {
        dedicatedvlans.yfilter = yfilter;
    }
    if(value_path == "sharedVlans")
    {
        sharedvlans.yfilter = yfilter;
    }
    if(value_path == "configuredVlans")
    {
        configuredvlans.yfilter = yfilter;
    }
    if(value_path == "publishedVlans")
    {
        publishedvlans.yfilter = yfilter;
    }
    if(value_path == "vlanResourceStatus")
    {
        vlanresourcestatus.yfilter = yfilter;
    }
    if(value_path == "intfResourceStatus")
    {
        intfresourcestatus.yfilter = yfilter;
    }
    if(value_path == "isSystemReadyForController")
    {
        issystemreadyforcontroller.yfilter = yfilter;
    }
    if(value_path == "controllerConfigMgmt")
    {
        controllerconfigmgmt.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrfPrefix")
    {
        vrfprefix.yfilter = yfilter;
    }
    if(value_path == "numVrf")
    {
        numvrf.yfilter = yfilter;
    }
    if(value_path == "publishVrf")
    {
        publishvrf.yfilter = yfilter;
    }
    if(value_path == "publishNumVrf")
    {
        publishnumvrf.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerAssignedIntfTable-items" || name == "id" || name == "readRole" || name == "writeRole" || name == "controllerDescription" || name == "controllerType" || name == "dedicatedVlans" || name == "sharedVlans" || name == "configuredVlans" || name == "publishedVlans" || name == "vlanResourceStatus" || name == "intfResourceStatus" || name == "isSystemReadyForController" || name == "controllerConfigMgmt" || name == "type" || name == "vrfPrefix" || name == "numVrf" || name == "publishVrf" || name == "publishNumVrf")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfTableItems()
    :
    controllerassignedintfentry_items(std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems>())
{
    controllerassignedintfentry_items->parent = this;

    yang_name = "controllerAssignedIntfTable-items"; yang_parent_name = "ControllerEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::~ControllerAssignedIntfTableItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (controllerassignedintfentry_items !=  nullptr && controllerassignedintfentry_items->has_data());
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (controllerassignedintfentry_items !=  nullptr && controllerassignedintfentry_items->has_operation());
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerAssignedIntfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerAssignedIntfEntry-items")
    {
        if(controllerassignedintfentry_items == nullptr)
        {
            controllerassignedintfentry_items = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems>();
        }
        return controllerassignedintfentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllerassignedintfentry_items != nullptr)
    {
        children["controllerAssignedIntfEntry-items"] = controllerassignedintfentry_items;
    }

    return children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerAssignedIntfEntry-items")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryItems()
    :
    controllerassignedintfentry_list(this, {"intfname"})
{

    yang_name = "controllerAssignedIntfEntry-items"; yang_parent_name = "controllerAssignedIntfTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::~ControllerAssignedIntfEntryItems()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controllerassignedintfentry_list.len(); index++)
    {
        if(controllerassignedintfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_operation() const
{
    for (std::size_t index=0; index<controllerassignedintfentry_list.len(); index++)
    {
        if(controllerassignedintfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerAssignedIntfEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ControllerAssignedIntfEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList>();
        c->parent = this;
        controllerassignedintfentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : controllerassignedintfentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ControllerAssignedIntfEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::ControllerAssignedIntfEntryList()
    :
    intfname{YType::str, "intfName"},
    pcid{YType::uint16, "pcId"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    published{YType::boolean, "published"}
{

    yang_name = "ControllerAssignedIntfEntry-list"; yang_parent_name = "controllerAssignedIntfEntry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::~ControllerAssignedIntfEntryList()
{
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return intfname.is_set
	|| pcid.is_set
	|| type.is_set
	|| mode.is_set
	|| published.is_set;
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intfname.yfilter)
	|| ydk::is_set(pcid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(published.yfilter);
}

std::string System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ControllerAssignedIntfEntry-list";
    ADD_KEY_TOKEN(intfname, "intfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfname.is_set || is_set(intfname.yfilter)) leaf_name_data.push_back(intfname.get_name_leafdata());
    if (pcid.is_set || is_set(pcid.yfilter)) leaf_name_data.push_back(pcid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (published.is_set || is_set(published.yfilter)) leaf_name_data.push_back(published.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intfName")
    {
        intfname = value;
        intfname.value_namespace = name_space;
        intfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcId")
    {
        pcid = value;
        pcid.value_namespace = name_space;
        pcid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "published")
    {
        published = value;
        published.value_namespace = name_space;
        published.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intfName")
    {
        intfname.yfilter = yfilter;
    }
    if(value_path == "pcId")
    {
        pcid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "published")
    {
        published.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intfName" || name == "pcId" || name == "type" || name == "mode" || name == "published")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuTableItems()
    :
    cpuentry_items(std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems>())
{
    cpuentry_items->parent = this;

    yang_name = "cpuTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::~CpuTableItems()
{
}

bool System::SystemTableItems::CpuTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (cpuentry_items !=  nullptr && cpuentry_items->has_data());
}

bool System::SystemTableItems::CpuTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (cpuentry_items !=  nullptr && cpuentry_items->has_operation());
}

std::string System::SystemTableItems::CpuTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpuTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::CpuTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpuEntry-items")
    {
        if(cpuentry_items == nullptr)
        {
            cpuentry_items = std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems>();
        }
        return cpuentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::CpuTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpuentry_items != nullptr)
    {
        children["cpuEntry-items"] = cpuentry_items;
    }

    return children;
}

void System::SystemTableItems::CpuTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::CpuTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::CpuTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpuEntry-items")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CpuEntryItems()
    :
    cpuentry_list(this, {"type"})
{

    yang_name = "cpuEntry-items"; yang_parent_name = "cpuTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::~CpuEntryItems()
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpuentry_list.len(); index++)
    {
        if(cpuentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_operation() const
{
    for (std::size_t index=0; index<cpuentry_list.len(); index++)
    {
        if(cpuentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/cpuTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpuEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::CpuEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::CpuTableItems::CpuEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPUEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList>();
        c->parent = this;
        cpuentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::CpuTableItems::CpuEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpuentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPUEntry-list")
        return true;
    return false;
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::CPUEntryList()
    :
    type{YType::str, "type"}
{

    yang_name = "CPUEntry-list"; yang_parent_name = "cpuEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::~CPUEntryList()
{
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/cpuTable-items/cpuEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPUEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleTableItems()
    :
    moduleentry_items(std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems>())
{
    moduleentry_items->parent = this;

    yang_name = "moduleTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::~ModuleTableItems()
{
}

bool System::SystemTableItems::ModuleTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (moduleentry_items !=  nullptr && moduleentry_items->has_data());
}

bool System::SystemTableItems::ModuleTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (moduleentry_items !=  nullptr && moduleentry_items->has_operation());
}

std::string System::SystemTableItems::ModuleTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moduleTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ModuleTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "moduleEntry-items")
    {
        if(moduleentry_items == nullptr)
        {
            moduleentry_items = std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems>();
        }
        return moduleentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ModuleTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(moduleentry_items != nullptr)
    {
        children["moduleEntry-items"] = moduleentry_items;
    }

    return children;
}

void System::SystemTableItems::ModuleTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ModuleTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ModuleTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moduleEntry-items")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryItems()
    :
    moduleentry_list(this, {"type"})
{

    yang_name = "moduleEntry-items"; yang_parent_name = "moduleTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::~ModuleEntryItems()
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<moduleentry_list.len(); index++)
    {
        if(moduleentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_operation() const
{
    for (std::size_t index=0; index<moduleentry_list.len(); index++)
    {
        if(moduleentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/moduleTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "moduleEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ModuleEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList>();
        c->parent = this;
        moduleentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : moduleentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ModuleEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::ModuleEntryList()
    :
    type{YType::str, "type"}
{

    yang_name = "ModuleEntry-list"; yang_parent_name = "moduleEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::~ModuleEntryList()
{
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/moduleTable-items/moduleEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ModuleEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::VxlanTableItems()
    :
    intf_items(std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "vxlanTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::~VxlanTableItems()
{
}

bool System::SystemTableItems::VxlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::SystemTableItems::VxlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::SystemTableItems::VxlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::VxlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::VxlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    return children;
}

void System::SystemTableItems::VxlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::VxlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::VxlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::IntfItems()
    :
    vxlaninterfaceentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "vxlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::~IntfItems()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vxlaninterfaceentry_list.len(); index++)
    {
        if(vxlaninterfaceentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<vxlaninterfaceentry_list.len(); index++)
    {
        if(vxlaninterfaceentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/vxlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::VxlanTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VxlanInterfaceEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList>();
        c->parent = this;
        vxlaninterfaceentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vxlaninterfaceentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::VxlanTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VxlanInterfaceEntry-list")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::VxlanInterfaceEntryList()
    :
    name{YType::str, "name"},
    mytepstatus{YType::enumeration, "myTepStatus"},
    hostreachability{YType::enumeration, "hostReachability"},
    controllerid{YType::uint32, "controllerId"},
    configsource{YType::enumeration, "configSource"},
    primarytunnelip{YType::str, "primaryTunnelIp"},
    secondarytunnelip{YType::str, "secondaryTunnelIp"}
        ,
    localbfd_items(std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems>())
{
    localbfd_items->parent = this;

    yang_name = "VxlanInterfaceEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::~VxlanInterfaceEntryList()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mytepstatus.is_set
	|| hostreachability.is_set
	|| controllerid.is_set
	|| configsource.is_set
	|| primarytunnelip.is_set
	|| secondarytunnelip.is_set
	|| (localbfd_items !=  nullptr && localbfd_items->has_data());
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mytepstatus.yfilter)
	|| ydk::is_set(hostreachability.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(configsource.yfilter)
	|| ydk::is_set(primarytunnelip.yfilter)
	|| ydk::is_set(secondarytunnelip.yfilter)
	|| (localbfd_items !=  nullptr && localbfd_items->has_operation());
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/vxlanTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VxlanInterfaceEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mytepstatus.is_set || is_set(mytepstatus.yfilter)) leaf_name_data.push_back(mytepstatus.get_name_leafdata());
    if (hostreachability.is_set || is_set(hostreachability.yfilter)) leaf_name_data.push_back(hostreachability.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (configsource.is_set || is_set(configsource.yfilter)) leaf_name_data.push_back(configsource.get_name_leafdata());
    if (primarytunnelip.is_set || is_set(primarytunnelip.yfilter)) leaf_name_data.push_back(primarytunnelip.get_name_leafdata());
    if (secondarytunnelip.is_set || is_set(secondarytunnelip.yfilter)) leaf_name_data.push_back(secondarytunnelip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localBfd-items")
    {
        if(localbfd_items == nullptr)
        {
            localbfd_items = std::make_shared<System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems>();
        }
        return localbfd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(localbfd_items != nullptr)
    {
        children["localBfd-items"] = localbfd_items;
    }

    return children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus = value;
        mytepstatus.value_namespace = name_space;
        mytepstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostReachability")
    {
        hostreachability = value;
        hostreachability.value_namespace = name_space;
        hostreachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configSource")
    {
        configsource = value;
        configsource.value_namespace = name_space;
        configsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip = value;
        primarytunnelip.value_namespace = name_space;
        primarytunnelip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip = value;
        secondarytunnelip.value_namespace = name_space;
        secondarytunnelip.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus.yfilter = yfilter;
    }
    if(value_path == "hostReachability")
    {
        hostreachability.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "configSource")
    {
        configsource.yfilter = yfilter;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip.yfilter = yfilter;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip.yfilter = yfilter;
    }
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localBfd-items" || name == "name" || name == "myTepStatus" || name == "hostReachability" || name == "controllerId" || name == "configSource" || name == "primaryTunnelIp" || name == "secondaryTunnelIp")
        return true;
    return false;
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::LocalBfdItems()
    :
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"}
{

    yang_name = "localBfd-items"; yang_parent_name = "VxlanInterfaceEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::~LocalBfdItems()
{
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| ip.is_set
	|| mintxintvl.is_set
	|| minrxintvl.is_set;
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter);
}

std::string System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localBfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
}

bool System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip" || name == "minTxIntvl" || name == "minRxIntvl")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::ShadowVxlanTableItems()
    :
    intf_items(std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "shadowVxlanTable-items"; yang_parent_name = "systemTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::~ShadowVxlanTableItems()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::SystemTableItems::ShadowVxlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shadowVxlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ShadowVxlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ShadowVxlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    return children;
}

void System::SystemTableItems::ShadowVxlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ShadowVxlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::IntfItems()
    :
    shadowvxlaninterfaceentry_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "shadowVxlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::~IntfItems()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<shadowvxlaninterfaceentry_list.len(); index++)
    {
        if(shadowvxlaninterfaceentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<shadowvxlaninterfaceentry_list.len(); index++)
    {
        if(shadowvxlaninterfaceentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/shadowVxlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ShadowVxlanInterfaceEntry-list")
    {
        auto c = std::make_shared<System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList>();
        c->parent = this;
        shadowvxlaninterfaceentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : shadowvxlaninterfaceentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ShadowVxlanInterfaceEntry-list")
        return true;
    return false;
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::ShadowVxlanInterfaceEntryList()
    :
    name{YType::str, "name"},
    mytepstatus{YType::enumeration, "myTepStatus"},
    hostreachability{YType::enumeration, "hostReachability"},
    controllerid{YType::uint32, "controllerId"},
    configsource{YType::enumeration, "configSource"},
    primarytunnelip{YType::str, "primaryTunnelIp"},
    secondarytunnelip{YType::str, "secondaryTunnelIp"}
{

    yang_name = "ShadowVxlanInterfaceEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::~ShadowVxlanInterfaceEntryList()
{
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mytepstatus.is_set
	|| hostreachability.is_set
	|| controllerid.is_set
	|| configsource.is_set
	|| primarytunnelip.is_set
	|| secondarytunnelip.is_set;
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mytepstatus.yfilter)
	|| ydk::is_set(hostreachability.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(configsource.yfilter)
	|| ydk::is_set(primarytunnelip.yfilter)
	|| ydk::is_set(secondarytunnelip.yfilter);
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/systemTable-items/shadowVxlanTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ShadowVxlanInterfaceEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mytepstatus.is_set || is_set(mytepstatus.yfilter)) leaf_name_data.push_back(mytepstatus.get_name_leafdata());
    if (hostreachability.is_set || is_set(hostreachability.yfilter)) leaf_name_data.push_back(hostreachability.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (configsource.is_set || is_set(configsource.yfilter)) leaf_name_data.push_back(configsource.get_name_leafdata());
    if (primarytunnelip.is_set || is_set(primarytunnelip.yfilter)) leaf_name_data.push_back(primarytunnelip.get_name_leafdata());
    if (secondarytunnelip.is_set || is_set(secondarytunnelip.yfilter)) leaf_name_data.push_back(secondarytunnelip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus = value;
        mytepstatus.value_namespace = name_space;
        mytepstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostReachability")
    {
        hostreachability = value;
        hostreachability.value_namespace = name_space;
        hostreachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configSource")
    {
        configsource = value;
        configsource.value_namespace = name_space;
        configsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip = value;
        primarytunnelip.value_namespace = name_space;
        primarytunnelip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip = value;
        secondarytunnelip.value_namespace = name_space;
        secondarytunnelip.value_namespace_prefix = name_space_prefix;
    }
}

void System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "myTepStatus")
    {
        mytepstatus.yfilter = yfilter;
    }
    if(value_path == "hostReachability")
    {
        hostreachability.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "configSource")
    {
        configsource.yfilter = yfilter;
    }
    if(value_path == "primaryTunnelIp")
    {
        primarytunnelip.yfilter = yfilter;
    }
    if(value_path == "secondaryTunnelIp")
    {
        secondarytunnelip.yfilter = yfilter;
    }
}

bool System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "myTepStatus" || name == "hostReachability" || name == "controllerId" || name == "configSource" || name == "primaryTunnelIp" || name == "secondaryTunnelIp")
        return true;
    return false;
}

System::TunnelIntfTableItems::TunnelIntfTableItems()
    :
    intf_items(std::make_shared<System::TunnelIntfTableItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "tunnelIntfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::~TunnelIntfTableItems()
{
}

bool System::TunnelIntfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::TunnelIntfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::TunnelIntfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelIntfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::TunnelIntfTableItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    return children;
}

void System::TunnelIntfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::IntfItems()
    :
    tunnelintfentry_list(this, {"destip"})
{

    yang_name = "intf-items"; yang_parent_name = "tunnelIntfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::IntfItems::~IntfItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnelintfentry_list.len(); index++)
    {
        if(tunnelintfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<tunnelintfentry_list.len(); index++)
    {
        if(tunnelintfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tunnelIntfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TunnelIntfEntry-list")
    {
        auto c = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList>();
        c->parent = this;
        tunnelintfentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnelintfentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TunnelIntfEntry-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunnelIntfEntryList()
    :
    destip{YType::str, "destIp"},
    description{YType::str, "description"},
    ifid{YType::str, "ifId"},
    type{YType::enumeration, "type"},
    srcip{YType::str, "srcIp"},
    mtu{YType::uint32, "mtu"},
    state{YType::enumeration, "state"},
    vrf{YType::str, "vrf"},
    ipvnidbinding{YType::enumeration, "ipVnidBinding"},
    istunnelcreated{YType::boolean, "isTunnelCreated"},
    istunnelcreatedbycontroller{YType::boolean, "isTunnelCreatedByController"},
    noofmacsseenbeforetunnelcreatedbycontroller{YType::uint32, "noOfMacsSeenBeforeTunnelCreatedbyController"},
    eptype{YType::str, "epType"}
        ,
    tunmactable_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems>())
    , vnidtable_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems>())
    , remotebfd_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems>())
    , rtaggregatevtepatt_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems>())
{
    tunmactable_items->parent = this;
    vnidtable_items->parent = this;
    remotebfd_items->parent = this;
    rtaggregatevtepatt_items->parent = this;

    yang_name = "TunnelIntfEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::~TunnelIntfEntryList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return destip.is_set
	|| description.is_set
	|| ifid.is_set
	|| type.is_set
	|| srcip.is_set
	|| mtu.is_set
	|| state.is_set
	|| vrf.is_set
	|| ipvnidbinding.is_set
	|| istunnelcreated.is_set
	|| istunnelcreatedbycontroller.is_set
	|| noofmacsseenbeforetunnelcreatedbycontroller.is_set
	|| eptype.is_set
	|| (tunmactable_items !=  nullptr && tunmactable_items->has_data())
	|| (vnidtable_items !=  nullptr && vnidtable_items->has_data())
	|| (remotebfd_items !=  nullptr && remotebfd_items->has_data())
	|| (rtaggregatevtepatt_items !=  nullptr && rtaggregatevtepatt_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipvnidbinding.yfilter)
	|| ydk::is_set(istunnelcreated.yfilter)
	|| ydk::is_set(istunnelcreatedbycontroller.yfilter)
	|| ydk::is_set(noofmacsseenbeforetunnelcreatedbycontroller.yfilter)
	|| ydk::is_set(eptype.yfilter)
	|| (tunmactable_items !=  nullptr && tunmactable_items->has_operation())
	|| (vnidtable_items !=  nullptr && vnidtable_items->has_operation())
	|| (remotebfd_items !=  nullptr && remotebfd_items->has_operation())
	|| (rtaggregatevtepatt_items !=  nullptr && rtaggregatevtepatt_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tunnelIntfTable-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TunnelIntfEntry-list";
    ADD_KEY_TOKEN(destip, "destIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipvnidbinding.is_set || is_set(ipvnidbinding.yfilter)) leaf_name_data.push_back(ipvnidbinding.get_name_leafdata());
    if (istunnelcreated.is_set || is_set(istunnelcreated.yfilter)) leaf_name_data.push_back(istunnelcreated.get_name_leafdata());
    if (istunnelcreatedbycontroller.is_set || is_set(istunnelcreatedbycontroller.yfilter)) leaf_name_data.push_back(istunnelcreatedbycontroller.get_name_leafdata());
    if (noofmacsseenbeforetunnelcreatedbycontroller.is_set || is_set(noofmacsseenbeforetunnelcreatedbycontroller.yfilter)) leaf_name_data.push_back(noofmacsseenbeforetunnelcreatedbycontroller.get_name_leafdata());
    if (eptype.is_set || is_set(eptype.yfilter)) leaf_name_data.push_back(eptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunMacTable-items")
    {
        if(tunmactable_items == nullptr)
        {
            tunmactable_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems>();
        }
        return tunmactable_items;
    }

    if(child_yang_name == "vnidTable-items")
    {
        if(vnidtable_items == nullptr)
        {
            vnidtable_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems>();
        }
        return vnidtable_items;
    }

    if(child_yang_name == "remoteBfd-items")
    {
        if(remotebfd_items == nullptr)
        {
            remotebfd_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems>();
        }
        return remotebfd_items;
    }

    if(child_yang_name == "rtaggregateVtepAtt-items")
    {
        if(rtaggregatevtepatt_items == nullptr)
        {
            rtaggregatevtepatt_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems>();
        }
        return rtaggregatevtepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunmactable_items != nullptr)
    {
        children["tunMacTable-items"] = tunmactable_items;
    }

    if(vnidtable_items != nullptr)
    {
        children["vnidTable-items"] = vnidtable_items;
    }

    if(remotebfd_items != nullptr)
    {
        children["remoteBfd-items"] = remotebfd_items;
    }

    if(rtaggregatevtepatt_items != nullptr)
    {
        children["rtaggregateVtepAtt-items"] = rtaggregatevtepatt_items;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destIp")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipVnidBinding")
    {
        ipvnidbinding = value;
        ipvnidbinding.value_namespace = name_space;
        ipvnidbinding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isTunnelCreated")
    {
        istunnelcreated = value;
        istunnelcreated.value_namespace = name_space;
        istunnelcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isTunnelCreatedByController")
    {
        istunnelcreatedbycontroller = value;
        istunnelcreatedbycontroller.value_namespace = name_space;
        istunnelcreatedbycontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfMacsSeenBeforeTunnelCreatedbyController")
    {
        noofmacsseenbeforetunnelcreatedbycontroller = value;
        noofmacsseenbeforetunnelcreatedbycontroller.value_namespace = name_space;
        noofmacsseenbeforetunnelcreatedbycontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epType")
    {
        eptype = value;
        eptype.value_namespace = name_space;
        eptype.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destIp")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipVnidBinding")
    {
        ipvnidbinding.yfilter = yfilter;
    }
    if(value_path == "isTunnelCreated")
    {
        istunnelcreated.yfilter = yfilter;
    }
    if(value_path == "isTunnelCreatedByController")
    {
        istunnelcreatedbycontroller.yfilter = yfilter;
    }
    if(value_path == "noOfMacsSeenBeforeTunnelCreatedbyController")
    {
        noofmacsseenbeforetunnelcreatedbycontroller.yfilter = yfilter;
    }
    if(value_path == "epType")
    {
        eptype.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunMacTable-items" || name == "vnidTable-items" || name == "remoteBfd-items" || name == "rtaggregateVtepAtt-items" || name == "destIp" || name == "description" || name == "ifId" || name == "type" || name == "srcIp" || name == "mtu" || name == "state" || name == "vrf" || name == "ipVnidBinding" || name == "isTunnelCreated" || name == "isTunnelCreatedByController" || name == "noOfMacsSeenBeforeTunnelCreatedbyController" || name == "epType")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::TunMacTableItems()
    :
    rsmac_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems>())
{
    rsmac_items->parent = this;

    yang_name = "tunMacTable-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::~TunMacTableItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (rsmac_items !=  nullptr && rsmac_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (rsmac_items !=  nullptr && rsmac_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunMacTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmac-items")
    {
        if(rsmac_items == nullptr)
        {
            rsmac_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems>();
        }
        return rsmac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmac_items != nullptr)
    {
        children["rsmac-items"] = rsmac_items;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmac-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsmacItems()
    :
    rsmac_list(this, {"tdn"})
{

    yang_name = "rsmac-items"; yang_parent_name = "tunMacTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::~RsmacItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmac_list.len(); index++)
    {
        if(rsmac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_operation() const
{
    for (std::size_t index=0; index<rsmac_list.len(); index++)
    {
        if(rsmac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMac-list")
    {
        auto c = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList>();
        c->parent = this;
        rsmac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMac-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::RsMacList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMac-list"; yang_parent_name = "rsmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::~RsMacList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMac-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidTableItems()
    :
    vnid_items(std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems>())
{
    vnid_items->parent = this;

    yang_name = "vnidTable-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::~VnidTableItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vnid_items !=  nullptr && vnid_items->has_data());
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vnid_items !=  nullptr && vnid_items->has_operation());
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnidTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vnid-items")
    {
        if(vnid_items == nullptr)
        {
            vnid_items = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems>();
        }
        return vnid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vnid_items != nullptr)
    {
        children["vnid-items"] = vnid_items;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnid-items")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidItems()
    :
    vnidentry_list(this, {"vnid"})
{

    yang_name = "vnid-items"; yang_parent_name = "vnidTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::~VnidItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnidentry_list.len(); index++)
    {
        if(vnidentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_operation() const
{
    for (std::size_t index=0; index<vnidentry_list.len(); index++)
    {
        if(vnidentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VnidEntry-list")
    {
        auto c = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList>();
        c->parent = this;
        vnidentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vnidentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VnidEntry-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::VnidEntryList()
    :
    vnid{YType::str, "vnid"},
    groupaddr{YType::str, "groupAddr"}
{

    yang_name = "VnidEntry-list"; yang_parent_name = "vnid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::~VnidEntryList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| groupaddr.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(groupaddr.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VnidEntry-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupAddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "groupAddr")
    {
        groupaddr.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnid" || name == "groupAddr")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::RemoteBfdItems()
    :
    bfdstatus{YType::enumeration, "bfdStatus"},
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"}
{

    yang_name = "remoteBfd-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::~RemoteBfdItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_data() const
{
    if (is_presence_container) return true;
    return bfdstatus.is_set
	|| mac.is_set
	|| ip.is_set
	|| mintxintvl.is_set
	|| minrxintvl.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfdstatus.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteBfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdstatus.is_set || is_set(bfdstatus.yfilter)) leaf_name_data.push_back(bfdstatus.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfdStatus")
    {
        bfdstatus = value;
        bfdstatus.value_namespace = name_space;
        bfdstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfdStatus")
    {
        bfdstatus.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfdStatus" || name == "mac" || name == "ip" || name == "minTxIntvl" || name == "minRxIntvl")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtaggregateVtepAttItems()
    :
    rtaggregatevtepatt_list(this, {"tdn"})
{

    yang_name = "rtaggregateVtepAtt-items"; yang_parent_name = "TunnelIntfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::~RtaggregateVtepAttItems()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaggregatevtepatt_list.len(); index++)
    {
        if(rtaggregatevtepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtaggregatevtepatt_list.len(); index++)
    {
        if(rtaggregatevtepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaggregateVtepAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAggregateVtepAtt-list")
    {
        auto c = std::make_shared<System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList>();
        c->parent = this;
        rtaggregatevtepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtaggregatevtepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAggregateVtepAtt-list")
        return true;
    return false;
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::RtAggregateVtepAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtAggregateVtepAtt-list"; yang_parent_name = "rtaggregateVtepAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::~RtAggregateVtepAttList()
{
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAggregateVtepAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VlanTableItems::VlanTableItems()
    :
    vlan_items(std::make_shared<System::VlanTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlanTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::~VlanTableItems()
{
}

bool System::VlanTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::VlanTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::VlanTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VlanTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::VlanTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VlanTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    return children;
}

void System::VlanTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VlanTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VlanTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::VlanTableItems::VlanItems::VlanItems()
    :
    vlanentry_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlanTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::VlanItems::~VlanItems()
{
}

bool System::VlanTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanentry_list.len(); index++)
    {
        if(vlanentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VlanTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlanentry_list.len(); index++)
    {
        if(vlanentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VlanTableItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VlanTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanEntry-list")
    {
        auto c = std::make_shared<System::VlanTableItems::VlanItems::VlanEntryList>();
        c->parent = this;
        vlanentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VlanTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VlanTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VlanTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VlanTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanEntry-list")
        return true;
    return false;
}

System::VlanTableItems::VlanItems::VlanEntryList::VlanEntryList()
    :
    id{YType::str, "id"},
    adminstate{YType::enumeration, "adminState"}
{

    yang_name = "VlanEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VlanTableItems::VlanItems::VlanEntryList::~VlanEntryList()
{
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| adminstate.is_set;
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminstate.yfilter);
}

std::string System::VlanTableItems::VlanItems::VlanEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vlanTable-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VlanTableItems::VlanItems::VlanEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanEntry-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VlanTableItems::VlanItems::VlanEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VlanTableItems::VlanItems::VlanEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VlanTableItems::VlanItems::VlanEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VlanTableItems::VlanItems::VlanEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::VlanTableItems::VlanItems::VlanEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
}

bool System::VlanTableItems::VlanItems::VlanEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "adminState")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomTableItems()
    :
    vpcdom_items(std::make_shared<System::VpcDomTableItems::VpcDomItems>())
{
    vpcdom_items->parent = this;

    yang_name = "vpcDomTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::~VpcDomTableItems()
{
}

bool System::VpcDomTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vpcdom_items !=  nullptr && vpcdom_items->has_data());
}

bool System::VpcDomTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vpcdom_items !=  nullptr && vpcdom_items->has_operation());
}

std::string System::VpcDomTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcDomTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcDom-items")
    {
        if(vpcdom_items == nullptr)
        {
            vpcdom_items = std::make_shared<System::VpcDomTableItems::VpcDomItems>();
        }
        return vpcdom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpcdom_items != nullptr)
    {
        children["vpcDom-items"] = vpcdom_items;
    }

    return children;
}

void System::VpcDomTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcDom-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomItems()
    :
    vpcdomentry_list(this, {"domainid"})
{

    yang_name = "vpcDom-items"; yang_parent_name = "vpcDomTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::VpcDomItems::~VpcDomItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcdomentry_list.len(); index++)
    {
        if(vpcdomentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcDomTableItems::VpcDomItems::has_operation() const
{
    for (std::size_t index=0; index<vpcdomentry_list.len(); index++)
    {
        if(vpcdomentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpcDomTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::VpcDomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcDom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcDomEntry-list")
    {
        auto c = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList>();
        c->parent = this;
        vpcdomentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vpcdomentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcDomEntry-list")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcDomEntryList()
    :
    domainid{YType::uint16, "domainId"},
    keepalivedestip{YType::str, "keepaliveDestIp"},
    keepalivesrcip{YType::str, "keepaliveSrcIp"},
    virtualip{YType::str, "virtualIp"},
    keepalivests{YType::enumeration, "keepaliveSts"},
    peerlinksts{YType::enumeration, "peerLinkSts"},
    vpcrole{YType::enumeration, "vpcRole"},
    peergw{YType::boolean, "peerGW"},
    dualactive{YType::boolean, "dualActive"},
    peerlinkif{YType::str, "peerLinkIf"}
        ,
    vpctable_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems>())
{
    vpctable_items->parent = this;

    yang_name = "VpcDomEntry-list"; yang_parent_name = "vpcDom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::~VpcDomEntryList()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_data() const
{
    if (is_presence_container) return true;
    return domainid.is_set
	|| keepalivedestip.is_set
	|| keepalivesrcip.is_set
	|| virtualip.is_set
	|| keepalivests.is_set
	|| peerlinksts.is_set
	|| vpcrole.is_set
	|| peergw.is_set
	|| dualactive.is_set
	|| peerlinkif.is_set
	|| (vpctable_items !=  nullptr && vpctable_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domainid.yfilter)
	|| ydk::is_set(keepalivedestip.yfilter)
	|| ydk::is_set(keepalivesrcip.yfilter)
	|| ydk::is_set(virtualip.yfilter)
	|| ydk::is_set(keepalivests.yfilter)
	|| ydk::is_set(peerlinksts.yfilter)
	|| ydk::is_set(vpcrole.yfilter)
	|| ydk::is_set(peergw.yfilter)
	|| ydk::is_set(dualactive.yfilter)
	|| ydk::is_set(peerlinkif.yfilter)
	|| (vpctable_items !=  nullptr && vpctable_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vpcDomTable-items/vpcDom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcDomEntry-list";
    ADD_KEY_TOKEN(domainid, "domainId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domainid.is_set || is_set(domainid.yfilter)) leaf_name_data.push_back(domainid.get_name_leafdata());
    if (keepalivedestip.is_set || is_set(keepalivedestip.yfilter)) leaf_name_data.push_back(keepalivedestip.get_name_leafdata());
    if (keepalivesrcip.is_set || is_set(keepalivesrcip.yfilter)) leaf_name_data.push_back(keepalivesrcip.get_name_leafdata());
    if (virtualip.is_set || is_set(virtualip.yfilter)) leaf_name_data.push_back(virtualip.get_name_leafdata());
    if (keepalivests.is_set || is_set(keepalivests.yfilter)) leaf_name_data.push_back(keepalivests.get_name_leafdata());
    if (peerlinksts.is_set || is_set(peerlinksts.yfilter)) leaf_name_data.push_back(peerlinksts.get_name_leafdata());
    if (vpcrole.is_set || is_set(vpcrole.yfilter)) leaf_name_data.push_back(vpcrole.get_name_leafdata());
    if (peergw.is_set || is_set(peergw.yfilter)) leaf_name_data.push_back(peergw.get_name_leafdata());
    if (dualactive.is_set || is_set(dualactive.yfilter)) leaf_name_data.push_back(dualactive.get_name_leafdata());
    if (peerlinkif.is_set || is_set(peerlinkif.yfilter)) leaf_name_data.push_back(peerlinkif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcTable-items")
    {
        if(vpctable_items == nullptr)
        {
            vpctable_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems>();
        }
        return vpctable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpctable_items != nullptr)
    {
        children["vpcTable-items"] = vpctable_items;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domainId")
    {
        domainid = value;
        domainid.value_namespace = name_space;
        domainid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveDestIp")
    {
        keepalivedestip = value;
        keepalivedestip.value_namespace = name_space;
        keepalivedestip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveSrcIp")
    {
        keepalivesrcip = value;
        keepalivesrcip.value_namespace = name_space;
        keepalivesrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualIp")
    {
        virtualip = value;
        virtualip.value_namespace = name_space;
        virtualip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepaliveSts")
    {
        keepalivests = value;
        keepalivests.value_namespace = name_space;
        keepalivests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerLinkSts")
    {
        peerlinksts = value;
        peerlinksts.value_namespace = name_space;
        peerlinksts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcRole")
    {
        vpcrole = value;
        vpcrole.value_namespace = name_space;
        vpcrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerGW")
    {
        peergw = value;
        peergw.value_namespace = name_space;
        peergw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dualActive")
    {
        dualactive = value;
        dualactive.value_namespace = name_space;
        dualactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerLinkIf")
    {
        peerlinkif = value;
        peerlinkif.value_namespace = name_space;
        peerlinkif.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domainId")
    {
        domainid.yfilter = yfilter;
    }
    if(value_path == "keepaliveDestIp")
    {
        keepalivedestip.yfilter = yfilter;
    }
    if(value_path == "keepaliveSrcIp")
    {
        keepalivesrcip.yfilter = yfilter;
    }
    if(value_path == "virtualIp")
    {
        virtualip.yfilter = yfilter;
    }
    if(value_path == "keepaliveSts")
    {
        keepalivests.yfilter = yfilter;
    }
    if(value_path == "peerLinkSts")
    {
        peerlinksts.yfilter = yfilter;
    }
    if(value_path == "vpcRole")
    {
        vpcrole.yfilter = yfilter;
    }
    if(value_path == "peerGW")
    {
        peergw.yfilter = yfilter;
    }
    if(value_path == "dualActive")
    {
        dualactive.yfilter = yfilter;
    }
    if(value_path == "peerLinkIf")
    {
        peerlinkif.yfilter = yfilter;
    }
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcTable-items" || name == "domainId" || name == "keepaliveDestIp" || name == "keepaliveSrcIp" || name == "virtualIp" || name == "keepaliveSts" || name == "peerLinkSts" || name == "vpcRole" || name == "peerGW" || name == "dualActive" || name == "peerLinkIf")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcTableItems()
    :
    vpc_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems>())
{
    vpc_items->parent = this;

    yang_name = "vpcTable-items"; yang_parent_name = "VpcDomEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::~VpcTableItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vpc_items !=  nullptr && vpc_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vpc_items !=  nullptr && vpc_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems>();
        }
        return vpc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpc_items != nullptr)
    {
        children["vpc-items"] = vpc_items;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpc-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcItems()
    :
    vpcentry_list(this, {"vpcnum"})
{

    yang_name = "vpc-items"; yang_parent_name = "vpcTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::~VpcItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcentry_list.len(); index++)
    {
        if(vpcentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_operation() const
{
    for (std::size_t index=0; index<vpcentry_list.len(); index++)
    {
        if(vpcentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcEntry-list")
    {
        auto c = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList>();
        c->parent = this;
        vpcentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vpcentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcEntry-list")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcEntryList()
    :
    vpcnum{YType::uint16, "vpcnum"},
    ifid{YType::str, "ifId"},
    operstate{YType::enumeration, "operState"},
    conschecksts{YType::enumeration, "consCheckSts"},
    conscheckreason{YType::uint32, "consCheckReason"}
        ,
    vpcintf_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems>())
{
    vpcintf_items->parent = this;

    yang_name = "VpcEntry-list"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::~VpcEntryList()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vpcnum.is_set
	|| ifid.is_set
	|| operstate.is_set
	|| conschecksts.is_set
	|| conscheckreason.is_set
	|| (vpcintf_items !=  nullptr && vpcintf_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpcnum.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(conschecksts.yfilter)
	|| ydk::is_set(conscheckreason.yfilter)
	|| (vpcintf_items !=  nullptr && vpcintf_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcEntry-list";
    ADD_KEY_TOKEN(vpcnum, "vpcnum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpcnum.is_set || is_set(vpcnum.yfilter)) leaf_name_data.push_back(vpcnum.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (conschecksts.is_set || is_set(conschecksts.yfilter)) leaf_name_data.push_back(conschecksts.get_name_leafdata());
    if (conscheckreason.is_set || is_set(conscheckreason.yfilter)) leaf_name_data.push_back(conscheckreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcintf-items")
    {
        if(vpcintf_items == nullptr)
        {
            vpcintf_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems>();
        }
        return vpcintf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpcintf_items != nullptr)
    {
        children["vpcintf-items"] = vpcintf_items;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpcnum")
    {
        vpcnum = value;
        vpcnum.value_namespace = name_space;
        vpcnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consCheckSts")
    {
        conschecksts = value;
        conschecksts.value_namespace = name_space;
        conschecksts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "consCheckReason")
    {
        conscheckreason = value;
        conscheckreason.value_namespace = name_space;
        conscheckreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpcnum")
    {
        vpcnum.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "consCheckSts")
    {
        conschecksts.yfilter = yfilter;
    }
    if(value_path == "consCheckReason")
    {
        conscheckreason.yfilter = yfilter;
    }
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcintf-items" || name == "vpcnum" || name == "ifId" || name == "operState" || name == "consCheckSts" || name == "consCheckReason")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::VpcintfItems()
    :
    rsvpcintfentryatt_items(std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems>())
{
    rsvpcintfentryatt_items->parent = this;

    yang_name = "vpcintf-items"; yang_parent_name = "VpcEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::~VpcintfItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_data() const
{
    if (is_presence_container) return true;
    return (rsvpcintfentryatt_items !=  nullptr && rsvpcintfentryatt_items->has_data());
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_operation() const
{
    return is_set(yfilter)
	|| (rsvpcintfentryatt_items !=  nullptr && rsvpcintfentryatt_items->has_operation());
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcintf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpcIntfEntryAtt-items")
    {
        if(rsvpcintfentryatt_items == nullptr)
        {
            rsvpcintfentryatt_items = std::make_shared<System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems>();
        }
        return rsvpcintfentryatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvpcintfentryatt_items != nullptr)
    {
        children["rsvpcIntfEntryAtt-items"] = rsvpcintfentryatt_items;
    }

    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpcIntfEntryAtt-items")
        return true;
    return false;
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::RsvpcIntfEntryAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsvpcIntfEntryAtt-items"; yang_parent_name = "vpcintf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::~RsvpcIntfEntryAttItems()
{
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpcIntfEntryAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VrfTableItems::VrfTableItems()
    :
    vrf_items(std::make_shared<System::VrfTableItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "vrfTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::~VrfTableItems()
{
}

bool System::VrfTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::VrfTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::VrfTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::VrfTableItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::VrfTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfItems()
    :
    vrfentry_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "vrfTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::VrfItems::~VrfItems()
{
}

bool System::VrfTableItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrfentry_list.len(); index++)
    {
        if(vrfentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrfentry_list.len(); index++)
    {
        if(vrfentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrfTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VrfEntry-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList>();
        c->parent = this;
        vrfentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrfentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VrfEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::VrfEntryList()
    :
    name{YType::str, "name"},
    genname{YType::str, "genName"},
    ctrlrid{YType::uint32, "ctrlrId"},
    vnid{YType::str, "vnid"},
    rd{YType::str, "rd"},
    genextrart{YType::boolean, "genExtraRt"},
    templatename{YType::str, "templateName"},
    templatestatus{YType::enumeration, "templateStatus"},
    shdwtemplatename{YType::str, "shdwTemplateName"},
    shdwvrfgenname{YType::str, "shdwVrfGenName"}
        ,
    af_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems>())
{
    af_items->parent = this;

    yang_name = "VrfEntry-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VrfTableItems::VrfItems::VrfEntryList::~VrfEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| genname.is_set
	|| ctrlrid.is_set
	|| vnid.is_set
	|| rd.is_set
	|| genextrart.is_set
	|| templatename.is_set
	|| templatestatus.is_set
	|| shdwtemplatename.is_set
	|| shdwvrfgenname.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(genname.yfilter)
	|| ydk::is_set(ctrlrid.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(genextrart.yfilter)
	|| ydk::is_set(templatename.yfilter)
	|| ydk::is_set(templatestatus.yfilter)
	|| ydk::is_set(shdwtemplatename.yfilter)
	|| ydk::is_set(shdwvrfgenname.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vrfTable-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VrfEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (genname.is_set || is_set(genname.yfilter)) leaf_name_data.push_back(genname.get_name_leafdata());
    if (ctrlrid.is_set || is_set(ctrlrid.yfilter)) leaf_name_data.push_back(ctrlrid.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (genextrart.is_set || is_set(genextrart.yfilter)) leaf_name_data.push_back(genextrart.get_name_leafdata());
    if (templatename.is_set || is_set(templatename.yfilter)) leaf_name_data.push_back(templatename.get_name_leafdata());
    if (templatestatus.is_set || is_set(templatestatus.yfilter)) leaf_name_data.push_back(templatestatus.get_name_leafdata());
    if (shdwtemplatename.is_set || is_set(shdwtemplatename.yfilter)) leaf_name_data.push_back(shdwtemplatename.get_name_leafdata());
    if (shdwvrfgenname.is_set || is_set(shdwvrfgenname.yfilter)) leaf_name_data.push_back(shdwvrfgenname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genName")
    {
        genname = value;
        genname.value_namespace = name_space;
        genname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid = value;
        ctrlrid.value_namespace = name_space;
        ctrlrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genExtraRt")
    {
        genextrart = value;
        genextrart.value_namespace = name_space;
        genextrart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateName")
    {
        templatename = value;
        templatename.value_namespace = name_space;
        templatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateStatus")
    {
        templatestatus = value;
        templatestatus.value_namespace = name_space;
        templatestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shdwTemplateName")
    {
        shdwtemplatename = value;
        shdwtemplatename.value_namespace = name_space;
        shdwtemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shdwVrfGenName")
    {
        shdwvrfgenname = value;
        shdwvrfgenname.value_namespace = name_space;
        shdwvrfgenname.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "genName")
    {
        genname.yfilter = yfilter;
    }
    if(value_path == "ctrlrId")
    {
        ctrlrid.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "genExtraRt")
    {
        genextrart.yfilter = yfilter;
    }
    if(value_path == "templateName")
    {
        templatename.yfilter = yfilter;
    }
    if(value_path == "templateStatus")
    {
        templatestatus.yfilter = yfilter;
    }
    if(value_path == "shdwTemplateName")
    {
        shdwtemplatename.yfilter = yfilter;
    }
    if(value_path == "shdwVrfGenName")
    {
        shdwvrfgenname.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "genName" || name == "ctrlrId" || name == "vnid" || name == "rd" || name == "genExtraRt" || name == "templateName" || name == "templateStatus" || name == "shdwTemplateName" || name == "shdwVrfGenName")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::AfItems()
    :
    domainaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "VrfEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::~AfItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domainaf_list.len(); index++)
    {
        if(domainaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomainAf-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList>();
        c->parent = this;
        domainaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domainaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomainAf-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::DomainAfList()
    :
    type{YType::enumeration, "type"},
    vrf{YType::str, "vrf"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems>())
    , ctrl_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems>())
{
    rttp_items->parent = this;
    ctrl_items->parent = this;

    yang_name = "DomainAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::~DomainAfList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vrf.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data())
	|| (ctrl_items !=  nullptr && ctrl_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation())
	|| (ctrl_items !=  nullptr && ctrl_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomainAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems>();
        }
        return rttp_items;
    }

    if(child_yang_name == "ctrl-items")
    {
        if(ctrl_items == nullptr)
        {
            ctrl_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems>();
        }
        return ctrl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    if(ctrl_items != nullptr)
    {
        children["ctrl-items"] = ctrl_items;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "ctrl-items" || name == "type" || name == "vrf" || name == "rd")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::~RttpItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::~RttPList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::CtrlItems()
    :
    afctrl_list(this, {"type"})
{

    yang_name = "ctrl-items"; yang_parent_name = "DomainAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::~CtrlItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_operation() const
{
    for (std::size_t index=0; index<afctrl_list.len(); index++)
    {
        if(afctrl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AfCtrl-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList>();
        c->parent = this;
        afctrl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : afctrl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AfCtrl-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::AfCtrlList()
    :
    type{YType::enumeration, "type"}
        ,
    rttp_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "AfCtrl-list"; yang_parent_name = "ctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::~AfCtrlList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AfCtrl-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "type")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "AfCtrl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::~RttpItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    isl3{YType::enumeration, "isL3"}
        ,
    ent_items(std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>())
{
    ent_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::~RttPList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| isl3.is_set
	|| (ent_items !=  nullptr && ent_items->has_data());
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation());
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "type" || name == "isL3")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rttentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set;
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter);
}

std::string System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
}

bool System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt")
        return true;
    return false;
}

System::AcItems::AcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    ruleip_items(std::make_shared<System::AcItems::RuleIpItems>())
    , rulemac_items(std::make_shared<System::AcItems::RuleMacItems>())
    , rulearp_items(std::make_shared<System::AcItems::RuleArpItems>())
{
    ruleip_items->parent = this;
    rulemac_items->parent = this;
    rulearp_items->parent = this;

    yang_name = "ac-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::~AcItems()
{
}

bool System::AcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (ruleip_items !=  nullptr && ruleip_items->has_data())
	|| (rulemac_items !=  nullptr && rulemac_items->has_data())
	|| (rulearp_items !=  nullptr && rulearp_items->has_data());
}

bool System::AcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (ruleip_items !=  nullptr && ruleip_items->has_operation())
	|| (rulemac_items !=  nullptr && rulemac_items->has_operation())
	|| (rulearp_items !=  nullptr && rulearp_items->has_operation());
}

std::string System::AcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ruleIp-items")
    {
        if(ruleip_items == nullptr)
        {
            ruleip_items = std::make_shared<System::AcItems::RuleIpItems>();
        }
        return ruleip_items;
    }

    if(child_yang_name == "ruleMac-items")
    {
        if(rulemac_items == nullptr)
        {
            rulemac_items = std::make_shared<System::AcItems::RuleMacItems>();
        }
        return rulemac_items;
    }

    if(child_yang_name == "ruleArp-items")
    {
        if(rulearp_items == nullptr)
        {
            rulearp_items = std::make_shared<System::AcItems::RuleArpItems>();
        }
        return rulearp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ruleip_items != nullptr)
    {
        children["ruleIp-items"] = ruleip_items;
    }

    if(rulemac_items != nullptr)
    {
        children["ruleMac-items"] = rulemac_items;
    }

    if(rulearp_items != nullptr)
    {
        children["ruleArp-items"] = rulearp_items;
    }

    return children;
}

void System::AcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ruleIp-items" || name == "ruleMac-items" || name == "ruleArp-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpItems()
    :
    ruleip_list(this, {"ruleid"})
{

    yang_name = "ruleIp-items"; yang_parent_name = "ac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleIpItems::~RuleIpItems()
{
}

bool System::AcItems::RuleIpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ruleip_list.len(); index++)
    {
        if(ruleip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleIpItems::has_operation() const
{
    for (std::size_t index=0; index<ruleip_list.len(); index++)
    {
        if(ruleip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleIpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleIpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ruleIp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleIp-list")
    {
        auto c = std::make_shared<System::AcItems::RuleIpItems::RuleIpList>();
        c->parent = this;
        ruleip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ruleip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleIpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleIpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleIpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleIp-list")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpList::RuleIpList()
    :
    ruleid{YType::uint64, "ruleId"},
    src{YType::str, "src"},
    dst{YType::str, "dst"},
    prot{YType::uint8, "prot"},
    flags{YType::str, "flags"},
    flagsmask{YType::str, "flagsMask"},
    ttl{YType::uint8, "ttl"},
    dscp{YType::uint8, "dscp"},
    dscpmask{YType::uint8, "dscpMask"},
    ecn{YType::uint8, "ecn"},
    ecnmask{YType::uint8, "ecnMask"},
    payloadsz{YType::uint8, "payloadSz"},
    spctag{YType::uint32, "sPcTag"},
    dpctag{YType::uint32, "dPcTag"},
    options{YType::str, "options"},
    optionsmask{YType::str, "optionsMask"},
    icmpflags{YType::uint8, "icmpFlags"},
    icmpcode{YType::uint16, "icmpCode"},
    icmptype{YType::uint8, "icmpType"},
    srcport{YType::uint16, "srcPort"},
    dstport{YType::uint16, "dstPort"},
    tcpflags{YType::str, "tcpFlags"},
    tcpflagsmask{YType::str, "tcpFlagsMask"},
    isext{YType::boolean, "isExt"},
    operstate{YType::enumeration, "operState"},
    lastoperstate{YType::enumeration, "lastOperState"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint16, "order"},
    ctrl{YType::str, "ctrl"},
    ctrlmask{YType::str, "ctrlMask"},
    fabricport{YType::str, "fabricPort"},
    fabricencap{YType::str, "fabricEncap"},
    remotetep{YType::str, "remoteTep"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    dot1p{YType::uint8, "dot1p"},
    dot1pmask{YType::uint8, "dot1pMask"},
    policyname{YType::str, "policyName"},
    tenantname{YType::str, "tenantName"},
    vrfname{YType::str, "vrfName"}
        ,
    bank_items(std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems>())
{
    bank_items->parent = this;

    yang_name = "RuleIp-list"; yang_parent_name = "ruleIp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleIpItems::RuleIpList::~RuleIpList()
{
}

bool System::AcItems::RuleIpItems::RuleIpList::has_data() const
{
    if (is_presence_container) return true;
    return ruleid.is_set
	|| src.is_set
	|| dst.is_set
	|| prot.is_set
	|| flags.is_set
	|| flagsmask.is_set
	|| ttl.is_set
	|| dscp.is_set
	|| dscpmask.is_set
	|| ecn.is_set
	|| ecnmask.is_set
	|| payloadsz.is_set
	|| spctag.is_set
	|| dpctag.is_set
	|| options.is_set
	|| optionsmask.is_set
	|| icmpflags.is_set
	|| icmpcode.is_set
	|| icmptype.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| tcpflags.is_set
	|| tcpflagsmask.is_set
	|| isext.is_set
	|| operstate.is_set
	|| lastoperstate.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| ctrl.is_set
	|| ctrlmask.is_set
	|| fabricport.is_set
	|| fabricencap.is_set
	|| remotetep.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| dot1p.is_set
	|| dot1pmask.is_set
	|| policyname.is_set
	|| tenantname.is_set
	|| vrfname.is_set
	|| (bank_items !=  nullptr && bank_items->has_data());
}

bool System::AcItems::RuleIpItems::RuleIpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ruleid.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(dst.yfilter)
	|| ydk::is_set(prot.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(flagsmask.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dscpmask.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(ecnmask.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(dpctag.yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(optionsmask.yfilter)
	|| ydk::is_set(icmpflags.yfilter)
	|| ydk::is_set(icmpcode.yfilter)
	|| ydk::is_set(icmptype.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(tcpflags.yfilter)
	|| ydk::is_set(tcpflagsmask.yfilter)
	|| ydk::is_set(isext.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(lastoperstate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(ctrlmask.yfilter)
	|| ydk::is_set(fabricport.yfilter)
	|| ydk::is_set(fabricencap.yfilter)
	|| ydk::is_set(remotetep.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(dot1p.yfilter)
	|| ydk::is_set(dot1pmask.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(tenantname.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (bank_items !=  nullptr && bank_items->has_operation());
}

std::string System::AcItems::RuleIpItems::RuleIpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/ruleIp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleIpItems::RuleIpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleIp-list";
    ADD_KEY_TOKEN(ruleid, "ruleId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::RuleIpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ruleid.is_set || is_set(ruleid.yfilter)) leaf_name_data.push_back(ruleid.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (dst.is_set || is_set(dst.yfilter)) leaf_name_data.push_back(dst.get_name_leafdata());
    if (prot.is_set || is_set(prot.yfilter)) leaf_name_data.push_back(prot.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (flagsmask.is_set || is_set(flagsmask.yfilter)) leaf_name_data.push_back(flagsmask.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dscpmask.is_set || is_set(dscpmask.yfilter)) leaf_name_data.push_back(dscpmask.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (ecnmask.is_set || is_set(ecnmask.yfilter)) leaf_name_data.push_back(ecnmask.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (dpctag.is_set || is_set(dpctag.yfilter)) leaf_name_data.push_back(dpctag.get_name_leafdata());
    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (optionsmask.is_set || is_set(optionsmask.yfilter)) leaf_name_data.push_back(optionsmask.get_name_leafdata());
    if (icmpflags.is_set || is_set(icmpflags.yfilter)) leaf_name_data.push_back(icmpflags.get_name_leafdata());
    if (icmpcode.is_set || is_set(icmpcode.yfilter)) leaf_name_data.push_back(icmpcode.get_name_leafdata());
    if (icmptype.is_set || is_set(icmptype.yfilter)) leaf_name_data.push_back(icmptype.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (tcpflags.is_set || is_set(tcpflags.yfilter)) leaf_name_data.push_back(tcpflags.get_name_leafdata());
    if (tcpflagsmask.is_set || is_set(tcpflagsmask.yfilter)) leaf_name_data.push_back(tcpflagsmask.get_name_leafdata());
    if (isext.is_set || is_set(isext.yfilter)) leaf_name_data.push_back(isext.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (lastoperstate.is_set || is_set(lastoperstate.yfilter)) leaf_name_data.push_back(lastoperstate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (ctrlmask.is_set || is_set(ctrlmask.yfilter)) leaf_name_data.push_back(ctrlmask.get_name_leafdata());
    if (fabricport.is_set || is_set(fabricport.yfilter)) leaf_name_data.push_back(fabricport.get_name_leafdata());
    if (fabricencap.is_set || is_set(fabricencap.yfilter)) leaf_name_data.push_back(fabricencap.get_name_leafdata());
    if (remotetep.is_set || is_set(remotetep.yfilter)) leaf_name_data.push_back(remotetep.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (dot1p.is_set || is_set(dot1p.yfilter)) leaf_name_data.push_back(dot1p.get_name_leafdata());
    if (dot1pmask.is_set || is_set(dot1pmask.yfilter)) leaf_name_data.push_back(dot1pmask.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (tenantname.is_set || is_set(tenantname.yfilter)) leaf_name_data.push_back(tenantname.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::RuleIpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-items")
    {
        if(bank_items == nullptr)
        {
            bank_items = std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems>();
        }
        return bank_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::RuleIpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bank_items != nullptr)
    {
        children["bank-items"] = bank_items;
    }

    return children;
}

void System::AcItems::RuleIpItems::RuleIpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ruleId")
    {
        ruleid = value;
        ruleid.value_namespace = name_space;
        ruleid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst")
    {
        dst = value;
        dst.value_namespace = name_space;
        dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot")
    {
        prot = value;
        prot.value_namespace = name_space;
        prot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flagsMask")
    {
        flagsmask = value;
        flagsmask.value_namespace = name_space;
        flagsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscpMask")
    {
        dscpmask = value;
        dscpmask.value_namespace = name_space;
        dscpmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecnMask")
    {
        ecnmask = value;
        ecnmask.value_namespace = name_space;
        ecnmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dPcTag")
    {
        dpctag = value;
        dpctag.value_namespace = name_space;
        dpctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optionsMask")
    {
        optionsmask = value;
        optionsmask.value_namespace = name_space;
        optionsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpFlags")
    {
        icmpflags = value;
        icmpflags.value_namespace = name_space;
        icmpflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpCode")
    {
        icmpcode = value;
        icmpcode.value_namespace = name_space;
        icmpcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpType")
    {
        icmptype = value;
        icmptype.value_namespace = name_space;
        icmptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpFlags")
    {
        tcpflags = value;
        tcpflags.value_namespace = name_space;
        tcpflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask = value;
        tcpflagsmask.value_namespace = name_space;
        tcpflagsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isExt")
    {
        isext = value;
        isext.value_namespace = name_space;
        isext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastOperState")
    {
        lastoperstate = value;
        lastoperstate.value_namespace = name_space;
        lastoperstate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask = value;
        ctrlmask.value_namespace = name_space;
        ctrlmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricPort")
    {
        fabricport = value;
        fabricport.value_namespace = name_space;
        fabricport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap = value;
        fabricencap.value_namespace = name_space;
        fabricencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteTep")
    {
        remotetep = value;
        remotetep.value_namespace = name_space;
        remotetep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1p")
    {
        dot1p = value;
        dot1p.value_namespace = name_space;
        dot1p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask = value;
        dot1pmask.value_namespace = name_space;
        dot1pmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenantName")
    {
        tenantname = value;
        tenantname.value_namespace = name_space;
        tenantname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleIpItems::RuleIpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ruleId")
    {
        ruleid.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "dst")
    {
        dst.yfilter = yfilter;
    }
    if(value_path == "prot")
    {
        prot.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "flagsMask")
    {
        flagsmask.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "dscpMask")
    {
        dscpmask.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "ecnMask")
    {
        ecnmask.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "dPcTag")
    {
        dpctag.yfilter = yfilter;
    }
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "optionsMask")
    {
        optionsmask.yfilter = yfilter;
    }
    if(value_path == "icmpFlags")
    {
        icmpflags.yfilter = yfilter;
    }
    if(value_path == "icmpCode")
    {
        icmpcode.yfilter = yfilter;
    }
    if(value_path == "icmpType")
    {
        icmptype.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "tcpFlags")
    {
        tcpflags.yfilter = yfilter;
    }
    if(value_path == "tcpFlagsMask")
    {
        tcpflagsmask.yfilter = yfilter;
    }
    if(value_path == "isExt")
    {
        isext.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "lastOperState")
    {
        lastoperstate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask.yfilter = yfilter;
    }
    if(value_path == "fabricPort")
    {
        fabricport.yfilter = yfilter;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap.yfilter = yfilter;
    }
    if(value_path == "remoteTep")
    {
        remotetep.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "dot1p")
    {
        dot1p.yfilter = yfilter;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "tenantName")
    {
        tenantname.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::AcItems::RuleIpItems::RuleIpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-items" || name == "ruleId" || name == "src" || name == "dst" || name == "prot" || name == "flags" || name == "flagsMask" || name == "ttl" || name == "dscp" || name == "dscpMask" || name == "ecn" || name == "ecnMask" || name == "payloadSz" || name == "sPcTag" || name == "dPcTag" || name == "options" || name == "optionsMask" || name == "icmpFlags" || name == "icmpCode" || name == "icmpType" || name == "srcPort" || name == "dstPort" || name == "tcpFlags" || name == "tcpFlagsMask" || name == "isExt" || name == "operState" || name == "lastOperState" || name == "name" || name == "descr" || name == "order" || name == "ctrl" || name == "ctrlMask" || name == "fabricPort" || name == "fabricEncap" || name == "remoteTep" || name == "srcMac" || name == "dstMac" || name == "dot1p" || name == "dot1pMask" || name == "policyName" || name == "tenantName" || name == "vrfName")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankItems()
    :
    bank_list(this, {"type"})
{

    yang_name = "bank-items"; yang_parent_name = "RuleIp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::~BankItems()
{
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::has_operation() const
{
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleIpItems::RuleIpList::BankItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::RuleIpList::BankItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::RuleIpList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto c = std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList>();
        c->parent = this;
        bank_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::RuleIpList::BankItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bank_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bank-list")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::BankList()
    :
    type{YType::enumeration, "type"}
        ,
    dbgingrhit_items(std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems>())
    , dbgegrhit_items(std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems>())
{
    dbgingrhit_items->parent = this;
    dbgegrhit_items->parent = this;

    yang_name = "Bank-list"; yang_parent_name = "bank-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::~BankList()
{
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_data())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_data());
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_operation())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_operation());
}

std::string System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bank-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dbgIngrHit-items")
    {
        if(dbgingrhit_items == nullptr)
        {
            dbgingrhit_items = std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems>();
        }
        return dbgingrhit_items;
    }

    if(child_yang_name == "dbgEgrHit-items")
    {
        if(dbgegrhit_items == nullptr)
        {
            dbgegrhit_items = std::make_shared<System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems>();
        }
        return dbgegrhit_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dbgingrhit_items != nullptr)
    {
        children["dbgIngrHit-items"] = dbgingrhit_items;
    }

    if(dbgegrhit_items != nullptr)
    {
        children["dbgEgrHit-items"] = dbgegrhit_items;
    }

    return children;
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbgIngrHit-items" || name == "dbgEgrHit-items" || name == "type")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::DbgIngrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIngrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::~DbgIngrHitItems()
{
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIngrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::DbgEgrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgEgrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::~DbgEgrHitItems()
{
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEgrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacItems()
    :
    rulemac_list(this, {"ruleid"})
{

    yang_name = "ruleMac-items"; yang_parent_name = "ac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleMacItems::~RuleMacItems()
{
}

bool System::AcItems::RuleMacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulemac_list.len(); index++)
    {
        if(rulemac_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleMacItems::has_operation() const
{
    for (std::size_t index=0; index<rulemac_list.len(); index++)
    {
        if(rulemac_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleMacItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleMacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ruleMac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleMac-list")
    {
        auto c = std::make_shared<System::AcItems::RuleMacItems::RuleMacList>();
        c->parent = this;
        rulemac_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rulemac_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleMacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleMacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleMacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleMac-list")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacList::RuleMacList()
    :
    ruleid{YType::uint64, "ruleId"},
    type{YType::uint16, "type"},
    payloadsz{YType::uint8, "payloadSz"},
    payload{YType::uint64, "payload"},
    spctag{YType::uint32, "sPcTag"},
    dpctag{YType::uint32, "dPcTag"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint16, "order"},
    ctrl{YType::str, "ctrl"},
    ctrlmask{YType::str, "ctrlMask"},
    fabricport{YType::str, "fabricPort"},
    fabricencap{YType::str, "fabricEncap"},
    remotetep{YType::str, "remoteTep"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    dot1p{YType::uint8, "dot1p"},
    dot1pmask{YType::uint8, "dot1pMask"},
    policyname{YType::str, "policyName"},
    tenantname{YType::str, "tenantName"},
    vrfname{YType::str, "vrfName"}
        ,
    bank_items(std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems>())
{
    bank_items->parent = this;

    yang_name = "RuleMac-list"; yang_parent_name = "ruleMac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleMacItems::RuleMacList::~RuleMacList()
{
}

bool System::AcItems::RuleMacItems::RuleMacList::has_data() const
{
    if (is_presence_container) return true;
    return ruleid.is_set
	|| type.is_set
	|| payloadsz.is_set
	|| payload.is_set
	|| spctag.is_set
	|| dpctag.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| ctrl.is_set
	|| ctrlmask.is_set
	|| fabricport.is_set
	|| fabricencap.is_set
	|| remotetep.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| dot1p.is_set
	|| dot1pmask.is_set
	|| policyname.is_set
	|| tenantname.is_set
	|| vrfname.is_set
	|| (bank_items !=  nullptr && bank_items->has_data());
}

bool System::AcItems::RuleMacItems::RuleMacList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ruleid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| ydk::is_set(spctag.yfilter)
	|| ydk::is_set(dpctag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(ctrlmask.yfilter)
	|| ydk::is_set(fabricport.yfilter)
	|| ydk::is_set(fabricencap.yfilter)
	|| ydk::is_set(remotetep.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(dot1p.yfilter)
	|| ydk::is_set(dot1pmask.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(tenantname.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (bank_items !=  nullptr && bank_items->has_operation());
}

std::string System::AcItems::RuleMacItems::RuleMacList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/ruleMac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleMacItems::RuleMacList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleMac-list";
    ADD_KEY_TOKEN(ruleid, "ruleId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::RuleMacList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ruleid.is_set || is_set(ruleid.yfilter)) leaf_name_data.push_back(ruleid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());
    if (spctag.is_set || is_set(spctag.yfilter)) leaf_name_data.push_back(spctag.get_name_leafdata());
    if (dpctag.is_set || is_set(dpctag.yfilter)) leaf_name_data.push_back(dpctag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (ctrlmask.is_set || is_set(ctrlmask.yfilter)) leaf_name_data.push_back(ctrlmask.get_name_leafdata());
    if (fabricport.is_set || is_set(fabricport.yfilter)) leaf_name_data.push_back(fabricport.get_name_leafdata());
    if (fabricencap.is_set || is_set(fabricencap.yfilter)) leaf_name_data.push_back(fabricencap.get_name_leafdata());
    if (remotetep.is_set || is_set(remotetep.yfilter)) leaf_name_data.push_back(remotetep.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (dot1p.is_set || is_set(dot1p.yfilter)) leaf_name_data.push_back(dot1p.get_name_leafdata());
    if (dot1pmask.is_set || is_set(dot1pmask.yfilter)) leaf_name_data.push_back(dot1pmask.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (tenantname.is_set || is_set(tenantname.yfilter)) leaf_name_data.push_back(tenantname.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::RuleMacList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-items")
    {
        if(bank_items == nullptr)
        {
            bank_items = std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems>();
        }
        return bank_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::RuleMacList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bank_items != nullptr)
    {
        children["bank-items"] = bank_items;
    }

    return children;
}

void System::AcItems::RuleMacItems::RuleMacList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ruleId")
    {
        ruleid = value;
        ruleid.value_namespace = name_space;
        ruleid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPcTag")
    {
        spctag = value;
        spctag.value_namespace = name_space;
        spctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dPcTag")
    {
        dpctag = value;
        dpctag.value_namespace = name_space;
        dpctag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask = value;
        ctrlmask.value_namespace = name_space;
        ctrlmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricPort")
    {
        fabricport = value;
        fabricport.value_namespace = name_space;
        fabricport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap = value;
        fabricencap.value_namespace = name_space;
        fabricencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteTep")
    {
        remotetep = value;
        remotetep.value_namespace = name_space;
        remotetep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1p")
    {
        dot1p = value;
        dot1p.value_namespace = name_space;
        dot1p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask = value;
        dot1pmask.value_namespace = name_space;
        dot1pmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenantName")
    {
        tenantname = value;
        tenantname.value_namespace = name_space;
        tenantname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleMacItems::RuleMacList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ruleId")
    {
        ruleid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
    if(value_path == "sPcTag")
    {
        spctag.yfilter = yfilter;
    }
    if(value_path == "dPcTag")
    {
        dpctag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask.yfilter = yfilter;
    }
    if(value_path == "fabricPort")
    {
        fabricport.yfilter = yfilter;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap.yfilter = yfilter;
    }
    if(value_path == "remoteTep")
    {
        remotetep.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "dot1p")
    {
        dot1p.yfilter = yfilter;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "tenantName")
    {
        tenantname.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::AcItems::RuleMacItems::RuleMacList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-items" || name == "ruleId" || name == "type" || name == "payloadSz" || name == "payload" || name == "sPcTag" || name == "dPcTag" || name == "name" || name == "descr" || name == "order" || name == "ctrl" || name == "ctrlMask" || name == "fabricPort" || name == "fabricEncap" || name == "remoteTep" || name == "srcMac" || name == "dstMac" || name == "dot1p" || name == "dot1pMask" || name == "policyName" || name == "tenantName" || name == "vrfName")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankItems()
    :
    bank_list(this, {"type"})
{

    yang_name = "bank-items"; yang_parent_name = "RuleMac-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::~BankItems()
{
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::has_operation() const
{
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleMacItems::RuleMacList::BankItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::RuleMacList::BankItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::RuleMacList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto c = std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList>();
        c->parent = this;
        bank_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::RuleMacList::BankItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bank_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bank-list")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::BankList()
    :
    type{YType::enumeration, "type"}
        ,
    dbgingrhit_items(std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems>())
    , dbgegrhit_items(std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems>())
{
    dbgingrhit_items->parent = this;
    dbgegrhit_items->parent = this;

    yang_name = "Bank-list"; yang_parent_name = "bank-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::~BankList()
{
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_data())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_data());
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_operation())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_operation());
}

std::string System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bank-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dbgIngrHit-items")
    {
        if(dbgingrhit_items == nullptr)
        {
            dbgingrhit_items = std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems>();
        }
        return dbgingrhit_items;
    }

    if(child_yang_name == "dbgEgrHit-items")
    {
        if(dbgegrhit_items == nullptr)
        {
            dbgegrhit_items = std::make_shared<System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems>();
        }
        return dbgegrhit_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dbgingrhit_items != nullptr)
    {
        children["dbgIngrHit-items"] = dbgingrhit_items;
    }

    if(dbgegrhit_items != nullptr)
    {
        children["dbgEgrHit-items"] = dbgegrhit_items;
    }

    return children;
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbgIngrHit-items" || name == "dbgEgrHit-items" || name == "type")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::DbgIngrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIngrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::~DbgIngrHitItems()
{
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIngrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::DbgEgrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgEgrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::~DbgEgrHitItems()
{
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEgrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpItems()
    :
    rulearp_list(this, {"ruleid"})
{

    yang_name = "ruleArp-items"; yang_parent_name = "ac-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleArpItems::~RuleArpItems()
{
}

bool System::AcItems::RuleArpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulearp_list.len(); index++)
    {
        if(rulearp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleArpItems::has_operation() const
{
    for (std::size_t index=0; index<rulearp_list.len(); index++)
    {
        if(rulearp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleArpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleArpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ruleArp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleArp-list")
    {
        auto c = std::make_shared<System::AcItems::RuleArpItems::RuleArpList>();
        c->parent = this;
        rulearp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rulearp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleArpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleArpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleArpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleArp-list")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpList::RuleArpList()
    :
    ruleid{YType::uint64, "ruleId"},
    opc{YType::enumeration, "opc"},
    sendermac{YType::str, "senderMac"},
    senderip{YType::str, "senderIp"},
    targetmac{YType::str, "targetMac"},
    targetip{YType::str, "targetIp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint16, "order"},
    ctrl{YType::str, "ctrl"},
    ctrlmask{YType::str, "ctrlMask"},
    fabricport{YType::str, "fabricPort"},
    fabricencap{YType::str, "fabricEncap"},
    remotetep{YType::str, "remoteTep"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    dot1p{YType::uint8, "dot1p"},
    dot1pmask{YType::uint8, "dot1pMask"},
    policyname{YType::str, "policyName"},
    tenantname{YType::str, "tenantName"},
    vrfname{YType::str, "vrfName"}
        ,
    bank_items(std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems>())
{
    bank_items->parent = this;

    yang_name = "RuleArp-list"; yang_parent_name = "ruleArp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AcItems::RuleArpItems::RuleArpList::~RuleArpList()
{
}

bool System::AcItems::RuleArpItems::RuleArpList::has_data() const
{
    if (is_presence_container) return true;
    return ruleid.is_set
	|| opc.is_set
	|| sendermac.is_set
	|| senderip.is_set
	|| targetmac.is_set
	|| targetip.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| ctrl.is_set
	|| ctrlmask.is_set
	|| fabricport.is_set
	|| fabricencap.is_set
	|| remotetep.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| dot1p.is_set
	|| dot1pmask.is_set
	|| policyname.is_set
	|| tenantname.is_set
	|| vrfname.is_set
	|| (bank_items !=  nullptr && bank_items->has_data());
}

bool System::AcItems::RuleArpItems::RuleArpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ruleid.yfilter)
	|| ydk::is_set(opc.yfilter)
	|| ydk::is_set(sendermac.yfilter)
	|| ydk::is_set(senderip.yfilter)
	|| ydk::is_set(targetmac.yfilter)
	|| ydk::is_set(targetip.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(ctrlmask.yfilter)
	|| ydk::is_set(fabricport.yfilter)
	|| ydk::is_set(fabricencap.yfilter)
	|| ydk::is_set(remotetep.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(dot1p.yfilter)
	|| ydk::is_set(dot1pmask.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(tenantname.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (bank_items !=  nullptr && bank_items->has_operation());
}

std::string System::AcItems::RuleArpItems::RuleArpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ac-items/ruleArp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AcItems::RuleArpItems::RuleArpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleArp-list";
    ADD_KEY_TOKEN(ruleid, "ruleId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::RuleArpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ruleid.is_set || is_set(ruleid.yfilter)) leaf_name_data.push_back(ruleid.get_name_leafdata());
    if (opc.is_set || is_set(opc.yfilter)) leaf_name_data.push_back(opc.get_name_leafdata());
    if (sendermac.is_set || is_set(sendermac.yfilter)) leaf_name_data.push_back(sendermac.get_name_leafdata());
    if (senderip.is_set || is_set(senderip.yfilter)) leaf_name_data.push_back(senderip.get_name_leafdata());
    if (targetmac.is_set || is_set(targetmac.yfilter)) leaf_name_data.push_back(targetmac.get_name_leafdata());
    if (targetip.is_set || is_set(targetip.yfilter)) leaf_name_data.push_back(targetip.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (ctrlmask.is_set || is_set(ctrlmask.yfilter)) leaf_name_data.push_back(ctrlmask.get_name_leafdata());
    if (fabricport.is_set || is_set(fabricport.yfilter)) leaf_name_data.push_back(fabricport.get_name_leafdata());
    if (fabricencap.is_set || is_set(fabricencap.yfilter)) leaf_name_data.push_back(fabricencap.get_name_leafdata());
    if (remotetep.is_set || is_set(remotetep.yfilter)) leaf_name_data.push_back(remotetep.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (dot1p.is_set || is_set(dot1p.yfilter)) leaf_name_data.push_back(dot1p.get_name_leafdata());
    if (dot1pmask.is_set || is_set(dot1pmask.yfilter)) leaf_name_data.push_back(dot1pmask.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (tenantname.is_set || is_set(tenantname.yfilter)) leaf_name_data.push_back(tenantname.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::RuleArpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-items")
    {
        if(bank_items == nullptr)
        {
            bank_items = std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems>();
        }
        return bank_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::RuleArpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bank_items != nullptr)
    {
        children["bank-items"] = bank_items;
    }

    return children;
}

void System::AcItems::RuleArpItems::RuleArpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ruleId")
    {
        ruleid = value;
        ruleid.value_namespace = name_space;
        ruleid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opc")
    {
        opc = value;
        opc.value_namespace = name_space;
        opc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "senderMac")
    {
        sendermac = value;
        sendermac.value_namespace = name_space;
        sendermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "senderIp")
    {
        senderip = value;
        senderip.value_namespace = name_space;
        senderip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetMac")
    {
        targetmac = value;
        targetmac.value_namespace = name_space;
        targetmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetIp")
    {
        targetip = value;
        targetip.value_namespace = name_space;
        targetip.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask = value;
        ctrlmask.value_namespace = name_space;
        ctrlmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricPort")
    {
        fabricport = value;
        fabricport.value_namespace = name_space;
        fabricport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap = value;
        fabricencap.value_namespace = name_space;
        fabricencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteTep")
    {
        remotetep = value;
        remotetep.value_namespace = name_space;
        remotetep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1p")
    {
        dot1p = value;
        dot1p.value_namespace = name_space;
        dot1p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask = value;
        dot1pmask.value_namespace = name_space;
        dot1pmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenantName")
    {
        tenantname = value;
        tenantname.value_namespace = name_space;
        tenantname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleArpItems::RuleArpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ruleId")
    {
        ruleid.yfilter = yfilter;
    }
    if(value_path == "opc")
    {
        opc.yfilter = yfilter;
    }
    if(value_path == "senderMac")
    {
        sendermac.yfilter = yfilter;
    }
    if(value_path == "senderIp")
    {
        senderip.yfilter = yfilter;
    }
    if(value_path == "targetMac")
    {
        targetmac.yfilter = yfilter;
    }
    if(value_path == "targetIp")
    {
        targetip.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "ctrlMask")
    {
        ctrlmask.yfilter = yfilter;
    }
    if(value_path == "fabricPort")
    {
        fabricport.yfilter = yfilter;
    }
    if(value_path == "fabricEncap")
    {
        fabricencap.yfilter = yfilter;
    }
    if(value_path == "remoteTep")
    {
        remotetep.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "dot1p")
    {
        dot1p.yfilter = yfilter;
    }
    if(value_path == "dot1pMask")
    {
        dot1pmask.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "tenantName")
    {
        tenantname.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::AcItems::RuleArpItems::RuleArpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-items" || name == "ruleId" || name == "opc" || name == "senderMac" || name == "senderIp" || name == "targetMac" || name == "targetIp" || name == "name" || name == "descr" || name == "order" || name == "ctrl" || name == "ctrlMask" || name == "fabricPort" || name == "fabricEncap" || name == "remoteTep" || name == "srcMac" || name == "dstMac" || name == "dot1p" || name == "dot1pMask" || name == "policyName" || name == "tenantName" || name == "vrfName")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankItems()
    :
    bank_list(this, {"type"})
{

    yang_name = "bank-items"; yang_parent_name = "RuleArp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::~BankItems()
{
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::has_operation() const
{
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AcItems::RuleArpItems::RuleArpList::BankItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::RuleArpList::BankItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::RuleArpList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto c = std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList>();
        c->parent = this;
        bank_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::RuleArpList::BankItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bank_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bank-list")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::BankList()
    :
    type{YType::enumeration, "type"}
        ,
    dbgingrhit_items(std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems>())
    , dbgegrhit_items(std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems>())
{
    dbgingrhit_items->parent = this;
    dbgegrhit_items->parent = this;

    yang_name = "Bank-list"; yang_parent_name = "bank-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::~BankList()
{
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_data())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_data());
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (dbgingrhit_items !=  nullptr && dbgingrhit_items->has_operation())
	|| (dbgegrhit_items !=  nullptr && dbgegrhit_items->has_operation());
}

std::string System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bank-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dbgIngrHit-items")
    {
        if(dbgingrhit_items == nullptr)
        {
            dbgingrhit_items = std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems>();
        }
        return dbgingrhit_items;
    }

    if(child_yang_name == "dbgEgrHit-items")
    {
        if(dbgegrhit_items == nullptr)
        {
            dbgegrhit_items = std::make_shared<System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems>();
        }
        return dbgegrhit_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dbgingrhit_items != nullptr)
    {
        children["dbgIngrHit-items"] = dbgingrhit_items;
    }

    if(dbgegrhit_items != nullptr)
    {
        children["dbgEgrHit-items"] = dbgegrhit_items;
    }

    return children;
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbgIngrHit-items" || name == "dbgEgrHit-items" || name == "type")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::DbgIngrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIngrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::~DbgIngrHitItems()
{
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIngrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::DbgEgrHitItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgEgrHit-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::~DbgEgrHitItems()
{
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEgrHit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts = value;
        fwdpkts.value_namespace = name_space;
        fwdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes = value;
        fwdbytes.value_namespace = name_space;
        fwdbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPkts")
    {
        droppkts = value;
        droppkts.value_namespace = name_space;
        droppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fwdPkts")
    {
        fwdpkts.yfilter = yfilter;
    }
    if(value_path == "fwdBytes")
    {
        fwdbytes.yfilter = yfilter;
    }
    if(value_path == "dropPkts")
    {
        droppkts.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::AclItems::AclItems()
    :
    oname_items(std::make_shared<System::AclItems::ONameItems>())
    , vlan_items(std::make_shared<System::AclItems::VlanItems>())
    , mac_items(std::make_shared<System::AclItems::MacItems>())
    , ipv4_items(std::make_shared<System::AclItems::Ipv4Items>())
    , ipv6_items(std::make_shared<System::AclItems::Ipv6Items>())
{
    oname_items->parent = this;
    vlan_items->parent = this;
    mac_items->parent = this;
    ipv4_items->parent = this;
    ipv6_items->parent = this;

    yang_name = "acl-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::~AclItems()
{
}

bool System::AclItems::has_data() const
{
    if (is_presence_container) return true;
    return (oname_items !=  nullptr && oname_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (ipv4_items !=  nullptr && ipv4_items->has_data())
	|| (ipv6_items !=  nullptr && ipv6_items->has_data());
}

bool System::AclItems::has_operation() const
{
    return is_set(yfilter)
	|| (oname_items !=  nullptr && oname_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (ipv4_items !=  nullptr && ipv4_items->has_operation())
	|| (ipv6_items !=  nullptr && ipv6_items->has_operation());
}

std::string System::AclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oName-items")
    {
        if(oname_items == nullptr)
        {
            oname_items = std::make_shared<System::AclItems::ONameItems>();
        }
        return oname_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::AclItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::AclItems::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "ipv4-items")
    {
        if(ipv4_items == nullptr)
        {
            ipv4_items = std::make_shared<System::AclItems::Ipv4Items>();
        }
        return ipv4_items;
    }

    if(child_yang_name == "ipv6-items")
    {
        if(ipv6_items == nullptr)
        {
            ipv6_items = std::make_shared<System::AclItems::Ipv6Items>();
        }
        return ipv6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oname_items != nullptr)
    {
        children["oName-items"] = oname_items;
    }

    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    if(mac_items != nullptr)
    {
        children["mac-items"] = mac_items;
    }

    if(ipv4_items != nullptr)
    {
        children["ipv4-items"] = ipv4_items;
    }

    if(ipv6_items != nullptr)
    {
        children["ipv6-items"] = ipv6_items;
    }

    return children;
}

void System::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oName-items" || name == "vlan-items" || name == "mac-items" || name == "ipv4-items" || name == "ipv6-items")
        return true;
    return false;
}

System::AclItems::ONameItems::ONameItems()
    :
    portgroup_list(this, {"name"})
{

    yang_name = "oName-items"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::ONameItems::~ONameItems()
{
}

bool System::AclItems::ONameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portgroup_list.len(); index++)
    {
        if(portgroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::ONameItems::has_operation() const
{
    for (std::size_t index=0; index<portgroup_list.len(); index++)
    {
        if(portgroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::ONameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::ONameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oName-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::ONameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortGroup-list")
    {
        auto c = std::make_shared<System::AclItems::ONameItems::PortGroupList>();
        c->parent = this;
        portgroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::ONameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : portgroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::ONameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::ONameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::ONameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortGroup-list")
        return true;
    return false;
}

System::AclItems::ONameItems::PortGroupList::PortGroupList()
    :
    name{YType::str, "name"},
    configstatus{YType::uint32, "configStatus"}
        ,
    seq_items(std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "PortGroup-list"; yang_parent_name = "oName-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AclItems::ONameItems::PortGroupList::~PortGroupList()
{
}

bool System::AclItems::ONameItems::PortGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| configstatus.is_set
	|| (seq_items !=  nullptr && seq_items->has_data());
}

bool System::AclItems::ONameItems::PortGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::AclItems::ONameItems::PortGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/acl-items/oName-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AclItems::ONameItems::PortGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PortGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::PortGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::ONameItems::PortGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::ONameItems::PortGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    return children;
}

void System::AclItems::ONameItems::PortGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::AclItems::ONameItems::PortGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::AclItems::ONameItems::PortGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "name" || name == "configStatus")
        return true;
    return false;
}

System::AclItems::ONameItems::PortGroupList::SeqItems::SeqItems()
    :
    portmember_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "PortGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AclItems::ONameItems::PortGroupList::SeqItems::~SeqItems()
{
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portmember_list.len(); index++)
    {
        if(portmember_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<portmember_list.len(); index++)
    {
        if(portmember_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AclItems::ONameItems::PortGroupList::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AclItems::ONameItems::PortGroupList::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AclItems::ONameItems::PortGroupList::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortMember-list")
    {
        auto c = std::make_shared<System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList>();
        c->parent = this;
        portmember_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AclItems::ONameItems::PortGroupList::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : portmember_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AclItems::ONameItems::PortGroupList::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AclItems::ONameItems::PortGroupList::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortMember-list")
        return true;
    return false;
}


}
}

