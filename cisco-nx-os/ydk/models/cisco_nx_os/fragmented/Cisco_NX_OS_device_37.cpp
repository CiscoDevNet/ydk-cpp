
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

System::NbmItems::ShowItems::FlowsItems::DomItems::DomItems()
    :
    flowsdom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "flows-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowsdom_list.len(); index++)
    {
        if(flowsdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<flowsdom_list.len(); index++)
    {
        if(flowsdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/flows-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowsDom-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList>();
        c->parent = this;
        flowsdom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flowsdom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowsDom-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::FlowsDomList()
    :
    name{YType::str, "name"}
        ,
    s_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems>())
{
    s_items->parent = this;

    yang_name = "FlowsDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::~FlowsDomList()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (s_items !=  nullptr && s_items->has_data());
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (s_items !=  nullptr && s_items->has_operation());
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/flows-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowsDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s-items")
    {
        if(s_items == nullptr)
        {
            s_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems>();
        }
        return s_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(s_items != nullptr)
    {
        children["s-items"] = s_items;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::SItems()
    :
    nbmflow_list(this, {"source", "group"})
{

    yang_name = "s-items"; yang_parent_name = "FlowsDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::~SItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmflow_list.len(); index++)
    {
        if(nbmflow_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::has_operation() const
{
    for (std::size_t index=0; index<nbmflow_list.len(); index++)
    {
        if(nbmflow_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmFlow-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList>();
        c->parent = this;
        nbmflow_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmflow_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmFlow-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::NbmFlowList()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    ingressif{YType::uint32, "ingressIf"},
    ingressifname{YType::str, "ingressIfName"},
    egressifcount{YType::uint32, "egressIfCount"},
    flowpol{YType::str, "flowPol"},
    bwkbps{YType::uint64, "bwKbps"},
    dscp{YType::uint32, "dscp"},
    qid{YType::uint32, "qid"},
    isfhr{YType::enumeration, "isFhr"},
    tstamp{YType::uint64, "tStamp"},
    bucket{YType::uint16, "bucket"}
        ,
    oif_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "NbmFlow-list"; yang_parent_name = "s-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::~NbmFlowList()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| ingressif.is_set
	|| ingressifname.is_set
	|| egressifcount.is_set
	|| flowpol.is_set
	|| bwkbps.is_set
	|| dscp.is_set
	|| qid.is_set
	|| isfhr.is_set
	|| tstamp.is_set
	|| bucket.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(ingressifname.yfilter)
	|| ydk::is_set(egressifcount.yfilter)
	|| ydk::is_set(flowpol.yfilter)
	|| ydk::is_set(bwkbps.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qid.yfilter)
	|| ydk::is_set(isfhr.yfilter)
	|| ydk::is_set(tstamp.yfilter)
	|| ydk::is_set(bucket.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmFlow-list";
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (ingressifname.is_set || is_set(ingressifname.yfilter)) leaf_name_data.push_back(ingressifname.get_name_leafdata());
    if (egressifcount.is_set || is_set(egressifcount.yfilter)) leaf_name_data.push_back(egressifcount.get_name_leafdata());
    if (flowpol.is_set || is_set(flowpol.yfilter)) leaf_name_data.push_back(flowpol.get_name_leafdata());
    if (bwkbps.is_set || is_set(bwkbps.yfilter)) leaf_name_data.push_back(bwkbps.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qid.is_set || is_set(qid.yfilter)) leaf_name_data.push_back(qid.get_name_leafdata());
    if (isfhr.is_set || is_set(isfhr.yfilter)) leaf_name_data.push_back(isfhr.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());
    if (bucket.is_set || is_set(bucket.yfilter)) leaf_name_data.push_back(bucket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIfName")
    {
        ingressifname = value;
        ingressifname.value_namespace = name_space;
        ingressifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIfCount")
    {
        egressifcount = value;
        egressifcount.value_namespace = name_space;
        egressifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowPol")
    {
        flowpol = value;
        flowpol.value_namespace = name_space;
        flowpol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwKbps")
    {
        bwkbps = value;
        bwkbps.value_namespace = name_space;
        bwkbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qid")
    {
        qid = value;
        qid.value_namespace = name_space;
        qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFhr")
    {
        isfhr = value;
        isfhr.value_namespace = name_space;
        isfhr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket")
    {
        bucket = value;
        bucket.value_namespace = name_space;
        bucket.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "ingressIfName")
    {
        ingressifname.yfilter = yfilter;
    }
    if(value_path == "egressIfCount")
    {
        egressifcount.yfilter = yfilter;
    }
    if(value_path == "flowPol")
    {
        flowpol.yfilter = yfilter;
    }
    if(value_path == "bwKbps")
    {
        bwkbps.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "qid")
    {
        qid.yfilter = yfilter;
    }
    if(value_path == "isFhr")
    {
        isfhr.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
    if(value_path == "bucket")
    {
        bucket.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "source" || name == "group" || name == "ingressIf" || name == "ingressIfName" || name == "egressIfCount" || name == "flowPol" || name == "bwKbps" || name == "dscp" || name == "qid" || name == "isFhr" || name == "tStamp" || name == "bucket")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifItems()
    :
    oiflist_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "NbmFlow-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::~OifItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflist_list.len(); index++)
    {
        if(oiflist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oiflist_list.len(); index++)
    {
        if(oiflist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifList-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList>();
        c->parent = this;
        oiflist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oiflist_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifList-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::OifListList()
    :
    oif{YType::uint32, "oif"},
    oifname{YType::str, "oifName"},
    reporterip{YType::str, "reporterIP"},
    oiftstamp{YType::uint64, "oifTstamp"}
{

    yang_name = "OifList-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::~OifListList()
{
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| oifname.is_set
	|| reporterip.is_set
	|| oiftstamp.is_set;
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(reporterip.yfilter)
	|| ydk::is_set(oiftstamp.yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifList-list";
    ADD_KEY_TOKEN(oif, "oif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (reporterip.is_set || is_set(reporterip.yfilter)) leaf_name_data.push_back(reporterip.get_name_leafdata());
    if (oiftstamp.is_set || is_set(oiftstamp.yfilter)) leaf_name_data.push_back(oiftstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oif")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporterIP")
    {
        reporterip = value;
        reporterip.value_namespace = name_space;
        reporterip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifTstamp")
    {
        oiftstamp = value;
        oiftstamp.value_namespace = name_space;
        oiftstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oif")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "reporterIP")
    {
        reporterip.yfilter = yfilter;
    }
    if(value_path == "oifTstamp")
    {
        oiftstamp.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif" || name == "oifName" || name == "reporterIP" || name == "oifTstamp")
        return true;
    return false;
}

System::NbmItems::ShowItems::StatsItems::StatsItems()
    :
    dom_items(std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "stats-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::StatsItems::~StatsItems()
{
}

bool System::NbmItems::ShowItems::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ShowItems::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ShowItems::StatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::NbmItems::ShowItems::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::StatsItems::DomItems::DomItems()
    :
    statsdom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "stats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::StatsItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statsdom_list.len(); index++)
    {
        if(statsdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<statsdom_list.len(); index++)
    {
        if(statsdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/stats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::StatsItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::StatsItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StatsDom-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList>();
        c->parent = this;
        statsdom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::StatsItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : statsdom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::StatsItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::StatsItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StatsDom-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::StatsDomList()
    :
    name{YType::str, "name"}
        ,
    s_items(std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems>())
{
    s_items->parent = this;

    yang_name = "StatsDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::~StatsDomList()
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (s_items !=  nullptr && s_items->has_data());
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (s_items !=  nullptr && s_items->has_operation());
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/stats-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StatsDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s-items")
    {
        if(s_items == nullptr)
        {
            s_items = std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems>();
        }
        return s_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(s_items != nullptr)
    {
        children["s-items"] = s_items;
    }

    return children;
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::SItems()
    :
    statsentry_list(this, {"source", "group"})
{

    yang_name = "s-items"; yang_parent_name = "StatsDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::~SItems()
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statsentry_list.len(); index++)
    {
        if(statsentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::has_operation() const
{
    for (std::size_t index=0; index<statsentry_list.len(); index++)
    {
        if(statsentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StatsEntry-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList>();
        c->parent = this;
        statsentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : statsentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StatsEntry-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::StatsEntryList()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    allowedpkts{YType::uint64, "allowedPkts"},
    allowedbytes{YType::uint64, "allowedBytes"},
    deniedpkts{YType::uint64, "deniedPkts"},
    deniedbytes{YType::uint64, "deniedBytes"},
    totalpkts{YType::uint64, "totalPkts"},
    totalbytes{YType::uint64, "totalBytes"},
    tstamp{YType::uint64, "tStamp"}
{

    yang_name = "StatsEntry-list"; yang_parent_name = "s-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::~StatsEntryList()
{
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| allowedpkts.is_set
	|| allowedbytes.is_set
	|| deniedpkts.is_set
	|| deniedbytes.is_set
	|| totalpkts.is_set
	|| totalbytes.is_set
	|| tstamp.is_set;
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(allowedpkts.yfilter)
	|| ydk::is_set(allowedbytes.yfilter)
	|| ydk::is_set(deniedpkts.yfilter)
	|| ydk::is_set(deniedbytes.yfilter)
	|| ydk::is_set(totalpkts.yfilter)
	|| ydk::is_set(totalbytes.yfilter)
	|| ydk::is_set(tstamp.yfilter);
}

std::string System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StatsEntry-list";
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (allowedpkts.is_set || is_set(allowedpkts.yfilter)) leaf_name_data.push_back(allowedpkts.get_name_leafdata());
    if (allowedbytes.is_set || is_set(allowedbytes.yfilter)) leaf_name_data.push_back(allowedbytes.get_name_leafdata());
    if (deniedpkts.is_set || is_set(deniedpkts.yfilter)) leaf_name_data.push_back(deniedpkts.get_name_leafdata());
    if (deniedbytes.is_set || is_set(deniedbytes.yfilter)) leaf_name_data.push_back(deniedbytes.get_name_leafdata());
    if (totalpkts.is_set || is_set(totalpkts.yfilter)) leaf_name_data.push_back(totalpkts.get_name_leafdata());
    if (totalbytes.is_set || is_set(totalbytes.yfilter)) leaf_name_data.push_back(totalbytes.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedPkts")
    {
        allowedpkts = value;
        allowedpkts.value_namespace = name_space;
        allowedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedBytes")
    {
        allowedbytes = value;
        allowedbytes.value_namespace = name_space;
        allowedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deniedPkts")
    {
        deniedpkts = value;
        deniedpkts.value_namespace = name_space;
        deniedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deniedBytes")
    {
        deniedbytes = value;
        deniedbytes.value_namespace = name_space;
        deniedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPkts")
    {
        totalpkts = value;
        totalpkts.value_namespace = name_space;
        totalpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalBytes")
    {
        totalbytes = value;
        totalbytes.value_namespace = name_space;
        totalbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "allowedPkts")
    {
        allowedpkts.yfilter = yfilter;
    }
    if(value_path == "allowedBytes")
    {
        allowedbytes.yfilter = yfilter;
    }
    if(value_path == "deniedPkts")
    {
        deniedpkts.yfilter = yfilter;
    }
    if(value_path == "deniedBytes")
    {
        deniedbytes.yfilter = yfilter;
    }
    if(value_path == "totalPkts")
    {
        totalpkts.yfilter = yfilter;
    }
    if(value_path == "totalBytes")
    {
        totalbytes.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "group" || name == "allowedPkts" || name == "allowedBytes" || name == "deniedPkts" || name == "deniedBytes" || name == "totalPkts" || name == "totalBytes" || name == "tStamp")
        return true;
    return false;
}

System::NbmItems::ShowItems::GlobalItems::GlobalItems()
    :
    dom_items(std::make_shared<System::NbmItems::ShowItems::GlobalItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "global-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::GlobalItems::~GlobalItems()
{
}

bool System::NbmItems::ShowItems::GlobalItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ShowItems::GlobalItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ShowItems::GlobalItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::GlobalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::GlobalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::GlobalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ShowItems::GlobalItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::GlobalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::NbmItems::ShowItems::GlobalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::GlobalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::GlobalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::GlobalItems::DomItems::DomItems()
    :
    globalshowdom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "global-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::GlobalItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<globalshowdom_list.len(); index++)
    {
        if(globalshowdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<globalshowdom_list.len(); index++)
    {
        if(globalshowdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::GlobalItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/global-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::GlobalItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::GlobalItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::GlobalItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GlobalShowDom-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList>();
        c->parent = this;
        globalshowdom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::GlobalItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : globalshowdom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GlobalShowDom-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalShowDomList()
    :
    name{YType::str, "name"}
        ,
    global_items(std::make_shared<System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_>())
{
    global_items->parent = this;

    yang_name = "GlobalShowDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::~GlobalShowDomList()
{
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (global_items !=  nullptr && global_items->has_data());
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (global_items !=  nullptr && global_items->has_operation());
}

std::string System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/global-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GlobalShowDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-items")
    {
        if(global_items == nullptr)
        {
            global_items = std::make_shared<System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_>();
        }
        return global_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_items != nullptr)
    {
        children["global-items"] = global_items;
    }

    return children;
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::GlobalItems_()
    :
    initbeacon{YType::uint64, "initBeacon"},
    apiver{YType::uint8, "apiVer"},
    adminst{YType::uint8, "adminSt"},
    opermode{YType::enumeration, "operMode"}
{

    yang_name = "global-items"; yang_parent_name = "GlobalShowDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::~GlobalItems_()
{
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::has_data() const
{
    if (is_presence_container) return true;
    return initbeacon.is_set
	|| apiver.is_set
	|| adminst.is_set
	|| opermode.is_set;
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initbeacon.yfilter)
	|| ydk::is_set(apiver.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(opermode.yfilter);
}

std::string System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initbeacon.is_set || is_set(initbeacon.yfilter)) leaf_name_data.push_back(initbeacon.get_name_leafdata());
    if (apiver.is_set || is_set(apiver.yfilter)) leaf_name_data.push_back(apiver.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initBeacon")
    {
        initbeacon = value;
        initbeacon.value_namespace = name_space;
        initbeacon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apiVer")
    {
        apiver = value;
        apiver.value_namespace = name_space;
        apiver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initBeacon")
    {
        initbeacon.yfilter = yfilter;
    }
    if(value_path == "apiVer")
    {
        apiver.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initBeacon" || name == "apiVer" || name == "adminSt" || name == "operMode")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::EndpointsItems()
    :
    dom_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "endpoints-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::EndpointsItems::~EndpointsItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ShowItems::EndpointsItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ShowItems::EndpointsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::EndpointsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoints-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::EndpointsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::EndpointsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::DomItems()
    :
    epidom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "endpoints-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epidom_list.len(); index++)
    {
        if(epidom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<epidom_list.len(); index++)
    {
        if(epidom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/endpoints-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpiDom-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList>();
        c->parent = this;
        epidom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epidom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpiDom-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::EpiDomList()
    :
    name{YType::str, "name"}
        ,
    h_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems>())
{
    h_items->parent = this;

    yang_name = "EpiDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::~EpiDomList()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (h_items !=  nullptr && h_items->has_data());
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (h_items !=  nullptr && h_items->has_operation());
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/endpoints-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpiDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "h-items")
    {
        if(h_items == nullptr)
        {
            h_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems>();
        }
        return h_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(h_items != nullptr)
    {
        children["h-items"] = h_items;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "h-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::HItems()
    :
    endpoint_list(this, {"hostip", "if_"})
{

    yang_name = "h-items"; yang_parent_name = "EpiDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::~HItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<endpoint_list.len(); index++)
    {
        if(endpoint_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::has_operation() const
{
    for (std::size_t index=0; index<endpoint_list.len(); index++)
    {
        if(endpoint_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "h-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EndPoint-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList>();
        c->parent = this;
        endpoint_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : endpoint_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EndPoint-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::EndPointList()
    :
    hostip{YType::str, "hostIp"},
    if_{YType::uint32, "if"},
    ifname{YType::str, "ifName"},
    role{YType::enumeration, "role"}
        ,
    arp_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems>())
    , g_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems>())
    , s_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems>())
{
    arp_items->parent = this;
    g_items->parent = this;
    s_items->parent = this;

    yang_name = "EndPoint-list"; yang_parent_name = "h-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::~EndPointList()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::has_data() const
{
    if (is_presence_container) return true;
    return hostip.is_set
	|| if_.is_set
	|| ifname.is_set
	|| role.is_set
	|| (arp_items !=  nullptr && arp_items->has_data())
	|| (g_items !=  nullptr && g_items->has_data())
	|| (s_items !=  nullptr && s_items->has_data());
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostip.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(role.yfilter)
	|| (arp_items !=  nullptr && arp_items->has_operation())
	|| (g_items !=  nullptr && g_items->has_operation())
	|| (s_items !=  nullptr && s_items->has_operation());
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EndPoint-list";
    ADD_KEY_TOKEN(hostip, "hostIp");
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostip.is_set || is_set(hostip.yfilter)) leaf_name_data.push_back(hostip.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-items")
    {
        if(arp_items == nullptr)
        {
            arp_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems>();
        }
        return arp_items;
    }

    if(child_yang_name == "g-items")
    {
        if(g_items == nullptr)
        {
            g_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems>();
        }
        return g_items;
    }

    if(child_yang_name == "s-items")
    {
        if(s_items == nullptr)
        {
            s_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems>();
        }
        return s_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(arp_items != nullptr)
    {
        children["arp-items"] = arp_items;
    }

    if(g_items != nullptr)
    {
        children["g-items"] = g_items;
    }

    if(s_items != nullptr)
    {
        children["s-items"] = s_items;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostIp")
    {
        hostip = value;
        hostip.value_namespace = name_space;
        hostip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostIp")
    {
        hostip.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-items" || name == "g-items" || name == "s-items" || name == "hostIp" || name == "if" || name == "ifName" || name == "role")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::ArpItems()
    :
    mac{YType::str, "mac"},
    tstamp{YType::uint64, "tStamp"}
{

    yang_name = "arp-items"; yang_parent_name = "EndPoint-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::~ArpItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| tstamp.is_set;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(tstamp.yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "tStamp")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::GItems()
    :
    endpointsender_list(this, {"group"})
{

    yang_name = "g-items"; yang_parent_name = "EndPoint-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::~GItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<endpointsender_list.len(); index++)
    {
        if(endpointsender_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::has_operation() const
{
    for (std::size_t index=0; index<endpointsender_list.len(); index++)
    {
        if(endpointsender_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EndPointSender-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList>();
        c->parent = this;
        endpointsender_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : endpointsender_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EndPointSender-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::EndPointSenderList()
    :
    group{YType::str, "group"},
    isext{YType::enumeration, "isExt"},
    faultreason{YType::enumeration, "faultReason"},
    tstamp{YType::uint64, "tStamp"}
{

    yang_name = "EndPointSender-list"; yang_parent_name = "g-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::~EndPointSenderList()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| isext.is_set
	|| faultreason.is_set
	|| tstamp.is_set;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(isext.yfilter)
	|| ydk::is_set(faultreason.yfilter)
	|| ydk::is_set(tstamp.yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EndPointSender-list";
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (isext.is_set || is_set(isext.yfilter)) leaf_name_data.push_back(isext.get_name_leafdata());
    if (faultreason.is_set || is_set(faultreason.yfilter)) leaf_name_data.push_back(faultreason.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isExt")
    {
        isext = value;
        isext.value_namespace = name_space;
        isext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultReason")
    {
        faultreason = value;
        faultreason.value_namespace = name_space;
        faultreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "isExt")
    {
        isext.yfilter = yfilter;
    }
    if(value_path == "faultReason")
    {
        faultreason.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "isExt" || name == "faultReason" || name == "tStamp")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::SItems()
    :
    endpointreceiver_list(this, {"source", "group"})
{

    yang_name = "s-items"; yang_parent_name = "EndPoint-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::~SItems()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<endpointreceiver_list.len(); index++)
    {
        if(endpointreceiver_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::has_operation() const
{
    for (std::size_t index=0; index<endpointreceiver_list.len(); index++)
    {
        if(endpointreceiver_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EndPointReceiver-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList>();
        c->parent = this;
        endpointreceiver_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : endpointreceiver_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EndPointReceiver-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::EndPointReceiverList()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    isext{YType::enumeration, "isExt"},
    faultreason{YType::enumeration, "faultReason"},
    owner{YType::enumeration, "owner"},
    tstamp{YType::uint64, "tStamp"}
{

    yang_name = "EndPointReceiver-list"; yang_parent_name = "s-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::~EndPointReceiverList()
{
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| isext.is_set
	|| faultreason.is_set
	|| owner.is_set
	|| tstamp.is_set;
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(isext.yfilter)
	|| ydk::is_set(faultreason.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tstamp.yfilter);
}

std::string System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EndPointReceiver-list";
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (isext.is_set || is_set(isext.yfilter)) leaf_name_data.push_back(isext.get_name_leafdata());
    if (faultreason.is_set || is_set(faultreason.yfilter)) leaf_name_data.push_back(faultreason.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isExt")
    {
        isext = value;
        isext.value_namespace = name_space;
        isext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "faultReason")
    {
        faultreason = value;
        faultreason.value_namespace = name_space;
        faultreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "isExt")
    {
        isext.yfilter = yfilter;
    }
    if(value_path == "faultReason")
    {
        faultreason.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "group" || name == "isExt" || name == "faultReason" || name == "owner" || name == "tStamp")
        return true;
    return false;
}

System::NbmccItems::NbmccItems()
    :
    eif_items(std::make_shared<System::NbmccItems::EifItems>())
    , srcip_items(std::make_shared<System::NbmccItems::SrcipItems>())
    , repip_items(std::make_shared<System::NbmccItems::RepipItems>())
{
    eif_items->parent = this;
    srcip_items->parent = this;
    repip_items->parent = this;

    yang_name = "nbmcc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::~NbmccItems()
{
}

bool System::NbmccItems::has_data() const
{
    if (is_presence_container) return true;
    return (eif_items !=  nullptr && eif_items->has_data())
	|| (srcip_items !=  nullptr && srcip_items->has_data())
	|| (repip_items !=  nullptr && repip_items->has_data());
}

bool System::NbmccItems::has_operation() const
{
    return is_set(yfilter)
	|| (eif_items !=  nullptr && eif_items->has_operation())
	|| (srcip_items !=  nullptr && srcip_items->has_operation())
	|| (repip_items !=  nullptr && repip_items->has_operation());
}

std::string System::NbmccItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbmcc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eif-items")
    {
        if(eif_items == nullptr)
        {
            eif_items = std::make_shared<System::NbmccItems::EifItems>();
        }
        return eif_items;
    }

    if(child_yang_name == "srcip-items")
    {
        if(srcip_items == nullptr)
        {
            srcip_items = std::make_shared<System::NbmccItems::SrcipItems>();
        }
        return srcip_items;
    }

    if(child_yang_name == "repip-items")
    {
        if(repip_items == nullptr)
        {
            repip_items = std::make_shared<System::NbmccItems::RepipItems>();
        }
        return repip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eif_items != nullptr)
    {
        children["eif-items"] = eif_items;
    }

    if(srcip_items != nullptr)
    {
        children["srcip-items"] = srcip_items;
    }

    if(repip_items != nullptr)
    {
        children["repip-items"] = repip_items;
    }

    return children;
}

void System::NbmccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmccItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eif-items" || name == "srcip-items" || name == "repip-items")
        return true;
    return false;
}

System::NbmccItems::EifItems::EifItems()
    :
    nbmccflowentity_list(this, {"egressif", "srcip", "dstip"})
{

    yang_name = "eif-items"; yang_parent_name = "nbmcc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::EifItems::~EifItems()
{
}

bool System::NbmccItems::EifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmccflowentity_list.len(); index++)
    {
        if(nbmccflowentity_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmccItems::EifItems::has_operation() const
{
    for (std::size_t index=0; index<nbmccflowentity_list.len(); index++)
    {
        if(nbmccflowentity_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmccItems::EifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::EifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::EifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::EifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmCcFlowEntity-list")
    {
        auto c = std::make_shared<System::NbmccItems::EifItems::NbmCcFlowEntityList>();
        c->parent = this;
        nbmccflowentity_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::EifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmccflowentity_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmccItems::EifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmccItems::EifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmccItems::EifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmCcFlowEntity-list")
        return true;
    return false;
}

System::NbmccItems::EifItems::NbmCcFlowEntityList::NbmCcFlowEntityList()
    :
    egressif{YType::uint32, "egressIf"},
    srcip{YType::str, "srcIP"},
    dstip{YType::str, "dstIP"},
    reporterip{YType::str, "reporterIP"},
    ingressif{YType::uint32, "ingressIf"},
    dscp{YType::uint32, "dscp"},
    bandwidthunit{YType::enumeration, "bandwidthUnit"},
    bandwidth{YType::uint32, "bandwidth"},
    queueid{YType::uint8, "queueId"}
{

    yang_name = "NbmCcFlowEntity-list"; yang_parent_name = "eif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::EifItems::NbmCcFlowEntityList::~NbmCcFlowEntityList()
{
}

bool System::NbmccItems::EifItems::NbmCcFlowEntityList::has_data() const
{
    if (is_presence_container) return true;
    return egressif.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| reporterip.is_set
	|| ingressif.is_set
	|| dscp.is_set
	|| bandwidthunit.is_set
	|| bandwidth.is_set
	|| queueid.is_set;
}

bool System::NbmccItems::EifItems::NbmCcFlowEntityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(reporterip.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(bandwidthunit.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(queueid.yfilter);
}

std::string System::NbmccItems::EifItems::NbmCcFlowEntityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/eif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::EifItems::NbmCcFlowEntityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmCcFlowEntity-list";
    ADD_KEY_TOKEN(egressif, "egressIf");
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(dstip, "dstIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::EifItems::NbmCcFlowEntityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (reporterip.is_set || is_set(reporterip.yfilter)) leaf_name_data.push_back(reporterip.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (bandwidthunit.is_set || is_set(bandwidthunit.yfilter)) leaf_name_data.push_back(bandwidthunit.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (queueid.is_set || is_set(queueid.yfilter)) leaf_name_data.push_back(queueid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::EifItems::NbmCcFlowEntityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::EifItems::NbmCcFlowEntityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmccItems::EifItems::NbmCcFlowEntityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIP")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporterIP")
    {
        reporterip = value;
        reporterip.value_namespace = name_space;
        reporterip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidthUnit")
    {
        bandwidthunit = value;
        bandwidthunit.value_namespace = name_space;
        bandwidthunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queueId")
    {
        queueid = value;
        queueid.value_namespace = name_space;
        queueid.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmccItems::EifItems::NbmCcFlowEntityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIP")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "reporterIP")
    {
        reporterip.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "bandwidthUnit")
    {
        bandwidthunit.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "queueId")
    {
        queueid.yfilter = yfilter;
    }
}

bool System::NbmccItems::EifItems::NbmCcFlowEntityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egressIf" || name == "srcIP" || name == "dstIP" || name == "reporterIP" || name == "ingressIf" || name == "dscp" || name == "bandwidthUnit" || name == "bandwidth" || name == "queueId")
        return true;
    return false;
}

System::NbmccItems::SrcipItems::SrcipItems()
    :
    sendercctable_list(this, {"srcip", "destip"})
{

    yang_name = "srcip-items"; yang_parent_name = "nbmcc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::SrcipItems::~SrcipItems()
{
}

bool System::NbmccItems::SrcipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sendercctable_list.len(); index++)
    {
        if(sendercctable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmccItems::SrcipItems::has_operation() const
{
    for (std::size_t index=0; index<sendercctable_list.len(); index++)
    {
        if(sendercctable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmccItems::SrcipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::SrcipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::SrcipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::SrcipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SenderCcTable-list")
    {
        auto c = std::make_shared<System::NbmccItems::SrcipItems::SenderCcTableList>();
        c->parent = this;
        sendercctable_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::SrcipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sendercctable_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmccItems::SrcipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmccItems::SrcipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmccItems::SrcipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SenderCcTable-list")
        return true;
    return false;
}

System::NbmccItems::SrcipItems::SenderCcTableList::SenderCcTableList()
    :
    srcip{YType::str, "srcIP"},
    destip{YType::str, "destIP"},
    iif{YType::uint8, "iif"},
    dummyproperty1{YType::uint32, "dummyproperty1"},
    dummyproperty2{YType::uint32, "dummyproperty2"},
    dummyproperty3{YType::uint32, "dummyproperty3"}
{

    yang_name = "SenderCcTable-list"; yang_parent_name = "srcip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::SrcipItems::SenderCcTableList::~SenderCcTableList()
{
}

bool System::NbmccItems::SrcipItems::SenderCcTableList::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| destip.is_set
	|| iif.is_set
	|| dummyproperty1.is_set
	|| dummyproperty2.is_set
	|| dummyproperty3.is_set;
}

bool System::NbmccItems::SrcipItems::SenderCcTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(iif.yfilter)
	|| ydk::is_set(dummyproperty1.yfilter)
	|| ydk::is_set(dummyproperty2.yfilter)
	|| ydk::is_set(dummyproperty3.yfilter);
}

std::string System::NbmccItems::SrcipItems::SenderCcTableList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/srcip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::SrcipItems::SenderCcTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SenderCcTable-list";
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(destip, "destIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::SrcipItems::SenderCcTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (iif.is_set || is_set(iif.yfilter)) leaf_name_data.push_back(iif.get_name_leafdata());
    if (dummyproperty1.is_set || is_set(dummyproperty1.yfilter)) leaf_name_data.push_back(dummyproperty1.get_name_leafdata());
    if (dummyproperty2.is_set || is_set(dummyproperty2.yfilter)) leaf_name_data.push_back(dummyproperty2.get_name_leafdata());
    if (dummyproperty3.is_set || is_set(dummyproperty3.yfilter)) leaf_name_data.push_back(dummyproperty3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::SrcipItems::SenderCcTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::SrcipItems::SenderCcTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmccItems::SrcipItems::SenderCcTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destIP")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iif")
    {
        iif = value;
        iif.value_namespace = name_space;
        iif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty1")
    {
        dummyproperty1 = value;
        dummyproperty1.value_namespace = name_space;
        dummyproperty1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty2")
    {
        dummyproperty2 = value;
        dummyproperty2.value_namespace = name_space;
        dummyproperty2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty3")
    {
        dummyproperty3 = value;
        dummyproperty3.value_namespace = name_space;
        dummyproperty3.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmccItems::SrcipItems::SenderCcTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "destIP")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "iif")
    {
        iif.yfilter = yfilter;
    }
    if(value_path == "dummyproperty1")
    {
        dummyproperty1.yfilter = yfilter;
    }
    if(value_path == "dummyproperty2")
    {
        dummyproperty2.yfilter = yfilter;
    }
    if(value_path == "dummyproperty3")
    {
        dummyproperty3.yfilter = yfilter;
    }
}

bool System::NbmccItems::SrcipItems::SenderCcTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIP" || name == "destIP" || name == "iif" || name == "dummyproperty1" || name == "dummyproperty2" || name == "dummyproperty3")
        return true;
    return false;
}

System::NbmccItems::RepipItems::RepipItems()
    :
    receivercctable_list(this, {"reporterip", "srcip", "destip"})
{

    yang_name = "repip-items"; yang_parent_name = "nbmcc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::RepipItems::~RepipItems()
{
}

bool System::NbmccItems::RepipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receivercctable_list.len(); index++)
    {
        if(receivercctable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmccItems::RepipItems::has_operation() const
{
    for (std::size_t index=0; index<receivercctable_list.len(); index++)
    {
        if(receivercctable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmccItems::RepipItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::RepipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::RepipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::RepipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReceiverCcTable-list")
    {
        auto c = std::make_shared<System::NbmccItems::RepipItems::ReceiverCcTableList>();
        c->parent = this;
        receivercctable_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::RepipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : receivercctable_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmccItems::RepipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmccItems::RepipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmccItems::RepipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReceiverCcTable-list")
        return true;
    return false;
}

System::NbmccItems::RepipItems::ReceiverCcTableList::ReceiverCcTableList()
    :
    reporterip{YType::str, "reporterIP"},
    srcip{YType::str, "srcIP"},
    destip{YType::str, "destIP"},
    oif{YType::uint8, "oif"},
    dummyproperty1{YType::uint32, "dummyproperty1"},
    dummyproperty2{YType::uint32, "dummyproperty2"},
    dummyproperty3{YType::uint32, "dummyproperty3"}
{

    yang_name = "ReceiverCcTable-list"; yang_parent_name = "repip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmccItems::RepipItems::ReceiverCcTableList::~ReceiverCcTableList()
{
}

bool System::NbmccItems::RepipItems::ReceiverCcTableList::has_data() const
{
    if (is_presence_container) return true;
    return reporterip.is_set
	|| srcip.is_set
	|| destip.is_set
	|| oif.is_set
	|| dummyproperty1.is_set
	|| dummyproperty2.is_set
	|| dummyproperty3.is_set;
}

bool System::NbmccItems::RepipItems::ReceiverCcTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reporterip.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(destip.yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(dummyproperty1.yfilter)
	|| ydk::is_set(dummyproperty2.yfilter)
	|| ydk::is_set(dummyproperty3.yfilter);
}

std::string System::NbmccItems::RepipItems::ReceiverCcTableList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmcc-items/repip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmccItems::RepipItems::ReceiverCcTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReceiverCcTable-list";
    ADD_KEY_TOKEN(reporterip, "reporterIP");
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(destip, "destIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmccItems::RepipItems::ReceiverCcTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reporterip.is_set || is_set(reporterip.yfilter)) leaf_name_data.push_back(reporterip.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());
    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (dummyproperty1.is_set || is_set(dummyproperty1.yfilter)) leaf_name_data.push_back(dummyproperty1.get_name_leafdata());
    if (dummyproperty2.is_set || is_set(dummyproperty2.yfilter)) leaf_name_data.push_back(dummyproperty2.get_name_leafdata());
    if (dummyproperty3.is_set || is_set(dummyproperty3.yfilter)) leaf_name_data.push_back(dummyproperty3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmccItems::RepipItems::ReceiverCcTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmccItems::RepipItems::ReceiverCcTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmccItems::RepipItems::ReceiverCcTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reporterIP")
    {
        reporterip = value;
        reporterip.value_namespace = name_space;
        reporterip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destIP")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oif")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty1")
    {
        dummyproperty1 = value;
        dummyproperty1.value_namespace = name_space;
        dummyproperty1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty2")
    {
        dummyproperty2 = value;
        dummyproperty2.value_namespace = name_space;
        dummyproperty2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummyproperty3")
    {
        dummyproperty3 = value;
        dummyproperty3.value_namespace = name_space;
        dummyproperty3.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmccItems::RepipItems::ReceiverCcTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reporterIP")
    {
        reporterip.yfilter = yfilter;
    }
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "destIP")
    {
        destip.yfilter = yfilter;
    }
    if(value_path == "oif")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "dummyproperty1")
    {
        dummyproperty1.yfilter = yfilter;
    }
    if(value_path == "dummyproperty2")
    {
        dummyproperty2.yfilter = yfilter;
    }
    if(value_path == "dummyproperty3")
    {
        dummyproperty3.yfilter = yfilter;
    }
}

bool System::NbmccItems::RepipItems::ReceiverCcTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reporterIP" || name == "srcIP" || name == "destIP" || name == "oif" || name == "dummyproperty1" || name == "dummyproperty2" || name == "dummyproperty3")
        return true;
    return false;
}

System::NbmFlowsTableItems::NbmFlowsTableItems()
    :
    mode{YType::str, "mode"}
        ,
    flowop_items(std::make_shared<System::NbmFlowsTableItems::FlowOpItems>())
    , srcip_items(std::make_shared<System::NbmFlowsTableItems::SrcIPItems>())
    , iif_items(std::make_shared<System::NbmFlowsTableItems::IifItems>())
{
    flowop_items->parent = this;
    srcip_items->parent = this;
    iif_items->parent = this;

    yang_name = "nbmFlowsTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::~NbmFlowsTableItems()
{
}

bool System::NbmFlowsTableItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| (flowop_items !=  nullptr && flowop_items->has_data())
	|| (srcip_items !=  nullptr && srcip_items->has_data())
	|| (iif_items !=  nullptr && iif_items->has_data());
}

bool System::NbmFlowsTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (flowop_items !=  nullptr && flowop_items->has_operation())
	|| (srcip_items !=  nullptr && srcip_items->has_operation())
	|| (iif_items !=  nullptr && iif_items->has_operation());
}

std::string System::NbmFlowsTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbmFlowsTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowOp-items")
    {
        if(flowop_items == nullptr)
        {
            flowop_items = std::make_shared<System::NbmFlowsTableItems::FlowOpItems>();
        }
        return flowop_items;
    }

    if(child_yang_name == "srcIP-items")
    {
        if(srcip_items == nullptr)
        {
            srcip_items = std::make_shared<System::NbmFlowsTableItems::SrcIPItems>();
        }
        return srcip_items;
    }

    if(child_yang_name == "iif-items")
    {
        if(iif_items == nullptr)
        {
            iif_items = std::make_shared<System::NbmFlowsTableItems::IifItems>();
        }
        return iif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flowop_items != nullptr)
    {
        children["flowOp-items"] = flowop_items;
    }

    if(srcip_items != nullptr)
    {
        children["srcIP-items"] = srcip_items;
    }

    if(iif_items != nullptr)
    {
        children["iif-items"] = iif_items;
    }

    return children;
}

void System::NbmFlowsTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmFlowsTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::NbmFlowsTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowOp-items" || name == "srcIP-items" || name == "iif-items" || name == "mode")
        return true;
    return false;
}

System::NbmFlowsTableItems::FlowOpItems::FlowOpItems()
    :
    nbmflowentity_list(this, {"flowop", "srcip", "dstip", "egressif"})
{

    yang_name = "flowOp-items"; yang_parent_name = "nbmFlowsTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::FlowOpItems::~FlowOpItems()
{
}

bool System::NbmFlowsTableItems::FlowOpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmflowentity_list.len(); index++)
    {
        if(nbmflowentity_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmFlowsTableItems::FlowOpItems::has_operation() const
{
    for (std::size_t index=0; index<nbmflowentity_list.len(); index++)
    {
        if(nbmflowentity_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmFlowsTableItems::FlowOpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::FlowOpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowOp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::FlowOpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::FlowOpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmFlowEntity-list")
    {
        auto c = std::make_shared<System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList>();
        c->parent = this;
        nbmflowentity_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::FlowOpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmflowentity_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmFlowsTableItems::FlowOpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmFlowsTableItems::FlowOpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmFlowsTableItems::FlowOpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmFlowEntity-list")
        return true;
    return false;
}

System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::NbmFlowEntityList()
    :
    flowop{YType::enumeration, "flowOp"},
    srcip{YType::str, "srcIP"},
    dstip{YType::str, "dstIP"},
    egressif{YType::uint32, "egressIf"},
    controllerip{YType::str, "controllerIP"},
    controllervip{YType::str, "controllerVIP"},
    reporterip{YType::str, "reporterIP"},
    ingressif{YType::uint32, "ingressIf"},
    egressifcount{YType::uint32, "egressIfCount"},
    seqnum{YType::uint32, "seqNum"},
    dscp{YType::uint32, "dscp"},
    bandwidthunit{YType::enumeration, "bandwidthUnit"},
    bandwidth{YType::uint32, "bandwidth"},
    queueid{YType::uint8, "queueId"},
    switchiif{YType::uint8, "switchIif"}
{

    yang_name = "NbmFlowEntity-list"; yang_parent_name = "flowOp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::~NbmFlowEntityList()
{
}

bool System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::has_data() const
{
    if (is_presence_container) return true;
    return flowop.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| egressif.is_set
	|| controllerip.is_set
	|| controllervip.is_set
	|| reporterip.is_set
	|| ingressif.is_set
	|| egressifcount.is_set
	|| seqnum.is_set
	|| dscp.is_set
	|| bandwidthunit.is_set
	|| bandwidth.is_set
	|| queueid.is_set
	|| switchiif.is_set;
}

bool System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flowop.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(controllerip.yfilter)
	|| ydk::is_set(controllervip.yfilter)
	|| ydk::is_set(reporterip.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(egressifcount.yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(bandwidthunit.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(queueid.yfilter)
	|| ydk::is_set(switchiif.yfilter);
}

std::string System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/flowOp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmFlowEntity-list";
    ADD_KEY_TOKEN(flowop, "flowOp");
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(dstip, "dstIP");
    ADD_KEY_TOKEN(egressif, "egressIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flowop.is_set || is_set(flowop.yfilter)) leaf_name_data.push_back(flowop.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (controllerip.is_set || is_set(controllerip.yfilter)) leaf_name_data.push_back(controllerip.get_name_leafdata());
    if (controllervip.is_set || is_set(controllervip.yfilter)) leaf_name_data.push_back(controllervip.get_name_leafdata());
    if (reporterip.is_set || is_set(reporterip.yfilter)) leaf_name_data.push_back(reporterip.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (egressifcount.is_set || is_set(egressifcount.yfilter)) leaf_name_data.push_back(egressifcount.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (bandwidthunit.is_set || is_set(bandwidthunit.yfilter)) leaf_name_data.push_back(bandwidthunit.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (queueid.is_set || is_set(queueid.yfilter)) leaf_name_data.push_back(queueid.get_name_leafdata());
    if (switchiif.is_set || is_set(switchiif.yfilter)) leaf_name_data.push_back(switchiif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flowOp")
    {
        flowop = value;
        flowop.value_namespace = name_space;
        flowop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIP")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerIP")
    {
        controllerip = value;
        controllerip.value_namespace = name_space;
        controllerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerVIP")
    {
        controllervip = value;
        controllervip.value_namespace = name_space;
        controllervip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporterIP")
    {
        reporterip = value;
        reporterip.value_namespace = name_space;
        reporterip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIfCount")
    {
        egressifcount = value;
        egressifcount.value_namespace = name_space;
        egressifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidthUnit")
    {
        bandwidthunit = value;
        bandwidthunit.value_namespace = name_space;
        bandwidthunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queueId")
    {
        queueid = value;
        queueid.value_namespace = name_space;
        queueid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchIif")
    {
        switchiif = value;
        switchiif.value_namespace = name_space;
        switchiif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flowOp")
    {
        flowop.yfilter = yfilter;
    }
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIP")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "controllerIP")
    {
        controllerip.yfilter = yfilter;
    }
    if(value_path == "controllerVIP")
    {
        controllervip.yfilter = yfilter;
    }
    if(value_path == "reporterIP")
    {
        reporterip.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "egressIfCount")
    {
        egressifcount.yfilter = yfilter;
    }
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "bandwidthUnit")
    {
        bandwidthunit.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "queueId")
    {
        queueid.yfilter = yfilter;
    }
    if(value_path == "switchIif")
    {
        switchiif.yfilter = yfilter;
    }
}

bool System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowOp" || name == "srcIP" || name == "dstIP" || name == "egressIf" || name == "controllerIP" || name == "controllerVIP" || name == "reporterIP" || name == "ingressIf" || name == "egressIfCount" || name == "seqNum" || name == "dscp" || name == "bandwidthUnit" || name == "bandwidth" || name == "queueId" || name == "switchIif")
        return true;
    return false;
}

System::NbmFlowsTableItems::SrcIPItems::SrcIPItems()
    :
    nbmoifcounter_list(this, {"srcip", "dstip"})
{

    yang_name = "srcIP-items"; yang_parent_name = "nbmFlowsTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::SrcIPItems::~SrcIPItems()
{
}

bool System::NbmFlowsTableItems::SrcIPItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmoifcounter_list.len(); index++)
    {
        if(nbmoifcounter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmFlowsTableItems::SrcIPItems::has_operation() const
{
    for (std::size_t index=0; index<nbmoifcounter_list.len(); index++)
    {
        if(nbmoifcounter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmFlowsTableItems::SrcIPItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::SrcIPItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIP-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::SrcIPItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::SrcIPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmOifCounter-list")
    {
        auto c = std::make_shared<System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList>();
        c->parent = this;
        nbmoifcounter_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::SrcIPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmoifcounter_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmFlowsTableItems::SrcIPItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmFlowsTableItems::SrcIPItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmFlowsTableItems::SrcIPItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmOifCounter-list")
        return true;
    return false;
}

System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::NbmOifCounterList()
    :
    srcip{YType::str, "srcIP"},
    dstip{YType::str, "dstIP"},
    oifcount{YType::uint32, "oifCount"}
{

    yang_name = "NbmOifCounter-list"; yang_parent_name = "srcIP-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::~NbmOifCounterList()
{
}

bool System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| dstip.is_set
	|| oifcount.is_set;
}

bool System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(oifcount.yfilter);
}

std::string System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/srcIP-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmOifCounter-list";
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(dstip, "dstIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIP")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIP")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
}

bool System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIP" || name == "dstIP" || name == "oifCount")
        return true;
    return false;
}

System::NbmFlowsTableItems::IifItems::IifItems()
    :
    nbmupdateiif_list(this, {"newingressif", "srcip", "dstip"})
{

    yang_name = "iif-items"; yang_parent_name = "nbmFlowsTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::IifItems::~IifItems()
{
}

bool System::NbmFlowsTableItems::IifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmupdateiif_list.len(); index++)
    {
        if(nbmupdateiif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmFlowsTableItems::IifItems::has_operation() const
{
    for (std::size_t index=0; index<nbmupdateiif_list.len(); index++)
    {
        if(nbmupdateiif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmFlowsTableItems::IifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::IifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::IifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::IifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmUpdateIif-list")
    {
        auto c = std::make_shared<System::NbmFlowsTableItems::IifItems::NbmUpdateIifList>();
        c->parent = this;
        nbmupdateiif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::IifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmupdateiif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmFlowsTableItems::IifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmFlowsTableItems::IifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmFlowsTableItems::IifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmUpdateIif-list")
        return true;
    return false;
}

System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::NbmUpdateIifList()
    :
    newingressif{YType::uint32, "newIngressIf"},
    srcip{YType::str, "srcIP"},
    dstip{YType::str, "dstIP"},
    previngressif{YType::uint32, "prevIngressIf"},
    seqnum{YType::uint32, "seqNum"}
{

    yang_name = "NbmUpdateIif-list"; yang_parent_name = "iif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::~NbmUpdateIifList()
{
}

bool System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::has_data() const
{
    if (is_presence_container) return true;
    return newingressif.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| previngressif.is_set
	|| seqnum.is_set;
}

bool System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(newingressif.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(previngressif.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmFlowsTable-items/iif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmUpdateIif-list";
    ADD_KEY_TOKEN(newingressif, "newIngressIf");
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(dstip, "dstIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (newingressif.is_set || is_set(newingressif.yfilter)) leaf_name_data.push_back(newingressif.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (previngressif.is_set || is_set(previngressif.yfilter)) leaf_name_data.push_back(previngressif.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "newIngressIf")
    {
        newingressif = value;
        newingressif.value_namespace = name_space;
        newingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIP")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevIngressIf")
    {
        previngressif = value;
        previngressif.value_namespace = name_space;
        previngressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "newIngressIf")
    {
        newingressif.yfilter = yfilter;
    }
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIP")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "prevIngressIf")
    {
        previngressif.yfilter = yfilter;
    }
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool System::NbmFlowsTableItems::IifItems::NbmUpdateIifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newIngressIf" || name == "srcIP" || name == "dstIP" || name == "prevIngressIf" || name == "seqNum")
        return true;
    return false;
}

System::NbmStatsItems::NbmStatsItems()
    :
    srcip_items(std::make_shared<System::NbmStatsItems::SrcIPItems>())
{
    srcip_items->parent = this;

    yang_name = "nbmStats-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmStatsItems::~NbmStatsItems()
{
}

bool System::NbmStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (srcip_items !=  nullptr && srcip_items->has_data());
}

bool System::NbmStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (srcip_items !=  nullptr && srcip_items->has_operation());
}

std::string System::NbmStatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbmStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srcIP-items")
    {
        if(srcip_items == nullptr)
        {
            srcip_items = std::make_shared<System::NbmStatsItems::SrcIPItems>();
        }
        return srcip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srcip_items != nullptr)
    {
        children["srcIP-items"] = srcip_items;
    }

    return children;
}

void System::NbmStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIP-items")
        return true;
    return false;
}

System::NbmStatsItems::SrcIPItems::SrcIPItems()
    :
    nbmstatsentity_list(this, {"srcip", "dstip"})
{

    yang_name = "srcIP-items"; yang_parent_name = "nbmStats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmStatsItems::SrcIPItems::~SrcIPItems()
{
}

bool System::NbmStatsItems::SrcIPItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmstatsentity_list.len(); index++)
    {
        if(nbmstatsentity_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmStatsItems::SrcIPItems::has_operation() const
{
    for (std::size_t index=0; index<nbmstatsentity_list.len(); index++)
    {
        if(nbmstatsentity_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmStatsItems::SrcIPItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmStats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmStatsItems::SrcIPItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srcIP-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmStatsItems::SrcIPItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmStatsItems::SrcIPItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmStatsEntity-list")
    {
        auto c = std::make_shared<System::NbmStatsItems::SrcIPItems::NbmStatsEntityList>();
        c->parent = this;
        nbmstatsentity_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmStatsItems::SrcIPItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbmstatsentity_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmStatsItems::SrcIPItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmStatsItems::SrcIPItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmStatsItems::SrcIPItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmStatsEntity-list")
        return true;
    return false;
}

System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::NbmStatsEntityList()
    :
    srcip{YType::str, "srcIP"},
    dstip{YType::str, "dstIP"},
    allowedpkts{YType::uint64, "allowedPkts"},
    allowedbytes{YType::uint64, "allowedBytes"},
    deniedpkts{YType::uint64, "deniedPkts"},
    deniedbytes{YType::uint64, "deniedBytes"},
    totalpkts{YType::uint64, "totalPkts"},
    totalbytes{YType::uint64, "totalBytes"},
    tstamp{YType::uint64, "tStamp"}
{

    yang_name = "NbmStatsEntity-list"; yang_parent_name = "srcIP-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::~NbmStatsEntityList()
{
}

bool System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| dstip.is_set
	|| allowedpkts.is_set
	|| allowedbytes.is_set
	|| deniedpkts.is_set
	|| deniedbytes.is_set
	|| totalpkts.is_set
	|| totalbytes.is_set
	|| tstamp.is_set;
}

bool System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(allowedpkts.yfilter)
	|| ydk::is_set(allowedbytes.yfilter)
	|| ydk::is_set(deniedpkts.yfilter)
	|| ydk::is_set(deniedbytes.yfilter)
	|| ydk::is_set(totalpkts.yfilter)
	|| ydk::is_set(totalbytes.yfilter)
	|| ydk::is_set(tstamp.yfilter);
}

std::string System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbmStats-items/srcIP-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmStatsEntity-list";
    ADD_KEY_TOKEN(srcip, "srcIP");
    ADD_KEY_TOKEN(dstip, "dstIP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (allowedpkts.is_set || is_set(allowedpkts.yfilter)) leaf_name_data.push_back(allowedpkts.get_name_leafdata());
    if (allowedbytes.is_set || is_set(allowedbytes.yfilter)) leaf_name_data.push_back(allowedbytes.get_name_leafdata());
    if (deniedpkts.is_set || is_set(deniedpkts.yfilter)) leaf_name_data.push_back(deniedpkts.get_name_leafdata());
    if (deniedbytes.is_set || is_set(deniedbytes.yfilter)) leaf_name_data.push_back(deniedbytes.get_name_leafdata());
    if (totalpkts.is_set || is_set(totalpkts.yfilter)) leaf_name_data.push_back(totalpkts.get_name_leafdata());
    if (totalbytes.is_set || is_set(totalbytes.yfilter)) leaf_name_data.push_back(totalbytes.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcIP")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIP")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedPkts")
    {
        allowedpkts = value;
        allowedpkts.value_namespace = name_space;
        allowedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedBytes")
    {
        allowedbytes = value;
        allowedbytes.value_namespace = name_space;
        allowedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deniedPkts")
    {
        deniedpkts = value;
        deniedpkts.value_namespace = name_space;
        deniedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deniedBytes")
    {
        deniedbytes = value;
        deniedbytes.value_namespace = name_space;
        deniedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPkts")
    {
        totalpkts = value;
        totalpkts.value_namespace = name_space;
        totalpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalBytes")
    {
        totalbytes = value;
        totalbytes.value_namespace = name_space;
        totalbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tStamp")
    {
        tstamp = value;
        tstamp.value_namespace = name_space;
        tstamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcIP")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIP")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "allowedPkts")
    {
        allowedpkts.yfilter = yfilter;
    }
    if(value_path == "allowedBytes")
    {
        allowedbytes.yfilter = yfilter;
    }
    if(value_path == "deniedPkts")
    {
        deniedpkts.yfilter = yfilter;
    }
    if(value_path == "deniedBytes")
    {
        deniedbytes.yfilter = yfilter;
    }
    if(value_path == "totalPkts")
    {
        totalpkts.yfilter = yfilter;
    }
    if(value_path == "totalBytes")
    {
        totalbytes.yfilter = yfilter;
    }
    if(value_path == "tStamp")
    {
        tstamp.yfilter = yfilter;
    }
}

bool System::NbmStatsItems::SrcIPItems::NbmStatsEntityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcIP" || name == "dstIP" || name == "allowedPkts" || name == "allowedBytes" || name == "deniedPkts" || name == "deniedBytes" || name == "totalPkts" || name == "totalBytes" || name == "tStamp")
        return true;
    return false;
}

System::BootItems::BootItems()
    :
    poap{YType::enumeration, "poap"}
        ,
    image_items(std::make_shared<System::BootItems::ImageItems>())
{
    image_items->parent = this;

    yang_name = "boot-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BootItems::~BootItems()
{
}

bool System::BootItems::has_data() const
{
    if (is_presence_container) return true;
    return poap.is_set
	|| (image_items !=  nullptr && image_items->has_data());
}

bool System::BootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poap.yfilter)
	|| (image_items !=  nullptr && image_items->has_operation());
}

std::string System::BootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poap.is_set || is_set(poap.yfilter)) leaf_name_data.push_back(poap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "image-items")
    {
        if(image_items == nullptr)
        {
            image_items = std::make_shared<System::BootItems::ImageItems>();
        }
        return image_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(image_items != nullptr)
    {
        children["image-items"] = image_items;
    }

    return children;
}

void System::BootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poap")
    {
        poap = value;
        poap.value_namespace = name_space;
        poap.value_namespace_prefix = name_space_prefix;
    }
}

void System::BootItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poap")
    {
        poap.yfilter = yfilter;
    }
}

bool System::BootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "image-items" || name == "poap")
        return true;
    return false;
}

System::BootItems::ImageItems::ImageItems()
    :
    sup1{YType::str, "sup1"},
    sup2{YType::str, "sup2"},
    image_err{YType::str, "image_err"},
    sup1nextreload{YType::str, "sup1NextReload"},
    sup2nextreload{YType::str, "sup2NextReload"}
{

    yang_name = "image-items"; yang_parent_name = "boot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BootItems::ImageItems::~ImageItems()
{
}

bool System::BootItems::ImageItems::has_data() const
{
    if (is_presence_container) return true;
    return sup1.is_set
	|| sup2.is_set
	|| image_err.is_set
	|| sup1nextreload.is_set
	|| sup2nextreload.is_set;
}

bool System::BootItems::ImageItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sup1.yfilter)
	|| ydk::is_set(sup2.yfilter)
	|| ydk::is_set(image_err.yfilter)
	|| ydk::is_set(sup1nextreload.yfilter)
	|| ydk::is_set(sup2nextreload.yfilter);
}

std::string System::BootItems::ImageItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/boot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BootItems::ImageItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "image-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BootItems::ImageItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sup1.is_set || is_set(sup1.yfilter)) leaf_name_data.push_back(sup1.get_name_leafdata());
    if (sup2.is_set || is_set(sup2.yfilter)) leaf_name_data.push_back(sup2.get_name_leafdata());
    if (image_err.is_set || is_set(image_err.yfilter)) leaf_name_data.push_back(image_err.get_name_leafdata());
    if (sup1nextreload.is_set || is_set(sup1nextreload.yfilter)) leaf_name_data.push_back(sup1nextreload.get_name_leafdata());
    if (sup2nextreload.is_set || is_set(sup2nextreload.yfilter)) leaf_name_data.push_back(sup2nextreload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BootItems::ImageItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BootItems::ImageItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BootItems::ImageItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sup1")
    {
        sup1 = value;
        sup1.value_namespace = name_space;
        sup1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sup2")
    {
        sup2 = value;
        sup2.value_namespace = name_space;
        sup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "image_err")
    {
        image_err = value;
        image_err.value_namespace = name_space;
        image_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sup1NextReload")
    {
        sup1nextreload = value;
        sup1nextreload.value_namespace = name_space;
        sup1nextreload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sup2NextReload")
    {
        sup2nextreload = value;
        sup2nextreload.value_namespace = name_space;
        sup2nextreload.value_namespace_prefix = name_space_prefix;
    }
}

void System::BootItems::ImageItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sup1")
    {
        sup1.yfilter = yfilter;
    }
    if(value_path == "sup2")
    {
        sup2.yfilter = yfilter;
    }
    if(value_path == "image_err")
    {
        image_err.yfilter = yfilter;
    }
    if(value_path == "sup1NextReload")
    {
        sup1nextreload.yfilter = yfilter;
    }
    if(value_path == "sup2NextReload")
    {
        sup2nextreload.yfilter = yfilter;
    }
}

bool System::BootItems::ImageItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup1" || name == "sup2" || name == "image_err" || name == "sup1NextReload" || name == "sup2NextReload")
        return true;
    return false;
}

System::ChItems::ChItems()
    :
    role{YType::enumeration, "role"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    id{YType::uint32, "id"},
    descr{YType::str, "descr"}
        ,
    ejpol_items(std::make_shared<System::ChItems::EjpolItems>())
    , supslot_items(std::make_shared<System::ChItems::SupslotItems>())
    , lcslot_items(std::make_shared<System::ChItems::LcslotItems>())
    , fcslot_items(std::make_shared<System::ChItems::FcslotItems>())
    , scslot_items(std::make_shared<System::ChItems::ScslotItems>())
    , psuslot_items(std::make_shared<System::ChItems::PsuslotItems>())
    , ftslot_items(std::make_shared<System::ChItems::FtslotItems>())
    , spbp_items(std::make_shared<System::ChItems::SpbpItems>())
    , bslot_items(std::make_shared<System::ChItems::BslotItems>())
    , nslot_items(std::make_shared<System::ChItems::NslotItems>())
    , p_items(std::make_shared<System::ChItems::PItems>())
{
    ejpol_items->parent = this;
    supslot_items->parent = this;
    lcslot_items->parent = this;
    fcslot_items->parent = this;
    scslot_items->parent = this;
    psuslot_items->parent = this;
    ftslot_items->parent = this;
    spbp_items->parent = this;
    bslot_items->parent = this;
    nslot_items->parent = this;
    p_items->parent = this;

    yang_name = "ch-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::~ChItems()
{
}

bool System::ChItems::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| id.is_set
	|| descr.is_set
	|| (ejpol_items !=  nullptr && ejpol_items->has_data())
	|| (supslot_items !=  nullptr && supslot_items->has_data())
	|| (lcslot_items !=  nullptr && lcslot_items->has_data())
	|| (fcslot_items !=  nullptr && fcslot_items->has_data())
	|| (scslot_items !=  nullptr && scslot_items->has_data())
	|| (psuslot_items !=  nullptr && psuslot_items->has_data())
	|| (ftslot_items !=  nullptr && ftslot_items->has_data())
	|| (spbp_items !=  nullptr && spbp_items->has_data())
	|| (bslot_items !=  nullptr && bslot_items->has_data())
	|| (nslot_items !=  nullptr && nslot_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data());
}

bool System::ChItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ejpol_items !=  nullptr && ejpol_items->has_operation())
	|| (supslot_items !=  nullptr && supslot_items->has_operation())
	|| (lcslot_items !=  nullptr && lcslot_items->has_operation())
	|| (fcslot_items !=  nullptr && fcslot_items->has_operation())
	|| (scslot_items !=  nullptr && scslot_items->has_operation())
	|| (psuslot_items !=  nullptr && psuslot_items->has_operation())
	|| (ftslot_items !=  nullptr && ftslot_items->has_operation())
	|| (spbp_items !=  nullptr && spbp_items->has_operation())
	|| (bslot_items !=  nullptr && bslot_items->has_operation())
	|| (nslot_items !=  nullptr && nslot_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation());
}

std::string System::ChItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ejpol-items")
    {
        if(ejpol_items == nullptr)
        {
            ejpol_items = std::make_shared<System::ChItems::EjpolItems>();
        }
        return ejpol_items;
    }

    if(child_yang_name == "supslot-items")
    {
        if(supslot_items == nullptr)
        {
            supslot_items = std::make_shared<System::ChItems::SupslotItems>();
        }
        return supslot_items;
    }

    if(child_yang_name == "lcslot-items")
    {
        if(lcslot_items == nullptr)
        {
            lcslot_items = std::make_shared<System::ChItems::LcslotItems>();
        }
        return lcslot_items;
    }

    if(child_yang_name == "fcslot-items")
    {
        if(fcslot_items == nullptr)
        {
            fcslot_items = std::make_shared<System::ChItems::FcslotItems>();
        }
        return fcslot_items;
    }

    if(child_yang_name == "scslot-items")
    {
        if(scslot_items == nullptr)
        {
            scslot_items = std::make_shared<System::ChItems::ScslotItems>();
        }
        return scslot_items;
    }

    if(child_yang_name == "psuslot-items")
    {
        if(psuslot_items == nullptr)
        {
            psuslot_items = std::make_shared<System::ChItems::PsuslotItems>();
        }
        return psuslot_items;
    }

    if(child_yang_name == "ftslot-items")
    {
        if(ftslot_items == nullptr)
        {
            ftslot_items = std::make_shared<System::ChItems::FtslotItems>();
        }
        return ftslot_items;
    }

    if(child_yang_name == "spbp-items")
    {
        if(spbp_items == nullptr)
        {
            spbp_items = std::make_shared<System::ChItems::SpbpItems>();
        }
        return spbp_items;
    }

    if(child_yang_name == "bslot-items")
    {
        if(bslot_items == nullptr)
        {
            bslot_items = std::make_shared<System::ChItems::BslotItems>();
        }
        return bslot_items;
    }

    if(child_yang_name == "nslot-items")
    {
        if(nslot_items == nullptr)
        {
            nslot_items = std::make_shared<System::ChItems::NslotItems>();
        }
        return nslot_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::ChItems::PItems>();
        }
        return p_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ejpol_items != nullptr)
    {
        children["ejpol-items"] = ejpol_items;
    }

    if(supslot_items != nullptr)
    {
        children["supslot-items"] = supslot_items;
    }

    if(lcslot_items != nullptr)
    {
        children["lcslot-items"] = lcslot_items;
    }

    if(fcslot_items != nullptr)
    {
        children["fcslot-items"] = fcslot_items;
    }

    if(scslot_items != nullptr)
    {
        children["scslot-items"] = scslot_items;
    }

    if(psuslot_items != nullptr)
    {
        children["psuslot-items"] = psuslot_items;
    }

    if(ftslot_items != nullptr)
    {
        children["ftslot-items"] = ftslot_items;
    }

    if(spbp_items != nullptr)
    {
        children["spbp-items"] = spbp_items;
    }

    if(bslot_items != nullptr)
    {
        children["bslot-items"] = bslot_items;
    }

    if(nslot_items != nullptr)
    {
        children["nslot-items"] = nslot_items;
    }

    if(p_items != nullptr)
    {
        children["p-items"] = p_items;
    }

    return children;
}

void System::ChItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ejpol-items" || name == "supslot-items" || name == "lcslot-items" || name == "fcslot-items" || name == "scslot-items" || name == "psuslot-items" || name == "ftslot-items" || name == "spbp-items" || name == "bslot-items" || name == "nslot-items" || name == "p-items" || name == "role" || name == "operSt" || name == "operStQual" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "id" || name == "descr")
        return true;
    return false;
}

System::ChItems::EjpolItems::EjpolItems()
    :
    ejpol_list(this, {"id"})
{

    yang_name = "ejpol-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::EjpolItems::~EjpolItems()
{
}

bool System::ChItems::EjpolItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejpol_list.len(); index++)
    {
        if(ejpol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::EjpolItems::has_operation() const
{
    for (std::size_t index=0; index<ejpol_list.len(); index++)
    {
        if(ejpol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::EjpolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::EjpolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ejpol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::EjpolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::EjpolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EjPol-list")
    {
        auto c = std::make_shared<System::ChItems::EjpolItems::EjPolList>();
        c->parent = this;
        ejpol_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::EjpolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejpol_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::EjpolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::EjpolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::EjpolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EjPol-list")
        return true;
    return false;
}

System::ChItems::EjpolItems::EjPolList::EjPolList()
    :
    id{YType::uint32, "id"},
    autosh{YType::enumeration, "autoSh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "EjPol-list"; yang_parent_name = "ejpol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::EjpolItems::EjPolList::~EjPolList()
{
}

bool System::ChItems::EjpolItems::EjPolList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| autosh.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::EjpolItems::EjPolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(autosh.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::EjpolItems::EjPolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/ejpol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::EjpolItems::EjPolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EjPol-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::EjpolItems::EjPolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (autosh.is_set || is_set(autosh.yfilter)) leaf_name_data.push_back(autosh.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::EjpolItems::EjPolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::EjpolItems::EjPolList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::EjpolItems::EjPolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoSh")
    {
        autosh = value;
        autosh.value_namespace = name_space;
        autosh.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::EjpolItems::EjPolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "autoSh")
    {
        autosh.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::EjpolItems::EjPolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "autoSh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupslotItems()
    :
    supcslot_list(this, {"id"})
{

    yang_name = "supslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SupslotItems::~SupslotItems()
{
}

bool System::ChItems::SupslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supcslot_list.len(); index++)
    {
        if(supcslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::has_operation() const
{
    for (std::size_t index=0; index<supcslot_list.len(); index++)
    {
        if(supcslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SupslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupCSlot-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList>();
        c->parent = this;
        supcslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : supcslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupCSlot-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupCSlotList()
    :
    id{YType::uint32, "id"},
    poweroff{YType::enumeration, "poweroff"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    sup_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems>())
{
    sup_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "SupCSlot-list"; yang_parent_name = "supslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SupslotItems::SupCSlotList::~SupCSlotList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| poweroff.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (sup_items !=  nullptr && sup_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poweroff.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (sup_items !=  nullptr && sup_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/supslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SupslotItems::SupCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poweroff.is_set || is_set(poweroff.yfilter)) leaf_name_data.push_back(poweroff.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sup-items")
    {
        if(sup_items == nullptr)
        {
            sup_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems>();
        }
        return sup_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sup_items != nullptr)
    {
        children["sup-items"] = sup_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroff")
    {
        poweroff = value;
        poweroff.value_namespace = name_space;
        poweroff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poweroff")
    {
        poweroff.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup-items" || name == "rtoosSlot-items" || name == "id" || name == "poweroff" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SupItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    rdst{YType::enumeration, "rdSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    macb{YType::str, "macB"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    running_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems>())
    , eobc_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems>())
    , epc_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems>())
    , mgmt_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems>())
    , console_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems>())
    , sensor_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems>())
    , spsup_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems>())
    , asic_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    eobc_items->parent = this;
    epc_items->parent = this;
    mgmt_items->parent = this;
    console_items->parent = this;
    sensor_items->parent = this;
    spsup_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "sup-items"; yang_parent_name = "SupCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::~SupItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| rdst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| macb.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (epc_items !=  nullptr && epc_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (console_items !=  nullptr && console_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (spsup_items !=  nullptr && spsup_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(rdst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (epc_items !=  nullptr && epc_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (console_items !=  nullptr && console_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (spsup_items !=  nullptr && spsup_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (rdst.is_set || is_set(rdst.yfilter)) leaf_name_data.push_back(rdst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "epc-items")
    {
        if(epc_items == nullptr)
        {
            epc_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems>();
        }
        return epc_items;
    }

    if(child_yang_name == "mgmt-items")
    {
        if(mgmt_items == nullptr)
        {
            mgmt_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems>();
        }
        return mgmt_items;
    }

    if(child_yang_name == "console-items")
    {
        if(console_items == nullptr)
        {
            console_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems>();
        }
        return console_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "spsup-items")
    {
        if(spsup_items == nullptr)
        {
            spsup_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems>();
        }
        return spsup_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(ej_items != nullptr)
    {
        children["ej-items"] = ej_items;
    }

    if(eobc_items != nullptr)
    {
        children["eobc-items"] = eobc_items;
    }

    if(epc_items != nullptr)
    {
        children["epc-items"] = epc_items;
    }

    if(mgmt_items != nullptr)
    {
        children["mgmt-items"] = mgmt_items;
    }

    if(console_items != nullptr)
    {
        children["console-items"] = console_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(spsup_items != nullptr)
    {
        children["spsup-items"] = spsup_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rdSt")
    {
        rdst = value;
        rdst.value_namespace = name_space;
        rdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "rdSt")
    {
        rdst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "eobc-items" || name == "epc-items" || name == "mgmt-items" || name == "console-items" || name == "sensor-items" || name == "spsup-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
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

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::~EjItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList>();
        c->parent = this;
        ejec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList>();
        c->parent = this;
        eobcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eobcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcItems()
    :
    epcp_list(this, {"id"})
{

    yang_name = "epc-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::~EpcItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::has_operation() const
{
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpcP-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList>();
        c->parent = this;
        epcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpcP-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::EpcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EpcP-list"; yang_parent_name = "epc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::~EpcPList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtItems()
    :
    mgmtp_list(this, {"id"})
{

    yang_name = "mgmt-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::~MgmtItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgmtp_list.len(); index++)
    {
        if(mgmtp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::has_operation() const
{
    for (std::size_t index=0; index<mgmtp_list.len(); index++)
    {
        if(mgmtp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MgmtP-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList>();
        c->parent = this;
        mgmtp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mgmtp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MgmtP-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::MgmtPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "MgmtP-list"; yang_parent_name = "mgmt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::~MgmtPList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MgmtP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsoleItems()
    :
    consp_list(this, {"id"})
{

    yang_name = "console-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::~ConsoleItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<consp_list.len(); index++)
    {
        if(consp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::has_operation() const
{
    for (std::size_t index=0; index<consp_list.len(); index++)
    {
        if(consp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConsP-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList>();
        c->parent = this;
        consp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : consp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConsP-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::ConsPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "ConsP-list"; yang_parent_name = "console-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::~ConsPList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConsP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems>())
    , spsupblk_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems>())
    , sppd_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    spsupblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "spsup-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::~SpsupItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spsupblk-items")
    {
        if(spsupblk_items == nullptr)
        {
            spsupblk_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems>();
        }
        return spsupblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spsupblk_items != nullptr)
    {
        children["spsupblk-items"] = spsupblk_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        children["spsensorblk-items"] = spsensorblk_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spsupblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsupblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "spsupblk-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::~SpsupblkItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsupblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsupblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "spsupblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "SupCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ChItems::LcslotItems::LcslotItems()
    :
    lcslot_list(this, {"id"})
{

    yang_name = "lcslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LcslotItems::~LcslotItems()
{
}

bool System::ChItems::LcslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lcslot_list.len(); index++)
    {
        if(lcslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::has_operation() const
{
    for (std::size_t index=0; index<lcslot_list.len(); index++)
    {
        if(lcslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LcslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LCSlot-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList>();
        c->parent = this;
        lcslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lcslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LCSlot-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LCSlotList()
    :
    id{YType::uint32, "id"},
    purgecfg{YType::boolean, "purgeCfg"},
    poweroff{YType::enumeration, "poweroff"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    lc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems>())
{
    lc_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "LCSlot-list"; yang_parent_name = "lcslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LcslotItems::LCSlotList::~LCSlotList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| purgecfg.is_set
	|| poweroff.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (lc_items !=  nullptr && lc_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(purgecfg.yfilter)
	|| ydk::is_set(poweroff.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (lc_items !=  nullptr && lc_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/lcslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LcslotItems::LCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (purgecfg.is_set || is_set(purgecfg.yfilter)) leaf_name_data.push_back(purgecfg.get_name_leafdata());
    if (poweroff.is_set || is_set(poweroff.yfilter)) leaf_name_data.push_back(poweroff.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-items")
    {
        if(lc_items == nullptr)
        {
            lc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems>();
        }
        return lc_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lc_items != nullptr)
    {
        children["lc-items"] = lc_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgeCfg")
    {
        purgecfg = value;
        purgecfg.value_namespace = name_space;
        purgecfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroff")
    {
        poweroff = value;
        poweroff.value_namespace = name_space;
        poweroff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "purgeCfg")
    {
        purgecfg.yfilter = yfilter;
    }
    if(value_path == "poweroff")
    {
        poweroff.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-items" || name == "rtoosSlot-items" || name == "id" || name == "purgeCfg" || name == "poweroff" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LcItems()
    :
    breakoutfactor{YType::uint32, "breakoutFactor"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    macb{YType::str, "macB"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    running_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems>())
    , eobc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems>())
    , fabport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems>())
    , leafport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems>())
    , hostextport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems>())
    , leafextport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems>())
    , sensor_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems>())
    , splc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems>())
    , asic_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    eobc_items->parent = this;
    fabport_items->parent = this;
    leafport_items->parent = this;
    hostextport_items->parent = this;
    leafextport_items->parent = this;
    sensor_items->parent = this;
    splc_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "lc-items"; yang_parent_name = "LCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::~LcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_data() const
{
    if (is_presence_container) return true;
    return breakoutfactor.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| macb.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (fabport_items !=  nullptr && fabport_items->has_data())
	|| (leafport_items !=  nullptr && leafport_items->has_data())
	|| (hostextport_items !=  nullptr && hostextport_items->has_data())
	|| (leafextport_items !=  nullptr && leafextport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (splc_items !=  nullptr && splc_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(breakoutfactor.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (fabport_items !=  nullptr && fabport_items->has_operation())
	|| (leafport_items !=  nullptr && leafport_items->has_operation())
	|| (hostextport_items !=  nullptr && hostextport_items->has_operation())
	|| (leafextport_items !=  nullptr && leafextport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (splc_items !=  nullptr && splc_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (breakoutfactor.is_set || is_set(breakoutfactor.yfilter)) leaf_name_data.push_back(breakoutfactor.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "fabport-items")
    {
        if(fabport_items == nullptr)
        {
            fabport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems>();
        }
        return fabport_items;
    }

    if(child_yang_name == "leafport-items")
    {
        if(leafport_items == nullptr)
        {
            leafport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems>();
        }
        return leafport_items;
    }

    if(child_yang_name == "hostextport-items")
    {
        if(hostextport_items == nullptr)
        {
            hostextport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems>();
        }
        return hostextport_items;
    }

    if(child_yang_name == "leafextport-items")
    {
        if(leafextport_items == nullptr)
        {
            leafextport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems>();
        }
        return leafextport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "splc-items")
    {
        if(splc_items == nullptr)
        {
            splc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems>();
        }
        return splc_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(ej_items != nullptr)
    {
        children["ej-items"] = ej_items;
    }

    if(eobc_items != nullptr)
    {
        children["eobc-items"] = eobc_items;
    }

    if(fabport_items != nullptr)
    {
        children["fabport-items"] = fabport_items;
    }

    if(leafport_items != nullptr)
    {
        children["leafport-items"] = leafport_items;
    }

    if(hostextport_items != nullptr)
    {
        children["hostextport-items"] = hostextport_items;
    }

    if(leafextport_items != nullptr)
    {
        children["leafextport-items"] = leafextport_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "breakoutFactor")
    {
        breakoutfactor = value;
        breakoutfactor.value_namespace = name_space;
        breakoutfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "breakoutFactor")
    {
        breakoutfactor.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "eobc-items" || name == "fabport-items" || name == "leafport-items" || name == "hostextport-items" || name == "leafextport-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "breakoutFactor" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
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

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::~EjItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList>();
        c->parent = this;
        ejec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList>();
        c->parent = this;
        eobcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eobcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabportItems()
    :
    fabp_list(this, {"id"})
{

    yang_name = "fabport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::~FabportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_operation() const
{
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabP-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList>();
        c->parent = this;
        fabp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::FabPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
        ,
    remoteport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems>())
{
    remoteport_items->parent = this;

    yang_name = "FabP-list"; yang_parent_name = "fabport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::~FabPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set
	|| (remoteport_items !=  nullptr && remoteport_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (remoteport_items !=  nullptr && remoteport_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remotePort-items")
    {
        if(remoteport_items == nullptr)
        {
            remoteport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems>();
        }
        return remoteport_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remoteport_items != nullptr)
    {
        children["remotePort-items"] = remoteport_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remotePort-items" || name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortItems()
    :
    remoteport_list(this, {"lldpadjepinstid"})
{

    yang_name = "remotePort-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::~RemotePortItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteport_list.len(); index++)
    {
        if(remoteport_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_operation() const
{
    for (std::size_t index=0; index<remoteport_list.len(); index++)
    {
        if(remoteport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotePort-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemotePort-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList>();
        c->parent = this;
        remoteport_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remoteport_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemotePort-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::RemotePortList()
    :
    lldpadjepinstid{YType::str, "lldpAdjEpInstId"},
    remoteportdesc{YType::str, "remotePortDesc"},
    remotesysdesc{YType::str, "remoteSysDesc"},
    remoteip{YType::str, "remoteIp"},
    localifid{YType::str, "LocalIfid"}
{

    yang_name = "RemotePort-list"; yang_parent_name = "remotePort-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::~RemotePortList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_data() const
{
    if (is_presence_container) return true;
    return lldpadjepinstid.is_set
	|| remoteportdesc.is_set
	|| remotesysdesc.is_set
	|| remoteip.is_set
	|| localifid.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpadjepinstid.yfilter)
	|| ydk::is_set(remoteportdesc.yfilter)
	|| ydk::is_set(remotesysdesc.yfilter)
	|| ydk::is_set(remoteip.yfilter)
	|| ydk::is_set(localifid.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemotePort-list";
    ADD_KEY_TOKEN(lldpadjepinstid, "lldpAdjEpInstId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpadjepinstid.is_set || is_set(lldpadjepinstid.yfilter)) leaf_name_data.push_back(lldpadjepinstid.get_name_leafdata());
    if (remoteportdesc.is_set || is_set(remoteportdesc.yfilter)) leaf_name_data.push_back(remoteportdesc.get_name_leafdata());
    if (remotesysdesc.is_set || is_set(remotesysdesc.yfilter)) leaf_name_data.push_back(remotesysdesc.get_name_leafdata());
    if (remoteip.is_set || is_set(remoteip.yfilter)) leaf_name_data.push_back(remoteip.get_name_leafdata());
    if (localifid.is_set || is_set(localifid.yfilter)) leaf_name_data.push_back(localifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpAdjEpInstId")
    {
        lldpadjepinstid = value;
        lldpadjepinstid.value_namespace = name_space;
        lldpadjepinstid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePortDesc")
    {
        remoteportdesc = value;
        remoteportdesc.value_namespace = name_space;
        remoteportdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteSysDesc")
    {
        remotesysdesc = value;
        remotesysdesc.value_namespace = name_space;
        remotesysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteIp")
    {
        remoteip = value;
        remoteip.value_namespace = name_space;
        remoteip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LocalIfid")
    {
        localifid = value;
        localifid.value_namespace = name_space;
        localifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpAdjEpInstId")
    {
        lldpadjepinstid.yfilter = yfilter;
    }
    if(value_path == "remotePortDesc")
    {
        remoteportdesc.yfilter = yfilter;
    }
    if(value_path == "remoteSysDesc")
    {
        remotesysdesc.yfilter = yfilter;
    }
    if(value_path == "remoteIp")
    {
        remoteip.yfilter = yfilter;
    }
    if(value_path == "LocalIfid")
    {
        localifid.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpAdjEpInstId" || name == "remotePortDesc" || name == "remoteSysDesc" || name == "remoteIp" || name == "LocalIfid")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafportItems()
    :
    leafp_list(this, {"id"})
{

    yang_name = "leafport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::~LeafportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leafp_list.len(); index++)
    {
        if(leafp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_operation() const
{
    for (std::size_t index=0; index<leafp_list.len(); index++)
    {
        if(leafp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LeafP-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList>();
        c->parent = this;
        leafp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : leafp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LeafP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LeafPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "LeafP-list"; yang_parent_name = "leafport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::~LeafPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LeafP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::HostextportItems()
    :
    extchhp_list(this, {"id"})
{

    yang_name = "hostextport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::~HostextportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChHP-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList>();
        c->parent = this;
        extchhp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchhp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChHP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::ExtChHPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChHP-list"; yang_parent_name = "hostextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::~ExtChHPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChHP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::LeafextportItems()
    :
    extchfp_list(this, {"id"})
{

    yang_name = "leafextport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::~LeafextportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChFP-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList>();
        c->parent = this;
        extchfp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchfp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChFP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::ExtChFPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChFP-list"; yang_parent_name = "leafextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::~ExtChFPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChFP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems>())
    , splcblk_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems>())
    , sppd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    splcblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "splc-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::~SplcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (splcblk_items !=  nullptr && splcblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (splcblk_items !=  nullptr && splcblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "splcblk-items")
    {
        if(splcblk_items == nullptr)
        {
            splcblk_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems>();
        }
        return splcblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        children["spsensorblk-items"] = spsensorblk_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "splcblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SplcblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "splcblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::~SplcblkItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splcblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "LCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ChItems::FcslotItems::FcslotItems()
    :
    fcslot_list(this, {"id"})
{

    yang_name = "fcslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FcslotItems::~FcslotItems()
{
}

bool System::ChItems::FcslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fcslot_list.len(); index++)
    {
        if(fcslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::has_operation() const
{
    for (std::size_t index=0; index<fcslot_list.len(); index++)
    {
        if(fcslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FcslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FCSlot-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList>();
        c->parent = this;
        fcslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fcslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FCSlot-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FCSlotList()
    :
    id{YType::uint32, "id"},
    poweroff{YType::enumeration, "poweroff"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    fc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems>())
{
    fc_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "FCSlot-list"; yang_parent_name = "fcslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FcslotItems::FCSlotList::~FCSlotList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| poweroff.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (fc_items !=  nullptr && fc_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poweroff.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (fc_items !=  nullptr && fc_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/fcslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FcslotItems::FCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poweroff.is_set || is_set(poweroff.yfilter)) leaf_name_data.push_back(poweroff.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fc-items")
    {
        if(fc_items == nullptr)
        {
            fc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems>();
        }
        return fc_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fc_items != nullptr)
    {
        children["fc-items"] = fc_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroff")
    {
        poweroff = value;
        poweroff.value_namespace = name_space;
        poweroff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poweroff")
    {
        poweroff.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fc-items" || name == "rtoosSlot-items" || name == "id" || name == "poweroff" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::FcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    running_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems>())
    , eobc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems>())
    , epc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems>())
    , sensor_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems>())
    , splc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems>())
    , asic_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    eobc_items->parent = this;
    epc_items->parent = this;
    sensor_items->parent = this;
    splc_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "fc-items"; yang_parent_name = "FCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::~FcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (epc_items !=  nullptr && epc_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (splc_items !=  nullptr && splc_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (epc_items !=  nullptr && epc_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (splc_items !=  nullptr && splc_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "epc-items")
    {
        if(epc_items == nullptr)
        {
            epc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems>();
        }
        return epc_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "splc-items")
    {
        if(splc_items == nullptr)
        {
            splc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems>();
        }
        return splc_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(ej_items != nullptr)
    {
        children["ej-items"] = ej_items;
    }

    if(eobc_items != nullptr)
    {
        children["eobc-items"] = eobc_items;
    }

    if(epc_items != nullptr)
    {
        children["epc-items"] = epc_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "eobc-items" || name == "epc-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
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

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::~EjItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList>();
        c->parent = this;
        ejec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList>();
        c->parent = this;
        eobcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eobcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcItems()
    :
    epcp_list(this, {"id"})
{

    yang_name = "epc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::~EpcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_operation() const
{
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpcP-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList>();
        c->parent = this;
        epcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpcP-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::EpcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EpcP-list"; yang_parent_name = "epc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::~EpcPList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems>())
    , splcblk_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems>())
    , sppd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    splcblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "splc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::~SplcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (splcblk_items !=  nullptr && splcblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (splcblk_items !=  nullptr && splcblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "splcblk-items")
    {
        if(splcblk_items == nullptr)
        {
            splcblk_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems>();
        }
        return splcblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        children["spsensorblk-items"] = spsensorblk_items;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "splcblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SplcblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "splcblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::~SplcblkItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splcblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}


}
}

