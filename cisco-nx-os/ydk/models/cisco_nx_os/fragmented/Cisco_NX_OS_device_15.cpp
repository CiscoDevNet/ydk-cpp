
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_15.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicycontItems()
    :
    policycont_list(this, {"name"})
{

    yang_name = "policycont-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::~PolicycontItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policycont_list.len(); index++)
    {
        if(policycont_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::has_operation() const
{
    for (std::size_t index=0; index<policycont_list.len(); index++)
    {
        if(policycont_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policycont-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyCont-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList>();
        c->parent = this;
        policycont_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policycont_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyCont-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolicyContList()
    :
    name{YType::str, "name"},
    ctrl{YType::str, "ctrl"},
    allowedselfascnt{YType::uint8, "allowedSelfAsCnt"},
    softreconfigbackup{YType::enumeration, "softReconfigBackup"},
    advintvl{YType::uint16, "advIntvl"},
    deforg{YType::enumeration, "defOrg"},
    deforgrtmap{YType::str, "defOrgRtMap"},
    capaddlpaths{YType::str, "capAddlPaths"},
    unsupprmap{YType::str, "unSupprMap"},
    asoverride{YType::enumeration, "asOverride"},
    nhthirdparty{YType::enumeration, "nhThirdparty"},
    wght{YType::str, "wght"},
    soo{YType::str, "soo"},
    sendcomstd{YType::enumeration, "sendComStd"},
    sendcomext{YType::enumeration, "sendComExt"},
    inheritcontpeerpolicyctrl{YType::str, "inheritContPeerPolicyCtrl"}
        ,
    maxpfxp_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems>())
    , advtmap_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems>())
    , rtctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems>())
    , pfxctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems>())
    , fltrctrl_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems>())
    , pol_items(std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems>())
{
    maxpfxp_items->parent = this;
    advtmap_items->parent = this;
    rtctrl_items->parent = this;
    pfxctrl_items->parent = this;
    fltrctrl_items->parent = this;
    pol_items->parent = this;

    yang_name = "PolicyCont-list"; yang_parent_name = "policycont-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::~PolicyContList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ctrl.is_set
	|| allowedselfascnt.is_set
	|| softreconfigbackup.is_set
	|| advintvl.is_set
	|| deforg.is_set
	|| deforgrtmap.is_set
	|| capaddlpaths.is_set
	|| unsupprmap.is_set
	|| asoverride.is_set
	|| nhthirdparty.is_set
	|| wght.is_set
	|| soo.is_set
	|| sendcomstd.is_set
	|| sendcomext.is_set
	|| inheritcontpeerpolicyctrl.is_set
	|| (maxpfxp_items !=  nullptr && maxpfxp_items->has_data())
	|| (advtmap_items !=  nullptr && advtmap_items->has_data())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_data())
	|| (pfxctrl_items !=  nullptr && pfxctrl_items->has_data())
	|| (fltrctrl_items !=  nullptr && fltrctrl_items->has_data())
	|| (pol_items !=  nullptr && pol_items->has_data());
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(allowedselfascnt.yfilter)
	|| ydk::is_set(softreconfigbackup.yfilter)
	|| ydk::is_set(advintvl.yfilter)
	|| ydk::is_set(deforg.yfilter)
	|| ydk::is_set(deforgrtmap.yfilter)
	|| ydk::is_set(capaddlpaths.yfilter)
	|| ydk::is_set(unsupprmap.yfilter)
	|| ydk::is_set(asoverride.yfilter)
	|| ydk::is_set(nhthirdparty.yfilter)
	|| ydk::is_set(wght.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(sendcomstd.yfilter)
	|| ydk::is_set(sendcomext.yfilter)
	|| ydk::is_set(inheritcontpeerpolicyctrl.yfilter)
	|| (maxpfxp_items !=  nullptr && maxpfxp_items->has_operation())
	|| (advtmap_items !=  nullptr && advtmap_items->has_operation())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_operation())
	|| (pfxctrl_items !=  nullptr && pfxctrl_items->has_operation())
	|| (fltrctrl_items !=  nullptr && fltrctrl_items->has_operation())
	|| (pol_items !=  nullptr && pol_items->has_operation());
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyCont-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (allowedselfascnt.is_set || is_set(allowedselfascnt.yfilter)) leaf_name_data.push_back(allowedselfascnt.get_name_leafdata());
    if (softreconfigbackup.is_set || is_set(softreconfigbackup.yfilter)) leaf_name_data.push_back(softreconfigbackup.get_name_leafdata());
    if (advintvl.is_set || is_set(advintvl.yfilter)) leaf_name_data.push_back(advintvl.get_name_leafdata());
    if (deforg.is_set || is_set(deforg.yfilter)) leaf_name_data.push_back(deforg.get_name_leafdata());
    if (deforgrtmap.is_set || is_set(deforgrtmap.yfilter)) leaf_name_data.push_back(deforgrtmap.get_name_leafdata());
    if (capaddlpaths.is_set || is_set(capaddlpaths.yfilter)) leaf_name_data.push_back(capaddlpaths.get_name_leafdata());
    if (unsupprmap.is_set || is_set(unsupprmap.yfilter)) leaf_name_data.push_back(unsupprmap.get_name_leafdata());
    if (asoverride.is_set || is_set(asoverride.yfilter)) leaf_name_data.push_back(asoverride.get_name_leafdata());
    if (nhthirdparty.is_set || is_set(nhthirdparty.yfilter)) leaf_name_data.push_back(nhthirdparty.get_name_leafdata());
    if (wght.is_set || is_set(wght.yfilter)) leaf_name_data.push_back(wght.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (sendcomstd.is_set || is_set(sendcomstd.yfilter)) leaf_name_data.push_back(sendcomstd.get_name_leafdata());
    if (sendcomext.is_set || is_set(sendcomext.yfilter)) leaf_name_data.push_back(sendcomext.get_name_leafdata());
    if (inheritcontpeerpolicyctrl.is_set || is_set(inheritcontpeerpolicyctrl.yfilter)) leaf_name_data.push_back(inheritcontpeerpolicyctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpfxp-items")
    {
        if(maxpfxp_items == nullptr)
        {
            maxpfxp_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems>();
        }
        return maxpfxp_items;
    }

    if(child_yang_name == "advtmap-items")
    {
        if(advtmap_items == nullptr)
        {
            advtmap_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems>();
        }
        return advtmap_items;
    }

    if(child_yang_name == "rtctrl-items")
    {
        if(rtctrl_items == nullptr)
        {
            rtctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems>();
        }
        return rtctrl_items;
    }

    if(child_yang_name == "pfxctrl-items")
    {
        if(pfxctrl_items == nullptr)
        {
            pfxctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems>();
        }
        return pfxctrl_items;
    }

    if(child_yang_name == "fltrctrl-items")
    {
        if(fltrctrl_items == nullptr)
        {
            fltrctrl_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems>();
        }
        return fltrctrl_items;
    }

    if(child_yang_name == "pol-items")
    {
        if(pol_items == nullptr)
        {
            pol_items = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems>();
        }
        return pol_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(maxpfxp_items != nullptr)
    {
        children["maxpfxp-items"] = maxpfxp_items;
    }

    if(advtmap_items != nullptr)
    {
        children["advtmap-items"] = advtmap_items;
    }

    if(rtctrl_items != nullptr)
    {
        children["rtctrl-items"] = rtctrl_items;
    }

    if(pfxctrl_items != nullptr)
    {
        children["pfxctrl-items"] = pfxctrl_items;
    }

    if(fltrctrl_items != nullptr)
    {
        children["fltrctrl-items"] = fltrctrl_items;
    }

    if(pol_items != nullptr)
    {
        children["pol-items"] = pol_items;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "allowedSelfAsCnt")
    {
        allowedselfascnt = value;
        allowedselfascnt.value_namespace = name_space;
        allowedselfascnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softReconfigBackup")
    {
        softreconfigbackup = value;
        softreconfigbackup.value_namespace = name_space;
        softreconfigbackup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advIntvl")
    {
        advintvl = value;
        advintvl.value_namespace = name_space;
        advintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defOrg")
    {
        deforg = value;
        deforg.value_namespace = name_space;
        deforg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defOrgRtMap")
    {
        deforgrtmap = value;
        deforgrtmap.value_namespace = name_space;
        deforgrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAddlPaths")
    {
        capaddlpaths = value;
        capaddlpaths.value_namespace = name_space;
        capaddlpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unSupprMap")
    {
        unsupprmap = value;
        unsupprmap.value_namespace = name_space;
        unsupprmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asOverride")
    {
        asoverride = value;
        asoverride.value_namespace = name_space;
        asoverride.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhThirdparty")
    {
        nhthirdparty = value;
        nhthirdparty.value_namespace = name_space;
        nhthirdparty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wght")
    {
        wght = value;
        wght.value_namespace = name_space;
        wght.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendComStd")
    {
        sendcomstd = value;
        sendcomstd.value_namespace = name_space;
        sendcomstd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendComExt")
    {
        sendcomext = value;
        sendcomext.value_namespace = name_space;
        sendcomext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inheritContPeerPolicyCtrl")
    {
        inheritcontpeerpolicyctrl = value;
        inheritcontpeerpolicyctrl.value_namespace = name_space;
        inheritcontpeerpolicyctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "allowedSelfAsCnt")
    {
        allowedselfascnt.yfilter = yfilter;
    }
    if(value_path == "softReconfigBackup")
    {
        softreconfigbackup.yfilter = yfilter;
    }
    if(value_path == "advIntvl")
    {
        advintvl.yfilter = yfilter;
    }
    if(value_path == "defOrg")
    {
        deforg.yfilter = yfilter;
    }
    if(value_path == "defOrgRtMap")
    {
        deforgrtmap.yfilter = yfilter;
    }
    if(value_path == "capAddlPaths")
    {
        capaddlpaths.yfilter = yfilter;
    }
    if(value_path == "unSupprMap")
    {
        unsupprmap.yfilter = yfilter;
    }
    if(value_path == "asOverride")
    {
        asoverride.yfilter = yfilter;
    }
    if(value_path == "nhThirdparty")
    {
        nhthirdparty.yfilter = yfilter;
    }
    if(value_path == "wght")
    {
        wght.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "sendComStd")
    {
        sendcomstd.yfilter = yfilter;
    }
    if(value_path == "sendComExt")
    {
        sendcomext.yfilter = yfilter;
    }
    if(value_path == "inheritContPeerPolicyCtrl")
    {
        inheritcontpeerpolicyctrl.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpfxp-items" || name == "advtmap-items" || name == "rtctrl-items" || name == "pfxctrl-items" || name == "fltrctrl-items" || name == "pol-items" || name == "name" || name == "ctrl" || name == "allowedSelfAsCnt" || name == "softReconfigBackup" || name == "advIntvl" || name == "defOrg" || name == "defOrgRtMap" || name == "capAddlPaths" || name == "unSupprMap" || name == "asOverride" || name == "nhThirdparty" || name == "wght" || name == "soo" || name == "sendComStd" || name == "sendComExt" || name == "inheritContPeerPolicyCtrl")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::MaxpfxpItems()
    :
    maxpfx{YType::uint32, "maxPfx"},
    thresh{YType::uint8, "thresh"},
    action{YType::enumeration, "action"},
    restarttime{YType::uint16, "restartTime"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "maxpfxp-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::~MaxpfxpItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::has_data() const
{
    if (is_presence_container) return true;
    return maxpfx.is_set
	|| thresh.is_set
	|| action.is_set
	|| restarttime.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxpfx.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(restarttime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpfxp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpfx.is_set || is_set(maxpfx.yfilter)) leaf_name_data.push_back(maxpfx.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (restarttime.is_set || is_set(restarttime.yfilter)) leaf_name_data.push_back(restarttime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxPfx")
    {
        maxpfx = value;
        maxpfx.value_namespace = name_space;
        maxpfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartTime")
    {
        restarttime = value;
        restarttime.value_namespace = name_space;
        restarttime.value_namespace_prefix = name_space_prefix;
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

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxPfx")
    {
        maxpfx.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "restartTime")
    {
        restarttime.yfilter = yfilter;
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

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxPfx" || name == "thresh" || name == "action" || name == "restartTime" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::AdvtmapItems()
    :
    rtmap{YType::str, "rtMap"},
    condition{YType::enumeration, "condition"},
    condmap{YType::str, "condMap"}
{

    yang_name = "advtmap-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::~AdvtmapItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| condition.is_set
	|| condmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(condition.yfilter)
	|| ydk::is_set(condmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advtmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (condition.is_set || is_set(condition.yfilter)) leaf_name_data.push_back(condition.get_name_leafdata());
    if (condmap.is_set || is_set(condmap.yfilter)) leaf_name_data.push_back(condmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condition")
    {
        condition = value;
        condition.value_namespace = name_space;
        condition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condMap")
    {
        condmap = value;
        condmap.value_namespace = name_space;
        condmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "condition")
    {
        condition.yfilter = yfilter;
    }
    if(value_path == "condMap")
    {
        condmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "condition" || name == "condMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtctrlItems()
    :
    rtctrlp_list(this, {"direction"})
{

    yang_name = "rtctrl-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::~RtctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::has_operation() const
{
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList>();
        c->parent = this;
        rtctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::RtCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "RtCtrlP-list"; yang_parent_name = "rtctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::~RtCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "operSt" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxctrlItems()
    :
    pfxctrlp_list(this, {"direction"})
{

    yang_name = "pfxctrl-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::~PfxctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxctrlp_list.len(); index++)
    {
        if(pfxctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::has_operation() const
{
    for (std::size_t index=0; index<pfxctrlp_list.len(); index++)
    {
        if(pfxctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList>();
        c->parent = this;
        pfxctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::PfxCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    list{YType::str, "list"}
{

    yang_name = "PfxCtrlP-list"; yang_parent_name = "pfxctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::~PfxCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set
	|| descr.is_set
	|| list.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name" || name == "descr" || name == "list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrctrlItems()
    :
    fltrctrlp_list(this, {"direction"})
{

    yang_name = "fltrctrl-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::~FltrctrlItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fltrctrlp_list.len(); index++)
    {
        if(fltrctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::has_operation() const
{
    for (std::size_t index=0; index<fltrctrlp_list.len(); index++)
    {
        if(fltrctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fltrctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FltrCtrlP-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList>();
        c->parent = this;
        fltrctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fltrctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FltrCtrlP-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::FltrCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    list{YType::str, "list"}
{

    yang_name = "FltrCtrlP-list"; yang_parent_name = "fltrctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::~FltrCtrlPList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set
	|| descr.is_set
	|| list.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FltrCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name" || name == "descr" || name == "list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolItems()
    :
    policyinheritrule_list(this, {"name"})
{

    yang_name = "pol-items"; yang_parent_name = "PolicyCont-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::~PolItems()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policyinheritrule_list.len(); index++)
    {
        if(policyinheritrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::has_operation() const
{
    for (std::size_t index=0; index<policyinheritrule_list.len(); index++)
    {
        if(policyinheritrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyInheritRule-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList>();
        c->parent = this;
        policyinheritrule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policyinheritrule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyInheritRule-list")
        return true;
    return false;
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::PolicyInheritRuleList()
    :
    name{YType::str, "name"},
    seq{YType::uint16, "seq"}
{

    yang_name = "PolicyInheritRule-list"; yang_parent_name = "pol-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::~PolicyInheritRuleList()
{
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| seq.is_set;
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter);
}

std::string System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyInheritRule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "seq")
        return true;
    return false;
}

System::BgpItems::InstItems::EvthistItems::EvthistItems()
    :
    evthist_list(this, {"type"})
{

    yang_name = "evthist-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::EvthistItems::~EvthistItems()
{
}

bool System::BgpItems::InstItems::EvthistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evthist_list.len(); index++)
    {
        if(evthist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BgpItems::InstItems::EvthistItems::has_operation() const
{
    for (std::size_t index=0; index<evthist_list.len(); index++)
    {
        if(evthist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BgpItems::InstItems::EvthistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::EvthistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evthist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::EvthistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::EvthistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EvtHist-list")
    {
        auto c = std::make_shared<System::BgpItems::InstItems::EvthistItems::EvtHistList>();
        c->parent = this;
        evthist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::EvthistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evthist_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BgpItems::InstItems::EvthistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BgpItems::InstItems::EvthistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BgpItems::InstItems::EvthistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EvtHist-list")
        return true;
    return false;
}

System::BgpItems::InstItems::EvthistItems::EvtHistList::EvtHistList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EvtHist-list"; yang_parent_name = "evthist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BgpItems::InstItems::EvthistItems::EvtHistList::~EvtHistList()
{
}

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::BgpItems::InstItems::EvthistItems::EvtHistList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bgp-items/inst-items/evthist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BgpItems::InstItems::EvthistItems::EvtHistList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EvtHist-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BgpItems::InstItems::EvthistItems::EvtHistList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BgpItems::InstItems::EvthistItems::EvtHistList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BgpItems::InstItems::EvthistItems::EvtHistList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BgpItems::InstItems::EvthistItems::EvtHistList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BgpItems::InstItems::EvthistItems::EvtHistList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BgpItems::InstItems::EvthistItems::EvtHistList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::SfwItems::SfwItems()
    :
    suppfw_list(this, {"name"})
{

    yang_name = "sfw-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SfwItems::~SfwItems()
{
}

bool System::SfwItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppfw_list.len(); index++)
    {
        if(suppfw_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SfwItems::has_operation() const
{
    for (std::size_t index=0; index<suppfw_list.len(); index++)
    {
        if(suppfw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SfwItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SfwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SfwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SfwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SuppFw-list")
    {
        auto c = std::make_shared<System::SfwItems::SuppFwList>();
        c->parent = this;
        suppfw_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SfwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : suppfw_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SfwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SfwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SfwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SuppFw-list")
        return true;
    return false;
}

System::SfwItems::SuppFwList::SuppFwList()
    :
    name{YType::str, "name"},
    version{YType::str, "version"},
    filtercheckst{YType::enumeration, "filterCheckSt"},
    message{YType::str, "message"}
{

    yang_name = "SuppFw-list"; yang_parent_name = "sfw-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SfwItems::SuppFwList::~SuppFwList()
{
}

bool System::SfwItems::SuppFwList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set
	|| filtercheckst.is_set
	|| message.is_set;
}

bool System::SfwItems::SuppFwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(filtercheckst.yfilter)
	|| ydk::is_set(message.yfilter);
}

std::string System::SfwItems::SuppFwList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sfw-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SfwItems::SuppFwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SuppFw-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SfwItems::SuppFwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (filtercheckst.is_set || is_set(filtercheckst.yfilter)) leaf_name_data.push_back(filtercheckst.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SfwItems::SuppFwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SfwItems::SuppFwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SfwItems::SuppFwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterCheckSt")
    {
        filtercheckst = value;
        filtercheckst.value_namespace = name_space;
        filtercheckst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void System::SfwItems::SuppFwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "filterCheckSt")
    {
        filtercheckst.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool System::SfwItems::SuppFwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version" || name == "filterCheckSt" || name == "message")
        return true;
    return false;
}

System::CapabilitiesItems::CapabilitiesItems()
    :
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::L3capruleItems>())
    , card_items(std::make_shared<System::CapabilitiesItems::CardItems>())
    , port_items(std::make_shared<System::CapabilitiesItems::PortItems>())
    , psu_items(std::make_shared<System::CapabilitiesItems::PsuItems>())
    , fan_items(std::make_shared<System::CapabilitiesItems::FanItems>())
    , sfp_items(std::make_shared<System::CapabilitiesItems::SfpItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    card_items->parent = this;
    port_items->parent = this;
    psu_items->parent = this;
    fan_items->parent = this;
    sfp_items->parent = this;

    yang_name = "capabilities-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::~CapabilitiesItems()
{
}

bool System::CapabilitiesItems::has_data() const
{
    if (is_presence_container) return true;
    return (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (card_items !=  nullptr && card_items->has_data())
	|| (port_items !=  nullptr && port_items->has_data())
	|| (psu_items !=  nullptr && psu_items->has_data())
	|| (fan_items !=  nullptr && fan_items->has_data())
	|| (sfp_items !=  nullptr && sfp_items->has_data());
}

bool System::CapabilitiesItems::has_operation() const
{
    return is_set(yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (card_items !=  nullptr && card_items->has_operation())
	|| (port_items !=  nullptr && port_items->has_operation())
	|| (psu_items !=  nullptr && psu_items->has_operation())
	|| (fan_items !=  nullptr && fan_items->has_operation())
	|| (sfp_items !=  nullptr && sfp_items->has_operation());
}

std::string System::CapabilitiesItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "card-items")
    {
        if(card_items == nullptr)
        {
            card_items = std::make_shared<System::CapabilitiesItems::CardItems>();
        }
        return card_items;
    }

    if(child_yang_name == "port-items")
    {
        if(port_items == nullptr)
        {
            port_items = std::make_shared<System::CapabilitiesItems::PortItems>();
        }
        return port_items;
    }

    if(child_yang_name == "psu-items")
    {
        if(psu_items == nullptr)
        {
            psu_items = std::make_shared<System::CapabilitiesItems::PsuItems>();
        }
        return psu_items;
    }

    if(child_yang_name == "fan-items")
    {
        if(fan_items == nullptr)
        {
            fan_items = std::make_shared<System::CapabilitiesItems::FanItems>();
        }
        return fan_items;
    }

    if(child_yang_name == "sfp-items")
    {
        if(sfp_items == nullptr)
        {
            sfp_items = std::make_shared<System::CapabilitiesItems::SfpItems>();
        }
        return sfp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(card_items != nullptr)
    {
        children["card-items"] = card_items;
    }

    if(port_items != nullptr)
    {
        children["port-items"] = port_items;
    }

    if(psu_items != nullptr)
    {
        children["psu-items"] = psu_items;
    }

    if(fan_items != nullptr)
    {
        children["fan-items"] = fan_items;
    }

    if(sfp_items != nullptr)
    {
        children["sfp-items"] = sfp_items;
    }

    return children;
}

void System::CapabilitiesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "card-items" || name == "port-items" || name == "psu-items" || name == "fan-items" || name == "sfp-items")
        return true;
    return false;
}

System::CapabilitiesItems::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::ActrlcapruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/actrlcaprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L1capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L1capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l1caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L2capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L2capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l2caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::L3capruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::L3capruleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/l3caprule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardItems()
    :
    card_list(this, {"vendor", "model", "version"})
{

    yang_name = "card-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::CardItems::~CardItems()
{
}

bool System::CapabilitiesItems::CardItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_list.len(); index++)
    {
        if(card_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::has_operation() const
{
    for (std::size_t index=0; index<card_list.len(); index++)
    {
        if(card_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::CardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Card-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::CardItems::CardList>();
        c->parent = this;
        card_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : card_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Card-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::CardList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::CardItems::CardList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Card-list"; yang_parent_name = "card-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::CardItems::CardList::~CardList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::CardItems::CardList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::CardItems::CardList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/card-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::CardItems::CardList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Card-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::CardItems::CardList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        children["phys-items"] = phys_items;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::CardList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::CardItems::CardList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::CardItems::CardList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::CardItems::CardList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Card-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::CardItems::CardList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::CardItems::CardList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::CardItems::CardList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::CardItems::CardList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::CardItems::CardList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::CardItems::CardList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
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

void System::CapabilitiesItems::CardItems::CardList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::CardItems::CardList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortItems()
    :
    port_list(this, {"vendor", "model", "version"})
{

    yang_name = "port-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PortItems::~PortItems()
{
}

bool System::CapabilitiesItems::PortItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_list.len(); index++)
    {
        if(port_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::has_operation() const
{
    for (std::size_t index=0; index<port_list.len(); index++)
    {
        if(port_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PortItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Port-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PortItems::PortList>();
        c->parent = this;
        port_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::PortList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::PortItems::PortList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Port-list"; yang_parent_name = "port-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PortItems::PortList::~PortList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::PortItems::PortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::PortItems::PortList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/port-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PortItems::PortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::PortItems::PortList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        children["phys-items"] = phys_items;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::PortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PortItems::PortList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PortItems::PortList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::PortItems::PortList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Port-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PortItems::PortList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PortItems::PortList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PortItems::PortList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PortItems::PortList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PortItems::PortList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PortItems::PortList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
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

void System::CapabilitiesItems::PortItems::PortList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::PortItems::PortList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuItems()
    :
    psu_list(this, {"vendor", "model", "version"})
{

    yang_name = "psu-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PsuItems::~PsuItems()
{
}

bool System::CapabilitiesItems::PsuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psu_list.len(); index++)
    {
        if(psu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::has_operation() const
{
    for (std::size_t index=0; index<psu_list.len(); index++)
    {
        if(psu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PsuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Psu-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList>();
        c->parent = this;
        psu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : psu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Psu-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::PsuList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Psu-list"; yang_parent_name = "psu-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::PsuItems::PsuList::~PsuList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::PsuItems::PsuList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/psu-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::PsuItems::PsuList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Psu-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        children["phys-items"] = phys_items;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::PsuItems::PsuList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::PsuItems::PsuList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::PsuItems::PsuList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Psu-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::PsuItems::PsuList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::PsuItems::PsuList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::PsuItems::PsuList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
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

void System::CapabilitiesItems::PsuItems::PsuList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::PsuItems::PsuList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanItems()
    :
    fan_list(this, {"vendor", "model", "version"})
{

    yang_name = "fan-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::FanItems::~FanItems()
{
}

bool System::CapabilitiesItems::FanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::has_operation() const
{
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::FanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::FanItems::FanList>();
        c->parent = this;
        fan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fan-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::FanList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    actrlcaprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems>())
    , mfg_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::MfgItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::FanItems::FanList::PhysItems>())
{
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    mfg_items->parent = this;
    phys_items->parent = this;

    yang_name = "Fan-list"; yang_parent_name = "fan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::FanItems::FanList::~FanList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::FanItems::FanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::FanItems::FanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/fan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::FanItems::FanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fan-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::FanItems::FanList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(mfg_items != nullptr)
    {
        children["mfg-items"] = mfg_items;
    }

    if(phys_items != nullptr)
    {
        children["phys-items"] = phys_items;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::FanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "mfg-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::MfgItems::MfgItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    partnumber{YType::str, "partNumber"}
{

    yang_name = "mfg-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| partnumber.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(partnumber.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::FanItems::FanList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::FanItems::FanList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "partNumber")
        return true;
    return false;
}

System::CapabilitiesItems::FanItems::FanList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Fan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::FanItems::FanList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::FanItems::FanList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::FanItems::FanList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::FanItems::FanList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::FanItems::FanList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::FanItems::FanList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
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

void System::CapabilitiesItems::FanItems::FanList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::FanItems::FanList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpItems()
    :
    sfp_list(this, {"vendor", "model", "version"})
{

    yang_name = "sfp-items"; yang_parent_name = "capabilities-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::SfpItems::~SfpItems()
{
}

bool System::CapabilitiesItems::SfpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfp_list.len(); index++)
    {
        if(sfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::has_operation() const
{
    for (std::size_t index=0; index<sfp_list.len(); index++)
    {
        if(sfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::SfpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sfp-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList>();
        c->parent = this;
        sfp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sfp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sfp-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::SfpList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    version{YType::str, "version"}
        ,
    mfg_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems>())
    , actrlcaprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems>())
    , l1caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems>())
    , l2caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems>())
    , l3caprule_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems>())
    , phys_items(std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::PhysItems>())
{
    mfg_items->parent = this;
    actrlcaprule_items->parent = this;
    l1caprule_items->parent = this;
    l2caprule_items->parent = this;
    l3caprule_items->parent = this;
    phys_items->parent = this;

    yang_name = "Sfp-list"; yang_parent_name = "sfp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CapabilitiesItems::SfpItems::SfpList::~SfpList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| version.is_set
	|| (mfg_items !=  nullptr && mfg_items->has_data())
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_data())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_data())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_data())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data());
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (mfg_items !=  nullptr && mfg_items->has_operation())
	|| (actrlcaprule_items !=  nullptr && actrlcaprule_items->has_operation())
	|| (l1caprule_items !=  nullptr && l1caprule_items->has_operation())
	|| (l2caprule_items !=  nullptr && l2caprule_items->has_operation())
	|| (l3caprule_items !=  nullptr && l3caprule_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation());
}

std::string System::CapabilitiesItems::SfpItems::SfpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/capabilities-items/sfp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CapabilitiesItems::SfpItems::SfpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sfp-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(version, "version");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mfg-items")
    {
        if(mfg_items == nullptr)
        {
            mfg_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems>();
        }
        return mfg_items;
    }

    if(child_yang_name == "actrlcaprule-items")
    {
        if(actrlcaprule_items == nullptr)
        {
            actrlcaprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems>();
        }
        return actrlcaprule_items;
    }

    if(child_yang_name == "l1caprule-items")
    {
        if(l1caprule_items == nullptr)
        {
            l1caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems>();
        }
        return l1caprule_items;
    }

    if(child_yang_name == "l2caprule-items")
    {
        if(l2caprule_items == nullptr)
        {
            l2caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems>();
        }
        return l2caprule_items;
    }

    if(child_yang_name == "l3caprule-items")
    {
        if(l3caprule_items == nullptr)
        {
            l3caprule_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems>();
        }
        return l3caprule_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::PhysItems>();
        }
        return phys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mfg_items != nullptr)
    {
        children["mfg-items"] = mfg_items;
    }

    if(actrlcaprule_items != nullptr)
    {
        children["actrlcaprule-items"] = actrlcaprule_items;
    }

    if(l1caprule_items != nullptr)
    {
        children["l1caprule-items"] = l1caprule_items;
    }

    if(l2caprule_items != nullptr)
    {
        children["l2caprule-items"] = l2caprule_items;
    }

    if(l3caprule_items != nullptr)
    {
        children["l3caprule-items"] = l3caprule_items;
    }

    if(phys_items != nullptr)
    {
        children["phys-items"] = phys_items;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mfg-items" || name == "actrlcaprule-items" || name == "l1caprule-items" || name == "l2caprule-items" || name == "l3caprule-items" || name == "phys-items" || name == "vendor" || name == "model" || name == "version")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::MfgItems()
    :
    sfpmfgdef_list(this, {"partnumber"})
{

    yang_name = "mfg-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::~MfgItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sfpmfgdef_list.len(); index++)
    {
        if(sfpmfgdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_operation() const
{
    for (std::size_t index=0; index<sfpmfgdef_list.len(); index++)
    {
        if(sfpmfgdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SfpMfgDef-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList>();
        c->parent = this;
        sfpmfgdef_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sfpmfgdef_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SfpMfgDef-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::SfpMfgDefList()
    :
    partnumber{YType::str, "partNumber"},
    pnpattern{YType::str, "pnPattern"},
    intvendorid{YType::uint8, "intVendorId"},
    magickey{YType::str, "magicKey"},
    xcvr{YType::enumeration, "xcvr"},
    connector{YType::enumeration, "connector"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "SfpMfgDef-list"; yang_parent_name = "mfg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::~SfpMfgDefList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| pnpattern.is_set
	|| intvendorid.is_set
	|| magickey.is_set
	|| xcvr.is_set
	|| connector.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(pnpattern.yfilter)
	|| ydk::is_set(intvendorid.yfilter)
	|| ydk::is_set(magickey.yfilter)
	|| ydk::is_set(xcvr.yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SfpMfgDef-list";
    ADD_KEY_TOKEN(partnumber, "partNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (pnpattern.is_set || is_set(pnpattern.yfilter)) leaf_name_data.push_back(pnpattern.get_name_leafdata());
    if (intvendorid.is_set || is_set(intvendorid.yfilter)) leaf_name_data.push_back(intvendorid.get_name_leafdata());
    if (magickey.is_set || is_set(magickey.yfilter)) leaf_name_data.push_back(magickey.get_name_leafdata());
    if (xcvr.is_set || is_set(xcvr.yfilter)) leaf_name_data.push_back(xcvr.get_name_leafdata());
    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pnPattern")
    {
        pnpattern = value;
        pnpattern.value_namespace = name_space;
        pnpattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intVendorId")
    {
        intvendorid = value;
        intvendorid.value_namespace = name_space;
        intvendorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "magicKey")
    {
        magickey = value;
        magickey.value_namespace = name_space;
        magickey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvr")
    {
        xcvr = value;
        xcvr.value_namespace = name_space;
        xcvr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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

void System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "pnPattern")
    {
        pnpattern.yfilter = yfilter;
    }
    if(value_path == "intVendorId")
    {
        intvendorid.yfilter = yfilter;
    }
    if(value_path == "magicKey")
    {
        magickey.yfilter = yfilter;
    }
    if(value_path == "xcvr")
    {
        xcvr.yfilter = yfilter;
    }
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partNumber" || name == "pnPattern" || name == "intVendorId" || name == "magicKey" || name == "xcvr" || name == "connector" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::ActrlcapruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "actrlcaprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::~ActrlcapruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actrlcaprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "actrlcaprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::L1capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l1caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::~L1capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l1caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l1caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::L2capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l2caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::~L2capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l2caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::L3capruleItems()
    :
    rule_list(this, {"subj", "scope", "type"})
{

    yang_name = "l3caprule-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::~L3capruleItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3caprule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::RuleList()
    :
    subj{YType::enumeration, "subj"},
    scope{YType::enumeration, "scope"},
    type{YType::enumeration, "type"},
    faultstate{YType::enumeration, "faultState"},
    constraint{YType::uint32, "constraint"},
    descr{YType::str, "descr"}
{

    yang_name = "Rule-list"; yang_parent_name = "l3caprule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::~RuleList()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return subj.is_set
	|| scope.is_set
	|| type.is_set
	|| faultstate.is_set
	|| constraint.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subj.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(faultstate.yfilter)
	|| ydk::is_set(constraint.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(subj, "subj");
    ADD_KEY_TOKEN(scope, "scope");
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subj.is_set || is_set(subj.yfilter)) leaf_name_data.push_back(subj.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (faultstate.is_set || is_set(faultstate.yfilter)) leaf_name_data.push_back(faultstate.get_name_leafdata());
    if (constraint.is_set || is_set(constraint.yfilter)) leaf_name_data.push_back(constraint.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subj")
    {
        subj = value;
        subj.value_namespace = name_space;
        subj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultState")
    {
        faultstate = value;
        faultstate.value_namespace = name_space;
        faultstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint")
    {
        constraint = value;
        constraint.value_namespace = name_space;
        constraint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subj")
    {
        subj.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "faultState")
    {
        faultstate.yfilter = yfilter;
    }
    if(value_path == "constraint")
    {
        constraint.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj" || name == "scope" || name == "type" || name == "faultState" || name == "constraint" || name == "descr")
        return true;
    return false;
}

System::CapabilitiesItems::SfpItems::SfpList::PhysItems::PhysItems()
    :
    height{YType::str, "height"},
    width{YType::str, "width"},
    depth{YType::str, "depth"},
    weight{YType::str, "weight"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "phys-items"; yang_parent_name = "Sfp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CapabilitiesItems::SfpItems::SfpList::PhysItems::~PhysItems()
{
}

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    return height.is_set
	|| width.is_set
	|| depth.is_set
	|| weight.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(height.yfilter)
	|| ydk::is_set(width.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (height.is_set || is_set(height.yfilter)) leaf_name_data.push_back(height.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CapabilitiesItems::SfpItems::SfpList::PhysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CapabilitiesItems::SfpItems::SfpList::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "height")
    {
        height = value;
        height.value_namespace = name_space;
        height.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
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

void System::CapabilitiesItems::SfpItems::SfpList::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "height")
    {
        height.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool System::CapabilitiesItems::SfpItems::SfpList::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "height" || name == "width" || name == "depth" || name == "weight" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::CoopItems::CoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::CoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "coop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoopItems::~CoopItems()
{
}

bool System::CoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::CoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::CoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::CoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::CoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CoopItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::CoopItems::InstItems::InstItems()
    :
    role{YType::enumeration, "role"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::CoopItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "coop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoopItems::InstItems::~InstItems()
{
}

bool System::CoopItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::CoopItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::CoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/coop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::CoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::CoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
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

void System::CoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
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

bool System::CoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "role" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::CoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/coop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::get_children() const
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

void System::CoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"}
        ,
    oracle_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::OracleItems>())
    , citizen_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::CitizenItems>())
    , shard_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ShardItems>())
    , repp_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems>())
    , db_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems>())
{
    oracle_items->parent = this;
    citizen_items->parent = this;
    shard_items->parent = this;
    repp_items->parent = this;
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoopItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| addr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| (oracle_items !=  nullptr && oracle_items->has_data())
	|| (citizen_items !=  nullptr && citizen_items->has_data())
	|| (shard_items !=  nullptr && shard_items->has_data())
	|| (repp_items !=  nullptr && repp_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| (oracle_items !=  nullptr && oracle_items->has_operation())
	|| (citizen_items !=  nullptr && citizen_items->has_operation())
	|| (shard_items !=  nullptr && shard_items->has_operation())
	|| (repp_items !=  nullptr && repp_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/coop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoopItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oracle-items")
    {
        if(oracle_items == nullptr)
        {
            oracle_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::OracleItems>();
        }
        return oracle_items;
    }

    if(child_yang_name == "citizen-items")
    {
        if(citizen_items == nullptr)
        {
            citizen_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::CitizenItems>();
        }
        return citizen_items;
    }

    if(child_yang_name == "shard-items")
    {
        if(shard_items == nullptr)
        {
            shard_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ShardItems>();
        }
        return shard_items;
    }

    if(child_yang_name == "repp-items")
    {
        if(repp_items == nullptr)
        {
            repp_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems>();
        }
        return repp_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oracle_items != nullptr)
    {
        children["oracle-items"] = oracle_items;
    }

    if(citizen_items != nullptr)
    {
        children["citizen-items"] = citizen_items;
    }

    if(shard_items != nullptr)
    {
        children["shard-items"] = shard_items;
    }

    if(repp_items != nullptr)
    {
        children["repp-items"] = repp_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
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

void System::CoopItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
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

bool System::CoopItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oracle-items" || name == "citizen-items" || name == "shard-items" || name == "repp-items" || name == "db-items" || name == "name" || name == "addr" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleItems()
    :
    oracleadj_list(this, {"addr"})
{

    yang_name = "oracle-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::~OracleItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oracleadj_list.len(); index++)
    {
        if(oracleadj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::has_operation() const
{
    for (std::size_t index=0; index<oracleadj_list.len(); index++)
    {
        if(oracleadj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::OracleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oracle-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::OracleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::OracleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OracleAdj-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList>();
        c->parent = this;
        oracleadj_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::OracleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oracleadj_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OracleAdj-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::OracleAdjList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    hellointvl{YType::uint16, "helloIntvl"},
    ctrl{YType::str, "ctrl"},
    grtime{YType::uint32, "grTime"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    lastcontact{YType::str, "lastContact"},
    flags{YType::str, "flags"}
        ,
    shard_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems>())
{
    shard_items->parent = this;

    yang_name = "OracleAdj-list"; yang_parent_name = "oracle-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::~OracleAdjList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| hellointvl.is_set
	|| ctrl.is_set
	|| grtime.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| lastcontact.is_set
	|| flags.is_set
	|| (shard_items !=  nullptr && shard_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(grtime.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(lastcontact.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (shard_items !=  nullptr && shard_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OracleAdj-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (grtime.is_set || is_set(grtime.yfilter)) leaf_name_data.push_back(grtime.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (lastcontact.is_set || is_set(lastcontact.yfilter)) leaf_name_data.push_back(lastcontact.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shard-items")
    {
        if(shard_items == nullptr)
        {
            shard_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems>();
        }
        return shard_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(shard_items != nullptr)
    {
        children["shard-items"] = shard_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grTime")
    {
        grtime = value;
        grtime.value_namespace = name_space;
        grtime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lastContact")
    {
        lastcontact = value;
        lastcontact.value_namespace = name_space;
        lastcontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "grTime")
    {
        grtime.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "lastContact")
    {
        lastcontact.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shard-items" || name == "addr" || name == "name" || name == "helloIntvl" || name == "ctrl" || name == "grTime" || name == "operSt" || name == "operStQual" || name == "lastContact" || name == "flags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::ShardItems()
    :
    masterintvlst{YType::uint32, "masterIntvlSt"},
    masterintvlend{YType::uint32, "masterIntvlEnd"},
    bkupintvlst{YType::uint32, "bkupIntvlSt"},
    bkupintvlend{YType::uint32, "bkupIntvlEnd"},
    name{YType::str, "name"}
{

    yang_name = "shard-items"; yang_parent_name = "OracleAdj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::~ShardItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::has_data() const
{
    if (is_presence_container) return true;
    return masterintvlst.is_set
	|| masterintvlend.is_set
	|| bkupintvlst.is_set
	|| bkupintvlend.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(masterintvlst.yfilter)
	|| ydk::is_set(masterintvlend.yfilter)
	|| ydk::is_set(bkupintvlst.yfilter)
	|| ydk::is_set(bkupintvlend.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (masterintvlst.is_set || is_set(masterintvlst.yfilter)) leaf_name_data.push_back(masterintvlst.get_name_leafdata());
    if (masterintvlend.is_set || is_set(masterintvlend.yfilter)) leaf_name_data.push_back(masterintvlend.get_name_leafdata());
    if (bkupintvlst.is_set || is_set(bkupintvlst.yfilter)) leaf_name_data.push_back(bkupintvlst.get_name_leafdata());
    if (bkupintvlend.is_set || is_set(bkupintvlend.yfilter)) leaf_name_data.push_back(bkupintvlend.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "masterIntvlSt")
    {
        masterintvlst = value;
        masterintvlst.value_namespace = name_space;
        masterintvlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masterIntvlEnd")
    {
        masterintvlend = value;
        masterintvlend.value_namespace = name_space;
        masterintvlend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkupIntvlSt")
    {
        bkupintvlst = value;
        bkupintvlst.value_namespace = name_space;
        bkupintvlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkupIntvlEnd")
    {
        bkupintvlend = value;
        bkupintvlend.value_namespace = name_space;
        bkupintvlend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "masterIntvlSt")
    {
        masterintvlst.yfilter = yfilter;
    }
    if(value_path == "masterIntvlEnd")
    {
        masterintvlend.yfilter = yfilter;
    }
    if(value_path == "bkupIntvlSt")
    {
        bkupintvlst.yfilter = yfilter;
    }
    if(value_path == "bkupIntvlEnd")
    {
        bkupintvlend.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "masterIntvlSt" || name == "masterIntvlEnd" || name == "bkupIntvlSt" || name == "bkupIntvlEnd" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenItems()
    :
    citizenadj_list(this, {"addr"})
{

    yang_name = "citizen-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::CitizenItems::~CitizenItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<citizenadj_list.len(); index++)
    {
        if(citizenadj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::has_operation() const
{
    for (std::size_t index=0; index<citizenadj_list.len(); index++)
    {
        if(citizenadj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::CitizenItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citizen-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::CitizenItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::CitizenItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CitizenAdj-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList>();
        c->parent = this;
        citizenadj_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::CitizenItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : citizenadj_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::CitizenItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::CitizenItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CitizenAdj-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::CitizenAdjList()
    :
    addr{YType::str, "addr"},
    vpcpeer{YType::str, "vpcPeer"},
    vip{YType::str, "vip"},
    name{YType::str, "name"},
    hellointvl{YType::uint16, "helloIntvl"},
    ctrl{YType::str, "ctrl"},
    grtime{YType::uint32, "grTime"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    lastcontact{YType::str, "lastContact"},
    flags{YType::str, "flags"}
{

    yang_name = "CitizenAdj-list"; yang_parent_name = "citizen-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::~CitizenAdjList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vpcpeer.is_set
	|| vip.is_set
	|| name.is_set
	|| hellointvl.is_set
	|| ctrl.is_set
	|| grtime.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| lastcontact.is_set
	|| flags.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vpcpeer.yfilter)
	|| ydk::is_set(vip.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(grtime.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(lastcontact.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CitizenAdj-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vpcpeer.is_set || is_set(vpcpeer.yfilter)) leaf_name_data.push_back(vpcpeer.get_name_leafdata());
    if (vip.is_set || is_set(vip.yfilter)) leaf_name_data.push_back(vip.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (grtime.is_set || is_set(grtime.yfilter)) leaf_name_data.push_back(grtime.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (lastcontact.is_set || is_set(lastcontact.yfilter)) leaf_name_data.push_back(lastcontact.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer = value;
        vpcpeer.value_namespace = name_space;
        vpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vip")
    {
        vip = value;
        vip.value_namespace = name_space;
        vip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grTime")
    {
        grtime = value;
        grtime.value_namespace = name_space;
        grtime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lastContact")
    {
        lastcontact = value;
        lastcontact.value_namespace = name_space;
        lastcontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vpcPeer")
    {
        vpcpeer.yfilter = yfilter;
    }
    if(value_path == "vip")
    {
        vip.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "grTime")
    {
        grtime.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "lastContact")
    {
        lastcontact.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "vpcPeer" || name == "vip" || name == "name" || name == "helloIntvl" || name == "ctrl" || name == "grTime" || name == "operSt" || name == "operStQual" || name == "lastContact" || name == "flags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ShardItems::ShardItems()
    :
    masterintvlst{YType::uint32, "masterIntvlSt"},
    masterintvlend{YType::uint32, "masterIntvlEnd"},
    bkupintvlst{YType::uint32, "bkupIntvlSt"},
    bkupintvlend{YType::uint32, "bkupIntvlEnd"},
    name{YType::str, "name"}
{

    yang_name = "shard-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ShardItems::~ShardItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ShardItems::has_data() const
{
    if (is_presence_container) return true;
    return masterintvlst.is_set
	|| masterintvlend.is_set
	|| bkupintvlst.is_set
	|| bkupintvlend.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::ShardItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(masterintvlst.yfilter)
	|| ydk::is_set(masterintvlend.yfilter)
	|| ydk::is_set(bkupintvlst.yfilter)
	|| ydk::is_set(bkupintvlend.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::ShardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shard-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ShardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (masterintvlst.is_set || is_set(masterintvlst.yfilter)) leaf_name_data.push_back(masterintvlst.get_name_leafdata());
    if (masterintvlend.is_set || is_set(masterintvlend.yfilter)) leaf_name_data.push_back(masterintvlend.get_name_leafdata());
    if (bkupintvlst.is_set || is_set(bkupintvlst.yfilter)) leaf_name_data.push_back(bkupintvlst.get_name_leafdata());
    if (bkupintvlend.is_set || is_set(bkupintvlend.yfilter)) leaf_name_data.push_back(bkupintvlend.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ShardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ShardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ShardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "masterIntvlSt")
    {
        masterintvlst = value;
        masterintvlst.value_namespace = name_space;
        masterintvlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masterIntvlEnd")
    {
        masterintvlend = value;
        masterintvlend.value_namespace = name_space;
        masterintvlend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkupIntvlSt")
    {
        bkupintvlst = value;
        bkupintvlst.value_namespace = name_space;
        bkupintvlst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bkupIntvlEnd")
    {
        bkupintvlend = value;
        bkupintvlend.value_namespace = name_space;
        bkupintvlend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::ShardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "masterIntvlSt")
    {
        masterintvlst.yfilter = yfilter;
    }
    if(value_path == "masterIntvlEnd")
    {
        masterintvlend.yfilter = yfilter;
    }
    if(value_path == "bkupIntvlSt")
    {
        bkupintvlst.yfilter = yfilter;
    }
    if(value_path == "bkupIntvlEnd")
    {
        bkupintvlend.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::ShardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "masterIntvlSt" || name == "masterIntvlEnd" || name == "bkupIntvlSt" || name == "bkupIntvlEnd" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::ReppItems()
    :
    repp_list(this, {"type"})
{

    yang_name = "repp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::~ReppItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<repp_list.len(); index++)
    {
        if(repp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::has_operation() const
{
    for (std::size_t index=0; index<repp_list.len(); index++)
    {
        if(repp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RepP-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList>();
        c->parent = this;
        repp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : repp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RepP-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::RepPList()
    :
    type{YType::enumeration, "type"},
    adminst{YType::enumeration, "adminSt"},
    refreshintvl{YType::uint32, "refreshIntvl"},
    dampadminst{YType::enumeration, "dampAdminSt"},
    dampaction{YType::enumeration, "dampAction"},
    dampenpenalty{YType::uint16, "dampenPenalty"},
    dampthresh{YType::uint16, "dampThresh"},
    dampreusethresh{YType::uint16, "dampReuseThresh"},
    damphalflife{YType::uint16, "dampHalfLife"},
    dampsatthresh{YType::uint16, "dampSatThresh"},
    loadfactor{YType::uint16, "loadFactor"},
    maxrepsz{YType::uint32, "maxRepSz"},
    synthgen{YType::enumeration, "synthGen"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ep_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems>())
{
    ep_items->parent = this;

    yang_name = "RepP-list"; yang_parent_name = "repp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::~RepPList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| adminst.is_set
	|| refreshintvl.is_set
	|| dampadminst.is_set
	|| dampaction.is_set
	|| dampenpenalty.is_set
	|| dampthresh.is_set
	|| dampreusethresh.is_set
	|| damphalflife.is_set
	|| dampsatthresh.is_set
	|| loadfactor.is_set
	|| maxrepsz.is_set
	|| synthgen.is_set
	|| name.is_set
	|| descr.is_set
	|| (ep_items !=  nullptr && ep_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(refreshintvl.yfilter)
	|| ydk::is_set(dampadminst.yfilter)
	|| ydk::is_set(dampaction.yfilter)
	|| ydk::is_set(dampenpenalty.yfilter)
	|| ydk::is_set(dampthresh.yfilter)
	|| ydk::is_set(dampreusethresh.yfilter)
	|| ydk::is_set(damphalflife.yfilter)
	|| ydk::is_set(dampsatthresh.yfilter)
	|| ydk::is_set(loadfactor.yfilter)
	|| ydk::is_set(maxrepsz.yfilter)
	|| ydk::is_set(synthgen.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ep_items !=  nullptr && ep_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RepP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (refreshintvl.is_set || is_set(refreshintvl.yfilter)) leaf_name_data.push_back(refreshintvl.get_name_leafdata());
    if (dampadminst.is_set || is_set(dampadminst.yfilter)) leaf_name_data.push_back(dampadminst.get_name_leafdata());
    if (dampaction.is_set || is_set(dampaction.yfilter)) leaf_name_data.push_back(dampaction.get_name_leafdata());
    if (dampenpenalty.is_set || is_set(dampenpenalty.yfilter)) leaf_name_data.push_back(dampenpenalty.get_name_leafdata());
    if (dampthresh.is_set || is_set(dampthresh.yfilter)) leaf_name_data.push_back(dampthresh.get_name_leafdata());
    if (dampreusethresh.is_set || is_set(dampreusethresh.yfilter)) leaf_name_data.push_back(dampreusethresh.get_name_leafdata());
    if (damphalflife.is_set || is_set(damphalflife.yfilter)) leaf_name_data.push_back(damphalflife.get_name_leafdata());
    if (dampsatthresh.is_set || is_set(dampsatthresh.yfilter)) leaf_name_data.push_back(dampsatthresh.get_name_leafdata());
    if (loadfactor.is_set || is_set(loadfactor.yfilter)) leaf_name_data.push_back(loadfactor.get_name_leafdata());
    if (maxrepsz.is_set || is_set(maxrepsz.yfilter)) leaf_name_data.push_back(maxrepsz.get_name_leafdata());
    if (synthgen.is_set || is_set(synthgen.yfilter)) leaf_name_data.push_back(synthgen.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ep-items")
    {
        if(ep_items == nullptr)
        {
            ep_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems>();
        }
        return ep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ep_items != nullptr)
    {
        children["ep-items"] = ep_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshIntvl")
    {
        refreshintvl = value;
        refreshintvl.value_namespace = name_space;
        refreshintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampAdminSt")
    {
        dampadminst = value;
        dampadminst.value_namespace = name_space;
        dampadminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampAction")
    {
        dampaction = value;
        dampaction.value_namespace = name_space;
        dampaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampenPenalty")
    {
        dampenpenalty = value;
        dampenpenalty.value_namespace = name_space;
        dampenpenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampThresh")
    {
        dampthresh = value;
        dampthresh.value_namespace = name_space;
        dampthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampReuseThresh")
    {
        dampreusethresh = value;
        dampreusethresh.value_namespace = name_space;
        dampreusethresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampHalfLife")
    {
        damphalflife = value;
        damphalflife.value_namespace = name_space;
        damphalflife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampSatThresh")
    {
        dampsatthresh = value;
        dampsatthresh.value_namespace = name_space;
        dampsatthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadFactor")
    {
        loadfactor = value;
        loadfactor.value_namespace = name_space;
        loadfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRepSz")
    {
        maxrepsz = value;
        maxrepsz.value_namespace = name_space;
        maxrepsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthGen")
    {
        synthgen = value;
        synthgen.value_namespace = name_space;
        synthgen.value_namespace_prefix = name_space_prefix;
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

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "refreshIntvl")
    {
        refreshintvl.yfilter = yfilter;
    }
    if(value_path == "dampAdminSt")
    {
        dampadminst.yfilter = yfilter;
    }
    if(value_path == "dampAction")
    {
        dampaction.yfilter = yfilter;
    }
    if(value_path == "dampenPenalty")
    {
        dampenpenalty.yfilter = yfilter;
    }
    if(value_path == "dampThresh")
    {
        dampthresh.yfilter = yfilter;
    }
    if(value_path == "dampReuseThresh")
    {
        dampreusethresh.yfilter = yfilter;
    }
    if(value_path == "dampHalfLife")
    {
        damphalflife.yfilter = yfilter;
    }
    if(value_path == "dampSatThresh")
    {
        dampsatthresh.yfilter = yfilter;
    }
    if(value_path == "loadFactor")
    {
        loadfactor.yfilter = yfilter;
    }
    if(value_path == "maxRepSz")
    {
        maxrepsz.yfilter = yfilter;
    }
    if(value_path == "synthGen")
    {
        synthgen.yfilter = yfilter;
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

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ep-items" || name == "type" || name == "adminSt" || name == "refreshIntvl" || name == "dampAdminSt" || name == "dampAction" || name == "dampenPenalty" || name == "dampThresh" || name == "dampReuseThresh" || name == "dampHalfLife" || name == "dampSatThresh" || name == "loadFactor" || name == "maxRepSz" || name == "synthGen" || name == "name" || name == "descr")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpItems()
    :
    ep_list(this, {"vnid", "mac"})
{

    yang_name = "ep-items"; yang_parent_name = "RepP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::~EpItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ep_list.len(); index++)
    {
        if(ep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::has_operation() const
{
    for (std::size_t index=0; index<ep_list.len(); index++)
    {
        if(ep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ep-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList>();
        c->parent = this;
        ep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ep-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::EpList()
    :
    vnid{YType::uint32, "vnid"},
    mac{YType::str, "mac"},
    pubid{YType::str, "pubId"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "Ep-list"; yang_parent_name = "ep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::~EpList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| mac.is_set
	|| pubid.is_set
	|| ctrl.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ep-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
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

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
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

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "vnid" || name == "mac" || name == "pubId" || name == "ctrl" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpItems()
    :
    ipaddr_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Ep-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::~IpItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipaddr_list.len(); index++)
    {
        if(ipaddr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipaddr_list.len(); index++)
    {
        if(ipaddr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpAddr-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList>();
        c->parent = this;
        ipaddr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipaddr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpAddr-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::IpAddrList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "IpAddr-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::~IpAddrList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpAddr-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::CoopItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ctx_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems>())
    , epr_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems>())
    , vrf_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems>())
    , leaf_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems>())
    , mgv4_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items>())
    , mgv6_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items>())
    , mrtr_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems>())
    , r_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems>())
{
    ctx_items->parent = this;
    epr_items->parent = this;
    vrf_items->parent = this;
    leaf_items->parent = this;
    mgv4_items->parent = this;
    mgv6_items->parent = this;
    mrtr_items->parent = this;
    r_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ctx_items !=  nullptr && ctx_items->has_data())
	|| (epr_items !=  nullptr && epr_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (leaf_items !=  nullptr && leaf_items->has_data())
	|| (mgv4_items !=  nullptr && mgv4_items->has_data())
	|| (mgv6_items !=  nullptr && mgv6_items->has_data())
	|| (mrtr_items !=  nullptr && mrtr_items->has_data())
	|| (r_items !=  nullptr && r_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ctx_items !=  nullptr && ctx_items->has_operation())
	|| (epr_items !=  nullptr && epr_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (leaf_items !=  nullptr && leaf_items->has_operation())
	|| (mgv4_items !=  nullptr && mgv4_items->has_operation())
	|| (mgv6_items !=  nullptr && mgv6_items->has_operation())
	|| (mrtr_items !=  nullptr && mrtr_items->has_operation())
	|| (r_items !=  nullptr && r_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctx-items")
    {
        if(ctx_items == nullptr)
        {
            ctx_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems>();
        }
        return ctx_items;
    }

    if(child_yang_name == "epr-items")
    {
        if(epr_items == nullptr)
        {
            epr_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems>();
        }
        return epr_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "leaf-items")
    {
        if(leaf_items == nullptr)
        {
            leaf_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems>();
        }
        return leaf_items;
    }

    if(child_yang_name == "mgv4-items")
    {
        if(mgv4_items == nullptr)
        {
            mgv4_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items>();
        }
        return mgv4_items;
    }

    if(child_yang_name == "mgv6-items")
    {
        if(mgv6_items == nullptr)
        {
            mgv6_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items>();
        }
        return mgv6_items;
    }

    if(child_yang_name == "mrtr-items")
    {
        if(mrtr_items == nullptr)
        {
            mrtr_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems>();
        }
        return mrtr_items;
    }

    if(child_yang_name == "r-items")
    {
        if(r_items == nullptr)
        {
            r_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems>();
        }
        return r_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ctx_items != nullptr)
    {
        children["ctx-items"] = ctx_items;
    }

    if(epr_items != nullptr)
    {
        children["epr-items"] = epr_items;
    }

    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    if(leaf_items != nullptr)
    {
        children["leaf-items"] = leaf_items;
    }

    if(mgv4_items != nullptr)
    {
        children["mgv4-items"] = mgv4_items;
    }

    if(mgv6_items != nullptr)
    {
        children["mgv6-items"] = mgv6_items;
    }

    if(mrtr_items != nullptr)
    {
        children["mrtr-items"] = mrtr_items;
    }

    if(r_items != nullptr)
    {
        children["r-items"] = r_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctx-items" || name == "epr-items" || name == "vrf-items" || name == "leaf-items" || name == "mgv4-items" || name == "mgv6-items" || name == "mrtr-items" || name == "r-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxItems()
    :
    ctxrec_list(this, {"vnid"})
{

    yang_name = "ctx-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::~CtxItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctxrec_list.len(); index++)
    {
        if(ctxrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctxrec_list.len(); index++)
    {
        if(ctxrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CtxRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList>();
        c->parent = this;
        ctxrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ctxrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CtxRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::CtxRecList()
    :
    vnid{YType::uint32, "vnid"},
    flags{YType::str, "flags"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"}
        ,
    rsctx2leaf_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems>())
{
    rsctx2leaf_items->parent = this;

    yang_name = "CtxRec-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::~CtxRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| flags.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| (rsctx2leaf_items !=  nullptr && rsctx2leaf_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| (rsctx2leaf_items !=  nullptr && rsctx2leaf_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CtxRec-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsctx2Leaf-items")
    {
        if(rsctx2leaf_items == nullptr)
        {
            rsctx2leaf_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems>();
        }
        return rsctx2leaf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsctx2leaf_items != nullptr)
    {
        children["rsctx2Leaf-items"] = rsctx2leaf_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsctx2Leaf-items" || name == "vnid" || name == "flags" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::Rsctx2LeafItems()
    :
    rsctx2leaf_list(this, {"tdn"})
{

    yang_name = "rsctx2Leaf-items"; yang_parent_name = "CtxRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::~Rsctx2LeafItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsctx2leaf_list.len(); index++)
    {
        if(rsctx2leaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::has_operation() const
{
    for (std::size_t index=0; index<rsctx2leaf_list.len(); index++)
    {
        if(rsctx2leaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsctx2Leaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCtx2Leaf-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList>();
        c->parent = this;
        rsctx2leaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsctx2leaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCtx2Leaf-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::RsCtx2LeafList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    pubid{YType::str, "pubId"},
    lastpub{YType::str, "lastPub"}
{

    yang_name = "RsCtx2Leaf-list"; yang_parent_name = "rsctx2Leaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::~RsCtx2LeafList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| pubid.is_set
	|| lastpub.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(lastpub.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCtx2Leaf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "pubId" || name == "lastPub")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EprItems()
    :
    eprec_list(this, {"vnid", "mac"})
{

    yang_name = "epr-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::~EprItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eprec_list.len(); index++)
    {
        if(eprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::has_operation() const
{
    for (std::size_t index=0; index<eprec_list.len(); index++)
    {
        if(eprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList>();
        c->parent = this;
        eprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpRecList()
    :
    vnid{YType::uint32, "vnid"},
    mac{YType::str, "mac"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"},
    vrfvnid{YType::uint32, "vrfVnid"},
    pubid{YType::str, "pubId"},
    flags{YType::str, "flags"},
    synthip{YType::str, "synthIp"},
    synthvrf{YType::uint32, "synthVrf"},
    synthflags{YType::str, "synthFlags"},
    currcitizen{YType::str, "currCitizen"},
    prevcitizen{YType::str, "prevCitizen"},
    pprevcitizen{YType::str, "pprevCitizen"}
        ,
    epip4_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items>())
    , epip6_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items>())
    , epvpc_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems>())
{
    epip4_items->parent = this;
    epip6_items->parent = this;
    epvpc_items->parent = this;

    yang_name = "EpRec-list"; yang_parent_name = "epr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::~EpRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| mac.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| vrfvnid.is_set
	|| pubid.is_set
	|| flags.is_set
	|| synthip.is_set
	|| synthvrf.is_set
	|| synthflags.is_set
	|| currcitizen.is_set
	|| prevcitizen.is_set
	|| pprevcitizen.is_set
	|| (epip4_items !=  nullptr && epip4_items->has_data())
	|| (epip6_items !=  nullptr && epip6_items->has_data())
	|| (epvpc_items !=  nullptr && epvpc_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| ydk::is_set(vrfvnid.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(synthip.yfilter)
	|| ydk::is_set(synthvrf.yfilter)
	|| ydk::is_set(synthflags.yfilter)
	|| ydk::is_set(currcitizen.yfilter)
	|| ydk::is_set(prevcitizen.yfilter)
	|| ydk::is_set(pprevcitizen.yfilter)
	|| (epip4_items !=  nullptr && epip4_items->has_operation())
	|| (epip6_items !=  nullptr && epip6_items->has_operation())
	|| (epvpc_items !=  nullptr && epvpc_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpRec-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());
    if (vrfvnid.is_set || is_set(vrfvnid.yfilter)) leaf_name_data.push_back(vrfvnid.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (synthip.is_set || is_set(synthip.yfilter)) leaf_name_data.push_back(synthip.get_name_leafdata());
    if (synthvrf.is_set || is_set(synthvrf.yfilter)) leaf_name_data.push_back(synthvrf.get_name_leafdata());
    if (synthflags.is_set || is_set(synthflags.yfilter)) leaf_name_data.push_back(synthflags.get_name_leafdata());
    if (currcitizen.is_set || is_set(currcitizen.yfilter)) leaf_name_data.push_back(currcitizen.get_name_leafdata());
    if (prevcitizen.is_set || is_set(prevcitizen.yfilter)) leaf_name_data.push_back(prevcitizen.get_name_leafdata());
    if (pprevcitizen.is_set || is_set(pprevcitizen.yfilter)) leaf_name_data.push_back(pprevcitizen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epip4-items")
    {
        if(epip4_items == nullptr)
        {
            epip4_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items>();
        }
        return epip4_items;
    }

    if(child_yang_name == "epip6-items")
    {
        if(epip6_items == nullptr)
        {
            epip6_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items>();
        }
        return epip6_items;
    }

    if(child_yang_name == "epvpc-items")
    {
        if(epvpc_items == nullptr)
        {
            epvpc_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems>();
        }
        return epvpc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epip4_items != nullptr)
    {
        children["epip4-items"] = epip4_items;
    }

    if(epip6_items != nullptr)
    {
        children["epip6-items"] = epip6_items;
    }

    if(epvpc_items != nullptr)
    {
        children["epvpc-items"] = epvpc_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfVnid")
    {
        vrfvnid = value;
        vrfvnid.value_namespace = name_space;
        vrfvnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthIp")
    {
        synthip = value;
        synthip.value_namespace = name_space;
        synthip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthVrf")
    {
        synthvrf = value;
        synthvrf.value_namespace = name_space;
        synthvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthFlags")
    {
        synthflags = value;
        synthflags.value_namespace = name_space;
        synthflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currCitizen")
    {
        currcitizen = value;
        currcitizen.value_namespace = name_space;
        currcitizen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCitizen")
    {
        prevcitizen = value;
        prevcitizen.value_namespace = name_space;
        prevcitizen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pprevCitizen")
    {
        pprevcitizen = value;
        pprevcitizen.value_namespace = name_space;
        pprevcitizen.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
    if(value_path == "vrfVnid")
    {
        vrfvnid.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "synthIp")
    {
        synthip.yfilter = yfilter;
    }
    if(value_path == "synthVrf")
    {
        synthvrf.yfilter = yfilter;
    }
    if(value_path == "synthFlags")
    {
        synthflags.yfilter = yfilter;
    }
    if(value_path == "currCitizen")
    {
        currcitizen.yfilter = yfilter;
    }
    if(value_path == "prevCitizen")
    {
        prevcitizen.yfilter = yfilter;
    }
    if(value_path == "pprevCitizen")
    {
        pprevcitizen.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epip4-items" || name == "epip6-items" || name == "epvpc-items" || name == "vnid" || name == "mac" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty" || name == "vrfVnid" || name == "pubId" || name == "flags" || name == "synthIp" || name == "synthVrf" || name == "synthFlags" || name == "currCitizen" || name == "prevCitizen" || name == "pprevCitizen")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Epip4Items()
    :
    ipv4rec_list(this, {"addr"})
{

    yang_name = "epip4-items"; yang_parent_name = "EpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::~Epip4Items()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4rec_list.len(); index++)
    {
        if(ipv4rec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::has_operation() const
{
    for (std::size_t index=0; index<ipv4rec_list.len(); index++)
    {
        if(ipv4rec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epip4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ipv4Rec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList>();
        c->parent = this;
        ipv4rec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4rec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ipv4Rec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::Ipv4RecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    synthip{YType::str, "synthIp"},
    synthvrf{YType::uint32, "synthVrf"},
    synthflags{YType::str, "synthFlags"}
{

    yang_name = "Ipv4Rec-list"; yang_parent_name = "epip4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::~Ipv4RecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| synthip.is_set
	|| synthvrf.is_set
	|| synthflags.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(synthip.yfilter)
	|| ydk::is_set(synthvrf.yfilter)
	|| ydk::is_set(synthflags.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ipv4Rec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (synthip.is_set || is_set(synthip.yfilter)) leaf_name_data.push_back(synthip.get_name_leafdata());
    if (synthvrf.is_set || is_set(synthvrf.yfilter)) leaf_name_data.push_back(synthvrf.get_name_leafdata());
    if (synthflags.is_set || is_set(synthflags.yfilter)) leaf_name_data.push_back(synthflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "synthIp")
    {
        synthip = value;
        synthip.value_namespace = name_space;
        synthip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthVrf")
    {
        synthvrf = value;
        synthvrf.value_namespace = name_space;
        synthvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthFlags")
    {
        synthflags = value;
        synthflags.value_namespace = name_space;
        synthflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "synthIp")
    {
        synthip.yfilter = yfilter;
    }
    if(value_path == "synthVrf")
    {
        synthvrf.yfilter = yfilter;
    }
    if(value_path == "synthFlags")
    {
        synthflags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "synthIp" || name == "synthVrf" || name == "synthFlags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Epip6Items()
    :
    ipv6rec_list(this, {"addr"})
{

    yang_name = "epip6-items"; yang_parent_name = "EpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::~Epip6Items()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6rec_list.len(); index++)
    {
        if(ipv6rec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::has_operation() const
{
    for (std::size_t index=0; index<ipv6rec_list.len(); index++)
    {
        if(ipv6rec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epip6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ipv6Rec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList>();
        c->parent = this;
        ipv6rec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6rec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ipv6Rec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::Ipv6RecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    synthip{YType::str, "synthIp"},
    synthvrf{YType::uint32, "synthVrf"},
    synthflags{YType::str, "synthFlags"}
{

    yang_name = "Ipv6Rec-list"; yang_parent_name = "epip6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::~Ipv6RecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| synthip.is_set
	|| synthvrf.is_set
	|| synthflags.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(synthip.yfilter)
	|| ydk::is_set(synthvrf.yfilter)
	|| ydk::is_set(synthflags.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ipv6Rec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (synthip.is_set || is_set(synthip.yfilter)) leaf_name_data.push_back(synthip.get_name_leafdata());
    if (synthvrf.is_set || is_set(synthvrf.yfilter)) leaf_name_data.push_back(synthvrf.get_name_leafdata());
    if (synthflags.is_set || is_set(synthflags.yfilter)) leaf_name_data.push_back(synthflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "synthIp")
    {
        synthip = value;
        synthip.value_namespace = name_space;
        synthip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthVrf")
    {
        synthvrf = value;
        synthvrf.value_namespace = name_space;
        synthvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthFlags")
    {
        synthflags = value;
        synthflags.value_namespace = name_space;
        synthflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "synthIp")
    {
        synthip.yfilter = yfilter;
    }
    if(value_path == "synthVrf")
    {
        synthvrf.yfilter = yfilter;
    }
    if(value_path == "synthFlags")
    {
        synthflags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "synthIp" || name == "synthVrf" || name == "synthFlags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpvpcItems()
    :
    epvpcrec_list(this, {"virtswid", "vpcportid"})
{

    yang_name = "epvpc-items"; yang_parent_name = "EpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::~EpvpcItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epvpcrec_list.len(); index++)
    {
        if(epvpcrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::has_operation() const
{
    for (std::size_t index=0; index<epvpcrec_list.len(); index++)
    {
        if(epvpcrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epvpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpVpcRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList>();
        c->parent = this;
        epvpcrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epvpcrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpVpcRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::EpVpcRecList()
    :
    virtswid{YType::str, "virtSwId"},
    vpcportid{YType::uint32, "vpcPortId"},
    name{YType::str, "name"}
{

    yang_name = "EpVpcRec-list"; yang_parent_name = "epvpc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::~EpVpcRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::has_data() const
{
    if (is_presence_container) return true;
    return virtswid.is_set
	|| vpcportid.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtswid.yfilter)
	|| ydk::is_set(vpcportid.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpVpcRec-list";
    ADD_KEY_TOKEN(virtswid, "virtSwId");
    ADD_KEY_TOKEN(vpcportid, "vpcPortId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtswid.is_set || is_set(virtswid.yfilter)) leaf_name_data.push_back(virtswid.get_name_leafdata());
    if (vpcportid.is_set || is_set(vpcportid.yfilter)) leaf_name_data.push_back(vpcportid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtSwId")
    {
        virtswid = value;
        virtswid.value_namespace = name_space;
        virtswid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcPortId")
    {
        vpcportid = value;
        vpcportid.value_namespace = name_space;
        vpcportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtSwId")
    {
        virtswid.yfilter = yfilter;
    }
    if(value_path == "vpcPortId")
    {
        vpcportid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtSwId" || name == "vpcPortId" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::VrfItems()
    :
    iponlyrec_list(this, {"vrfvnid", "addr"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iponlyrec_list.len(); index++)
    {
        if(iponlyrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<iponlyrec_list.len(); index++)
    {
        if(iponlyrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpOnlyRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList>();
        c->parent = this;
        iponlyrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iponlyrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpOnlyRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::IpOnlyRecList()
    :
    vrfvnid{YType::uint32, "vrfVnid"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"},
    pubid{YType::str, "pubId"},
    flags{YType::str, "flags"},
    synthip{YType::str, "synthIp"},
    synthvrf{YType::uint32, "synthVrf"},
    synthflags{YType::str, "synthFlags"},
    currcitizen{YType::str, "currCitizen"},
    prevcitizen{YType::str, "prevCitizen"},
    pprevcitizen{YType::str, "pprevCitizen"}
{

    yang_name = "IpOnlyRec-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::~IpOnlyRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::has_data() const
{
    if (is_presence_container) return true;
    return vrfvnid.is_set
	|| addr.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| pubid.is_set
	|| flags.is_set
	|| synthip.is_set
	|| synthvrf.is_set
	|| synthflags.is_set
	|| currcitizen.is_set
	|| prevcitizen.is_set
	|| pprevcitizen.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfvnid.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(synthip.yfilter)
	|| ydk::is_set(synthvrf.yfilter)
	|| ydk::is_set(synthflags.yfilter)
	|| ydk::is_set(currcitizen.yfilter)
	|| ydk::is_set(prevcitizen.yfilter)
	|| ydk::is_set(pprevcitizen.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpOnlyRec-list";
    ADD_KEY_TOKEN(vrfvnid, "vrfVnid");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfvnid.is_set || is_set(vrfvnid.yfilter)) leaf_name_data.push_back(vrfvnid.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (synthip.is_set || is_set(synthip.yfilter)) leaf_name_data.push_back(synthip.get_name_leafdata());
    if (synthvrf.is_set || is_set(synthvrf.yfilter)) leaf_name_data.push_back(synthvrf.get_name_leafdata());
    if (synthflags.is_set || is_set(synthflags.yfilter)) leaf_name_data.push_back(synthflags.get_name_leafdata());
    if (currcitizen.is_set || is_set(currcitizen.yfilter)) leaf_name_data.push_back(currcitizen.get_name_leafdata());
    if (prevcitizen.is_set || is_set(prevcitizen.yfilter)) leaf_name_data.push_back(prevcitizen.get_name_leafdata());
    if (pprevcitizen.is_set || is_set(pprevcitizen.yfilter)) leaf_name_data.push_back(pprevcitizen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfVnid")
    {
        vrfvnid = value;
        vrfvnid.value_namespace = name_space;
        vrfvnid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthIp")
    {
        synthip = value;
        synthip.value_namespace = name_space;
        synthip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthVrf")
    {
        synthvrf = value;
        synthvrf.value_namespace = name_space;
        synthvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synthFlags")
    {
        synthflags = value;
        synthflags.value_namespace = name_space;
        synthflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currCitizen")
    {
        currcitizen = value;
        currcitizen.value_namespace = name_space;
        currcitizen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCitizen")
    {
        prevcitizen = value;
        prevcitizen.value_namespace = name_space;
        prevcitizen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pprevCitizen")
    {
        pprevcitizen = value;
        pprevcitizen.value_namespace = name_space;
        pprevcitizen.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfVnid")
    {
        vrfvnid.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "synthIp")
    {
        synthip.yfilter = yfilter;
    }
    if(value_path == "synthVrf")
    {
        synthvrf.yfilter = yfilter;
    }
    if(value_path == "synthFlags")
    {
        synthflags.yfilter = yfilter;
    }
    if(value_path == "currCitizen")
    {
        currcitizen.yfilter = yfilter;
    }
    if(value_path == "prevCitizen")
    {
        prevcitizen.yfilter = yfilter;
    }
    if(value_path == "pprevCitizen")
    {
        pprevcitizen.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfVnid" || name == "addr" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty" || name == "pubId" || name == "flags" || name == "synthIp" || name == "synthVrf" || name == "synthFlags" || name == "currCitizen" || name == "prevCitizen" || name == "pprevCitizen")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafItems()
    :
    leafrec_list(this, {"pubid"})
{

    yang_name = "leaf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::~LeafItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leafrec_list.len(); index++)
    {
        if(leafrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::has_operation() const
{
    for (std::size_t index=0; index<leafrec_list.len(); index++)
    {
        if(leafrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LeafRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList>();
        c->parent = this;
        leafrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : leafrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LeafRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::LeafRecList()
    :
    pubid{YType::str, "pubId"},
    name{YType::str, "name"}
{

    yang_name = "LeafRec-list"; yang_parent_name = "leaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::~LeafRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::has_data() const
{
    if (is_presence_container) return true;
    return pubid.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LeafRec-list";
    ADD_KEY_TOKEN(pubid, "pubId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pubId" || name == "name")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::Mgv4Items()
    :
    mcgrpv4rec_list(this, {"version", "srcip", "mcgrpip", "vnid"})
{

    yang_name = "mgv4-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::~Mgv4Items()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrpv4rec_list.len(); index++)
    {
        if(mcgrpv4rec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::has_operation() const
{
    for (std::size_t index=0; index<mcgrpv4rec_list.len(); index++)
    {
        if(mcgrpv4rec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpv4Rec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList>();
        c->parent = this;
        mcgrpv4rec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcgrpv4rec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpv4Rec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::McGrpv4RecList()
    :
    version{YType::uint8, "version"},
    srcip{YType::str, "srcIp"},
    mcgrpip{YType::str, "mcGrpIp"},
    vnid{YType::uint32, "vnid"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"},
    flags{YType::str, "flags"}
{

    yang_name = "McGrpv4Rec-list"; yang_parent_name = "mgv4-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::~McGrpv4RecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| srcip.is_set
	|| mcgrpip.is_set
	|| vnid.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| flags.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcgrpip.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpv4Rec-list";
    ADD_KEY_TOKEN(version, "version");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(mcgrpip, "mcGrpIp");
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcgrpip.is_set || is_set(mcgrpip.yfilter)) leaf_name_data.push_back(mcgrpip.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcGrpIp")
    {
        mcgrpip = value;
        mcgrpip.value_namespace = name_space;
        mcgrpip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcGrpIp")
    {
        mcgrpip.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "srcIp" || name == "mcGrpIp" || name == "vnid" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty" || name == "flags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::Mgv6Items()
    :
    mcgrpv6rec_list(this, {"version", "srcip", "mcgrpip", "vnid"})
{

    yang_name = "mgv6-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::~Mgv6Items()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrpv6rec_list.len(); index++)
    {
        if(mcgrpv6rec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::has_operation() const
{
    for (std::size_t index=0; index<mcgrpv6rec_list.len(); index++)
    {
        if(mcgrpv6rec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpv6Rec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList>();
        c->parent = this;
        mcgrpv6rec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcgrpv6rec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpv6Rec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::McGrpv6RecList()
    :
    version{YType::uint8, "version"},
    srcip{YType::str, "srcIp"},
    mcgrpip{YType::str, "mcGrpIp"},
    vnid{YType::uint32, "vnid"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"},
    flags{YType::str, "flags"}
{

    yang_name = "McGrpv6Rec-list"; yang_parent_name = "mgv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::~McGrpv6RecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| srcip.is_set
	|| mcgrpip.is_set
	|| vnid.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| flags.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(mcgrpip.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpv6Rec-list";
    ADD_KEY_TOKEN(version, "version");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(mcgrpip, "mcGrpIp");
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (mcgrpip.is_set || is_set(mcgrpip.yfilter)) leaf_name_data.push_back(mcgrpip.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcGrpIp")
    {
        mcgrpip = value;
        mcgrpip.value_namespace = name_space;
        mcgrpip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "mcGrpIp")
    {
        mcgrpip.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "srcIp" || name == "mcGrpIp" || name == "vnid" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty" || name == "flags")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrItems()
    :
    mrtrrec_list(this, {"vnid"})
{

    yang_name = "mrtr-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::~MrtrItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mrtrrec_list.len(); index++)
    {
        if(mrtrrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::has_operation() const
{
    for (std::size_t index=0; index<mrtrrec_list.len(); index++)
    {
        if(mrtrrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrtr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MrtrRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList>();
        c->parent = this;
        mrtrrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mrtrrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MrtrRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::MrtrRecList()
    :
    vnid{YType::uint32, "vnid"},
    flags{YType::str, "flags"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"}
        ,
    rsmrtr2leaf_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems>())
{
    rsmrtr2leaf_items->parent = this;

    yang_name = "MrtrRec-list"; yang_parent_name = "mrtr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::~MrtrRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::has_data() const
{
    if (is_presence_container) return true;
    return vnid.is_set
	|| flags.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| (rsmrtr2leaf_items !=  nullptr && rsmrtr2leaf_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| (rsmrtr2leaf_items !=  nullptr && rsmrtr2leaf_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MrtrRec-list";
    ADD_KEY_TOKEN(vnid, "vnid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmrtr2Leaf-items")
    {
        if(rsmrtr2leaf_items == nullptr)
        {
            rsmrtr2leaf_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems>();
        }
        return rsmrtr2leaf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmrtr2leaf_items != nullptr)
    {
        children["rsmrtr2Leaf-items"] = rsmrtr2leaf_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmrtr2Leaf-items" || name == "vnid" || name == "flags" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::Rsmrtr2LeafItems()
    :
    rsmrtr2leaf_list(this, {"tdn"})
{

    yang_name = "rsmrtr2Leaf-items"; yang_parent_name = "MrtrRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::~Rsmrtr2LeafItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmrtr2leaf_list.len(); index++)
    {
        if(rsmrtr2leaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::has_operation() const
{
    for (std::size_t index=0; index<rsmrtr2leaf_list.len(); index++)
    {
        if(rsmrtr2leaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmrtr2Leaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMrtr2Leaf-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList>();
        c->parent = this;
        rsmrtr2leaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmrtr2leaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMrtr2Leaf-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::RsMrtr2LeafList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    pubid{YType::str, "pubId"},
    lastpub{YType::str, "lastPub"}
{

    yang_name = "RsMrtr2Leaf-list"; yang_parent_name = "rsmrtr2Leaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::~RsMrtr2LeafList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| pubid.is_set
	|| lastpub.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(lastpub.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMrtr2Leaf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "pubId" || name == "lastPub")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::RItems()
    :
    vpcrec_list(this, {"swid", "portid"})
{

    yang_name = "r-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::~RItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcrec_list.len(); index++)
    {
        if(vpcrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::has_operation() const
{
    for (std::size_t index=0; index<vpcrec_list.len(); index++)
    {
        if(vpcrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "r-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList>();
        c->parent = this;
        vpcrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vpcrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcRecList()
    :
    swid{YType::str, "swId"},
    portid{YType::uint32, "portId"},
    pubid{YType::str, "pubId"},
    name{YType::str, "name"},
    recordts{YType::str, "recordTs"},
    lastpub{YType::str, "lastPub"},
    lastdampen{YType::str, "lastDampen"},
    damppenalty{YType::uint16, "dampPenalty"}
        ,
    vpcr_items(std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems>())
{
    vpcr_items->parent = this;

    yang_name = "VpcRec-list"; yang_parent_name = "r-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::~VpcRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::has_data() const
{
    if (is_presence_container) return true;
    return swid.is_set
	|| portid.is_set
	|| pubid.is_set
	|| name.is_set
	|| recordts.is_set
	|| lastpub.is_set
	|| lastdampen.is_set
	|| damppenalty.is_set
	|| (vpcr_items !=  nullptr && vpcr_items->has_data());
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(swid.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(pubid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(recordts.yfilter)
	|| ydk::is_set(lastpub.yfilter)
	|| ydk::is_set(lastdampen.yfilter)
	|| ydk::is_set(damppenalty.yfilter)
	|| (vpcr_items !=  nullptr && vpcr_items->has_operation());
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcRec-list";
    ADD_KEY_TOKEN(swid, "swId");
    ADD_KEY_TOKEN(portid, "portId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (swid.is_set || is_set(swid.yfilter)) leaf_name_data.push_back(swid.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (pubid.is_set || is_set(pubid.yfilter)) leaf_name_data.push_back(pubid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (recordts.is_set || is_set(recordts.yfilter)) leaf_name_data.push_back(recordts.get_name_leafdata());
    if (lastpub.is_set || is_set(lastpub.yfilter)) leaf_name_data.push_back(lastpub.get_name_leafdata());
    if (lastdampen.is_set || is_set(lastdampen.yfilter)) leaf_name_data.push_back(lastdampen.get_name_leafdata());
    if (damppenalty.is_set || is_set(damppenalty.yfilter)) leaf_name_data.push_back(damppenalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpcr-items")
    {
        if(vpcr_items == nullptr)
        {
            vpcr_items = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems>();
        }
        return vpcr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpcr_items != nullptr)
    {
        children["vpcr-items"] = vpcr_items;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "swId")
    {
        swid = value;
        swid.value_namespace = name_space;
        swid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pubId")
    {
        pubid = value;
        pubid.value_namespace = name_space;
        pubid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recordTs")
    {
        recordts = value;
        recordts.value_namespace = name_space;
        recordts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastPub")
    {
        lastpub = value;
        lastpub.value_namespace = name_space;
        lastpub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDampen")
    {
        lastdampen = value;
        lastdampen.value_namespace = name_space;
        lastdampen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty = value;
        damppenalty.value_namespace = name_space;
        damppenalty.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "swId")
    {
        swid.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "pubId")
    {
        pubid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "recordTs")
    {
        recordts.yfilter = yfilter;
    }
    if(value_path == "lastPub")
    {
        lastpub.yfilter = yfilter;
    }
    if(value_path == "lastDampen")
    {
        lastdampen.yfilter = yfilter;
    }
    if(value_path == "dampPenalty")
    {
        damppenalty.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpcr-items" || name == "swId" || name == "portId" || name == "pubId" || name == "name" || name == "recordTs" || name == "lastPub" || name == "lastDampen" || name == "dampPenalty")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcrItems()
    :
    vpcnoderec_list(this, {"swid", "portid"})
{

    yang_name = "vpcr-items"; yang_parent_name = "VpcRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::~VpcrItems()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcnoderec_list.len(); index++)
    {
        if(vpcnoderec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::has_operation() const
{
    for (std::size_t index=0; index<vpcnoderec_list.len(); index++)
    {
        if(vpcnoderec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcNodeRec-list")
    {
        auto c = std::make_shared<System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList>();
        c->parent = this;
        vpcnoderec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vpcnoderec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcNodeRec-list")
        return true;
    return false;
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::VpcNodeRecList()
    :
    swid{YType::str, "swId"},
    portid{YType::uint32, "portId"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "VpcNodeRec-list"; yang_parent_name = "vpcr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::~VpcNodeRecList()
{
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::has_data() const
{
    if (is_presence_container) return true;
    return swid.is_set
	|| portid.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(swid.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcNodeRec-list";
    ADD_KEY_TOKEN(swid, "swId");
    ADD_KEY_TOKEN(portid, "portId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (swid.is_set || is_set(swid.yfilter)) leaf_name_data.push_back(swid.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "swId")
    {
        swid = value;
        swid.value_namespace = name_space;
        swid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "swId")
    {
        swid.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swId" || name == "portId" || name == "flags" || name == "name")
        return true;
    return false;
}

System::ClockItems::ClockItems()
    :
    protocol{YType::enumeration, "protocol"},
    vdcid{YType::uint16, "vdcId"},
    format{YType::enumeration, "format"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    authst{YType::enumeration, "authSt"}
        ,
    set_items(std::make_shared<System::ClockItems::SetItems>())
    , timezone_items(std::make_shared<System::ClockItems::TimezoneItems>())
    , summertime_items(std::make_shared<System::ClockItems::SummertimeItems>())
{
    set_items->parent = this;
    timezone_items->parent = this;
    summertime_items->parent = this;

    yang_name = "clock-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::~ClockItems()
{
}

bool System::ClockItems::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| vdcid.is_set
	|| format.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| authst.is_set
	|| (set_items !=  nullptr && set_items->has_data())
	|| (timezone_items !=  nullptr && timezone_items->has_data())
	|| (summertime_items !=  nullptr && summertime_items->has_data());
}

bool System::ClockItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(authst.yfilter)
	|| (set_items !=  nullptr && set_items->has_operation())
	|| (timezone_items !=  nullptr && timezone_items->has_operation())
	|| (summertime_items !=  nullptr && summertime_items->has_operation());
}

std::string System::ClockItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (authst.is_set || is_set(authst.yfilter)) leaf_name_data.push_back(authst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ClockItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set-items")
    {
        if(set_items == nullptr)
        {
            set_items = std::make_shared<System::ClockItems::SetItems>();
        }
        return set_items;
    }

    if(child_yang_name == "timezone-items")
    {
        if(timezone_items == nullptr)
        {
            timezone_items = std::make_shared<System::ClockItems::TimezoneItems>();
        }
        return timezone_items;
    }

    if(child_yang_name == "summertime-items")
    {
        if(summertime_items == nullptr)
        {
            summertime_items = std::make_shared<System::ClockItems::SummertimeItems>();
        }
        return summertime_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ClockItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(set_items != nullptr)
    {
        children["set-items"] = set_items;
    }

    if(timezone_items != nullptr)
    {
        children["timezone-items"] = timezone_items;
    }

    if(summertime_items != nullptr)
    {
        children["summertime-items"] = summertime_items;
    }

    return children;
}

void System::ClockItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSt")
    {
        authst = value;
        authst.value_namespace = name_space;
        authst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "authSt")
    {
        authst.yfilter = yfilter;
    }
}

bool System::ClockItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-items" || name == "timezone-items" || name == "summertime-items" || name == "protocol" || name == "vdcId" || name == "format" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt" || name == "authSt")
        return true;
    return false;
}

System::ClockItems::SetItems::SetItems()
    :
    time{YType::str, "time"},
    date{YType::uint16, "date"},
    month{YType::enumeration, "month"},
    year{YType::uint16, "year"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "set-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::SetItems::~SetItems()
{
}

bool System::ClockItems::SetItems::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| date.is_set
	|| month.is_set
	|| year.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::ClockItems::SetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ClockItems::SetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::SetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::SetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ClockItems::SetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ClockItems::SetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ClockItems::SetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
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

void System::ClockItems::SetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
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

bool System::ClockItems::SetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "date" || name == "month" || name == "year" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ClockItems::TimezoneItems::TimezoneItems()
    :
    hours{YType::int16, "hours"},
    minutes{YType::uint16, "minutes"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    namet{YType::str, "nameT"}
{

    yang_name = "timezone-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::TimezoneItems::~TimezoneItems()
{
}

bool System::ClockItems::TimezoneItems::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| minutes.is_set
	|| name.is_set
	|| descr.is_set
	|| namet.is_set;
}

bool System::ClockItems::TimezoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(namet.yfilter);
}

std::string System::ClockItems::TimezoneItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::TimezoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timezone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::TimezoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (namet.is_set || is_set(namet.yfilter)) leaf_name_data.push_back(namet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ClockItems::TimezoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ClockItems::TimezoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ClockItems::TimezoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nameT")
    {
        namet = value;
        namet.value_namespace = name_space;
        namet.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::TimezoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "nameT")
    {
        namet.yfilter = yfilter;
    }
}

bool System::ClockItems::TimezoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes" || name == "name" || name == "descr" || name == "nameT")
        return true;
    return false;
}

System::ClockItems::SummertimeItems::SummertimeItems()
    :
    startweek{YType::uint16, "startWeek"},
    startday{YType::str, "startDay"},
    startmon{YType::str, "startMon"},
    starttime{YType::str, "startTime"},
    endweek{YType::uint16, "endWeek"},
    endday{YType::str, "endDay"},
    endmon{YType::str, "endMon"},
    endtime{YType::str, "endTime"},
    offsetmin{YType::uint16, "offsetMin"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    namet{YType::str, "nameT"}
{

    yang_name = "summertime-items"; yang_parent_name = "clock-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ClockItems::SummertimeItems::~SummertimeItems()
{
}

bool System::ClockItems::SummertimeItems::has_data() const
{
    if (is_presence_container) return true;
    return startweek.is_set
	|| startday.is_set
	|| startmon.is_set
	|| starttime.is_set
	|| endweek.is_set
	|| endday.is_set
	|| endmon.is_set
	|| endtime.is_set
	|| offsetmin.is_set
	|| name.is_set
	|| descr.is_set
	|| namet.is_set;
}

bool System::ClockItems::SummertimeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(startweek.yfilter)
	|| ydk::is_set(startday.yfilter)
	|| ydk::is_set(startmon.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(endweek.yfilter)
	|| ydk::is_set(endday.yfilter)
	|| ydk::is_set(endmon.yfilter)
	|| ydk::is_set(endtime.yfilter)
	|| ydk::is_set(offsetmin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(namet.yfilter);
}

std::string System::ClockItems::SummertimeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/clock-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ClockItems::SummertimeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summertime-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ClockItems::SummertimeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startweek.is_set || is_set(startweek.yfilter)) leaf_name_data.push_back(startweek.get_name_leafdata());
    if (startday.is_set || is_set(startday.yfilter)) leaf_name_data.push_back(startday.get_name_leafdata());
    if (startmon.is_set || is_set(startmon.yfilter)) leaf_name_data.push_back(startmon.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (endweek.is_set || is_set(endweek.yfilter)) leaf_name_data.push_back(endweek.get_name_leafdata());
    if (endday.is_set || is_set(endday.yfilter)) leaf_name_data.push_back(endday.get_name_leafdata());
    if (endmon.is_set || is_set(endmon.yfilter)) leaf_name_data.push_back(endmon.get_name_leafdata());
    if (endtime.is_set || is_set(endtime.yfilter)) leaf_name_data.push_back(endtime.get_name_leafdata());
    if (offsetmin.is_set || is_set(offsetmin.yfilter)) leaf_name_data.push_back(offsetmin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (namet.is_set || is_set(namet.yfilter)) leaf_name_data.push_back(namet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ClockItems::SummertimeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ClockItems::SummertimeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ClockItems::SummertimeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "startWeek")
    {
        startweek = value;
        startweek.value_namespace = name_space;
        startweek.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startDay")
    {
        startday = value;
        startday.value_namespace = name_space;
        startday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startMon")
    {
        startmon = value;
        startmon.value_namespace = name_space;
        startmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endWeek")
    {
        endweek = value;
        endweek.value_namespace = name_space;
        endweek.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endDay")
    {
        endday = value;
        endday.value_namespace = name_space;
        endday.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endMon")
    {
        endmon = value;
        endmon.value_namespace = name_space;
        endmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTime")
    {
        endtime = value;
        endtime.value_namespace = name_space;
        endtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offsetMin")
    {
        offsetmin = value;
        offsetmin.value_namespace = name_space;
        offsetmin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nameT")
    {
        namet = value;
        namet.value_namespace = name_space;
        namet.value_namespace_prefix = name_space_prefix;
    }
}

void System::ClockItems::SummertimeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "startWeek")
    {
        startweek.yfilter = yfilter;
    }
    if(value_path == "startDay")
    {
        startday.yfilter = yfilter;
    }
    if(value_path == "startMon")
    {
        startmon.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "endWeek")
    {
        endweek.yfilter = yfilter;
    }
    if(value_path == "endDay")
    {
        endday.yfilter = yfilter;
    }
    if(value_path == "endMon")
    {
        endmon.yfilter = yfilter;
    }
    if(value_path == "endTime")
    {
        endtime.yfilter = yfilter;
    }
    if(value_path == "offsetMin")
    {
        offsetmin.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "nameT")
    {
        namet.yfilter = yfilter;
    }
}

bool System::ClockItems::SummertimeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startWeek" || name == "startDay" || name == "startMon" || name == "startTime" || name == "endWeek" || name == "endDay" || name == "endMon" || name == "endTime" || name == "offsetMin" || name == "name" || name == "descr" || name == "nameT")
        return true;
    return false;
}

System::TimeItems::TimeItems()
    :
    flags{YType::str, "flags"},
    leap{YType::uint8, "leap"},
    stratum{YType::uint8, "stratum"},
    precision{YType::int32, "precision"},
    rootdelay{YType::int32, "rootDelay"},
    rootdispersion{YType::uint32, "rootDispersion"},
    refid{YType::str, "refId"},
    reftime{YType::str, "refTime"},
    reftimeraw{YType::uint64, "refTimeRaw"},
    poll{YType::int32, "poll"},
    peer{YType::uint32, "peer"},
    clock_{YType::str, "clock"},
    clockraw{YType::uint64, "clockRaw"},
    srvstatus{YType::enumeration, "srvStatus"},
    logging{YType::enumeration, "logging"},
    logginglevel{YType::enumeration, "loggingLevel"},
    master{YType::enumeration, "master"},
    masterstratum{YType::uint8, "masterStratum"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    authst{YType::enumeration, "authSt"}
        ,
    auth_items(std::make_shared<System::TimeItems::AuthItems>())
    , prov_items(std::make_shared<System::TimeItems::ProvItems>())
    , accessgroup_items(std::make_shared<System::TimeItems::AccessgroupItems>())
    , srcip_items(std::make_shared<System::TimeItems::SrcIpItems>())
    , srcif_items(std::make_shared<System::TimeItems::SrcIfItems>())
{
    auth_items->parent = this;
    prov_items->parent = this;
    accessgroup_items->parent = this;
    srcip_items->parent = this;
    srcif_items->parent = this;

    yang_name = "time-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::~TimeItems()
{
}

bool System::TimeItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| leap.is_set
	|| stratum.is_set
	|| precision.is_set
	|| rootdelay.is_set
	|| rootdispersion.is_set
	|| refid.is_set
	|| reftime.is_set
	|| reftimeraw.is_set
	|| poll.is_set
	|| peer.is_set
	|| clock_.is_set
	|| clockraw.is_set
	|| srvstatus.is_set
	|| logging.is_set
	|| logginglevel.is_set
	|| master.is_set
	|| masterstratum.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| adminst.is_set
	|| authst.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (prov_items !=  nullptr && prov_items->has_data())
	|| (accessgroup_items !=  nullptr && accessgroup_items->has_data())
	|| (srcip_items !=  nullptr && srcip_items->has_data())
	|| (srcif_items !=  nullptr && srcif_items->has_data());
}

bool System::TimeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(rootdelay.yfilter)
	|| ydk::is_set(rootdispersion.yfilter)
	|| ydk::is_set(refid.yfilter)
	|| ydk::is_set(reftime.yfilter)
	|| ydk::is_set(reftimeraw.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(clockraw.yfilter)
	|| ydk::is_set(srvstatus.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(master.yfilter)
	|| ydk::is_set(masterstratum.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(authst.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (prov_items !=  nullptr && prov_items->has_operation())
	|| (accessgroup_items !=  nullptr && accessgroup_items->has_operation())
	|| (srcip_items !=  nullptr && srcip_items->has_operation())
	|| (srcif_items !=  nullptr && srcif_items->has_operation());
}

std::string System::TimeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (rootdelay.is_set || is_set(rootdelay.yfilter)) leaf_name_data.push_back(rootdelay.get_name_leafdata());
    if (rootdispersion.is_set || is_set(rootdispersion.yfilter)) leaf_name_data.push_back(rootdispersion.get_name_leafdata());
    if (refid.is_set || is_set(refid.yfilter)) leaf_name_data.push_back(refid.get_name_leafdata());
    if (reftime.is_set || is_set(reftime.yfilter)) leaf_name_data.push_back(reftime.get_name_leafdata());
    if (reftimeraw.is_set || is_set(reftimeraw.yfilter)) leaf_name_data.push_back(reftimeraw.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (clockraw.is_set || is_set(clockraw.yfilter)) leaf_name_data.push_back(clockraw.get_name_leafdata());
    if (srvstatus.is_set || is_set(srvstatus.yfilter)) leaf_name_data.push_back(srvstatus.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());
    if (masterstratum.is_set || is_set(masterstratum.yfilter)) leaf_name_data.push_back(masterstratum.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (authst.is_set || is_set(authst.yfilter)) leaf_name_data.push_back(authst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::TimeItems::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "prov-items")
    {
        if(prov_items == nullptr)
        {
            prov_items = std::make_shared<System::TimeItems::ProvItems>();
        }
        return prov_items;
    }

    if(child_yang_name == "accessgroup-items")
    {
        if(accessgroup_items == nullptr)
        {
            accessgroup_items = std::make_shared<System::TimeItems::AccessgroupItems>();
        }
        return accessgroup_items;
    }

    if(child_yang_name == "srcIp-items")
    {
        if(srcip_items == nullptr)
        {
            srcip_items = std::make_shared<System::TimeItems::SrcIpItems>();
        }
        return srcip_items;
    }

    if(child_yang_name == "srcIf-items")
    {
        if(srcif_items == nullptr)
        {
            srcif_items = std::make_shared<System::TimeItems::SrcIfItems>();
        }
        return srcif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_items != nullptr)
    {
        children["auth-items"] = auth_items;
    }

    if(prov_items != nullptr)
    {
        children["prov-items"] = prov_items;
    }

    if(accessgroup_items != nullptr)
    {
        children["accessgroup-items"] = accessgroup_items;
    }

    if(srcip_items != nullptr)
    {
        children["srcIp-items"] = srcip_items;
    }

    if(srcif_items != nullptr)
    {
        children["srcIf-items"] = srcif_items;
    }

    return children;
}

void System::TimeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDelay")
    {
        rootdelay = value;
        rootdelay.value_namespace = name_space;
        rootdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion = value;
        rootdispersion.value_namespace = name_space;
        rootdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refId")
    {
        refid = value;
        refid.value_namespace = name_space;
        refid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTime")
    {
        reftime = value;
        reftime.value_namespace = name_space;
        reftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw = value;
        reftimeraw.value_namespace = name_space;
        reftimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clockRaw")
    {
        clockraw = value;
        clockraw.value_namespace = name_space;
        clockraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srvStatus")
    {
        srvstatus = value;
        srvstatus.value_namespace = name_space;
        srvstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masterStratum")
    {
        masterstratum = value;
        masterstratum.value_namespace = name_space;
        masterstratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSt")
    {
        authst = value;
        authst.value_namespace = name_space;
        authst.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "rootDelay")
    {
        rootdelay.yfilter = yfilter;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion.yfilter = yfilter;
    }
    if(value_path == "refId")
    {
        refid.yfilter = yfilter;
    }
    if(value_path == "refTime")
    {
        reftime.yfilter = yfilter;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "clockRaw")
    {
        clockraw.yfilter = yfilter;
    }
    if(value_path == "srvStatus")
    {
        srvstatus.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
    if(value_path == "masterStratum")
    {
        masterstratum.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "authSt")
    {
        authst.yfilter = yfilter;
    }
}

bool System::TimeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "prov-items" || name == "accessgroup-items" || name == "srcIp-items" || name == "srcIf-items" || name == "flags" || name == "leap" || name == "stratum" || name == "precision" || name == "rootDelay" || name == "rootDispersion" || name == "refId" || name == "refTime" || name == "refTimeRaw" || name == "poll" || name == "peer" || name == "clock" || name == "clockRaw" || name == "srvStatus" || name == "logging" || name == "loggingLevel" || name == "master" || name == "masterStratum" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "adminSt" || name == "authSt")
        return true;
    return false;
}

System::TimeItems::AuthItems::AuthItems()
    :
    ntpauth_list(this, {"id"})
{

    yang_name = "auth-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AuthItems::~AuthItems()
{
}

bool System::TimeItems::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpauth_list.len(); index++)
    {
        if(ntpauth_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::AuthItems::has_operation() const
{
    for (std::size_t index=0; index<ntpauth_list.len(); index++)
    {
        if(ntpauth_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::AuthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NtpAuth-list")
    {
        auto c = std::make_shared<System::TimeItems::AuthItems::NtpAuthList>();
        c->parent = this;
        ntpauth_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ntpauth_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TimeItems::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NtpAuth-list")
        return true;
    return false;
}

System::TimeItems::AuthItems::NtpAuthList::NtpAuthList()
    :
    id{YType::uint16, "id"},
    encryptedkey{YType::str, "encryptedKey"},
    isencrypt{YType::boolean, "isEncrypt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    trusted{YType::boolean, "trusted"}
{

    yang_name = "NtpAuth-list"; yang_parent_name = "auth-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AuthItems::NtpAuthList::~NtpAuthList()
{
}

bool System::TimeItems::AuthItems::NtpAuthList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| encryptedkey.is_set
	|| isencrypt.is_set
	|| name.is_set
	|| descr.is_set
	|| key.is_set
	|| trusted.is_set;
}

bool System::TimeItems::AuthItems::NtpAuthList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encryptedkey.yfilter)
	|| ydk::is_set(isencrypt.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string System::TimeItems::AuthItems::NtpAuthList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/auth-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AuthItems::NtpAuthList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NtpAuth-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AuthItems::NtpAuthList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encryptedkey.is_set || is_set(encryptedkey.yfilter)) leaf_name_data.push_back(encryptedkey.get_name_leafdata());
    if (isencrypt.is_set || is_set(isencrypt.yfilter)) leaf_name_data.push_back(isencrypt.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::AuthItems::NtpAuthList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::AuthItems::NtpAuthList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::AuthItems::NtpAuthList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryptedKey")
    {
        encryptedkey = value;
        encryptedkey.value_namespace = name_space;
        encryptedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isEncrypt")
    {
        isencrypt = value;
        isencrypt.value_namespace = name_space;
        isencrypt.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::AuthItems::NtpAuthList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encryptedKey")
    {
        encryptedkey.yfilter = yfilter;
    }
    if(value_path == "isEncrypt")
    {
        isencrypt.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool System::TimeItems::AuthItems::NtpAuthList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "encryptedKey" || name == "isEncrypt" || name == "name" || name == "descr" || name == "key" || name == "trusted")
        return true;
    return false;
}

System::TimeItems::ProvItems::ProvItems()
    :
    ntpprovider_list(this, {"name"})
{

    yang_name = "prov-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::ProvItems::~ProvItems()
{
}

bool System::TimeItems::ProvItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpprovider_list.len(); index++)
    {
        if(ntpprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::ProvItems::has_operation() const
{
    for (std::size_t index=0; index<ntpprovider_list.len(); index++)
    {
        if(ntpprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::ProvItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::ProvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prov-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NtpProvider-list")
    {
        auto c = std::make_shared<System::TimeItems::ProvItems::NtpProviderList>();
        c->parent = this;
        ntpprovider_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ntpprovider_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TimeItems::ProvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::ProvItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::ProvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NtpProvider-list")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::NtpProviderList()
    :
    name{YType::str, "name"},
    provt{YType::enumeration, "provT"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    preferred{YType::boolean, "preferred"},
    minpoll{YType::uint8, "minPoll"},
    maxpoll{YType::uint8, "maxPoll"},
    keyid{YType::uint16, "keyId"}
        ,
    status_items(std::make_shared<System::TimeItems::ProvItems::NtpProviderList::StatusItems>())
    , rsntpprovidertontpauth_items(std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems>())
    , dbgstatistics_items(std::make_shared<System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems>())
{
    status_items->parent = this;
    rsntpprovidertontpauth_items->parent = this;
    dbgstatistics_items->parent = this;

    yang_name = "NtpProvider-list"; yang_parent_name = "prov-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::ProvItems::NtpProviderList::~NtpProviderList()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| provt.is_set
	|| vrf.is_set
	|| descr.is_set
	|| preferred.is_set
	|| minpoll.is_set
	|| maxpoll.is_set
	|| keyid.is_set
	|| (status_items !=  nullptr && status_items->has_data())
	|| (rsntpprovidertontpauth_items !=  nullptr && rsntpprovidertontpauth_items->has_data())
	|| (dbgstatistics_items !=  nullptr && dbgstatistics_items->has_data());
}

bool System::TimeItems::ProvItems::NtpProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(provt.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(preferred.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| (status_items !=  nullptr && status_items->has_operation())
	|| (rsntpprovidertontpauth_items !=  nullptr && rsntpprovidertontpauth_items->has_operation())
	|| (dbgstatistics_items !=  nullptr && dbgstatistics_items->has_operation());
}

std::string System::TimeItems::ProvItems::NtpProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/prov-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::ProvItems::NtpProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NtpProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (provt.is_set || is_set(provt.yfilter)) leaf_name_data.push_back(provt.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (preferred.is_set || is_set(preferred.yfilter)) leaf_name_data.push_back(preferred.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::NtpProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-items")
    {
        if(status_items == nullptr)
        {
            status_items = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::StatusItems>();
        }
        return status_items;
    }

    if(child_yang_name == "rsntpProviderToNtpAuth-items")
    {
        if(rsntpprovidertontpauth_items == nullptr)
        {
            rsntpprovidertontpauth_items = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems>();
        }
        return rsntpprovidertontpauth_items;
    }

    if(child_yang_name == "dbgStatistics-items")
    {
        if(dbgstatistics_items == nullptr)
        {
            dbgstatistics_items = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems>();
        }
        return dbgstatistics_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::NtpProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(status_items != nullptr)
    {
        children["status-items"] = status_items;
    }

    if(rsntpprovidertontpauth_items != nullptr)
    {
        children["rsntpProviderToNtpAuth-items"] = rsntpprovidertontpauth_items;
    }

    if(dbgstatistics_items != nullptr)
    {
        children["dbgStatistics-items"] = dbgstatistics_items;
    }

    return children;
}

void System::TimeItems::ProvItems::NtpProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provT")
    {
        provt = value;
        provt.value_namespace = name_space;
        provt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred")
    {
        preferred = value;
        preferred.value_namespace = name_space;
        preferred.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minPoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "provT")
    {
        provt.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "preferred")
    {
        preferred.yfilter = yfilter;
    }
    if(value_path == "minPoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "maxPoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-items" || name == "rsntpProviderToNtpAuth-items" || name == "dbgStatistics-items" || name == "name" || name == "provT" || name == "vrf" || name == "descr" || name == "preferred" || name == "minPoll" || name == "maxPoll" || name == "keyId")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::StatusItems::StatusItems()
    :
    flags{YType::str, "flags"},
    associd{YType::uint32, "assocId"},
    peeraddress{YType::str, "peerAddress"},
    peerport{YType::uint32, "peerPort"},
    hostaddress{YType::str, "hostAddress"},
    hostport{YType::uint32, "hostPort"},
    leap{YType::uint8, "leap"},
    mode{YType::enumeration, "mode"},
    stratum{YType::uint8, "stratum"},
    peerpoll{YType::int32, "peerPoll"},
    hostpoll{YType::int32, "hostPoll"},
    hostpollseconds{YType::uint32, "hostPollSeconds"},
    precision{YType::int32, "precision"},
    rootdelay{YType::int32, "rootDelay"},
    rootdispersion{YType::uint32, "rootDispersion"},
    refid{YType::str, "refId"},
    reftime{YType::str, "refTime"},
    reftimeraw{YType::uint64, "refTimeRaw"},
    orgtime{YType::str, "orgTime"},
    orgtimeraw{YType::uint64, "orgTimeRaw"},
    receivetime{YType::str, "receiveTime"},
    receivetimeraw{YType::uint64, "receiveTimeRaw"},
    transmittime{YType::str, "transmitTime"},
    transmittimeraw{YType::uint64, "transmitTimeRaw"},
    reach{YType::uint8, "reach"},
    timer{YType::uint32, "timer"},
    offset{YType::int32, "offset"},
    delay{YType::str, "delay"},
    delayraw{YType::int32, "delayRaw"},
    dispersion{YType::uint32, "dispersion"},
    filtervalidentries{YType::uint32, "filterValidEntries"},
    updatetime{YType::uint32, "updateTime"},
    updatetimeraw{YType::uint64, "updateTimeRaw"},
    peertype{YType::enumeration, "peerType"},
    peername{YType::str, "peerName"}
{

    yang_name = "status-items"; yang_parent_name = "NtpProvider-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::StatusItems::~StatusItems()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| associd.is_set
	|| peeraddress.is_set
	|| peerport.is_set
	|| hostaddress.is_set
	|| hostport.is_set
	|| leap.is_set
	|| mode.is_set
	|| stratum.is_set
	|| peerpoll.is_set
	|| hostpoll.is_set
	|| hostpollseconds.is_set
	|| precision.is_set
	|| rootdelay.is_set
	|| rootdispersion.is_set
	|| refid.is_set
	|| reftime.is_set
	|| reftimeraw.is_set
	|| orgtime.is_set
	|| orgtimeraw.is_set
	|| receivetime.is_set
	|| receivetimeraw.is_set
	|| transmittime.is_set
	|| transmittimeraw.is_set
	|| reach.is_set
	|| timer.is_set
	|| offset.is_set
	|| delay.is_set
	|| delayraw.is_set
	|| dispersion.is_set
	|| filtervalidentries.is_set
	|| updatetime.is_set
	|| updatetimeraw.is_set
	|| peertype.is_set
	|| peername.is_set;
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(associd.yfilter)
	|| ydk::is_set(peeraddress.yfilter)
	|| ydk::is_set(peerport.yfilter)
	|| ydk::is_set(hostaddress.yfilter)
	|| ydk::is_set(hostport.yfilter)
	|| ydk::is_set(leap.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(peerpoll.yfilter)
	|| ydk::is_set(hostpoll.yfilter)
	|| ydk::is_set(hostpollseconds.yfilter)
	|| ydk::is_set(precision.yfilter)
	|| ydk::is_set(rootdelay.yfilter)
	|| ydk::is_set(rootdispersion.yfilter)
	|| ydk::is_set(refid.yfilter)
	|| ydk::is_set(reftime.yfilter)
	|| ydk::is_set(reftimeraw.yfilter)
	|| ydk::is_set(orgtime.yfilter)
	|| ydk::is_set(orgtimeraw.yfilter)
	|| ydk::is_set(receivetime.yfilter)
	|| ydk::is_set(receivetimeraw.yfilter)
	|| ydk::is_set(transmittime.yfilter)
	|| ydk::is_set(transmittimeraw.yfilter)
	|| ydk::is_set(reach.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delayraw.yfilter)
	|| ydk::is_set(dispersion.yfilter)
	|| ydk::is_set(filtervalidentries.yfilter)
	|| ydk::is_set(updatetime.yfilter)
	|| ydk::is_set(updatetimeraw.yfilter)
	|| ydk::is_set(peertype.yfilter)
	|| ydk::is_set(peername.yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (associd.is_set || is_set(associd.yfilter)) leaf_name_data.push_back(associd.get_name_leafdata());
    if (peeraddress.is_set || is_set(peeraddress.yfilter)) leaf_name_data.push_back(peeraddress.get_name_leafdata());
    if (peerport.is_set || is_set(peerport.yfilter)) leaf_name_data.push_back(peerport.get_name_leafdata());
    if (hostaddress.is_set || is_set(hostaddress.yfilter)) leaf_name_data.push_back(hostaddress.get_name_leafdata());
    if (hostport.is_set || is_set(hostport.yfilter)) leaf_name_data.push_back(hostport.get_name_leafdata());
    if (leap.is_set || is_set(leap.yfilter)) leaf_name_data.push_back(leap.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (peerpoll.is_set || is_set(peerpoll.yfilter)) leaf_name_data.push_back(peerpoll.get_name_leafdata());
    if (hostpoll.is_set || is_set(hostpoll.yfilter)) leaf_name_data.push_back(hostpoll.get_name_leafdata());
    if (hostpollseconds.is_set || is_set(hostpollseconds.yfilter)) leaf_name_data.push_back(hostpollseconds.get_name_leafdata());
    if (precision.is_set || is_set(precision.yfilter)) leaf_name_data.push_back(precision.get_name_leafdata());
    if (rootdelay.is_set || is_set(rootdelay.yfilter)) leaf_name_data.push_back(rootdelay.get_name_leafdata());
    if (rootdispersion.is_set || is_set(rootdispersion.yfilter)) leaf_name_data.push_back(rootdispersion.get_name_leafdata());
    if (refid.is_set || is_set(refid.yfilter)) leaf_name_data.push_back(refid.get_name_leafdata());
    if (reftime.is_set || is_set(reftime.yfilter)) leaf_name_data.push_back(reftime.get_name_leafdata());
    if (reftimeraw.is_set || is_set(reftimeraw.yfilter)) leaf_name_data.push_back(reftimeraw.get_name_leafdata());
    if (orgtime.is_set || is_set(orgtime.yfilter)) leaf_name_data.push_back(orgtime.get_name_leafdata());
    if (orgtimeraw.is_set || is_set(orgtimeraw.yfilter)) leaf_name_data.push_back(orgtimeraw.get_name_leafdata());
    if (receivetime.is_set || is_set(receivetime.yfilter)) leaf_name_data.push_back(receivetime.get_name_leafdata());
    if (receivetimeraw.is_set || is_set(receivetimeraw.yfilter)) leaf_name_data.push_back(receivetimeraw.get_name_leafdata());
    if (transmittime.is_set || is_set(transmittime.yfilter)) leaf_name_data.push_back(transmittime.get_name_leafdata());
    if (transmittimeraw.is_set || is_set(transmittimeraw.yfilter)) leaf_name_data.push_back(transmittimeraw.get_name_leafdata());
    if (reach.is_set || is_set(reach.yfilter)) leaf_name_data.push_back(reach.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delayraw.is_set || is_set(delayraw.yfilter)) leaf_name_data.push_back(delayraw.get_name_leafdata());
    if (dispersion.is_set || is_set(dispersion.yfilter)) leaf_name_data.push_back(dispersion.get_name_leafdata());
    if (filtervalidentries.is_set || is_set(filtervalidentries.yfilter)) leaf_name_data.push_back(filtervalidentries.get_name_leafdata());
    if (updatetime.is_set || is_set(updatetime.yfilter)) leaf_name_data.push_back(updatetime.get_name_leafdata());
    if (updatetimeraw.is_set || is_set(updatetimeraw.yfilter)) leaf_name_data.push_back(updatetimeraw.get_name_leafdata());
    if (peertype.is_set || is_set(peertype.yfilter)) leaf_name_data.push_back(peertype.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::NtpProviderList::StatusItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::ProvItems::NtpProviderList::StatusItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assocId")
    {
        associd = value;
        associd.value_namespace = name_space;
        associd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerAddress")
    {
        peeraddress = value;
        peeraddress.value_namespace = name_space;
        peeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerPort")
    {
        peerport = value;
        peerport.value_namespace = name_space;
        peerport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostAddress")
    {
        hostaddress = value;
        hostaddress.value_namespace = name_space;
        hostaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostPort")
    {
        hostport = value;
        hostport.value_namespace = name_space;
        hostport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leap")
    {
        leap = value;
        leap.value_namespace = name_space;
        leap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerPoll")
    {
        peerpoll = value;
        peerpoll.value_namespace = name_space;
        peerpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostPoll")
    {
        hostpoll = value;
        hostpoll.value_namespace = name_space;
        hostpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostPollSeconds")
    {
        hostpollseconds = value;
        hostpollseconds.value_namespace = name_space;
        hostpollseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precision")
    {
        precision = value;
        precision.value_namespace = name_space;
        precision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDelay")
    {
        rootdelay = value;
        rootdelay.value_namespace = name_space;
        rootdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion = value;
        rootdispersion.value_namespace = name_space;
        rootdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refId")
    {
        refid = value;
        refid.value_namespace = name_space;
        refid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTime")
    {
        reftime = value;
        reftime.value_namespace = name_space;
        reftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw = value;
        reftimeraw.value_namespace = name_space;
        reftimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgTime")
    {
        orgtime = value;
        orgtime.value_namespace = name_space;
        orgtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgTimeRaw")
    {
        orgtimeraw = value;
        orgtimeraw.value_namespace = name_space;
        orgtimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiveTime")
    {
        receivetime = value;
        receivetime.value_namespace = name_space;
        receivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiveTimeRaw")
    {
        receivetimeraw = value;
        receivetimeraw.value_namespace = name_space;
        receivetimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitTime")
    {
        transmittime = value;
        transmittime.value_namespace = name_space;
        transmittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitTimeRaw")
    {
        transmittimeraw = value;
        transmittimeraw.value_namespace = name_space;
        transmittimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reach")
    {
        reach = value;
        reach.value_namespace = name_space;
        reach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayRaw")
    {
        delayraw = value;
        delayraw.value_namespace = name_space;
        delayraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispersion")
    {
        dispersion = value;
        dispersion.value_namespace = name_space;
        dispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filterValidEntries")
    {
        filtervalidentries = value;
        filtervalidentries.value_namespace = name_space;
        filtervalidentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateTime")
    {
        updatetime = value;
        updatetime.value_namespace = name_space;
        updatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateTimeRaw")
    {
        updatetimeraw = value;
        updatetimeraw.value_namespace = name_space;
        updatetimeraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerType")
    {
        peertype = value;
        peertype.value_namespace = name_space;
        peertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::StatusItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "assocId")
    {
        associd.yfilter = yfilter;
    }
    if(value_path == "peerAddress")
    {
        peeraddress.yfilter = yfilter;
    }
    if(value_path == "peerPort")
    {
        peerport.yfilter = yfilter;
    }
    if(value_path == "hostAddress")
    {
        hostaddress.yfilter = yfilter;
    }
    if(value_path == "hostPort")
    {
        hostport.yfilter = yfilter;
    }
    if(value_path == "leap")
    {
        leap.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "peerPoll")
    {
        peerpoll.yfilter = yfilter;
    }
    if(value_path == "hostPoll")
    {
        hostpoll.yfilter = yfilter;
    }
    if(value_path == "hostPollSeconds")
    {
        hostpollseconds.yfilter = yfilter;
    }
    if(value_path == "precision")
    {
        precision.yfilter = yfilter;
    }
    if(value_path == "rootDelay")
    {
        rootdelay.yfilter = yfilter;
    }
    if(value_path == "rootDispersion")
    {
        rootdispersion.yfilter = yfilter;
    }
    if(value_path == "refId")
    {
        refid.yfilter = yfilter;
    }
    if(value_path == "refTime")
    {
        reftime.yfilter = yfilter;
    }
    if(value_path == "refTimeRaw")
    {
        reftimeraw.yfilter = yfilter;
    }
    if(value_path == "orgTime")
    {
        orgtime.yfilter = yfilter;
    }
    if(value_path == "orgTimeRaw")
    {
        orgtimeraw.yfilter = yfilter;
    }
    if(value_path == "receiveTime")
    {
        receivetime.yfilter = yfilter;
    }
    if(value_path == "receiveTimeRaw")
    {
        receivetimeraw.yfilter = yfilter;
    }
    if(value_path == "transmitTime")
    {
        transmittime.yfilter = yfilter;
    }
    if(value_path == "transmitTimeRaw")
    {
        transmittimeraw.yfilter = yfilter;
    }
    if(value_path == "reach")
    {
        reach.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delayRaw")
    {
        delayraw.yfilter = yfilter;
    }
    if(value_path == "dispersion")
    {
        dispersion.yfilter = yfilter;
    }
    if(value_path == "filterValidEntries")
    {
        filtervalidentries.yfilter = yfilter;
    }
    if(value_path == "updateTime")
    {
        updatetime.yfilter = yfilter;
    }
    if(value_path == "updateTimeRaw")
    {
        updatetimeraw.yfilter = yfilter;
    }
    if(value_path == "peerType")
    {
        peertype.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::StatusItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "assocId" || name == "peerAddress" || name == "peerPort" || name == "hostAddress" || name == "hostPort" || name == "leap" || name == "mode" || name == "stratum" || name == "peerPoll" || name == "hostPoll" || name == "hostPollSeconds" || name == "precision" || name == "rootDelay" || name == "rootDispersion" || name == "refId" || name == "refTime" || name == "refTimeRaw" || name == "orgTime" || name == "orgTimeRaw" || name == "receiveTime" || name == "receiveTimeRaw" || name == "transmitTime" || name == "transmitTimeRaw" || name == "reach" || name == "timer" || name == "offset" || name == "delay" || name == "delayRaw" || name == "dispersion" || name == "filterValidEntries" || name == "updateTime" || name == "updateTimeRaw" || name == "peerType" || name == "peerName")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsntpProviderToNtpAuthItems()
    :
    rsntpprovidertontpauth_list(this, {"tdn"})
{

    yang_name = "rsntpProviderToNtpAuth-items"; yang_parent_name = "NtpProvider-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::~RsntpProviderToNtpAuthItems()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsntpprovidertontpauth_list.len(); index++)
    {
        if(rsntpprovidertontpauth_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_operation() const
{
    for (std::size_t index=0; index<rsntpprovidertontpauth_list.len(); index++)
    {
        if(rsntpprovidertontpauth_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsntpProviderToNtpAuth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsNtpProviderToNtpAuth-list")
    {
        auto c = std::make_shared<System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList>();
        c->parent = this;
        rsntpprovidertontpauth_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsntpprovidertontpauth_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsNtpProviderToNtpAuth-list")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::RsNtpProviderToNtpAuthList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsNtpProviderToNtpAuth-list"; yang_parent_name = "rsntpProviderToNtpAuth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::~RsNtpProviderToNtpAuthList()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsNtpProviderToNtpAuth-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::DbgStatisticsItems()
    :
    timereceived{YType::uint32, "timeReceived"},
    timetosend{YType::uint32, "timeToSend"},
    timereachable{YType::uint32, "timeReachable"},
    numbersent{YType::uint32, "numberSent"},
    numberprocessed{YType::uint32, "numberProcessed"},
    badauth{YType::uint32, "badAuth"},
    bogusorg{YType::uint32, "bogusOrg"},
    duplicate{YType::uint32, "duplicate"},
    baddispersion{YType::uint32, "badDispersion"},
    badreftime{YType::uint32, "badRefTime"},
    candidateorder{YType::uint8, "candidateOrder"}
{

    yang_name = "dbgStatistics-items"; yang_parent_name = "NtpProvider-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::~DbgStatisticsItems()
{
}

bool System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::has_data() const
{
    if (is_presence_container) return true;
    return timereceived.is_set
	|| timetosend.is_set
	|| timereachable.is_set
	|| numbersent.is_set
	|| numberprocessed.is_set
	|| badauth.is_set
	|| bogusorg.is_set
	|| duplicate.is_set
	|| baddispersion.is_set
	|| badreftime.is_set
	|| candidateorder.is_set;
}

bool System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timereceived.yfilter)
	|| ydk::is_set(timetosend.yfilter)
	|| ydk::is_set(timereachable.yfilter)
	|| ydk::is_set(numbersent.yfilter)
	|| ydk::is_set(numberprocessed.yfilter)
	|| ydk::is_set(badauth.yfilter)
	|| ydk::is_set(bogusorg.yfilter)
	|| ydk::is_set(duplicate.yfilter)
	|| ydk::is_set(baddispersion.yfilter)
	|| ydk::is_set(badreftime.yfilter)
	|| ydk::is_set(candidateorder.yfilter);
}

std::string System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgStatistics-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timereceived.is_set || is_set(timereceived.yfilter)) leaf_name_data.push_back(timereceived.get_name_leafdata());
    if (timetosend.is_set || is_set(timetosend.yfilter)) leaf_name_data.push_back(timetosend.get_name_leafdata());
    if (timereachable.is_set || is_set(timereachable.yfilter)) leaf_name_data.push_back(timereachable.get_name_leafdata());
    if (numbersent.is_set || is_set(numbersent.yfilter)) leaf_name_data.push_back(numbersent.get_name_leafdata());
    if (numberprocessed.is_set || is_set(numberprocessed.yfilter)) leaf_name_data.push_back(numberprocessed.get_name_leafdata());
    if (badauth.is_set || is_set(badauth.yfilter)) leaf_name_data.push_back(badauth.get_name_leafdata());
    if (bogusorg.is_set || is_set(bogusorg.yfilter)) leaf_name_data.push_back(bogusorg.get_name_leafdata());
    if (duplicate.is_set || is_set(duplicate.yfilter)) leaf_name_data.push_back(duplicate.get_name_leafdata());
    if (baddispersion.is_set || is_set(baddispersion.yfilter)) leaf_name_data.push_back(baddispersion.get_name_leafdata());
    if (badreftime.is_set || is_set(badreftime.yfilter)) leaf_name_data.push_back(badreftime.get_name_leafdata());
    if (candidateorder.is_set || is_set(candidateorder.yfilter)) leaf_name_data.push_back(candidateorder.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeReceived")
    {
        timereceived = value;
        timereceived.value_namespace = name_space;
        timereceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeToSend")
    {
        timetosend = value;
        timetosend.value_namespace = name_space;
        timetosend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeReachable")
    {
        timereachable = value;
        timereachable.value_namespace = name_space;
        timereachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberSent")
    {
        numbersent = value;
        numbersent.value_namespace = name_space;
        numbersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberProcessed")
    {
        numberprocessed = value;
        numberprocessed.value_namespace = name_space;
        numberprocessed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuth")
    {
        badauth = value;
        badauth.value_namespace = name_space;
        badauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bogusOrg")
    {
        bogusorg = value;
        bogusorg.value_namespace = name_space;
        bogusorg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate")
    {
        duplicate = value;
        duplicate.value_namespace = name_space;
        duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badDispersion")
    {
        baddispersion = value;
        baddispersion.value_namespace = name_space;
        baddispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badRefTime")
    {
        badreftime = value;
        badreftime.value_namespace = name_space;
        badreftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidateOrder")
    {
        candidateorder = value;
        candidateorder.value_namespace = name_space;
        candidateorder.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeReceived")
    {
        timereceived.yfilter = yfilter;
    }
    if(value_path == "timeToSend")
    {
        timetosend.yfilter = yfilter;
    }
    if(value_path == "timeReachable")
    {
        timereachable.yfilter = yfilter;
    }
    if(value_path == "numberSent")
    {
        numbersent.yfilter = yfilter;
    }
    if(value_path == "numberProcessed")
    {
        numberprocessed.yfilter = yfilter;
    }
    if(value_path == "badAuth")
    {
        badauth.yfilter = yfilter;
    }
    if(value_path == "bogusOrg")
    {
        bogusorg.yfilter = yfilter;
    }
    if(value_path == "duplicate")
    {
        duplicate.yfilter = yfilter;
    }
    if(value_path == "badDispersion")
    {
        baddispersion.yfilter = yfilter;
    }
    if(value_path == "badRefTime")
    {
        badreftime.yfilter = yfilter;
    }
    if(value_path == "candidateOrder")
    {
        candidateorder.yfilter = yfilter;
    }
}

bool System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeReceived" || name == "timeToSend" || name == "timeReachable" || name == "numberSent" || name == "numberProcessed" || name == "badAuth" || name == "bogusOrg" || name == "duplicate" || name == "badDispersion" || name == "badRefTime" || name == "candidateOrder")
        return true;
    return false;
}

System::TimeItems::AccessgroupItems::AccessgroupItems()
    :
    peer{YType::str, "peer"},
    serveonly{YType::str, "serveOnly"},
    serve{YType::str, "serve"},
    queryonly{YType::str, "queryOnly"}
{

    yang_name = "accessgroup-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::AccessgroupItems::~AccessgroupItems()
{
}

bool System::TimeItems::AccessgroupItems::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| serveonly.is_set
	|| serve.is_set
	|| queryonly.is_set;
}

bool System::TimeItems::AccessgroupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(serveonly.yfilter)
	|| ydk::is_set(serve.yfilter)
	|| ydk::is_set(queryonly.yfilter);
}

std::string System::TimeItems::AccessgroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::AccessgroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accessgroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::AccessgroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (serveonly.is_set || is_set(serveonly.yfilter)) leaf_name_data.push_back(serveonly.get_name_leafdata());
    if (serve.is_set || is_set(serve.yfilter)) leaf_name_data.push_back(serve.get_name_leafdata());
    if (queryonly.is_set || is_set(queryonly.yfilter)) leaf_name_data.push_back(queryonly.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::AccessgroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::AccessgroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::AccessgroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serveOnly")
    {
        serveonly = value;
        serveonly.value_namespace = name_space;
        serveonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serve")
    {
        serve = value;
        serve.value_namespace = name_space;
        serve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryOnly")
    {
        queryonly = value;
        queryonly.value_namespace = name_space;
        queryonly.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::AccessgroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "serveOnly")
    {
        serveonly.yfilter = yfilter;
    }
    if(value_path == "serve")
    {
        serve.yfilter = yfilter;
    }
    if(value_path == "queryOnly")
    {
        queryonly.yfilter = yfilter;
    }
}

bool System::TimeItems::AccessgroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "serveOnly" || name == "serve" || name == "queryOnly")
        return true;
    return false;
}

System::TimeItems::SrcIpItems::SrcIpItems()
    :
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"}
{

    yang_name = "srcIp-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::SrcIpItems::~SrcIpItems()
{
}

bool System::TimeItems::SrcIpItems::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| srcipv6.is_set;
}

bool System::TimeItems::SrcIpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter);
}

std::string System::TimeItems::SrcIpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::SrcIpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::SrcIpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::SrcIpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::SrcIpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::SrcIpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::SrcIpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
}

bool System::TimeItems::SrcIpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIp" || name == "srcIpv6")
        return true;
    return false;
}

System::TimeItems::SrcIfItems::SrcIfItems()
    :
    srcif{YType::str, "srcIf"}
{

    yang_name = "srcIf-items"; yang_parent_name = "time-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TimeItems::SrcIfItems::~SrcIfItems()
{
}

bool System::TimeItems::SrcIfItems::has_data() const
{
    if (is_presence_container) return true;
    return srcif.is_set;
}

bool System::TimeItems::SrcIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcif.yfilter);
}

std::string System::TimeItems::SrcIfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/time-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TimeItems::SrcIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TimeItems::SrcIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TimeItems::SrcIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TimeItems::SrcIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TimeItems::SrcIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::TimeItems::SrcIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::TimeItems::SrcIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIf")
        return true;
    return false;
}

System::NtpqItems::NtpqItems()
    :
    ntpq_list(this, {"remote"})
{

    yang_name = "ntpq-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NtpqItems::~NtpqItems()
{
}

bool System::NtpqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntpq_list.len(); index++)
    {
        if(ntpq_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NtpqItems::has_operation() const
{
    for (std::size_t index=0; index<ntpq_list.len(); index++)
    {
        if(ntpq_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NtpqItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NtpqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntpq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NtpqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NtpqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ntpq-list")
    {
        auto c = std::make_shared<System::NtpqItems::NtpqList>();
        c->parent = this;
        ntpq_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NtpqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ntpq_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NtpqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NtpqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NtpqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ntpq-list")
        return true;
    return false;
}

System::NtpqItems::NtpqList::NtpqList()
    :
    remote{YType::str, "remote"},
    tally{YType::str, "tally"},
    refid{YType::str, "refid"},
    stratum{YType::str, "stratum"},
    t{YType::str, "t"},
    when{YType::str, "when"},
    poll{YType::str, "poll"},
    reach{YType::str, "reach"},
    delay{YType::str, "delay"},
    offset{YType::str, "offset"},
    jitter{YType::str, "jitter"}
{

    yang_name = "Ntpq-list"; yang_parent_name = "ntpq-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NtpqItems::NtpqList::~NtpqList()
{
}

bool System::NtpqItems::NtpqList::has_data() const
{
    if (is_presence_container) return true;
    return remote.is_set
	|| tally.is_set
	|| refid.is_set
	|| stratum.is_set
	|| t.is_set
	|| when.is_set
	|| poll.is_set
	|| reach.is_set
	|| delay.is_set
	|| offset.is_set
	|| jitter.is_set;
}

bool System::NtpqItems::NtpqList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote.yfilter)
	|| ydk::is_set(tally.yfilter)
	|| ydk::is_set(refid.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(t.yfilter)
	|| ydk::is_set(when.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(reach.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(jitter.yfilter);
}

std::string System::NtpqItems::NtpqList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ntpq-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NtpqItems::NtpqList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ntpq-list";
    ADD_KEY_TOKEN(remote, "remote");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NtpqItems::NtpqList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());
    if (tally.is_set || is_set(tally.yfilter)) leaf_name_data.push_back(tally.get_name_leafdata());
    if (refid.is_set || is_set(refid.yfilter)) leaf_name_data.push_back(refid.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (t.is_set || is_set(t.yfilter)) leaf_name_data.push_back(t.get_name_leafdata());
    if (when.is_set || is_set(when.yfilter)) leaf_name_data.push_back(when.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (reach.is_set || is_set(reach.yfilter)) leaf_name_data.push_back(reach.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NtpqItems::NtpqList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NtpqItems::NtpqList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NtpqItems::NtpqList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tally")
    {
        tally = value;
        tally.value_namespace = name_space;
        tally.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refid")
    {
        refid = value;
        refid.value_namespace = name_space;
        refid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "t")
    {
        t = value;
        t.value_namespace = name_space;
        t.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "when")
    {
        when = value;
        when.value_namespace = name_space;
        when.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reach")
    {
        reach = value;
        reach.value_namespace = name_space;
        reach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
}

void System::NtpqItems::NtpqList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
    if(value_path == "tally")
    {
        tally.yfilter = yfilter;
    }
    if(value_path == "refid")
    {
        refid.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "t")
    {
        t.yfilter = yfilter;
    }
    if(value_path == "when")
    {
        when.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "reach")
    {
        reach.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
}

bool System::NtpqItems::NtpqList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "tally" || name == "refid" || name == "stratum" || name == "t" || name == "when" || name == "poll" || name == "reach" || name == "delay" || name == "offset" || name == "jitter")
        return true;
    return false;
}


}
}

