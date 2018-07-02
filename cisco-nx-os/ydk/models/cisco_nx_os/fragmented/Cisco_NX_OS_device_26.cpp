
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_26.hpp"
#include "Cisco_NX_OS_device_27.hpp"
#include "Cisco_NX_OS_device_28.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RscollectorAttItems()
    :
    rscollectoratt_list(this, {"tdn"})
{

    yang_name = "rscollectorAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::~RscollectorAttItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscollectorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCollectorAtt-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList>();
        c->parent = this;
        rscollectoratt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rscollectoratt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCollectorAtt-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::RsCollectorAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsCollectorAtt-list"; yang_parent_name = "rscollectorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::~RsCollectorAttList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCollectorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdinstItems()
    :
    fwdinsttarget_list(this, {"id"})
{

    yang_name = "fwdinst-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::~FwdinstItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::has_operation() const
{
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdinst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdInstTarget-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList>();
        c->parent = this;
        fwdinsttarget_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fwdinsttarget_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdInstTarget-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::FwdInstTargetList()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rsmonitoratt_items(std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems>())
{
    rsmonitoratt_items->parent = this;

    yang_name = "FwdInstTarget-list"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::~FwdInstTargetList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| (rsmonitoratt_items !=  nullptr && rsmonitoratt_items->has_data());
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rsmonitoratt_items !=  nullptr && rsmonitoratt_items->has_operation());
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwdInstTarget-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmonitorAtt-items")
    {
        if(rsmonitoratt_items == nullptr)
        {
            rsmonitoratt_items = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems>();
        }
        return rsmonitoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmonitoratt_items != nullptr)
    {
        children["rsmonitorAtt-items"] = rsmonitoratt_items;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmonitorAtt-items" || name == "id" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsmonitorAttItems()
    :
    rsmonitoratt_list(this, {"tdn"})
{

    yang_name = "rsmonitorAtt-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::~RsmonitorAttItems()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmonitoratt_list.len(); index++)
    {
        if(rsmonitoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmonitoratt_list.len(); index++)
    {
        if(rsmonitoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmonitorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMonitorAtt-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList>();
        c->parent = this;
        rsmonitoratt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmonitoratt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMonitorAtt-list")
        return true;
    return false;
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::RsMonitorAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMonitorAtt-list"; yang_parent_name = "rsmonitorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::~RsMonitorAttList()
{
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMonitorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsmonitorAttItems::RsMonitorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstItems()
    :
    inst_list(this, {"mode"})
{

    yang_name = "inst-items"; yang_parent_name = "analytics-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::InstItems::~InstItems()
{
}

bool System::AnalyticsItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::get_children() const
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

void System::AnalyticsItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::InstList()
    :
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    capability_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::CapabilityItems>())
    , controller_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems>())
    , recordp_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems>())
    , collector_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems>())
    , monitor_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems>())
    , sampler_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::SamplerItems>())
    , prof_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems>())
    , fwdinst_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems>())
    , if_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::IfItems>())
    , bd_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::BdItems>())
    , policy_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems>())
{
    capability_items->parent = this;
    controller_items->parent = this;
    recordp_items->parent = this;
    collector_items->parent = this;
    monitor_items->parent = this;
    sampler_items->parent = this;
    prof_items->parent = this;
    fwdinst_items->parent = this;
    if_items->parent = this;
    bd_items->parent = this;
    policy_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AnalyticsItems::InstItems::InstList::~InstList()
{
}

bool System::AnalyticsItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (capability_items !=  nullptr && capability_items->has_data())
	|| (controller_items !=  nullptr && controller_items->has_data())
	|| (recordp_items !=  nullptr && recordp_items->has_data())
	|| (collector_items !=  nullptr && collector_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (sampler_items !=  nullptr && sampler_items->has_data())
	|| (prof_items !=  nullptr && prof_items->has_data())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (capability_items !=  nullptr && capability_items->has_operation())
	|| (controller_items !=  nullptr && controller_items->has_operation())
	|| (recordp_items !=  nullptr && recordp_items->has_operation())
	|| (collector_items !=  nullptr && collector_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (sampler_items !=  nullptr && sampler_items->has_operation())
	|| (prof_items !=  nullptr && prof_items->has_operation())
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/analytics-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AnalyticsItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capability-items")
    {
        if(capability_items == nullptr)
        {
            capability_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::CapabilityItems>();
        }
        return capability_items;
    }

    if(child_yang_name == "controller-items")
    {
        if(controller_items == nullptr)
        {
            controller_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems>();
        }
        return controller_items;
    }

    if(child_yang_name == "recordp-items")
    {
        if(recordp_items == nullptr)
        {
            recordp_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems>();
        }
        return recordp_items;
    }

    if(child_yang_name == "collector-items")
    {
        if(collector_items == nullptr)
        {
            collector_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems>();
        }
        return collector_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "sampler-items")
    {
        if(sampler_items == nullptr)
        {
            sampler_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::SamplerItems>();
        }
        return sampler_items;
    }

    if(child_yang_name == "prof-items")
    {
        if(prof_items == nullptr)
        {
            prof_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems>();
        }
        return prof_items;
    }

    if(child_yang_name == "fwdinst-items")
    {
        if(fwdinst_items == nullptr)
        {
            fwdinst_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems>();
        }
        return fwdinst_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems>();
        }
        return policy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(capability_items != nullptr)
    {
        children["capability-items"] = capability_items;
    }

    if(controller_items != nullptr)
    {
        children["controller-items"] = controller_items;
    }

    if(recordp_items != nullptr)
    {
        children["recordp-items"] = recordp_items;
    }

    if(collector_items != nullptr)
    {
        children["collector-items"] = collector_items;
    }

    if(monitor_items != nullptr)
    {
        children["monitor-items"] = monitor_items;
    }

    if(sampler_items != nullptr)
    {
        children["sampler-items"] = sampler_items;
    }

    if(prof_items != nullptr)
    {
        children["prof-items"] = prof_items;
    }

    if(fwdinst_items != nullptr)
    {
        children["fwdinst-items"] = fwdinst_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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

void System::AnalyticsItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
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

bool System::AnalyticsItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-items" || name == "controller-items" || name == "recordp-items" || name == "collector-items" || name == "monitor-items" || name == "sampler-items" || name == "prof-items" || name == "fwdinst-items" || name == "if-items" || name == "bd-items" || name == "policy-items" || name == "mode" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CapabilityItems::CapabilityItems()
    :
    fabricmode{YType::enumeration, "fabricMode"},
    buckethashwidth{YType::uint16, "bucketHashWidth"},
    numtcament{YType::uint32, "numTcamEnt"},
    numtcamentperv4{YType::uint16, "numTcamEntPerV4"},
    numtcamentperv6{YType::uint16, "numTcamEntPerV6"}
{

    yang_name = "capability-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CapabilityItems::~CapabilityItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_data() const
{
    if (is_presence_container) return true;
    return fabricmode.is_set
	|| buckethashwidth.is_set
	|| numtcament.is_set
	|| numtcamentperv4.is_set
	|| numtcamentperv6.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabricmode.yfilter)
	|| ydk::is_set(buckethashwidth.yfilter)
	|| ydk::is_set(numtcament.yfilter)
	|| ydk::is_set(numtcamentperv4.yfilter)
	|| ydk::is_set(numtcamentperv6.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabricmode.is_set || is_set(fabricmode.yfilter)) leaf_name_data.push_back(fabricmode.get_name_leafdata());
    if (buckethashwidth.is_set || is_set(buckethashwidth.yfilter)) leaf_name_data.push_back(buckethashwidth.get_name_leafdata());
    if (numtcament.is_set || is_set(numtcament.yfilter)) leaf_name_data.push_back(numtcament.get_name_leafdata());
    if (numtcamentperv4.is_set || is_set(numtcamentperv4.yfilter)) leaf_name_data.push_back(numtcamentperv4.get_name_leafdata());
    if (numtcamentperv6.is_set || is_set(numtcamentperv6.yfilter)) leaf_name_data.push_back(numtcamentperv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::CapabilityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::CapabilityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabricMode")
    {
        fabricmode = value;
        fabricmode.value_namespace = name_space;
        fabricmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucketHashWidth")
    {
        buckethashwidth = value;
        buckethashwidth.value_namespace = name_space;
        buckethashwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEnt")
    {
        numtcament = value;
        numtcament.value_namespace = name_space;
        numtcament.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEntPerV4")
    {
        numtcamentperv4 = value;
        numtcamentperv4.value_namespace = name_space;
        numtcamentperv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numTcamEntPerV6")
    {
        numtcamentperv6 = value;
        numtcamentperv6.value_namespace = name_space;
        numtcamentperv6.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::CapabilityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabricMode")
    {
        fabricmode.yfilter = yfilter;
    }
    if(value_path == "bucketHashWidth")
    {
        buckethashwidth.yfilter = yfilter;
    }
    if(value_path == "numTcamEnt")
    {
        numtcament.yfilter = yfilter;
    }
    if(value_path == "numTcamEntPerV4")
    {
        numtcamentperv4.yfilter = yfilter;
    }
    if(value_path == "numTcamEntPerV6")
    {
        numtcamentperv6.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::CapabilityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabricMode" || name == "bucketHashWidth" || name == "numTcamEnt" || name == "numTcamEntPerV4" || name == "numTcamEntPerV6")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerItems()
    :
    controller_list(this, {"name"})
{

    yang_name = "controller-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::~ControllerItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller_list.len(); index++)
    {
        if(controller_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_operation() const
{
    for (std::size_t index=0; index<controller_list.len(); index++)
    {
        if(controller_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ControllerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ControllerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ControllerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Controller-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList>();
        c->parent = this;
        controller_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ControllerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : controller_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Controller-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::ControllerList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"}
{

    yang_name = "Controller-list"; yang_parent_name = "controller-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::~ControllerList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Controller-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordpItems()
    :
    recordp_list(this, {"name"})
{

    yang_name = "recordp-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::~RecordpItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_operation() const
{
    for (std::size_t index=0; index<recordp_list.len(); index++)
    {
        if(recordp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::RecordpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recordp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::RecordpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::RecordpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RecordP-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList>();
        c->parent = this;
        recordp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::RecordpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : recordp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RecordP-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::RecordPList()
    :
    name{YType::str, "name"},
    match{YType::str, "match"},
    collect{YType::str, "collect"},
    descr{YType::str, "descr"}
{

    yang_name = "RecordP-list"; yang_parent_name = "recordp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::~RecordPList()
{
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match.is_set
	|| collect.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(collect.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RecordP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (collect.is_set || is_set(collect.yfilter)) leaf_name_data.push_back(collect.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect")
    {
        collect = value;
        collect.value_namespace = name_space;
        collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "collect")
    {
        collect.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match" || name == "collect" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorItems()
    :
    collector_list(this, {"name"})
{

    yang_name = "collector-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::~CollectorItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_operation() const
{
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CollectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CollectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::CollectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Collector-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList>();
        c->parent = this;
        collector_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::CollectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : collector_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Collector-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::CollectorList()
    :
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"},
    descr{YType::str, "descr"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"}
{

    yang_name = "Collector-list"; yang_parent_name = "collector-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::~CollectorList()
{
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ver.is_set
	|| descr.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Collector-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ver" || name == "descr" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "monitor-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::~MonitorItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList>();
        c->parent = this;
        monitor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : monitor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    collectorbucket_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems>())
    , rsrecordpatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>())
{
    collectorbucket_items->parent = this;
    rsrecordpatt_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (collectorbucket_items !=  nullptr && collectorbucket_items->has_data())
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (collectorbucket_items !=  nullptr && collectorbucket_items->has_operation())
	|| (rsrecordpatt_items !=  nullptr && rsrecordpatt_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collectorbucket-items")
    {
        if(collectorbucket_items == nullptr)
        {
            collectorbucket_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems>();
        }
        return collectorbucket_items;
    }

    if(child_yang_name == "rsrecordPAtt-items")
    {
        if(rsrecordpatt_items == nullptr)
        {
            rsrecordpatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems>();
        }
        return rsrecordpatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(collectorbucket_items != nullptr)
    {
        children["collectorbucket-items"] = collectorbucket_items;
    }

    if(rsrecordpatt_items != nullptr)
    {
        children["rsrecordPAtt-items"] = rsrecordpatt_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collectorbucket-items" || name == "rsrecordPAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorbucketItems()
    :
    collectorbucket_list(this, {"id"})
{

    yang_name = "collectorbucket-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::~CollectorbucketItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collectorbucket_list.len(); index++)
    {
        if(collectorbucket_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_operation() const
{
    for (std::size_t index=0; index<collectorbucket_list.len(); index++)
    {
        if(collectorbucket_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collectorbucket-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CollectorBucket-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList>();
        c->parent = this;
        collectorbucket_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : collectorbucket_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CollectorBucket-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::CollectorBucketList()
    :
    id{YType::uint8, "id"},
    hashlo{YType::uint32, "hashLo"},
    hashhi{YType::uint32, "hashHi"},
    descr{YType::str, "descr"}
        ,
    rscollectoratt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems>())
{
    rscollectoratt_items->parent = this;

    yang_name = "CollectorBucket-list"; yang_parent_name = "collectorbucket-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::~CollectorBucketList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| hashlo.is_set
	|| hashhi.is_set
	|| descr.is_set
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hashlo.yfilter)
	|| ydk::is_set(hashhi.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CollectorBucket-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hashlo.is_set || is_set(hashlo.yfilter)) leaf_name_data.push_back(hashlo.get_name_leafdata());
    if (hashhi.is_set || is_set(hashhi.yfilter)) leaf_name_data.push_back(hashhi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rscollectorAtt-items")
    {
        if(rscollectoratt_items == nullptr)
        {
            rscollectoratt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems>();
        }
        return rscollectoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rscollectoratt_items != nullptr)
    {
        children["rscollectorAtt-items"] = rscollectoratt_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashLo")
    {
        hashlo = value;
        hashlo.value_namespace = name_space;
        hashlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashHi")
    {
        hashhi = value;
        hashhi.value_namespace = name_space;
        hashhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hashLo")
    {
        hashlo.yfilter = yfilter;
    }
    if(value_path == "hashHi")
    {
        hashhi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rscollectorAtt-items" || name == "id" || name == "hashLo" || name == "hashHi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RscollectorAttItems()
    :
    rscollectoratt_list(this, {"tdn"})
{

    yang_name = "rscollectorAtt-items"; yang_parent_name = "CollectorBucket-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::~RscollectorAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscollectorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCollectorAtt-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList>();
        c->parent = this;
        rscollectoratt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rscollectoratt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCollectorAtt-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::RsCollectorAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsCollectorAtt-list"; yang_parent_name = "rscollectorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::~RsCollectorAttList()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCollectorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::RsrecordPAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsrecordPAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::~RsrecordPAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecordPAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerItems()
    :
    sampler_list(this, {"name"})
{

    yang_name = "sampler-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SamplerItems::~SamplerItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler_list.len(); index++)
    {
        if(sampler_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::has_operation() const
{
    for (std::size_t index=0; index<sampler_list.len(); index++)
    {
        if(sampler_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::SamplerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SamplerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::SamplerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sampler-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList>();
        c->parent = this;
        sampler_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::SamplerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sampler_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::SamplerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::SamplerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sampler-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::SamplerList()
    :
    name{YType::str, "name"},
    mode{YType::enumeration, "mode"},
    samplesz{YType::uint32, "sampleSz"},
    windowsz{YType::uint32, "windowSz"},
    descr{YType::str, "descr"}
{

    yang_name = "Sampler-list"; yang_parent_name = "sampler-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::~SamplerList()
{
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mode.is_set
	|| samplesz.is_set
	|| windowsz.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(samplesz.yfilter)
	|| ydk::is_set(windowsz.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sampler-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (samplesz.is_set || is_set(samplesz.yfilter)) leaf_name_data.push_back(samplesz.get_name_leafdata());
    if (windowsz.is_set || is_set(windowsz.yfilter)) leaf_name_data.push_back(windowsz.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampleSz")
    {
        samplesz = value;
        samplesz.value_namespace = name_space;
        samplesz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "windowSz")
    {
        windowsz = value;
        windowsz.value_namespace = name_space;
        windowsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "sampleSz")
    {
        samplesz.yfilter = yfilter;
    }
    if(value_path == "windowSz")
    {
        windowsz.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::SamplerItems::SamplerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "mode" || name == "sampleSz" || name == "windowSz" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfItems()
    :
    profile_list(this, {"name"})
{

    yang_name = "prof-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::~ProfItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_operation() const
{
    for (std::size_t index=0; index<profile_list.len(); index++)
    {
        if(profile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prof-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Profile-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList>();
        c->parent = this;
        profile_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : profile_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Profile-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::ProfileList()
    :
    name{YType::str, "name"},
    collectintvl{YType::uint32, "collectIntvl"},
    srcport{YType::uint32, "srcPort"},
    ippktidshift{YType::uint8, "ipPktIdShift"},
    burstintvlshift{YType::uint8, "burstIntvlShift"},
    mtu{YType::uint16, "mtu"},
    seqnumguessthreshlo{YType::uint32, "seqNumGuessThreshLo"},
    seqnumguessthreshhi{YType::uint32, "seqNumGuessThreshHi"},
    descr{YType::str, "descr"}
        ,
    payloadlenbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems>())
    , tcpopthdrlenbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems>())
    , rcvwindowszbin_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems>())
{
    payloadlenbin_items->parent = this;
    tcpopthdrlenbin_items->parent = this;
    rcvwindowszbin_items->parent = this;

    yang_name = "Profile-list"; yang_parent_name = "prof-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::~ProfileList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| collectintvl.is_set
	|| srcport.is_set
	|| ippktidshift.is_set
	|| burstintvlshift.is_set
	|| mtu.is_set
	|| seqnumguessthreshlo.is_set
	|| seqnumguessthreshhi.is_set
	|| descr.is_set
	|| (payloadlenbin_items !=  nullptr && payloadlenbin_items->has_data())
	|| (tcpopthdrlenbin_items !=  nullptr && tcpopthdrlenbin_items->has_data())
	|| (rcvwindowszbin_items !=  nullptr && rcvwindowszbin_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(collectintvl.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(ippktidshift.yfilter)
	|| ydk::is_set(burstintvlshift.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(seqnumguessthreshlo.yfilter)
	|| ydk::is_set(seqnumguessthreshhi.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (payloadlenbin_items !=  nullptr && payloadlenbin_items->has_operation())
	|| (tcpopthdrlenbin_items !=  nullptr && tcpopthdrlenbin_items->has_operation())
	|| (rcvwindowszbin_items !=  nullptr && rcvwindowszbin_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Profile-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (collectintvl.is_set || is_set(collectintvl.yfilter)) leaf_name_data.push_back(collectintvl.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (ippktidshift.is_set || is_set(ippktidshift.yfilter)) leaf_name_data.push_back(ippktidshift.get_name_leafdata());
    if (burstintvlshift.is_set || is_set(burstintvlshift.yfilter)) leaf_name_data.push_back(burstintvlshift.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (seqnumguessthreshlo.is_set || is_set(seqnumguessthreshlo.yfilter)) leaf_name_data.push_back(seqnumguessthreshlo.get_name_leafdata());
    if (seqnumguessthreshhi.is_set || is_set(seqnumguessthreshhi.yfilter)) leaf_name_data.push_back(seqnumguessthreshhi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "payloadlenbin-items")
    {
        if(payloadlenbin_items == nullptr)
        {
            payloadlenbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems>();
        }
        return payloadlenbin_items;
    }

    if(child_yang_name == "tcpopthdrlenbin-items")
    {
        if(tcpopthdrlenbin_items == nullptr)
        {
            tcpopthdrlenbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems>();
        }
        return tcpopthdrlenbin_items;
    }

    if(child_yang_name == "rcvwindowszbin-items")
    {
        if(rcvwindowszbin_items == nullptr)
        {
            rcvwindowszbin_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems>();
        }
        return rcvwindowszbin_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(payloadlenbin_items != nullptr)
    {
        children["payloadlenbin-items"] = payloadlenbin_items;
    }

    if(tcpopthdrlenbin_items != nullptr)
    {
        children["tcpopthdrlenbin-items"] = tcpopthdrlenbin_items;
    }

    if(rcvwindowszbin_items != nullptr)
    {
        children["rcvwindowszbin-items"] = rcvwindowszbin_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collectIntvl")
    {
        collectintvl = value;
        collectintvl.value_namespace = name_space;
        collectintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipPktIdShift")
    {
        ippktidshift = value;
        ippktidshift.value_namespace = name_space;
        ippktidshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstIntvlShift")
    {
        burstintvlshift = value;
        burstintvlshift.value_namespace = name_space;
        burstintvlshift.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNumGuessThreshLo")
    {
        seqnumguessthreshlo = value;
        seqnumguessthreshlo.value_namespace = name_space;
        seqnumguessthreshlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqNumGuessThreshHi")
    {
        seqnumguessthreshhi = value;
        seqnumguessthreshhi.value_namespace = name_space;
        seqnumguessthreshhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "collectIntvl")
    {
        collectintvl.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "ipPktIdShift")
    {
        ippktidshift.yfilter = yfilter;
    }
    if(value_path == "burstIntvlShift")
    {
        burstintvlshift.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "seqNumGuessThreshLo")
    {
        seqnumguessthreshlo.yfilter = yfilter;
    }
    if(value_path == "seqNumGuessThreshHi")
    {
        seqnumguessthreshhi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payloadlenbin-items" || name == "tcpopthdrlenbin-items" || name == "rcvwindowszbin-items" || name == "name" || name == "collectIntvl" || name == "srcPort" || name == "ipPktIdShift" || name == "burstIntvlShift" || name == "mtu" || name == "seqNumGuessThreshLo" || name == "seqNumGuessThreshHi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadlenbinItems()
    :
    payloadlenbin_list(this, {"id"})
{

    yang_name = "payloadlenbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::~PayloadlenbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_operation() const
{
    for (std::size_t index=0; index<payloadlenbin_list.len(); index++)
    {
        if(payloadlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payloadlenbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PayloadLenBin-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList>();
        c->parent = this;
        payloadlenbin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : payloadlenbin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PayloadLenBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::PayloadLenBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "PayloadLenBin-list"; yang_parent_name = "payloadlenbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::~PayloadLenBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PayloadLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TcpopthdrlenbinItems()
    :
    tcpopthdrlenbin_list(this, {"id"})
{

    yang_name = "tcpopthdrlenbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::~TcpopthdrlenbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_operation() const
{
    for (std::size_t index=0; index<tcpopthdrlenbin_list.len(); index++)
    {
        if(tcpopthdrlenbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpopthdrlenbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TCPOptHdrLenBin-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList>();
        c->parent = this;
        tcpopthdrlenbin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tcpopthdrlenbin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TCPOptHdrLenBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::TCPOptHdrLenBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "TCPOptHdrLenBin-list"; yang_parent_name = "tcpopthdrlenbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::~TCPOptHdrLenBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCPOptHdrLenBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvwindowszbinItems()
    :
    rcvwindowszbin_list(this, {"id"})
{

    yang_name = "rcvwindowszbin-items"; yang_parent_name = "Profile-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::~RcvwindowszbinItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rcvwindowszbin_list.len(); index++)
    {
        if(rcvwindowszbin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_operation() const
{
    for (std::size_t index=0; index<rcvwindowszbin_list.len(); index++)
    {
        if(rcvwindowszbin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcvwindowszbin-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RcvWindowSzBin-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList>();
        c->parent = this;
        rcvwindowszbin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rcvwindowszbin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RcvWindowSzBin-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::RcvWindowSzBinList()
    :
    id{YType::uint8, "id"},
    lo{YType::uint32, "lo"},
    hi{YType::uint32, "hi"},
    descr{YType::str, "descr"}
{

    yang_name = "RcvWindowSzBin-list"; yang_parent_name = "rcvwindowszbin-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::~RcvWindowSzBinList()
{
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lo.is_set
	|| hi.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lo.yfilter)
	|| ydk::is_set(hi.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RcvWindowSzBin-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lo.is_set || is_set(lo.yfilter)) leaf_name_data.push_back(lo.get_name_leafdata());
    if (hi.is_set || is_set(hi.yfilter)) leaf_name_data.push_back(hi.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lo")
    {
        lo = value;
        lo.value_namespace = name_space;
        lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi")
    {
        hi = value;
        hi.value_namespace = name_space;
        hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lo")
    {
        lo.yfilter = yfilter;
    }
    if(value_path == "hi")
    {
        hi.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lo" || name == "hi" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdinstItems()
    :
    fwdinsttarget_list(this, {"id"})
{

    yang_name = "fwdinst-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::~FwdinstItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_operation() const
{
    for (std::size_t index=0; index<fwdinsttarget_list.len(); index++)
    {
        if(fwdinsttarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdinst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdInstTarget-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList>();
        c->parent = this;
        fwdinsttarget_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fwdinsttarget_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdInstTarget-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::FwdInstTargetList()
    :
    id{YType::uint32, "id"},
    collectorid{YType::uint32, "collectorId"},
    defpolicy{YType::enumeration, "DefPolicy"},
    ipv4hit{YType::uint32, "ipv4Hit"},
    ipv6hit{YType::uint32, "ipv6Hit"},
    cehit{YType::uint32, "ceHit"},
    ipv4create{YType::uint32, "ipv4Create"},
    ipv6create{YType::uint32, "ipv6Create"},
    cecreate{YType::uint32, "ceCreate"},
    exportcount{YType::uint32, "exportCount"},
    skipcount{YType::uint32, "skipCount"},
    flttype{YType::enumeration, "fltType"},
    dir{YType::enumeration, "dir"}
        ,
    rsprofatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems>())
    , rspolicyatt_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems>())
{
    rsprofatt_items->parent = this;
    rspolicyatt_items->parent = this;

    yang_name = "FwdInstTarget-list"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::~FwdInstTargetList()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| collectorid.is_set
	|| defpolicy.is_set
	|| ipv4hit.is_set
	|| ipv6hit.is_set
	|| cehit.is_set
	|| ipv4create.is_set
	|| ipv6create.is_set
	|| cecreate.is_set
	|| exportcount.is_set
	|| skipcount.is_set
	|| flttype.is_set
	|| dir.is_set
	|| (rsprofatt_items !=  nullptr && rsprofatt_items->has_data())
	|| (rspolicyatt_items !=  nullptr && rspolicyatt_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(collectorid.yfilter)
	|| ydk::is_set(defpolicy.yfilter)
	|| ydk::is_set(ipv4hit.yfilter)
	|| ydk::is_set(ipv6hit.yfilter)
	|| ydk::is_set(cehit.yfilter)
	|| ydk::is_set(ipv4create.yfilter)
	|| ydk::is_set(ipv6create.yfilter)
	|| ydk::is_set(cecreate.yfilter)
	|| ydk::is_set(exportcount.yfilter)
	|| ydk::is_set(skipcount.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| (rsprofatt_items !=  nullptr && rsprofatt_items->has_operation())
	|| (rspolicyatt_items !=  nullptr && rspolicyatt_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwdInstTarget-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (collectorid.is_set || is_set(collectorid.yfilter)) leaf_name_data.push_back(collectorid.get_name_leafdata());
    if (defpolicy.is_set || is_set(defpolicy.yfilter)) leaf_name_data.push_back(defpolicy.get_name_leafdata());
    if (ipv4hit.is_set || is_set(ipv4hit.yfilter)) leaf_name_data.push_back(ipv4hit.get_name_leafdata());
    if (ipv6hit.is_set || is_set(ipv6hit.yfilter)) leaf_name_data.push_back(ipv6hit.get_name_leafdata());
    if (cehit.is_set || is_set(cehit.yfilter)) leaf_name_data.push_back(cehit.get_name_leafdata());
    if (ipv4create.is_set || is_set(ipv4create.yfilter)) leaf_name_data.push_back(ipv4create.get_name_leafdata());
    if (ipv6create.is_set || is_set(ipv6create.yfilter)) leaf_name_data.push_back(ipv6create.get_name_leafdata());
    if (cecreate.is_set || is_set(cecreate.yfilter)) leaf_name_data.push_back(cecreate.get_name_leafdata());
    if (exportcount.is_set || is_set(exportcount.yfilter)) leaf_name_data.push_back(exportcount.get_name_leafdata());
    if (skipcount.is_set || is_set(skipcount.yfilter)) leaf_name_data.push_back(skipcount.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsprofAtt-items")
    {
        if(rsprofatt_items == nullptr)
        {
            rsprofatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems>();
        }
        return rsprofatt_items;
    }

    if(child_yang_name == "rspolicyAtt-items")
    {
        if(rspolicyatt_items == nullptr)
        {
            rspolicyatt_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems>();
        }
        return rspolicyatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsprofatt_items != nullptr)
    {
        children["rsprofAtt-items"] = rsprofatt_items;
    }

    if(rspolicyatt_items != nullptr)
    {
        children["rspolicyAtt-items"] = rspolicyatt_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collectorId")
    {
        collectorid = value;
        collectorid.value_namespace = name_space;
        collectorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DefPolicy")
    {
        defpolicy = value;
        defpolicy.value_namespace = name_space;
        defpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Hit")
    {
        ipv4hit = value;
        ipv4hit.value_namespace = name_space;
        ipv4hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Hit")
    {
        ipv6hit = value;
        ipv6hit.value_namespace = name_space;
        ipv6hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceHit")
    {
        cehit = value;
        cehit.value_namespace = name_space;
        cehit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Create")
    {
        ipv4create = value;
        ipv4create.value_namespace = name_space;
        ipv4create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Create")
    {
        ipv6create = value;
        ipv6create.value_namespace = name_space;
        ipv6create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceCreate")
    {
        cecreate = value;
        cecreate.value_namespace = name_space;
        cecreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportCount")
    {
        exportcount = value;
        exportcount.value_namespace = name_space;
        exportcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipCount")
    {
        skipcount = value;
        skipcount.value_namespace = name_space;
        skipcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "collectorId")
    {
        collectorid.yfilter = yfilter;
    }
    if(value_path == "DefPolicy")
    {
        defpolicy.yfilter = yfilter;
    }
    if(value_path == "ipv4Hit")
    {
        ipv4hit.yfilter = yfilter;
    }
    if(value_path == "ipv6Hit")
    {
        ipv6hit.yfilter = yfilter;
    }
    if(value_path == "ceHit")
    {
        cehit.yfilter = yfilter;
    }
    if(value_path == "ipv4Create")
    {
        ipv4create.yfilter = yfilter;
    }
    if(value_path == "ipv6Create")
    {
        ipv6create.yfilter = yfilter;
    }
    if(value_path == "ceCreate")
    {
        cecreate.yfilter = yfilter;
    }
    if(value_path == "exportCount")
    {
        exportcount.yfilter = yfilter;
    }
    if(value_path == "skipCount")
    {
        skipcount.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsprofAtt-items" || name == "rspolicyAtt-items" || name == "id" || name == "collectorId" || name == "DefPolicy" || name == "ipv4Hit" || name == "ipv6Hit" || name == "ceHit" || name == "ipv4Create" || name == "ipv6Create" || name == "ceCreate" || name == "exportCount" || name == "skipCount" || name == "fltType" || name == "dir")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::RsprofAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsprofAtt-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::~RsprofAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsprofAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::RspolicyAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyAtt-items"; yang_parent_name = "FwdInstTarget-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::~RspolicyAttItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::IfItems::IfItems()
    :
    physiftarget_list(this, {"id", "flttype"})
{

    yang_name = "if-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::IfItems::~IfItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physiftarget_list.len(); index++)
    {
        if(physiftarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<physiftarget_list.len(); index++)
    {
        if(physiftarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIfTarget-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList>();
        c->parent = this;
        physiftarget_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : physiftarget_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIfTarget-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::PhysIfTargetList()
    :
    id{YType::str, "id"},
    flttype{YType::enumeration, "fltType"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    dir{YType::enumeration, "dir"}
{

    yang_name = "PhysIfTarget-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::~PhysIfTargetList()
{
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| flttype.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| dir.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(dir.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIfTarget-list";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(flttype, "fltType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::IfItems::PhysIfTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fltType" || name == "operSt" || name == "operStQual" || name == "dir")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::BdItems::BdItems()
    :
    bdtarget_list(this, {"id"})
{

    yang_name = "bd-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::BdItems::~BdItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdtarget_list.len(); index++)
    {
        if(bdtarget_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::has_operation() const
{
    for (std::size_t index=0; index<bdtarget_list.len(); index++)
    {
        if(bdtarget_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BDTarget-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList>();
        c->parent = this;
        bdtarget_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdtarget_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDTarget-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::BDTargetList()
    :
    id{YType::str, "id"},
    ctxencap{YType::str, "ctxEncap"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"},
    flttype{YType::enumeration, "fltType"},
    dir{YType::enumeration, "dir"}
{

    yang_name = "BDTarget-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::~BDTargetList()
{
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctxencap.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| flttype.is_set
	|| dir.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctxencap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(dir.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDTarget-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctxencap.is_set || is_set(ctxencap.yfilter)) leaf_name_data.push_back(ctxencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxEncap")
    {
        ctxencap = value;
        ctxencap.value_namespace = name_space;
        ctxencap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctxEncap")
    {
        ctxencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::BdItems::BDTargetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ctxEncap" || name == "operSt" || name == "operStQual" || name == "fltType" || name == "dir")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyItems()
    :
    policy_list(this, {"name"})
{

    yang_name = "policy-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::~PolicyItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Policy-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList>();
        c->parent = this;
        policy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Policy-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::PolicyList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    acl_items(std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems>())
{
    acl_items->parent = this;

    yang_name = "Policy-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::~PolicyList()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (acl_items !=  nullptr && acl_items->has_data());
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (acl_items !=  nullptr && acl_items->has_operation());
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Policy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems>();
        }
        return acl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::AclItems()
    :
    matchacl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "Policy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::~AclItems()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<matchacl_list.len(); index++)
    {
        if(matchacl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchAcl-list")
    {
        auto c = std::make_shared<System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList>();
        c->parent = this;
        matchacl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : matchacl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchAcl-list")
        return true;
    return false;
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::MatchAclList()
    :
    name{YType::str, "name"},
    aclname{YType::str, "aclName"},
    flttype{YType::enumeration, "fltType"},
    descr{YType::str, "descr"}
{

    yang_name = "MatchAcl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::~MatchAclList()
{
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| aclname.is_set
	|| flttype.is_set
	|| descr.is_set;
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(flttype.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchAcl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (flttype.is_set || is_set(flttype.yfilter)) leaf_name_data.push_back(flttype.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fltType")
    {
        flttype = value;
        flttype.value_namespace = name_space;
        flttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "fltType")
    {
        flttype.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "aclName" || name == "fltType" || name == "descr")
        return true;
    return false;
}

System::CoppItems::CoppItems()
    :
    error{YType::uint64, "error"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    classp_items(std::make_shared<System::CoppItems::ClasspItems>())
    , policy_items(std::make_shared<System::CoppItems::PolicyItems>())
    , profile_items(std::make_shared<System::CoppItems::ProfileItems>())
    , name_items(std::make_shared<System::CoppItems::NameItems>())
    , scale_items(std::make_shared<System::CoppItems::ScaleItems>())
    , service_items(std::make_shared<System::CoppItems::ServiceItems>())
{
    classp_items->parent = this;
    policy_items->parent = this;
    profile_items->parent = this;
    name_items->parent = this;
    scale_items->parent = this;
    service_items->parent = this;

    yang_name = "copp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::~CoppItems()
{
}

bool System::CoppItems::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (classp_items !=  nullptr && classp_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (profile_items !=  nullptr && profile_items->has_data())
	|| (name_items !=  nullptr && name_items->has_data())
	|| (scale_items !=  nullptr && scale_items->has_data())
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::CoppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (classp_items !=  nullptr && classp_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (profile_items !=  nullptr && profile_items->has_operation())
	|| (name_items !=  nullptr && name_items->has_operation())
	|| (scale_items !=  nullptr && scale_items->has_operation())
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::CoppItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classp-items")
    {
        if(classp_items == nullptr)
        {
            classp_items = std::make_shared<System::CoppItems::ClasspItems>();
        }
        return classp_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::CoppItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "profile-items")
    {
        if(profile_items == nullptr)
        {
            profile_items = std::make_shared<System::CoppItems::ProfileItems>();
        }
        return profile_items;
    }

    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::CoppItems::NameItems>();
        }
        return name_items;
    }

    if(child_yang_name == "scale-items")
    {
        if(scale_items == nullptr)
        {
            scale_items = std::make_shared<System::CoppItems::ScaleItems>();
        }
        return scale_items;
    }

    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::CoppItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classp_items != nullptr)
    {
        children["classp-items"] = classp_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(profile_items != nullptr)
    {
        children["profile-items"] = profile_items;
    }

    if(name_items != nullptr)
    {
        children["name-items"] = name_items;
    }

    if(scale_items != nullptr)
    {
        children["scale-items"] = scale_items;
    }

    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::CoppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CoppItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::CoppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classp-items" || name == "policy-items" || name == "profile-items" || name == "name-items" || name == "scale-items" || name == "service-items" || name == "error" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClasspItems()
    :
    class_list(this, {"cname"})
{

    yang_name = "classp-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ClasspItems::~ClasspItems()
{
}

bool System::CoppItems::ClasspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::has_operation() const
{
    for (std::size_t index=0; index<class_list.len(); index++)
    {
        if(class_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ClasspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Class-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList>();
        c->parent = this;
        class_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::get_children() const
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

void System::CoppItems::ClasspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Class-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ClassList()
    :
    cname{YType::str, "cName"},
    matchoption{YType::enumeration, "matchOption"},
    flag{YType::boolean, "flag"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rate{YType::uint32, "rate"},
    burst{YType::uint32, "burst"}
        ,
    match_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::MatchItems>())
    , acl_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::AclItems>())
    , rdirect_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::RdirectItems>())
    , fcoe_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::FcoeItems>())
    , mcast_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::McastItems>())
    , excep_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::ExcepItems>())
    , ip_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::IpItems>())
    , icmp_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::IcmpItems>())
    , ipv6_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::Ipv6Items>())
    , icmpv6_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::Icmpv6Items>())
    , prot_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::ProtItems>())
{
    match_items->parent = this;
    acl_items->parent = this;
    rdirect_items->parent = this;
    fcoe_items->parent = this;
    mcast_items->parent = this;
    excep_items->parent = this;
    ip_items->parent = this;
    icmp_items->parent = this;
    ipv6_items->parent = this;
    icmpv6_items->parent = this;
    prot_items->parent = this;

    yang_name = "Class-list"; yang_parent_name = "classp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ClasspItems::ClassList::~ClassList()
{
}

bool System::CoppItems::ClasspItems::ClassList::has_data() const
{
    if (is_presence_container) return true;
    return cname.is_set
	|| matchoption.is_set
	|| flag.is_set
	|| name.is_set
	|| descr.is_set
	|| rate.is_set
	|| burst.is_set
	|| (match_items !=  nullptr && match_items->has_data())
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (rdirect_items !=  nullptr && rdirect_items->has_data())
	|| (fcoe_items !=  nullptr && fcoe_items->has_data())
	|| (mcast_items !=  nullptr && mcast_items->has_data())
	|| (excep_items !=  nullptr && excep_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (icmp_items !=  nullptr && icmp_items->has_data())
	|| (ipv6_items !=  nullptr && ipv6_items->has_data())
	|| (icmpv6_items !=  nullptr && icmpv6_items->has_data())
	|| (prot_items !=  nullptr && prot_items->has_data());
}

bool System::CoppItems::ClasspItems::ClassList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cname.yfilter)
	|| ydk::is_set(matchoption.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| (match_items !=  nullptr && match_items->has_operation())
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (rdirect_items !=  nullptr && rdirect_items->has_operation())
	|| (fcoe_items !=  nullptr && fcoe_items->has_operation())
	|| (mcast_items !=  nullptr && mcast_items->has_operation())
	|| (excep_items !=  nullptr && excep_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (icmp_items !=  nullptr && icmp_items->has_operation())
	|| (ipv6_items !=  nullptr && ipv6_items->has_operation())
	|| (icmpv6_items !=  nullptr && icmpv6_items->has_operation())
	|| (prot_items !=  nullptr && prot_items->has_operation());
}

std::string System::CoppItems::ClasspItems::ClassList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/classp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ClasspItems::ClassList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Class-list";
    ADD_KEY_TOKEN(cname, "cName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cname.is_set || is_set(cname.yfilter)) leaf_name_data.push_back(cname.get_name_leafdata());
    if (matchoption.is_set || is_set(matchoption.yfilter)) leaf_name_data.push_back(matchoption.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-items")
    {
        if(match_items == nullptr)
        {
            match_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::MatchItems>();
        }
        return match_items;
    }

    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "rdirect-items")
    {
        if(rdirect_items == nullptr)
        {
            rdirect_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::RdirectItems>();
        }
        return rdirect_items;
    }

    if(child_yang_name == "fcoe-items")
    {
        if(fcoe_items == nullptr)
        {
            fcoe_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::FcoeItems>();
        }
        return fcoe_items;
    }

    if(child_yang_name == "mcast-items")
    {
        if(mcast_items == nullptr)
        {
            mcast_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::McastItems>();
        }
        return mcast_items;
    }

    if(child_yang_name == "excep-items")
    {
        if(excep_items == nullptr)
        {
            excep_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::ExcepItems>();
        }
        return excep_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "icmp-items")
    {
        if(icmp_items == nullptr)
        {
            icmp_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::IcmpItems>();
        }
        return icmp_items;
    }

    if(child_yang_name == "ipv6-items")
    {
        if(ipv6_items == nullptr)
        {
            ipv6_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::Ipv6Items>();
        }
        return ipv6_items;
    }

    if(child_yang_name == "icmpv6-items")
    {
        if(icmpv6_items == nullptr)
        {
            icmpv6_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::Icmpv6Items>();
        }
        return icmpv6_items;
    }

    if(child_yang_name == "prot-items")
    {
        if(prot_items == nullptr)
        {
            prot_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::ProtItems>();
        }
        return prot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match_items != nullptr)
    {
        children["match-items"] = match_items;
    }

    if(acl_items != nullptr)
    {
        children["acl-items"] = acl_items;
    }

    if(rdirect_items != nullptr)
    {
        children["rdirect-items"] = rdirect_items;
    }

    if(fcoe_items != nullptr)
    {
        children["fcoe-items"] = fcoe_items;
    }

    if(mcast_items != nullptr)
    {
        children["mcast-items"] = mcast_items;
    }

    if(excep_items != nullptr)
    {
        children["excep-items"] = excep_items;
    }

    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    if(icmp_items != nullptr)
    {
        children["icmp-items"] = icmp_items;
    }

    if(ipv6_items != nullptr)
    {
        children["ipv6-items"] = ipv6_items;
    }

    if(icmpv6_items != nullptr)
    {
        children["icmpv6-items"] = icmpv6_items;
    }

    if(prot_items != nullptr)
    {
        children["prot-items"] = prot_items;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cName")
    {
        cname = value;
        cname.value_namespace = name_space;
        cname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchOption")
    {
        matchoption = value;
        matchoption.value_namespace = name_space;
        matchoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cName")
    {
        cname.yfilter = yfilter;
    }
    if(value_path == "matchOption")
    {
        matchoption.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-items" || name == "acl-items" || name == "rdirect-items" || name == "fcoe-items" || name == "mcast-items" || name == "excep-items" || name == "ip-items" || name == "icmp-items" || name == "ipv6-items" || name == "icmpv6-items" || name == "prot-items" || name == "cName" || name == "matchOption" || name == "flag" || name == "name" || name == "descr" || name == "rate" || name == "burst")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::MatchItems::MatchItems()
    :
    match_list(this, {"type"})
{

    yang_name = "match-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::MatchItems::~MatchItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::MatchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<match_list.len(); index++)
    {
        if(match_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::MatchItems::has_operation() const
{
    for (std::size_t index=0; index<match_list.len(); index++)
    {
        if(match_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::MatchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::MatchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::MatchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Match-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList>();
        c->parent = this;
        match_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::MatchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : match_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::MatchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::MatchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::MatchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Match-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::MatchList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Match-list"; yang_parent_name = "match-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::~MatchList()
{
}

bool System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Match-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::CoppItems::ClasspItems::ClassList::MatchItems::MatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "name" || name == "descr")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::AclItems::AclItems()
    :
    acl_list(this, {"name"})
{

    yang_name = "acl-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::AclItems::~AclItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::has_operation() const
{
    for (std::size_t index=0; index<acl_list.len(); index++)
    {
        if(acl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Acl-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::AclItems::AclList>();
        c->parent = this;
        acl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Acl-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::AclItems::AclList::AclList()
    :
    name{YType::str, "name"},
    error{YType::uint64, "error"},
    flag{YType::boolean, "flag"}
{

    yang_name = "Acl-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::AclItems::AclList::~AclList()
{
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::AclList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| error.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::AclList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::AclItems::AclList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Acl-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::AclItems::AclList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::AclItems::AclList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::AclItems::AclList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::AclItems::AclList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::AclItems::AclList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::AclItems::AclList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "error" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::RdirectItems::RdirectItems()
    :
    rdrct{YType::enumeration, "rdrct"}
{

    yang_name = "rdirect-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::RdirectItems::~RdirectItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::RdirectItems::has_data() const
{
    if (is_presence_container) return true;
    return rdrct.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::RdirectItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdrct.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::RdirectItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdirect-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::RdirectItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdrct.is_set || is_set(rdrct.yfilter)) leaf_name_data.push_back(rdrct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::RdirectItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::RdirectItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::RdirectItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdrct")
    {
        rdrct = value;
        rdrct.value_namespace = name_space;
        rdrct.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::RdirectItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdrct")
    {
        rdrct.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::RdirectItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rdrct")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::FcoeItems::FcoeItems()
    :
    option{YType::boolean, "option"}
{

    yang_name = "fcoe-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::FcoeItems::~FcoeItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::FcoeItems::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::FcoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::FcoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcoe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::FcoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::FcoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::FcoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::FcoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::FcoeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::FcoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::McastItems::McastItems()
    :
    multicast_list(this, {"mcastoption"})
{

    yang_name = "mcast-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::McastItems::~McastItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_list.len(); index++)
    {
        if(multicast_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::has_operation() const
{
    for (std::size_t index=0; index<multicast_list.len(); index++)
    {
        if(multicast_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::McastItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::McastItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::McastItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Multicast-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList>();
        c->parent = this;
        multicast_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::McastItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : multicast_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::McastItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::McastItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Multicast-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::MulticastList()
    :
    mcastoption{YType::enumeration, "mcastOption"},
    flag{YType::boolean, "flag"}
{

    yang_name = "Multicast-list"; yang_parent_name = "mcast-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::~MulticastList()
{
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::has_data() const
{
    if (is_presence_container) return true;
    return mcastoption.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastoption.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Multicast-list";
    ADD_KEY_TOKEN(mcastoption, "mcastOption");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastoption.is_set || is_set(mcastoption.yfilter)) leaf_name_data.push_back(mcastoption.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastOption")
    {
        mcastoption = value;
        mcastoption.value_namespace = name_space;
        mcastoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastOption")
    {
        mcastoption.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::McastItems::MulticastList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcastOption" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ExcepItems::ExcepItems()
    :
    exeoptions_list(this, {"option"})
{

    yang_name = "excep-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::ExcepItems::~ExcepItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exeoptions_list.len(); index++)
    {
        if(exeoptions_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::has_operation() const
{
    for (std::size_t index=0; index<exeoptions_list.len(); index++)
    {
        if(exeoptions_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::ExcepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::ExcepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::ExcepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExeOptions-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList>();
        c->parent = this;
        exeoptions_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::ExcepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : exeoptions_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::ExcepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::ExcepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExeOptions-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::ExeOptionsList()
    :
    option{YType::enumeration, "option"},
    flag{YType::boolean, "flag"}
{

    yang_name = "ExeOptions-list"; yang_parent_name = "excep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::~ExeOptionsList()
{
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExeOptions-list";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::ExcepItems::ExeOptionsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::IpItems::IpItems()
    :
    options{YType::boolean, "options"},
    flag{YType::boolean, "flag"}
{

    yang_name = "ip-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::IpItems::~IpItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    return options.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::IpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::IcmpItems::IcmpItems()
    :
    ipicmp_list(this, {"option"})
{

    yang_name = "icmp-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::IcmpItems::~IcmpItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipicmp_list.len(); index++)
    {
        if(ipicmp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::has_operation() const
{
    for (std::size_t index=0; index<ipicmp_list.len(); index++)
    {
        if(ipicmp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::IcmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::IcmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::IcmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpIcmp-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList>();
        c->parent = this;
        ipicmp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::IcmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipicmp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::IcmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::IcmpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpIcmp-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::IpIcmpList()
    :
    option{YType::enumeration, "option"},
    flag{YType::boolean, "flag"}
{

    yang_name = "IpIcmp-list"; yang_parent_name = "icmp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::~IpIcmpList()
{
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpIcmp-list";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::IcmpItems::IpIcmpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::Ipv6Items::Ipv6Items()
    :
    options{YType::boolean, "options"},
    flag{YType::boolean, "flag"}
{

    yang_name = "ipv6-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::Ipv6Items::~Ipv6Items()
{
}

bool System::CoppItems::ClasspItems::ClassList::Ipv6Items::has_data() const
{
    if (is_presence_container) return true;
    return options.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::Ipv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::Ipv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::Ipv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::Ipv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::Ipv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::Ipv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::Ipv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::Ipv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Icmpv6Items()
    :
    ipv6icmp_list(this, {"option"})
{

    yang_name = "icmpv6-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::Icmpv6Items::~Icmpv6Items()
{
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6icmp_list.len(); index++)
    {
        if(ipv6icmp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::has_operation() const
{
    for (std::size_t index=0; index<ipv6icmp_list.len(); index++)
    {
        if(ipv6icmp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::Icmpv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::Icmpv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::Icmpv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ipv6Icmp-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList>();
        c->parent = this;
        ipv6icmp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::Icmpv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv6icmp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::Icmpv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::Icmpv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ipv6Icmp-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::Ipv6IcmpList()
    :
    option{YType::enumeration, "option"},
    flag{YType::boolean, "flag"}
{

    yang_name = "Ipv6Icmp-list"; yang_parent_name = "icmpv6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::~Ipv6IcmpList()
{
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| flag.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ipv6Icmp-list";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::Icmpv6Items::Ipv6IcmpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ProtItems::ProtItems()
    :
    protocol_list(this, {"type"})
{

    yang_name = "prot-items"; yang_parent_name = "Class-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::ProtItems::~ProtItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::has_operation() const
{
    for (std::size_t index=0; index<protocol_list.len(); index++)
    {
        if(protocol_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::ProtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::ProtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::ProtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Protocol-list")
    {
        auto c = std::make_shared<System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList>();
        c->parent = this;
        protocol_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::ProtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocol_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Protocol-list")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::ProtocolList()
    :
    type{YType::str, "type"},
    flag{YType::boolean, "flag"}
        ,
    mpls_items(std::make_shared<System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems>())
{
    mpls_items->parent = this;

    yang_name = "Protocol-list"; yang_parent_name = "prot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::~ProtocolList()
{
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| flag.is_set
	|| (mpls_items !=  nullptr && mpls_items->has_data());
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| (mpls_items !=  nullptr && mpls_items->has_operation());
}

std::string System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Protocol-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-items")
    {
        if(mpls_items == nullptr)
        {
            mpls_items = std::make_shared<System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems>();
        }
        return mpls_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_items != nullptr)
    {
        children["mpls-items"] = mpls_items;
    }

    return children;
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-items" || name == "type" || name == "flag")
        return true;
    return false;
}

System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::MplsItems()
    :
    exp{YType::uint32, "exp"},
    routeralert{YType::boolean, "routerAlert"}
{

    yang_name = "mpls-items"; yang_parent_name = "Protocol-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::~MplsItems()
{
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return exp.is_set
	|| routeralert.is_set;
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(routeralert.yfilter);
}

std::string System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (routeralert.is_set || is_set(routeralert.yfilter)) leaf_name_data.push_back(routeralert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerAlert")
    {
        routeralert = value;
        routeralert.value_namespace = name_space;
        routeralert.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "routerAlert")
    {
        routeralert.yfilter = yfilter;
    }
}

bool System::CoppItems::ClasspItems::ClassList::ProtItems::ProtocolList::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp" || name == "routerAlert")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyItems()
    :
    policy_list(this, {"name"})
{

    yang_name = "policy-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::PolicyItems::~PolicyItems()
{
}

bool System::CoppItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Policy-list")
    {
        auto c = std::make_shared<System::CoppItems::PolicyItems::PolicyList>();
        c->parent = this;
        policy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Policy-list")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::PolicyList()
    :
    name{YType::str, "name"},
    flag{YType::boolean, "flag"}
        ,
    classp_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems>())
{
    classp_items->parent = this;

    yang_name = "Policy-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::PolicyItems::PolicyList::~PolicyList()
{
}

bool System::CoppItems::PolicyItems::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| flag.is_set
	|| (classp_items !=  nullptr && classp_items->has_data());
}

bool System::CoppItems::PolicyItems::PolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| (classp_items !=  nullptr && classp_items->has_operation());
}

std::string System::CoppItems::PolicyItems::PolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::PolicyItems::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Policy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classp-items")
    {
        if(classp_items == nullptr)
        {
            classp_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems>();
        }
        return classp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classp_items != nullptr)
    {
        children["classp-items"] = classp_items;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classp-items" || name == "name" || name == "flag")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspItems()
    :
    classp_list(this, {"name"})
{

    yang_name = "classp-items"; yang_parent_name = "Policy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::~ClasspItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<classp_list.len(); index++)
    {
        if(classp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::has_operation() const
{
    for (std::size_t index=0; index<classp_list.len(); index++)
    {
        if(classp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Classp-list")
    {
        auto c = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList>();
        c->parent = this;
        classp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : classp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Classp-list")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::ClasspList()
    :
    name{YType::str, "name"},
    insertbeforename{YType::str, "insertBeforeName"},
    flag{YType::boolean, "flag"}
        ,
    cir_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems>())
    , policeactione_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems>())
    , logging_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems>())
    , setcos_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems>())
    , setdscp_items(std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems>())
{
    cir_items->parent = this;
    policeactione_items->parent = this;
    logging_items->parent = this;
    setcos_items->parent = this;
    setdscp_items->parent = this;

    yang_name = "Classp-list"; yang_parent_name = "classp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::~ClasspList()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| insertbeforename.is_set
	|| flag.is_set
	|| (cir_items !=  nullptr && cir_items->has_data())
	|| (policeactione_items !=  nullptr && policeactione_items->has_data())
	|| (logging_items !=  nullptr && logging_items->has_data())
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data());
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(insertbeforename.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| (cir_items !=  nullptr && cir_items->has_operation())
	|| (policeactione_items !=  nullptr && policeactione_items->has_operation())
	|| (logging_items !=  nullptr && logging_items->has_operation())
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation());
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Classp-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (insertbeforename.is_set || is_set(insertbeforename.yfilter)) leaf_name_data.push_back(insertbeforename.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir-items")
    {
        if(cir_items == nullptr)
        {
            cir_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems>();
        }
        return cir_items;
    }

    if(child_yang_name == "policeActionE-items")
    {
        if(policeactione_items == nullptr)
        {
            policeactione_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems>();
        }
        return policeactione_items;
    }

    if(child_yang_name == "logging-items")
    {
        if(logging_items == nullptr)
        {
            logging_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems>();
        }
        return logging_items;
    }

    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems>();
        }
        return setdscp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir_items != nullptr)
    {
        children["cir-items"] = cir_items;
    }

    if(policeactione_items != nullptr)
    {
        children["policeActionE-items"] = policeactione_items;
    }

    if(logging_items != nullptr)
    {
        children["logging-items"] = logging_items;
    }

    if(setcos_items != nullptr)
    {
        children["setCos-items"] = setcos_items;
    }

    if(setdscp_items != nullptr)
    {
        children["setDscp-items"] = setdscp_items;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insertBeforeName")
    {
        insertbeforename = value;
        insertbeforename.value_namespace = name_space;
        insertbeforename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "insertBeforeName")
    {
        insertbeforename.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir-items" || name == "policeActionE-items" || name == "logging-items" || name == "setCos-items" || name == "setDscp-items" || name == "name" || name == "insertBeforeName" || name == "flag")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::CirItems()
    :
    policeraction_list(this, {"cirval", "cirunit", "burstc", "burstunit"})
{

    yang_name = "cir-items"; yang_parent_name = "Classp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::~CirItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policeraction_list.len(); index++)
    {
        if(policeraction_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::has_operation() const
{
    for (std::size_t index=0; index<policeraction_list.len(); index++)
    {
        if(policeraction_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicerAction-list")
    {
        auto c = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList>();
        c->parent = this;
        policeraction_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policeraction_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicerAction-list")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::PolicerActionList()
    :
    cirval{YType::uint64, "cirVal"},
    cirunit{YType::enumeration, "cirUnit"},
    burstc{YType::uint32, "burstC"},
    burstunit{YType::enumeration, "burstUnit"},
    conformaction{YType::enumeration, "conformAction"},
    violateaction{YType::enumeration, "violateAction"},
    flag{YType::boolean, "flag"}
{

    yang_name = "PolicerAction-list"; yang_parent_name = "cir-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::~PolicerActionList()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::has_data() const
{
    if (is_presence_container) return true;
    return cirval.is_set
	|| cirunit.is_set
	|| burstc.is_set
	|| burstunit.is_set
	|| conformaction.is_set
	|| violateaction.is_set
	|| flag.is_set;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirval.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(burstc.yfilter)
	|| ydk::is_set(burstunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicerAction-list";
    ADD_KEY_TOKEN(cirval, "cirVal");
    ADD_KEY_TOKEN(cirunit, "cirUnit");
    ADD_KEY_TOKEN(burstc, "burstC");
    ADD_KEY_TOKEN(burstunit, "burstUnit");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirval.is_set || is_set(cirval.yfilter)) leaf_name_data.push_back(cirval.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (burstc.is_set || is_set(burstc.yfilter)) leaf_name_data.push_back(burstc.get_name_leafdata());
    if (burstunit.is_set || is_set(burstunit.yfilter)) leaf_name_data.push_back(burstunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirVal")
    {
        cirval = value;
        cirval.value_namespace = name_space;
        cirval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstC")
    {
        burstc = value;
        burstc.value_namespace = name_space;
        burstc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstUnit")
    {
        burstunit = value;
        burstunit.value_namespace = name_space;
        burstunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirVal")
    {
        cirval.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "burstC")
    {
        burstc.yfilter = yfilter;
    }
    if(value_path == "burstUnit")
    {
        burstunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::CirItems::PolicerActionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirVal" || name == "cirUnit" || name == "burstC" || name == "burstUnit" || name == "conformAction" || name == "violateAction" || name == "flag")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::PoliceActionEItems()
    :
    cirval{YType::uint64, "cirVal"},
    cirunit{YType::enumeration, "cirUnit"},
    burstc{YType::uint32, "burstC"},
    burstunit{YType::enumeration, "burstUnit"},
    pirval{YType::uint64, "pirVal"},
    pirunit{YType::enumeration, "pirUnit"},
    burste{YType::uint32, "burstE"},
    bursteunit{YType::enumeration, "burstEUnit"},
    conformaction{YType::enumeration, "conformAction"},
    exceedaction{YType::enumeration, "exceedAction"},
    violateaction{YType::enumeration, "violateAction"}
{

    yang_name = "policeActionE-items"; yang_parent_name = "Classp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::~PoliceActionEItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::has_data() const
{
    if (is_presence_container) return true;
    return cirval.is_set
	|| cirunit.is_set
	|| burstc.is_set
	|| burstunit.is_set
	|| pirval.is_set
	|| pirunit.is_set
	|| burste.is_set
	|| bursteunit.is_set
	|| conformaction.is_set
	|| exceedaction.is_set
	|| violateaction.is_set;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirval.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(burstc.yfilter)
	|| ydk::is_set(burstunit.yfilter)
	|| ydk::is_set(pirval.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(burste.yfilter)
	|| ydk::is_set(bursteunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(violateaction.yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policeActionE-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirval.is_set || is_set(cirval.yfilter)) leaf_name_data.push_back(cirval.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (burstc.is_set || is_set(burstc.yfilter)) leaf_name_data.push_back(burstc.get_name_leafdata());
    if (burstunit.is_set || is_set(burstunit.yfilter)) leaf_name_data.push_back(burstunit.get_name_leafdata());
    if (pirval.is_set || is_set(pirval.yfilter)) leaf_name_data.push_back(pirval.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (burste.is_set || is_set(burste.yfilter)) leaf_name_data.push_back(burste.get_name_leafdata());
    if (bursteunit.is_set || is_set(bursteunit.yfilter)) leaf_name_data.push_back(bursteunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirVal")
    {
        cirval = value;
        cirval.value_namespace = name_space;
        cirval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstC")
    {
        burstc = value;
        burstc.value_namespace = name_space;
        burstc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstUnit")
    {
        burstunit = value;
        burstunit.value_namespace = name_space;
        burstunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirVal")
    {
        pirval = value;
        pirval.value_namespace = name_space;
        pirval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstE")
    {
        burste = value;
        burste.value_namespace = name_space;
        burste.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstEUnit")
    {
        bursteunit = value;
        bursteunit.value_namespace = name_space;
        bursteunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirVal")
    {
        cirval.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "burstC")
    {
        burstc.yfilter = yfilter;
    }
    if(value_path == "burstUnit")
    {
        burstunit.yfilter = yfilter;
    }
    if(value_path == "pirVal")
    {
        pirval.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "burstE")
    {
        burste.yfilter = yfilter;
    }
    if(value_path == "burstEUnit")
    {
        bursteunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::PoliceActionEItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirVal" || name == "cirUnit" || name == "burstC" || name == "burstUnit" || name == "pirVal" || name == "pirUnit" || name == "burstE" || name == "burstEUnit" || name == "conformAction" || name == "exceedAction" || name == "violateAction")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingItems()
    :
    logging_list(this, {"threshold", "levelrange"})
{

    yang_name = "logging-items"; yang_parent_name = "Classp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::~LoggingItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logging_list.len(); index++)
    {
        if(logging_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::has_operation() const
{
    for (std::size_t index=0; index<logging_list.len(); index++)
    {
        if(logging_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Logging-list")
    {
        auto c = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList>();
        c->parent = this;
        logging_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : logging_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Logging-list")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::LoggingList()
    :
    threshold{YType::uint64, "threshold"},
    levelrange{YType::uint16, "levelRange"}
{

    yang_name = "Logging-list"; yang_parent_name = "logging-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::~LoggingList()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| levelrange.is_set;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(levelrange.yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Logging-list";
    ADD_KEY_TOKEN(threshold, "threshold");
    ADD_KEY_TOKEN(levelrange, "levelRange");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (levelrange.is_set || is_set(levelrange.yfilter)) leaf_name_data.push_back(levelrange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levelRange")
    {
        levelrange = value;
        levelrange.value_namespace = name_space;
        levelrange.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "levelRange")
    {
        levelrange.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::LoggingItems::LoggingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "levelRange")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosItems()
    :
    setcos_list(this, {"cosval"})
{

    yang_name = "setCos-items"; yang_parent_name = "Classp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::~SetCosItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setcos_list.len(); index++)
    {
        if(setcos_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::has_operation() const
{
    for (std::size_t index=0; index<setcos_list.len(); index++)
    {
        if(setcos_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SetCos-list")
    {
        auto c = std::make_shared<System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList>();
        c->parent = this;
        setcos_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : setcos_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SetCos-list")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::SetCosList()
    :
    cosval{YType::uint16, "cosVal"},
    inner{YType::boolean, "inner"},
    flag{YType::boolean, "flag"}
{

    yang_name = "SetCos-list"; yang_parent_name = "setCos-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::~SetCosList()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::has_data() const
{
    if (is_presence_container) return true;
    return cosval.is_set
	|| inner.is_set
	|| flag.is_set;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cosval.yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(flag.yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SetCos-list";
    ADD_KEY_TOKEN(cosval, "cosVal");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cosval.is_set || is_set(cosval.yfilter)) leaf_name_data.push_back(cosval.get_name_leafdata());
    if (inner.is_set || is_set(inner.yfilter)) leaf_name_data.push_back(inner.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cosVal")
    {
        cosval = value;
        cosval.value_namespace = name_space;
        cosval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner")
    {
        inner = value;
        inner.value_namespace = name_space;
        inner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cosVal")
    {
        cosval.yfilter = yfilter;
    }
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetCosItems::SetCosList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cosVal" || name == "inner" || name == "flag")
        return true;
    return false;
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::SetDscpItems()
    :
    tunnel{YType::boolean, "tunnel"},
    dscpval{YType::uint16, "dscpVal"}
{

    yang_name = "setDscp-items"; yang_parent_name = "Classp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::~SetDscpItems()
{
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set
	|| dscpval.is_set;
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(dscpval.yfilter);
}

std::string System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (dscpval.is_set || is_set(dscpval.yfilter)) leaf_name_data.push_back(dscpval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscpVal")
    {
        dscpval = value;
        dscpval.value_namespace = name_space;
        dscpval.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "dscpVal")
    {
        dscpval.yfilter = yfilter;
    }
}

bool System::CoppItems::PolicyItems::PolicyList::ClasspItems::ClasspList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "dscpVal")
        return true;
    return false;
}

System::CoppItems::ProfileItems::ProfileItems()
    :
    prof{YType::enumeration, "prof"}
{

    yang_name = "profile-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ProfileItems::~ProfileItems()
{
}

bool System::CoppItems::ProfileItems::has_data() const
{
    if (is_presence_container) return true;
    return prof.is_set;
}

bool System::CoppItems::ProfileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prof.yfilter);
}

std::string System::CoppItems::ProfileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ProfileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ProfileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prof.is_set || is_set(prof.yfilter)) leaf_name_data.push_back(prof.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ProfileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ProfileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ProfileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prof")
    {
        prof = value;
        prof.value_namespace = name_space;
        prof.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ProfileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prof")
    {
        prof.yfilter = yfilter;
    }
}

bool System::CoppItems::ProfileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prof")
        return true;
    return false;
}

System::CoppItems::NameItems::NameItems()
    :
    copyprofile_list(this, {"affixname"})
{

    yang_name = "name-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::NameItems::~NameItems()
{
}

bool System::CoppItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<copyprofile_list.len(); index++)
    {
        if(copyprofile_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<copyprofile_list.len(); index++)
    {
        if(copyprofile_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CopyProfile-list")
    {
        auto c = std::make_shared<System::CoppItems::NameItems::CopyProfileList>();
        c->parent = this;
        copyprofile_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : copyprofile_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CopyProfile-list")
        return true;
    return false;
}

System::CoppItems::NameItems::CopyProfileList::CopyProfileList()
    :
    affixname{YType::str, "affixName"},
    profile{YType::enumeration, "profile"},
    affix{YType::enumeration, "affix"},
    copynum{YType::uint32, "copyNum"}
{

    yang_name = "CopyProfile-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::NameItems::CopyProfileList::~CopyProfileList()
{
}

bool System::CoppItems::NameItems::CopyProfileList::has_data() const
{
    if (is_presence_container) return true;
    return affixname.is_set
	|| profile.is_set
	|| affix.is_set
	|| copynum.is_set;
}

bool System::CoppItems::NameItems::CopyProfileList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affixname.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(affix.yfilter)
	|| ydk::is_set(copynum.yfilter);
}

std::string System::CoppItems::NameItems::CopyProfileList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::NameItems::CopyProfileList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CopyProfile-list";
    ADD_KEY_TOKEN(affixname, "affixName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::NameItems::CopyProfileList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affixname.is_set || is_set(affixname.yfilter)) leaf_name_data.push_back(affixname.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (affix.is_set || is_set(affix.yfilter)) leaf_name_data.push_back(affix.get_name_leafdata());
    if (copynum.is_set || is_set(copynum.yfilter)) leaf_name_data.push_back(copynum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::NameItems::CopyProfileList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::NameItems::CopyProfileList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::NameItems::CopyProfileList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affixName")
    {
        affixname = value;
        affixname.value_namespace = name_space;
        affixname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affix")
    {
        affix = value;
        affix.value_namespace = name_space;
        affix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copyNum")
    {
        copynum = value;
        copynum.value_namespace = name_space;
        copynum.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::NameItems::CopyProfileList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affixName")
    {
        affixname.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "affix")
    {
        affix.yfilter = yfilter;
    }
    if(value_path == "copyNum")
    {
        copynum.yfilter = yfilter;
    }
}

bool System::CoppItems::NameItems::CopyProfileList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affixName" || name == "profile" || name == "affix" || name == "copyNum")
        return true;
    return false;
}

System::CoppItems::ScaleItems::ScaleItems()
    :
    scale_list(this, {"module"})
{

    yang_name = "scale-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ScaleItems::~ScaleItems()
{
}

bool System::CoppItems::ScaleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<scale_list.len(); index++)
    {
        if(scale_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ScaleItems::has_operation() const
{
    for (std::size_t index=0; index<scale_list.len(); index++)
    {
        if(scale_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ScaleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ScaleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ScaleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ScaleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Scale-list")
    {
        auto c = std::make_shared<System::CoppItems::ScaleItems::ScaleList>();
        c->parent = this;
        scale_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ScaleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : scale_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ScaleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ScaleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ScaleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Scale-list")
        return true;
    return false;
}

System::CoppItems::ScaleItems::ScaleList::ScaleList()
    :
    module{YType::uint16, "module"},
    scaleval{YType::str, "scaleVal"}
{

    yang_name = "Scale-list"; yang_parent_name = "scale-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ScaleItems::ScaleList::~ScaleList()
{
}

bool System::CoppItems::ScaleItems::ScaleList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| scaleval.is_set;
}

bool System::CoppItems::ScaleItems::ScaleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(scaleval.yfilter);
}

std::string System::CoppItems::ScaleItems::ScaleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/scale-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ScaleItems::ScaleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Scale-list";
    ADD_KEY_TOKEN(module, "module");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ScaleItems::ScaleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (scaleval.is_set || is_set(scaleval.yfilter)) leaf_name_data.push_back(scaleval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ScaleItems::ScaleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ScaleItems::ScaleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ScaleItems::ScaleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scaleVal")
    {
        scaleval = value;
        scaleval.value_namespace = name_space;
        scaleval.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ScaleItems::ScaleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "scaleVal")
    {
        scaleval.yfilter = yfilter;
    }
}

bool System::CoppItems::ScaleItems::ScaleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module" || name == "scaleVal")
        return true;
    return false;
}

System::CoppItems::ServiceItems::ServiceItems()
    :
    service_list(this, {"name"})
{

    yang_name = "service-items"; yang_parent_name = "copp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ServiceItems::~ServiceItems()
{
}

bool System::CoppItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_list.len(); index++)
    {
        if(service_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CoppItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<service_list.len(); index++)
    {
        if(service_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CoppItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Service-list")
    {
        auto c = std::make_shared<System::CoppItems::ServiceItems::ServiceList>();
        c->parent = this;
        service_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : service_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::CoppItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CoppItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CoppItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Service-list")
        return true;
    return false;
}

System::CoppItems::ServiceItems::ServiceList::ServiceList()
    :
    name{YType::str, "name"},
    error{YType::uint64, "error"}
{

    yang_name = "Service-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CoppItems::ServiceItems::ServiceList::~ServiceList()
{
}

bool System::CoppItems::ServiceItems::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| error.is_set;
}

bool System::CoppItems::ServiceItems::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(error.yfilter);
}

std::string System::CoppItems::ServiceItems::ServiceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/copp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CoppItems::ServiceItems::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Service-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CoppItems::ServiceItems::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::CoppItems::ServiceItems::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::CoppItems::ServiceItems::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::CoppItems::ServiceItems::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
}

void System::CoppItems::ServiceItems::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
}

bool System::CoppItems::ServiceItems::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "error")
        return true;
    return false;
}

System::GleanItems::GleanItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::GleanItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "glean-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GleanItems::~GleanItems()
{
}

bool System::GleanItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::GleanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::GleanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GleanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "glean-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::GleanItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::GleanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::GleanItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::GleanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::GleanItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::GleanItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "glean-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GleanItems::InstItems::~InstItems()
{
}

bool System::GleanItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::GleanItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::GleanItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/glean-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GleanItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::GleanItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::GleanItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::GleanItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::GleanItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"encap"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GleanItems::InstItems::DomItems::~DomItems()
{
}

bool System::GleanItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::GleanItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::GleanItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/glean-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GleanItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::GleanItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::get_children() const
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

void System::GleanItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::GleanItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::GleanItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomList::DomList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"}
        ,
    bd_items(std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems>())
{
    bd_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::GleanItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::GleanItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| (bd_items !=  nullptr && bd_items->has_data());
}

bool System::GleanItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (bd_items !=  nullptr && bd_items->has_operation());
}

std::string System::GleanItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/glean-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::GleanItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems>();
        }
        return bd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    return children;
}

void System::GleanItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::GleanItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::GleanItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-items" || name == "encap" || name == "name")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BdItems()
    :
    bd_list(this, {"encap"})
{

    yang_name = "bd-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::~BdItems()
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::GleanItems::InstItems::DomItems::DomList::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::DomList::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::DomList::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BD-list")
    {
        auto c = std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList>();
        c->parent = this;
        bd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::DomList::BdItems::get_children() const
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

void System::GleanItems::InstItems::DomItems::DomList::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BD-list")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::BDList()
    :
    encap{YType::str, "encap"},
    gwmac{YType::str, "gwMac"},
    fmcastgrp{YType::str, "fmcastGrp"},
    name{YType::str, "name"}
        ,
    gw_items(std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems>())
{
    gw_items->parent = this;

    yang_name = "BD-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::~BDList()
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| gwmac.is_set
	|| fmcastgrp.is_set
	|| name.is_set
	|| (gw_items !=  nullptr && gw_items->has_data());
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(gwmac.yfilter)
	|| ydk::is_set(fmcastgrp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (gw_items !=  nullptr && gw_items->has_operation());
}

std::string System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BD-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (gwmac.is_set || is_set(gwmac.yfilter)) leaf_name_data.push_back(gwmac.get_name_leafdata());
    if (fmcastgrp.is_set || is_set(fmcastgrp.yfilter)) leaf_name_data.push_back(fmcastgrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-items")
    {
        if(gw_items == nullptr)
        {
            gw_items = std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems>();
        }
        return gw_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gw_items != nullptr)
    {
        children["gw-items"] = gw_items;
    }

    return children;
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gwMac")
    {
        gwmac = value;
        gwmac.value_namespace = name_space;
        gwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fmcastGrp")
    {
        fmcastgrp = value;
        fmcastgrp.value_namespace = name_space;
        fmcastgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "gwMac")
    {
        gwmac.yfilter = yfilter;
    }
    if(value_path == "fmcastGrp")
    {
        fmcastgrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-items" || name == "encap" || name == "gwMac" || name == "fmcastGrp" || name == "name")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GwItems()
    :
    gateway_list(this, {"ip"})
{

    yang_name = "gw-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::~GwItems()
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gateway_list.len(); index++)
    {
        if(gateway_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::has_operation() const
{
    for (std::size_t index=0; index<gateway_list.len(); index++)
    {
        if(gateway_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Gateway-list")
    {
        auto c = std::make_shared<System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList>();
        c->parent = this;
        gateway_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : gateway_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Gateway-list")
        return true;
    return false;
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::GatewayList()
    :
    ip{YType::str, "ip"}
{

    yang_name = "Gateway-list"; yang_parent_name = "gw-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::~GatewayList()
{
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Gateway-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::GleanItems::InstItems::DomItems::DomList::BdItems::BDList::GwItems::GatewayList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::HmmItems::HmmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    fwdinst_items(std::make_shared<System::HmmItems::FwdinstItems>())
{
    fwdinst_items->parent = this;

    yang_name = "hmm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::~HmmItems()
{
}

bool System::HmmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_data());
}

bool System::HmmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (fwdinst_items !=  nullptr && fwdinst_items->has_operation());
}

std::string System::HmmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwdinst-items")
    {
        if(fwdinst_items == nullptr)
        {
            fwdinst_items = std::make_shared<System::HmmItems::FwdinstItems>();
        }
        return fwdinst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fwdinst_items != nullptr)
    {
        children["fwdinst-items"] = fwdinst_items;
    }

    return children;
}

void System::HmmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HmmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HmmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdinst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::FwdinstItems()
    :
    amac{YType::str, "amac"},
    limitvlanmac{YType::uint16, "limitVlanMac"},
    selhostprobe{YType::enumeration, "selHostProbe"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::HmmItems::FwdinstItems::IfItems>())
    , evpn_items(std::make_shared<System::HmmItems::FwdinstItems::EvpnItems>())
    , tenant_items(std::make_shared<System::HmmItems::FwdinstItems::TenantItems>())
{
    if_items->parent = this;
    evpn_items->parent = this;
    tenant_items->parent = this;

    yang_name = "fwdinst-items"; yang_parent_name = "hmm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::~FwdinstItems()
{
}

bool System::HmmItems::FwdinstItems::has_data() const
{
    if (is_presence_container) return true;
    return amac.is_set
	|| limitvlanmac.is_set
	|| selhostprobe.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (evpn_items !=  nullptr && evpn_items->has_data())
	|| (tenant_items !=  nullptr && tenant_items->has_data());
}

bool System::HmmItems::FwdinstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(amac.yfilter)
	|| ydk::is_set(limitvlanmac.yfilter)
	|| ydk::is_set(selhostprobe.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (evpn_items !=  nullptr && evpn_items->has_operation())
	|| (tenant_items !=  nullptr && tenant_items->has_operation());
}

std::string System::HmmItems::FwdinstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwdinst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amac.is_set || is_set(amac.yfilter)) leaf_name_data.push_back(amac.get_name_leafdata());
    if (limitvlanmac.is_set || is_set(limitvlanmac.yfilter)) leaf_name_data.push_back(limitvlanmac.get_name_leafdata());
    if (selhostprobe.is_set || is_set(selhostprobe.yfilter)) leaf_name_data.push_back(selhostprobe.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::HmmItems::FwdinstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "evpn-items")
    {
        if(evpn_items == nullptr)
        {
            evpn_items = std::make_shared<System::HmmItems::FwdinstItems::EvpnItems>();
        }
        return evpn_items;
    }

    if(child_yang_name == "tenant-items")
    {
        if(tenant_items == nullptr)
        {
            tenant_items = std::make_shared<System::HmmItems::FwdinstItems::TenantItems>();
        }
        return tenant_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(evpn_items != nullptr)
    {
        children["evpn-items"] = evpn_items;
    }

    if(tenant_items != nullptr)
    {
        children["tenant-items"] = tenant_items;
    }

    return children;
}

void System::HmmItems::FwdinstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "amac")
    {
        amac = value;
        amac.value_namespace = name_space;
        amac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limitVlanMac")
    {
        limitvlanmac = value;
        limitvlanmac.value_namespace = name_space;
        limitvlanmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selHostProbe")
    {
        selhostprobe = value;
        selhostprobe.value_namespace = name_space;
        selhostprobe.value_namespace_prefix = name_space_prefix;
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

void System::HmmItems::FwdinstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "amac")
    {
        amac.yfilter = yfilter;
    }
    if(value_path == "limitVlanMac")
    {
        limitvlanmac.yfilter = yfilter;
    }
    if(value_path == "selHostProbe")
    {
        selhostprobe.yfilter = yfilter;
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

bool System::HmmItems::FwdinstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "evpn-items" || name == "tenant-items" || name == "amac" || name == "limitVlanMac" || name == "selHostProbe" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::IfItems::IfItems()
    :
    fwdif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::IfItems::~IfItems()
{
}

bool System::HmmItems::FwdinstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwdif_list.len(); index++)
    {
        if(fwdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HmmItems::FwdinstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<fwdif_list.len(); index++)
    {
        if(fwdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HmmItems::FwdinstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/fwdinst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwdIf-list")
    {
        auto c = std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList>();
        c->parent = this;
        fwdif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fwdif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HmmItems::FwdinstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HmmItems::FwdinstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HmmItems::FwdinstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwdIf-list")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::FwdIfList()
    :
    id{YType::str, "id"},
    mode{YType::enumeration, "mode"},
    vrfname{YType::str, "VrfName"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "FwdIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::~FwdIfList()
{
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| mode.is_set
	|| vrfname.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::HmmItems::FwdinstItems::IfItems::FwdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/fwdinst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::IfItems::FwdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::IfItems::FwdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::IfItems::FwdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::IfItems::FwdIfList::get_children() const
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

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "VrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
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

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "VrfName")
    {
        vrfname.yfilter = yfilter;
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

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "mode" || name == "VrfName" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "FwdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "FwdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::get_children() const
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

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HmmItems::FwdinstItems::IfItems::FwdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::EvpnItems::EvpnItems()
    :
    ddhmmoves{YType::uint16, "ddHmmoves"},
    ddhnsecs{YType::uint16, "ddHnsecs"},
    dhrtimeout{YType::uint16, "dhrtimeout"},
    dhrcount{YType::uint16, "dhrcount"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "evpn-items"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::EvpnItems::~EvpnItems()
{
}

bool System::HmmItems::FwdinstItems::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return ddhmmoves.is_set
	|| ddhnsecs.is_set
	|| dhrtimeout.is_set
	|| dhrcount.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::HmmItems::FwdinstItems::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ddhmmoves.yfilter)
	|| ydk::is_set(ddhnsecs.yfilter)
	|| ydk::is_set(dhrtimeout.yfilter)
	|| ydk::is_set(dhrcount.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::HmmItems::FwdinstItems::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/fwdinst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ddhmmoves.is_set || is_set(ddhmmoves.yfilter)) leaf_name_data.push_back(ddhmmoves.get_name_leafdata());
    if (ddhnsecs.is_set || is_set(ddhnsecs.yfilter)) leaf_name_data.push_back(ddhnsecs.get_name_leafdata());
    if (dhrtimeout.is_set || is_set(dhrtimeout.yfilter)) leaf_name_data.push_back(dhrtimeout.get_name_leafdata());
    if (dhrcount.is_set || is_set(dhrcount.yfilter)) leaf_name_data.push_back(dhrcount.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HmmItems::FwdinstItems::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ddHmmoves")
    {
        ddhmmoves = value;
        ddhmmoves.value_namespace = name_space;
        ddhmmoves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddHnsecs")
    {
        ddhnsecs = value;
        ddhnsecs.value_namespace = name_space;
        ddhnsecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhrtimeout")
    {
        dhrtimeout = value;
        dhrtimeout.value_namespace = name_space;
        dhrtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhrcount")
    {
        dhrcount = value;
        dhrcount.value_namespace = name_space;
        dhrcount.value_namespace_prefix = name_space_prefix;
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

void System::HmmItems::FwdinstItems::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ddHmmoves")
    {
        ddhmmoves.yfilter = yfilter;
    }
    if(value_path == "ddHnsecs")
    {
        ddhnsecs.yfilter = yfilter;
    }
    if(value_path == "dhrtimeout")
    {
        dhrtimeout.yfilter = yfilter;
    }
    if(value_path == "dhrcount")
    {
        dhrcount.yfilter = yfilter;
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

bool System::HmmItems::FwdinstItems::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ddHmmoves" || name == "ddHnsecs" || name == "dhrtimeout" || name == "dhrcount" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::TenantItems::TenantItems()
    :
    tenantdb_list(this, {"vrfname"})
{

    yang_name = "tenant-items"; yang_parent_name = "fwdinst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::TenantItems::~TenantItems()
{
}

bool System::HmmItems::FwdinstItems::TenantItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tenantdb_list.len(); index++)
    {
        if(tenantdb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HmmItems::FwdinstItems::TenantItems::has_operation() const
{
    for (std::size_t index=0; index<tenantdb_list.len(); index++)
    {
        if(tenantdb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HmmItems::FwdinstItems::TenantItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/fwdinst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::TenantItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::TenantItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::TenantItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TenantDb-list")
    {
        auto c = std::make_shared<System::HmmItems::FwdinstItems::TenantItems::TenantDbList>();
        c->parent = this;
        tenantdb_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::TenantItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tenantdb_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HmmItems::FwdinstItems::TenantItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HmmItems::FwdinstItems::TenantItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HmmItems::FwdinstItems::TenantItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TenantDb-list")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::TenantDbList()
    :
    vrfname{YType::str, "vrfName"},
    vrfstate{YType::str, "vrfState"},
    vniid{YType::uint32, "vniId"},
    refcount{YType::uint32, "refCount"}
        ,
    af_items(std::make_shared<System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems>())
{
    af_items->parent = this;

    yang_name = "TenantDb-list"; yang_parent_name = "tenant-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::~TenantDbList()
{
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| vrfstate.is_set
	|| vniid.is_set
	|| refcount.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(vrfstate.yfilter)
	|| ydk::is_set(vniid.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::HmmItems::FwdinstItems::TenantItems::TenantDbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hmm-items/fwdinst-items/tenant-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HmmItems::FwdinstItems::TenantItems::TenantDbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TenantDb-list";
    ADD_KEY_TOKEN(vrfname, "vrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::TenantItems::TenantDbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (vrfstate.is_set || is_set(vrfstate.yfilter)) leaf_name_data.push_back(vrfstate.get_name_leafdata());
    if (vniid.is_set || is_set(vniid.yfilter)) leaf_name_data.push_back(vniid.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfState")
    {
        vrfstate = value;
        vrfstate.value_namespace = name_space;
        vrfstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniId")
    {
        vniid = value;
        vniid.value_namespace = name_space;
        vniid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "vrfState")
    {
        vrfstate.yfilter = yfilter;
    }
    if(value_path == "vniId")
    {
        vniid.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "vrfName" || name == "vrfState" || name == "vniId" || name == "refCount")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::AfItems()
    :
    tenantdbaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "TenantDb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::~AfItems()
{
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tenantdbaf_list.len(); index++)
    {
        if(tenantdbaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<tenantdbaf_list.len(); index++)
    {
        if(tenantdbaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TenantDBAf-list")
    {
        auto c = std::make_shared<System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList>();
        c->parent = this;
        tenantdbaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tenantdbaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TenantDBAf-list")
        return true;
    return false;
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::TenantDBAfList()
    :
    type{YType::enumeration, "type"},
    tblstate{YType::str, "tblState"},
    localhosts{YType::uint32, "localHosts"},
    remotehosts{YType::uint32, "remoteHosts"},
    aggregates{YType::uint32, "aggregates"}
{

    yang_name = "TenantDBAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::~TenantDBAfList()
{
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| tblstate.is_set
	|| localhosts.is_set
	|| remotehosts.is_set
	|| aggregates.is_set;
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(tblstate.yfilter)
	|| ydk::is_set(localhosts.yfilter)
	|| ydk::is_set(remotehosts.yfilter)
	|| ydk::is_set(aggregates.yfilter);
}

std::string System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TenantDBAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (tblstate.is_set || is_set(tblstate.yfilter)) leaf_name_data.push_back(tblstate.get_name_leafdata());
    if (localhosts.is_set || is_set(localhosts.yfilter)) leaf_name_data.push_back(localhosts.get_name_leafdata());
    if (remotehosts.is_set || is_set(remotehosts.yfilter)) leaf_name_data.push_back(remotehosts.get_name_leafdata());
    if (aggregates.is_set || is_set(aggregates.yfilter)) leaf_name_data.push_back(aggregates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tblState")
    {
        tblstate = value;
        tblstate.value_namespace = name_space;
        tblstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localHosts")
    {
        localhosts = value;
        localhosts.value_namespace = name_space;
        localhosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteHosts")
    {
        remotehosts = value;
        remotehosts.value_namespace = name_space;
        remotehosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregates")
    {
        aggregates = value;
        aggregates.value_namespace = name_space;
        aggregates.value_namespace_prefix = name_space_prefix;
    }
}

void System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "tblState")
    {
        tblstate.yfilter = yfilter;
    }
    if(value_path == "localHosts")
    {
        localhosts.yfilter = yfilter;
    }
    if(value_path == "remoteHosts")
    {
        remotehosts.yfilter = yfilter;
    }
    if(value_path == "aggregates")
    {
        aggregates.yfilter = yfilter;
    }
}

bool System::HmmItems::FwdinstItems::TenantItems::TenantDbList::AfItems::TenantDBAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "tblState" || name == "localHosts" || name == "remoteHosts" || name == "aggregates")
        return true;
    return false;
}

System::HwtelemetryItems::HwtelemetryItems()
    :
    fte_items(std::make_shared<System::HwtelemetryItems::FteItems>())
{
    fte_items->parent = this;

    yang_name = "hwtelemetry-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::~HwtelemetryItems()
{
}

bool System::HwtelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return (fte_items !=  nullptr && fte_items->has_data());
}

bool System::HwtelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| (fte_items !=  nullptr && fte_items->has_operation());
}

std::string System::HwtelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwtelemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fte-items")
    {
        if(fte_items == nullptr)
        {
            fte_items = std::make_shared<System::HwtelemetryItems::FteItems>();
        }
        return fte_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fte_items != nullptr)
    {
        children["fte-items"] = fte_items;
    }

    return children;
}

void System::HwtelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fte-items")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::FteItems()
    :
    inst_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "fte-items"; yang_parent_name = "hwtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::FteItems::~FteItems()
{
}

bool System::HwtelemetryItems::FteItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::HwtelemetryItems::FteItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::HwtelemetryItems::FteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::FteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstItems()
    :
    inst_list(this, {"mode"})
{

    yang_name = "inst-items"; yang_parent_name = "fte-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::FteItems::InstItems::~InstItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/fte-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::FteItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::get_children() const
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

void System::HwtelemetryItems::FteItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::InstList()
    :
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    collector_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems>())
    , record_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems>())
    , monitor_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems>())
    , sysfte_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems>())
{
    collector_items->parent = this;
    record_items->parent = this;
    monitor_items->parent = this;
    sysfte_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::~InstList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (collector_items !=  nullptr && collector_items->has_data())
	|| (record_items !=  nullptr && record_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (sysfte_items !=  nullptr && sysfte_items->has_data());
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (collector_items !=  nullptr && collector_items->has_operation())
	|| (record_items !=  nullptr && record_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (sysfte_items !=  nullptr && sysfte_items->has_operation());
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hwtelemetry-items/fte-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(mode, "mode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collector-items")
    {
        if(collector_items == nullptr)
        {
            collector_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems>();
        }
        return collector_items;
    }

    if(child_yang_name == "record-items")
    {
        if(record_items == nullptr)
        {
            record_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems>();
        }
        return record_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "sysfte-items")
    {
        if(sysfte_items == nullptr)
        {
            sysfte_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems>();
        }
        return sysfte_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(collector_items != nullptr)
    {
        children["collector-items"] = collector_items;
    }

    if(record_items != nullptr)
    {
        children["record-items"] = record_items;
    }

    if(monitor_items != nullptr)
    {
        children["monitor-items"] = monitor_items;
    }

    if(sysfte_items != nullptr)
    {
        children["sysfte-items"] = sysfte_items;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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

void System::HwtelemetryItems::FteItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
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

bool System::HwtelemetryItems::FteItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collector-items" || name == "record-items" || name == "monitor-items" || name == "sysfte-items" || name == "mode" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorItems()
    :
    collector_list(this, {"name"})
{

    yang_name = "collector-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::~CollectorItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::has_operation() const
{
    for (std::size_t index=0; index<collector_list.len(); index++)
    {
        if(collector_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Collector-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList>();
        c->parent = this;
        collector_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : collector_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Collector-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::CollectorList()
    :
    name{YType::str, "name"},
    vrfname{YType::str, "vrfName"},
    dstaddr{YType::str, "dstAddr"},
    dstport{YType::uint16, "dstPort"},
    dscp{YType::uint8, "dscp"},
    srcif{YType::str, "srcIf"},
    srcaddr{YType::str, "srcAddr"},
    descr{YType::str, "descr"}
{

    yang_name = "Collector-list"; yang_parent_name = "collector-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::~CollectorList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vrfname.is_set
	|| dstaddr.is_set
	|| dstport.is_set
	|| dscp.is_set
	|| srcif.is_set
	|| srcaddr.is_set
	|| descr.is_set;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Collector-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstAddr")
    {
        dstaddr = value;
        dstaddr.value_namespace = name_space;
        dstaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::CollectorItems::CollectorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrfName" || name == "dstAddr" || name == "dstPort" || name == "dscp" || name == "srcIf" || name == "srcAddr" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordItems()
    :
    record_list(this, {"name"})
{

    yang_name = "record-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::~RecordItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<record_list.len(); index++)
    {
        if(record_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::has_operation() const
{
    for (std::size_t index=0; index<record_list.len(); index++)
    {
        if(record_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Record-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList>();
        c->parent = this;
        record_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : record_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Record-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::RecordList()
    :
    name{YType::str, "name"},
    match{YType::str, "match"},
    eventgroups{YType::str, "eventGroups"},
    descr{YType::str, "descr"}
{

    yang_name = "Record-list"; yang_parent_name = "record-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::~RecordList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match.is_set
	|| eventgroups.is_set
	|| descr.is_set;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(eventgroups.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Record-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (eventgroups.is_set || is_set(eventgroups.yfilter)) leaf_name_data.push_back(eventgroups.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eventGroups")
    {
        eventgroups = value;
        eventgroups.value_namespace = name_space;
        eventgroups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "eventGroups")
    {
        eventgroups.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::RecordItems::RecordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match" || name == "eventGroups" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorItems()
    :
    monitor_list(this, {"name"})
{

    yang_name = "monitor-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::~MonitorItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::has_operation() const
{
    for (std::size_t index=0; index<monitor_list.len(); index++)
    {
        if(monitor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Monitor-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList>();
        c->parent = this;
        monitor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : monitor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Monitor-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::MonitorList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rsrecordatt_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems>())
    , rscollectoratt_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>())
{
    rsrecordatt_items->parent = this;
    rscollectoratt_items->parent = this;

    yang_name = "Monitor-list"; yang_parent_name = "monitor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::~MonitorList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rsrecordatt_items !=  nullptr && rsrecordatt_items->has_data())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_data());
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rsrecordatt_items !=  nullptr && rsrecordatt_items->has_operation())
	|| (rscollectoratt_items !=  nullptr && rscollectoratt_items->has_operation());
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Monitor-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrecordAtt-items")
    {
        if(rsrecordatt_items == nullptr)
        {
            rsrecordatt_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems>();
        }
        return rsrecordatt_items;
    }

    if(child_yang_name == "rscollectorAtt-items")
    {
        if(rscollectoratt_items == nullptr)
        {
            rscollectoratt_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems>();
        }
        return rscollectoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrecordatt_items != nullptr)
    {
        children["rsrecordAtt-items"] = rsrecordatt_items;
    }

    if(rscollectoratt_items != nullptr)
    {
        children["rscollectorAtt-items"] = rscollectoratt_items;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrecordAtt-items" || name == "rscollectorAtt-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsrecordAttItems()
    :
    rsrecordatt_list(this, {"tdn"})
{

    yang_name = "rsrecordAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::~RsrecordAttItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrecordatt_list.len(); index++)
    {
        if(rsrecordatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsrecordatt_list.len(); index++)
    {
        if(rsrecordatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrecordAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRecordAtt-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList>();
        c->parent = this;
        rsrecordatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrecordatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRecordAtt-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::RsRecordAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRecordAtt-list"; yang_parent_name = "rsrecordAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::~RsRecordAttList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRecordAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordAttItems::RsRecordAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RscollectorAttItems()
    :
    rscollectoratt_list(this, {"tdn"})
{

    yang_name = "rscollectorAtt-items"; yang_parent_name = "Monitor-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::~RscollectorAttItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rscollectoratt_list.len(); index++)
    {
        if(rscollectoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscollectorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsCollectorAtt-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList>();
        c->parent = this;
        rscollectoratt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rscollectoratt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsCollectorAtt-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::RsCollectorAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsCollectorAtt-list"; yang_parent_name = "rscollectorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::~RsCollectorAttList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsCollectorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HwtelemetryItems::FteItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysfteItems()
    :
    sysfte_list(this, {"name"})
{

    yang_name = "sysfte-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::~SysfteItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sysfte_list.len(); index++)
    {
        if(sysfte_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::has_operation() const
{
    for (std::size_t index=0; index<sysfte_list.len(); index++)
    {
        if(sysfte_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysfte-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SysFte-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList>();
        c->parent = this;
        sysfte_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sysfte_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SysFte-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::SysFteList()
    :
    name{YType::str, "name"},
    srcaddr{YType::str, "srcAddr"},
    dstaddr{YType::str, "dstAddr"},
    descr{YType::str, "descr"}
        ,
    rsmonitoratt_items(std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems>())
{
    rsmonitoratt_items->parent = this;

    yang_name = "SysFte-list"; yang_parent_name = "sysfte-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::~SysFteList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcaddr.is_set
	|| dstaddr.is_set
	|| descr.is_set
	|| (rsmonitoratt_items !=  nullptr && rsmonitoratt_items->has_data());
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(dstaddr.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rsmonitoratt_items !=  nullptr && rsmonitoratt_items->has_operation());
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SysFte-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (dstaddr.is_set || is_set(dstaddr.yfilter)) leaf_name_data.push_back(dstaddr.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmonitorAtt-items")
    {
        if(rsmonitoratt_items == nullptr)
        {
            rsmonitoratt_items = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems>();
        }
        return rsmonitoratt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmonitoratt_items != nullptr)
    {
        children["rsmonitorAtt-items"] = rsmonitoratt_items;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "dstAddr")
    {
        dstaddr.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmonitorAtt-items" || name == "name" || name == "srcAddr" || name == "dstAddr" || name == "descr")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsmonitorAttItems()
    :
    rsmonitoratt_list(this, {"tdn"})
{

    yang_name = "rsmonitorAtt-items"; yang_parent_name = "SysFte-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::~RsmonitorAttItems()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmonitoratt_list.len(); index++)
    {
        if(rsmonitoratt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmonitoratt_list.len(); index++)
    {
        if(rsmonitoratt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmonitorAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMonitorAtt-list")
    {
        auto c = std::make_shared<System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList>();
        c->parent = this;
        rsmonitoratt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmonitoratt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMonitorAtt-list")
        return true;
    return false;
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::RsMonitorAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMonitorAtt-list"; yang_parent_name = "rsmonitorAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::~RsMonitorAttList()
{
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMonitorAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::HwtelemetryItems::FteItems::InstItems::InstList::SysfteItems::SysFteList::RsmonitorAttItems::RsMonitorAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IcamItems::IcamItems()
    :
    inst_items(std::make_shared<System::IcamItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "icam-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::~IcamItems()
{
}

bool System::IcamItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::IcamItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::IcamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IcamItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::IcamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IcamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IcamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::IcamItems::InstItems::InstItems()
    :
    mod_items(std::make_shared<System::IcamItems::InstItems::ModItems>())
    , aclresmod_items(std::make_shared<System::IcamItems::InstItems::AclresmodItems>())
{
    mod_items->parent = this;
    aclresmod_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "icam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::InstItems::~InstItems()
{
}

bool System::IcamItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (mod_items !=  nullptr && mod_items->has_data())
	|| (aclresmod_items !=  nullptr && aclresmod_items->has_data());
}

bool System::IcamItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (mod_items !=  nullptr && mod_items->has_operation())
	|| (aclresmod_items !=  nullptr && aclresmod_items->has_operation());
}

std::string System::IcamItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mod-items")
    {
        if(mod_items == nullptr)
        {
            mod_items = std::make_shared<System::IcamItems::InstItems::ModItems>();
        }
        return mod_items;
    }

    if(child_yang_name == "aclresmod-items")
    {
        if(aclresmod_items == nullptr)
        {
            aclresmod_items = std::make_shared<System::IcamItems::InstItems::AclresmodItems>();
        }
        return aclresmod_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mod_items != nullptr)
    {
        children["mod-items"] = mod_items;
    }

    if(aclresmod_items != nullptr)
    {
        children["aclresmod-items"] = aclresmod_items;
    }

    return children;
}

void System::IcamItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IcamItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IcamItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mod-items" || name == "aclresmod-items")
        return true;
    return false;
}

System::IcamItems::InstItems::ModItems::ModItems()
    :
    monaclentries_list(this, {"module", "inst", "feature", "value_mask"})
{

    yang_name = "mod-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::InstItems::ModItems::~ModItems()
{
}

bool System::IcamItems::InstItems::ModItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monaclentries_list.len(); index++)
    {
        if(monaclentries_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IcamItems::InstItems::ModItems::has_operation() const
{
    for (std::size_t index=0; index<monaclentries_list.len(); index++)
    {
        if(monaclentries_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IcamItems::InstItems::ModItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icam-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::InstItems::ModItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::InstItems::ModItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::InstItems::ModItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MonACLEntries-list")
    {
        auto c = std::make_shared<System::IcamItems::InstItems::ModItems::MonACLEntriesList>();
        c->parent = this;
        monaclentries_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::InstItems::ModItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : monaclentries_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IcamItems::InstItems::ModItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IcamItems::InstItems::ModItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IcamItems::InstItems::ModItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MonACLEntries-list")
        return true;
    return false;
}

System::IcamItems::InstItems::ModItems::MonACLEntriesList::MonACLEntriesList()
    :
    module{YType::uint32, "module"},
    inst{YType::uint32, "inst"},
    feature{YType::str, "feature"},
    value_mask{YType::str, "value_mask"},
    class_type{YType::str, "class_type"},
    action{YType::str, "action"},
    ifindex{YType::uint32, "ifindex"},
    cum_stats{YType::uint64, "cum_stats"}
{

    yang_name = "MonACLEntries-list"; yang_parent_name = "mod-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::InstItems::ModItems::MonACLEntriesList::~MonACLEntriesList()
{
}

bool System::IcamItems::InstItems::ModItems::MonACLEntriesList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| inst.is_set
	|| feature.is_set
	|| value_mask.is_set
	|| class_type.is_set
	|| action.is_set
	|| ifindex.is_set
	|| cum_stats.is_set;
}

bool System::IcamItems::InstItems::ModItems::MonACLEntriesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(feature.yfilter)
	|| ydk::is_set(value_mask.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cum_stats.yfilter);
}

std::string System::IcamItems::InstItems::ModItems::MonACLEntriesList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icam-items/inst-items/mod-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::InstItems::ModItems::MonACLEntriesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MonACLEntries-list";
    ADD_KEY_TOKEN(module, "module");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(feature, "feature");
    ADD_KEY_TOKEN(value_mask, "value_mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::InstItems::ModItems::MonACLEntriesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (feature.is_set || is_set(feature.yfilter)) leaf_name_data.push_back(feature.get_name_leafdata());
    if (value_mask.is_set || is_set(value_mask.yfilter)) leaf_name_data.push_back(value_mask.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cum_stats.is_set || is_set(cum_stats.yfilter)) leaf_name_data.push_back(cum_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::InstItems::ModItems::MonACLEntriesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::InstItems::ModItems::MonACLEntriesList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IcamItems::InstItems::ModItems::MonACLEntriesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature")
    {
        feature = value;
        feature.value_namespace = name_space;
        feature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value_mask")
    {
        value_mask = value;
        value_mask.value_namespace = name_space;
        value_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class_type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cum_stats")
    {
        cum_stats = value;
        cum_stats.value_namespace = name_space;
        cum_stats.value_namespace_prefix = name_space_prefix;
    }
}

void System::IcamItems::InstItems::ModItems::MonACLEntriesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "feature")
    {
        feature.yfilter = yfilter;
    }
    if(value_path == "value_mask")
    {
        value_mask.yfilter = yfilter;
    }
    if(value_path == "class_type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "ifindex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cum_stats")
    {
        cum_stats.yfilter = yfilter;
    }
}

bool System::IcamItems::InstItems::ModItems::MonACLEntriesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module" || name == "inst" || name == "feature" || name == "value_mask" || name == "class_type" || name == "action" || name == "ifindex" || name == "cum_stats")
        return true;
    return false;
}

System::IcamItems::InstItems::AclresmodItems::AclresmodItems()
    :
    aclresentries_list(this, {"module", "inst", "tcam_no", "bank_no"})
{

    yang_name = "aclresmod-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::InstItems::AclresmodItems::~AclresmodItems()
{
}

bool System::IcamItems::InstItems::AclresmodItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aclresentries_list.len(); index++)
    {
        if(aclresentries_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IcamItems::InstItems::AclresmodItems::has_operation() const
{
    for (std::size_t index=0; index<aclresentries_list.len(); index++)
    {
        if(aclresentries_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IcamItems::InstItems::AclresmodItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icam-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::InstItems::AclresmodItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aclresmod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::InstItems::AclresmodItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::InstItems::AclresmodItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AclResEntries-list")
    {
        auto c = std::make_shared<System::IcamItems::InstItems::AclresmodItems::AclResEntriesList>();
        c->parent = this;
        aclresentries_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::InstItems::AclresmodItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : aclresentries_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IcamItems::InstItems::AclresmodItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IcamItems::InstItems::AclresmodItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IcamItems::InstItems::AclresmodItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AclResEntries-list")
        return true;
    return false;
}

System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::AclResEntriesList()
    :
    module{YType::uint32, "module"},
    inst{YType::uint32, "inst"},
    tcam_no{YType::uint32, "tcam_no"},
    bank_no{YType::uint32, "bank_no"},
    used{YType::uint32, "used"},
    free{YType::uint32, "free"},
    percent_util{YType::str, "percent_util"},
    timestamp{YType::uint64, "timestamp"}
{

    yang_name = "AclResEntries-list"; yang_parent_name = "aclresmod-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::~AclResEntriesList()
{
}

bool System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| inst.is_set
	|| tcam_no.is_set
	|| bank_no.is_set
	|| used.is_set
	|| free.is_set
	|| percent_util.is_set
	|| timestamp.is_set;
}

bool System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(tcam_no.yfilter)
	|| ydk::is_set(bank_no.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(percent_util.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icam-items/inst-items/aclresmod-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AclResEntries-list";
    ADD_KEY_TOKEN(module, "module");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(tcam_no, "tcam_no");
    ADD_KEY_TOKEN(bank_no, "bank_no");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (tcam_no.is_set || is_set(tcam_no.yfilter)) leaf_name_data.push_back(tcam_no.get_name_leafdata());
    if (bank_no.is_set || is_set(bank_no.yfilter)) leaf_name_data.push_back(bank_no.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (percent_util.is_set || is_set(percent_util.yfilter)) leaf_name_data.push_back(percent_util.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcam_no")
    {
        tcam_no = value;
        tcam_no.value_namespace = name_space;
        tcam_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank_no")
    {
        bank_no = value;
        bank_no.value_namespace = name_space;
        bank_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent_util")
    {
        percent_util = value;
        percent_util.value_namespace = name_space;
        percent_util.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "tcam_no")
    {
        tcam_no.yfilter = yfilter;
    }
    if(value_path == "bank_no")
    {
        bank_no.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "percent_util")
    {
        percent_util.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::IcamItems::InstItems::AclresmodItems::AclResEntriesList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module" || name == "inst" || name == "tcam_no" || name == "bank_no" || name == "used" || name == "free" || name == "percent_util" || name == "timestamp")
        return true;
    return false;
}

System::IpqosItems::IpqosItems()
    :
    statsstate{YType::enumeration, "statsState"}
        ,
    statclear_items(std::make_shared<System::IpqosItems::StatClearItems>())
    , queuing_items(std::make_shared<System::IpqosItems::QueuingItems>())
    , nw_items(std::make_shared<System::IpqosItems::NwItems>())
    , dflt_items(std::make_shared<System::IpqosItems::DfltItems>())
{
    statclear_items->parent = this;
    queuing_items->parent = this;
    nw_items->parent = this;
    dflt_items->parent = this;

    yang_name = "ipqos-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::~IpqosItems()
{
}

bool System::IpqosItems::has_data() const
{
    if (is_presence_container) return true;
    return statsstate.is_set
	|| (statclear_items !=  nullptr && statclear_items->has_data())
	|| (queuing_items !=  nullptr && queuing_items->has_data())
	|| (nw_items !=  nullptr && nw_items->has_data())
	|| (dflt_items !=  nullptr && dflt_items->has_data());
}

bool System::IpqosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statsstate.yfilter)
	|| (statclear_items !=  nullptr && statclear_items->has_operation())
	|| (queuing_items !=  nullptr && queuing_items->has_operation())
	|| (nw_items !=  nullptr && nw_items->has_operation())
	|| (dflt_items !=  nullptr && dflt_items->has_operation());
}

std::string System::IpqosItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipqos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statsstate.is_set || is_set(statsstate.yfilter)) leaf_name_data.push_back(statsstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statClear-items")
    {
        if(statclear_items == nullptr)
        {
            statclear_items = std::make_shared<System::IpqosItems::StatClearItems>();
        }
        return statclear_items;
    }

    if(child_yang_name == "queuing-items")
    {
        if(queuing_items == nullptr)
        {
            queuing_items = std::make_shared<System::IpqosItems::QueuingItems>();
        }
        return queuing_items;
    }

    if(child_yang_name == "nw-items")
    {
        if(nw_items == nullptr)
        {
            nw_items = std::make_shared<System::IpqosItems::NwItems>();
        }
        return nw_items;
    }

    if(child_yang_name == "dflt-items")
    {
        if(dflt_items == nullptr)
        {
            dflt_items = std::make_shared<System::IpqosItems::DfltItems>();
        }
        return dflt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statclear_items != nullptr)
    {
        children["statClear-items"] = statclear_items;
    }

    if(queuing_items != nullptr)
    {
        children["queuing-items"] = queuing_items;
    }

    if(nw_items != nullptr)
    {
        children["nw-items"] = nw_items;
    }

    if(dflt_items != nullptr)
    {
        children["dflt-items"] = dflt_items;
    }

    return children;
}

void System::IpqosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statsState")
    {
        statsstate = value;
        statsstate.value_namespace = name_space;
        statsstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statsState")
    {
        statsstate.yfilter = yfilter;
    }
}

bool System::IpqosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statClear-items" || name == "queuing-items" || name == "nw-items" || name == "dflt-items" || name == "statsState")
        return true;
    return false;
}

System::IpqosItems::StatClearItems::StatClearItems()
    :
    pmaptype{YType::enumeration, "pmapType"},
    direction{YType::enumeration, "direction"},
    ethernet{YType::str, "ethernet"},
    vlan{YType::str, "vlan"},
    portchan{YType::str, "portChan"},
    timestamp{YType::str, "timeStamp"}
{

    yang_name = "statClear-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::StatClearItems::~StatClearItems()
{
}

bool System::IpqosItems::StatClearItems::has_data() const
{
    if (is_presence_container) return true;
    return pmaptype.is_set
	|| direction.is_set
	|| ethernet.is_set
	|| vlan.is_set
	|| portchan.is_set
	|| timestamp.is_set;
}

bool System::IpqosItems::StatClearItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pmaptype.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(portchan.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string System::IpqosItems::StatClearItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::StatClearItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statClear-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::StatClearItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pmaptype.is_set || is_set(pmaptype.yfilter)) leaf_name_data.push_back(pmaptype.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (portchan.is_set || is_set(portchan.yfilter)) leaf_name_data.push_back(portchan.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::StatClearItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::StatClearItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::StatClearItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pmapType")
    {
        pmaptype = value;
        pmaptype.value_namespace = name_space;
        pmaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portChan")
    {
        portchan = value;
        portchan.value_namespace = name_space;
        portchan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeStamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::StatClearItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pmapType")
    {
        pmaptype.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "portChan")
    {
        portchan.yfilter = yfilter;
    }
    if(value_path == "timeStamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool System::IpqosItems::StatClearItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmapType" || name == "direction" || name == "ethernet" || name == "vlan" || name == "portChan" || name == "timeStamp")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::QueuingItems()
    :
    policy_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems>())
    , c_items(std::make_shared<System::IpqosItems::QueuingItems::CItems>())
    , p_items(std::make_shared<System::IpqosItems::QueuingItems::PItems>())
    , copypmap_items(std::make_shared<System::IpqosItems::QueuingItems::CopyPMapItems>())
{
    policy_items->parent = this;
    c_items->parent = this;
    p_items->parent = this;
    copypmap_items->parent = this;

    yang_name = "queuing-items"; yang_parent_name = "ipqos-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::~QueuingItems()
{
}

bool System::IpqosItems::QueuingItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data())
	|| (c_items !=  nullptr && c_items->has_data())
	|| (p_items !=  nullptr && p_items->has_data())
	|| (copypmap_items !=  nullptr && copypmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (c_items !=  nullptr && c_items->has_operation())
	|| (p_items !=  nullptr && p_items->has_operation())
	|| (copypmap_items !=  nullptr && copypmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queuing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "c-items")
    {
        if(c_items == nullptr)
        {
            c_items = std::make_shared<System::IpqosItems::QueuingItems::CItems>();
        }
        return c_items;
    }

    if(child_yang_name == "p-items")
    {
        if(p_items == nullptr)
        {
            p_items = std::make_shared<System::IpqosItems::QueuingItems::PItems>();
        }
        return p_items;
    }

    if(child_yang_name == "copyPMap-items")
    {
        if(copypmap_items == nullptr)
        {
            copypmap_items = std::make_shared<System::IpqosItems::QueuingItems::CopyPMapItems>();
        }
        return copypmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(c_items != nullptr)
    {
        children["c-items"] = c_items;
    }

    if(p_items != nullptr)
    {
        children["p-items"] = p_items;
    }

    if(copypmap_items != nullptr)
    {
        children["copyPMap-items"] = copypmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items" || name == "c-items" || name == "p-items" || name == "copyPMap-items")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::PolicyItems()
    :
    in_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems>())
    , out_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems>())
{
    in_items->parent = this;
    out_items->parent = this;

    yang_name = "policy-items"; yang_parent_name = "queuing-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::~PolicyItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return (in_items !=  nullptr && in_items->has_data())
	|| (out_items !=  nullptr && out_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| (in_items !=  nullptr && in_items->has_operation())
	|| (out_items !=  nullptr && out_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-items")
    {
        if(in_items == nullptr)
        {
            in_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems>();
        }
        return in_items;
    }

    if(child_yang_name == "out-items")
    {
        if(out_items == nullptr)
        {
            out_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems>();
        }
        return out_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in_items != nullptr)
    {
        children["in-items"] = in_items;
    }

    if(out_items != nullptr)
    {
        children["out-items"] = out_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-items" || name == "out-items")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::InItems()
    :
    intf_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>())
    , sys_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;

    yang_name = "in-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::~InItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems>();
        }
        return sys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        children["sys-items"] = sys_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::~IntfItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::get_children() const
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

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::~IfList()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/in-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pmap_items != nullptr)
    {
        children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        children["queCmap-items"] = quecmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::CmapItems()
    :
    stats_list(this, {"cmapname", "stattype"})
{

    yang_name = "cmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::~CmapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto c = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList>();
        c->parent = this;
        stats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::StatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    conformbytes{YType::uint64, "conformBytes"},
    exceedbytes{YType::uint64, "exceedBytes"},
    violatebytes{YType::uint64, "violateBytes"}
{

    yang_name = "Stats-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::~StatsList()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| conformbytes.is_set
	|| exceedbytes.is_set
	|| violatebytes.is_set;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(conformbytes.yfilter)
	|| ydk::is_set(exceedbytes.yfilter)
	|| ydk::is_set(violatebytes.yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (conformbytes.is_set || is_set(conformbytes.yfilter)) leaf_name_data.push_back(conformbytes.get_name_leafdata());
    if (exceedbytes.is_set || is_set(exceedbytes.yfilter)) leaf_name_data.push_back(exceedbytes.get_name_leafdata());
    if (violatebytes.is_set || is_set(violatebytes.yfilter)) leaf_name_data.push_back(violatebytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformBytes")
    {
        conformbytes = value;
        conformbytes.value_namespace = name_space;
        conformbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes = value;
        exceedbytes.value_namespace = name_space;
        exceedbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateBytes")
    {
        violatebytes = value;
        violatebytes.value_namespace = name_space;
        violatebytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "conformBytes")
    {
        conformbytes.yfilter = yfilter;
    }
    if(value_path == "exceedBytes")
    {
        exceedbytes.yfilter = yfilter;
    }
    if(value_path == "violateBytes")
    {
        violatebytes.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "conformBytes" || name == "exceedBytes" || name == "violateBytes")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueCmapItems()
    :
    queuingstats_list(this, {"cmapname", "stattype"})
{

    yang_name = "queCmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::~QueCmapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_operation() const
{
    for (std::size_t index=0; index<queuingstats_list.len(); index++)
    {
        if(queuingstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queCmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QueuingStats-list")
    {
        auto c = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList>();
        c->parent = this;
        queuingstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : queuingstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueuingStats-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::QueuingStatsList()
    :
    cmapname{YType::str, "cmapName"},
    stattype{YType::enumeration, "statType"},
    pmapname{YType::str, "pmapName"},
    droppackets{YType::uint64, "dropPackets"},
    dropbytes{YType::uint64, "dropBytes"},
    txpackets{YType::uint64, "txPackets"},
    txbytes{YType::uint64, "txBytes"},
    currqueuedepth{YType::uint64, "currQueueDepth"},
    maxqueuedepth{YType::uint64, "maxQueueDepth"},
    ingqdroppackets{YType::uint64, "ingQDropPackets"},
    ingqdepthbytes{YType::uint64, "ingQDepthBytes"},
    randdropbytes{YType::uint64, "randDropBytes"},
    randdroppackets{YType::uint64, "randDropPackets"},
    randecnmarkedpackets{YType::uint64, "randEcnMarkedPackets"},
    pfctxppp{YType::uint64, "pfcTxPpp"},
    pfcrxppp{YType::uint64, "pfcRxPpp"},
    pfcwdshutdowncount{YType::uint64, "pfcwdShutdownCount"},
    pfcwdrestoredcount{YType::uint64, "pfcwdRestoredCount"},
    pfcwdflushedpackets{YType::uint64, "pfcwdFlushedPackets"}
{

    yang_name = "QueuingStats-list"; yang_parent_name = "queCmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::~QueuingStatsList()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_data() const
{
    if (is_presence_container) return true;
    return cmapname.is_set
	|| stattype.is_set
	|| pmapname.is_set
	|| droppackets.is_set
	|| dropbytes.is_set
	|| txpackets.is_set
	|| txbytes.is_set
	|| currqueuedepth.is_set
	|| maxqueuedepth.is_set
	|| ingqdroppackets.is_set
	|| ingqdepthbytes.is_set
	|| randdropbytes.is_set
	|| randdroppackets.is_set
	|| randecnmarkedpackets.is_set
	|| pfctxppp.is_set
	|| pfcrxppp.is_set
	|| pfcwdshutdowncount.is_set
	|| pfcwdrestoredcount.is_set
	|| pfcwdflushedpackets.is_set;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmapname.yfilter)
	|| ydk::is_set(stattype.yfilter)
	|| ydk::is_set(pmapname.yfilter)
	|| ydk::is_set(droppackets.yfilter)
	|| ydk::is_set(dropbytes.yfilter)
	|| ydk::is_set(txpackets.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(currqueuedepth.yfilter)
	|| ydk::is_set(maxqueuedepth.yfilter)
	|| ydk::is_set(ingqdroppackets.yfilter)
	|| ydk::is_set(ingqdepthbytes.yfilter)
	|| ydk::is_set(randdropbytes.yfilter)
	|| ydk::is_set(randdroppackets.yfilter)
	|| ydk::is_set(randecnmarkedpackets.yfilter)
	|| ydk::is_set(pfctxppp.yfilter)
	|| ydk::is_set(pfcrxppp.yfilter)
	|| ydk::is_set(pfcwdshutdowncount.yfilter)
	|| ydk::is_set(pfcwdrestoredcount.yfilter)
	|| ydk::is_set(pfcwdflushedpackets.yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueuingStats-list";
    ADD_KEY_TOKEN(cmapname, "cmapName");
    ADD_KEY_TOKEN(stattype, "statType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmapname.is_set || is_set(cmapname.yfilter)) leaf_name_data.push_back(cmapname.get_name_leafdata());
    if (stattype.is_set || is_set(stattype.yfilter)) leaf_name_data.push_back(stattype.get_name_leafdata());
    if (pmapname.is_set || is_set(pmapname.yfilter)) leaf_name_data.push_back(pmapname.get_name_leafdata());
    if (droppackets.is_set || is_set(droppackets.yfilter)) leaf_name_data.push_back(droppackets.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());
    if (txpackets.is_set || is_set(txpackets.yfilter)) leaf_name_data.push_back(txpackets.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (currqueuedepth.is_set || is_set(currqueuedepth.yfilter)) leaf_name_data.push_back(currqueuedepth.get_name_leafdata());
    if (maxqueuedepth.is_set || is_set(maxqueuedepth.yfilter)) leaf_name_data.push_back(maxqueuedepth.get_name_leafdata());
    if (ingqdroppackets.is_set || is_set(ingqdroppackets.yfilter)) leaf_name_data.push_back(ingqdroppackets.get_name_leafdata());
    if (ingqdepthbytes.is_set || is_set(ingqdepthbytes.yfilter)) leaf_name_data.push_back(ingqdepthbytes.get_name_leafdata());
    if (randdropbytes.is_set || is_set(randdropbytes.yfilter)) leaf_name_data.push_back(randdropbytes.get_name_leafdata());
    if (randdroppackets.is_set || is_set(randdroppackets.yfilter)) leaf_name_data.push_back(randdroppackets.get_name_leafdata());
    if (randecnmarkedpackets.is_set || is_set(randecnmarkedpackets.yfilter)) leaf_name_data.push_back(randecnmarkedpackets.get_name_leafdata());
    if (pfctxppp.is_set || is_set(pfctxppp.yfilter)) leaf_name_data.push_back(pfctxppp.get_name_leafdata());
    if (pfcrxppp.is_set || is_set(pfcrxppp.yfilter)) leaf_name_data.push_back(pfcrxppp.get_name_leafdata());
    if (pfcwdshutdowncount.is_set || is_set(pfcwdshutdowncount.yfilter)) leaf_name_data.push_back(pfcwdshutdowncount.get_name_leafdata());
    if (pfcwdrestoredcount.is_set || is_set(pfcwdrestoredcount.yfilter)) leaf_name_data.push_back(pfcwdrestoredcount.get_name_leafdata());
    if (pfcwdflushedpackets.is_set || is_set(pfcwdflushedpackets.yfilter)) leaf_name_data.push_back(pfcwdflushedpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmapName")
    {
        cmapname = value;
        cmapname.value_namespace = name_space;
        cmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statType")
    {
        stattype = value;
        stattype.value_namespace = name_space;
        stattype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmapName")
    {
        pmapname = value;
        pmapname.value_namespace = name_space;
        pmapname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropPackets")
    {
        droppackets = value;
        droppackets.value_namespace = name_space;
        droppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPackets")
    {
        txpackets = value;
        txpackets.value_namespace = name_space;
        txpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth = value;
        currqueuedepth.value_namespace = name_space;
        currqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth = value;
        maxqueuedepth.value_namespace = name_space;
        maxqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets = value;
        ingqdroppackets.value_namespace = name_space;
        ingqdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes = value;
        ingqdepthbytes.value_namespace = name_space;
        ingqdepthbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes = value;
        randdropbytes.value_namespace = name_space;
        randdropbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets = value;
        randdroppackets.value_namespace = name_space;
        randdroppackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets = value;
        randecnmarkedpackets.value_namespace = name_space;
        randecnmarkedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp = value;
        pfctxppp.value_namespace = name_space;
        pfctxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp = value;
        pfcrxppp.value_namespace = name_space;
        pfcrxppp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount = value;
        pfcwdshutdowncount.value_namespace = name_space;
        pfcwdshutdowncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount = value;
        pfcwdrestoredcount.value_namespace = name_space;
        pfcwdrestoredcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets = value;
        pfcwdflushedpackets.value_namespace = name_space;
        pfcwdflushedpackets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmapName")
    {
        cmapname.yfilter = yfilter;
    }
    if(value_path == "statType")
    {
        stattype.yfilter = yfilter;
    }
    if(value_path == "pmapName")
    {
        pmapname.yfilter = yfilter;
    }
    if(value_path == "dropPackets")
    {
        droppackets.yfilter = yfilter;
    }
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
    if(value_path == "txPackets")
    {
        txpackets.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "currQueueDepth")
    {
        currqueuedepth.yfilter = yfilter;
    }
    if(value_path == "maxQueueDepth")
    {
        maxqueuedepth.yfilter = yfilter;
    }
    if(value_path == "ingQDropPackets")
    {
        ingqdroppackets.yfilter = yfilter;
    }
    if(value_path == "ingQDepthBytes")
    {
        ingqdepthbytes.yfilter = yfilter;
    }
    if(value_path == "randDropBytes")
    {
        randdropbytes.yfilter = yfilter;
    }
    if(value_path == "randDropPackets")
    {
        randdroppackets.yfilter = yfilter;
    }
    if(value_path == "randEcnMarkedPackets")
    {
        randecnmarkedpackets.yfilter = yfilter;
    }
    if(value_path == "pfcTxPpp")
    {
        pfctxppp.yfilter = yfilter;
    }
    if(value_path == "pfcRxPpp")
    {
        pfcrxppp.yfilter = yfilter;
    }
    if(value_path == "pfcwdShutdownCount")
    {
        pfcwdshutdowncount.yfilter = yfilter;
    }
    if(value_path == "pfcwdRestoredCount")
    {
        pfcwdrestoredcount.yfilter = yfilter;
    }
    if(value_path == "pfcwdFlushedPackets")
    {
        pfcwdflushedpackets.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmapName" || name == "statType" || name == "pmapName" || name == "dropPackets" || name == "dropBytes" || name == "txPackets" || name == "txBytes" || name == "currQueueDepth" || name == "maxQueueDepth" || name == "ingQDropPackets" || name == "ingQDepthBytes" || name == "randDropBytes" || name == "randDropPackets" || name == "randEcnMarkedPackets" || name == "pfcTxPpp" || name == "pfcRxPpp" || name == "pfcwdShutdownCount" || name == "pfcwdRestoredCount" || name == "pfcwdFlushedPackets")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::SysItems()
    :
    usersetbit{YType::uint64, "userSetBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>())
{
    pmap_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "in-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::~SysItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return usersetbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usersetbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/in-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usersetbit.is_set || is_set(usersetbit.yfilter)) leaf_name_data.push_back(usersetbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems>();
        }
        return pmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pmap_items != nullptr)
    {
        children["pmap-items"] = pmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "userSetBit")
    {
        usersetbit = value;
        usersetbit.value_namespace = name_space;
        usersetbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "userSetBit")
    {
        usersetbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "userSetBit")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/in-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/in-items/sys-items/pmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::OutItems()
    :
    intf_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>())
    , sys_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>())
{
    intf_items->parent = this;
    sys_items->parent = this;

    yang_name = "out-items"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::~OutItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data())
	|| (sys_items !=  nullptr && sys_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (sys_items !=  nullptr && sys_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::OutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::OutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems>();
        }
        return sys_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::OutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    if(sys_items != nullptr)
    {
        children["sys-items"] = sys_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items" || name == "sys-items")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IntfItems()
    :
    if_list(this, {"name"})
{

    yang_name = "intf-items"; yang_parent_name = "out-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::~IntfItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/out-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::get_children() const
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

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::IfList()
    :
    name{YType::str, "name"},
    delintfbit{YType::boolean, "delIntfBit"}
        ,
    pmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>())
    , cmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>())
    , quecmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>())
{
    pmap_items->parent = this;
    cmap_items->parent = this;
    quecmap_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::~IfList()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delintfbit.is_set
	|| (pmap_items !=  nullptr && pmap_items->has_data())
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (quecmap_items !=  nullptr && quecmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delintfbit.yfilter)
	|| (pmap_items !=  nullptr && pmap_items->has_operation())
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (quecmap_items !=  nullptr && quecmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipqos-items/queuing-items/policy-items/out-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delintfbit.is_set || is_set(delintfbit.yfilter)) leaf_name_data.push_back(delintfbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-items")
    {
        if(pmap_items == nullptr)
        {
            pmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems>();
        }
        return pmap_items;
    }

    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "queCmap-items")
    {
        if(quecmap_items == nullptr)
        {
            quecmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems>();
        }
        return quecmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pmap_items != nullptr)
    {
        children["pmap-items"] = pmap_items;
    }

    if(cmap_items != nullptr)
    {
        children["cmap-items"] = cmap_items;
    }

    if(quecmap_items != nullptr)
    {
        children["queCmap-items"] = quecmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit = value;
        delintfbit.value_namespace = name_space;
        delintfbit.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delIntfBit")
    {
        delintfbit.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-items" || name == "cmap-items" || name == "queCmap-items" || name == "name" || name == "delIntfBit")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::PmapItems()
    :
    name{YType::str, "name"},
    stats{YType::boolean, "stats"},
    configstatus{YType::uint32, "configStatus"}
        ,
    rspolicyinsttopmap_items(std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>())
{
    rspolicyinsttopmap_items->parent = this;

    yang_name = "pmap-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::~PmapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| stats.is_set
	|| configstatus.is_set
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_data());
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(stats.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (rspolicyinsttopmap_items !=  nullptr && rspolicyinsttopmap_items->has_operation());
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stats.is_set || is_set(stats.yfilter)) leaf_name_data.push_back(stats.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspolicyInstToPMap-items")
    {
        if(rspolicyinsttopmap_items == nullptr)
        {
            rspolicyinsttopmap_items = std::make_shared<System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems>();
        }
        return rspolicyinsttopmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rspolicyinsttopmap_items != nullptr)
    {
        children["rspolicyInstToPMap-items"] = rspolicyinsttopmap_items;
    }

    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats")
    {
        stats = value;
        stats.value_namespace = name_space;
        stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "stats")
    {
        stats.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspolicyInstToPMap-items" || name == "name" || name == "stats" || name == "configStatus")
        return true;
    return false;
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::RspolicyInstToPMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspolicyInstToPMap-items"; yang_parent_name = "pmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::~RspolicyInstToPMapItems()
{
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}


}
}

