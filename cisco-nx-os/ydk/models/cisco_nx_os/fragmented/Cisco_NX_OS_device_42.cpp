
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_42.hpp"
#include "Cisco_NX_OS_device_43.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::InstItems()
    :
    tcamstatsinst_list(this, {"instance"})
{

    yang_name = "inst-items"; yang_parent_name = "TcamStatsModule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::~InstItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcamstatsinst_list.len(); index++)
    {
        if(tcamstatsinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_operation() const
{
    for (std::size_t index=0; index<tcamstatsinst_list.len(); index++)
    {
        if(tcamstatsinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TcamStatsInst-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList>();
        ent_->parent = this;
        tcamstatsinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcamstatsinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TcamStatsInst-list")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::TcamStatsInstList()
    :
    instance{YType::uint16, "instance"}
        ,
    region_items(std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems>())
{
    region_items->parent = this;

    yang_name = "TcamStatsInst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::~TcamStatsInstList()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| (region_items !=  nullptr && region_items->has_data());
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (region_items !=  nullptr && region_items->has_operation());
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TcamStatsInst-list";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "region-items")
    {
        if(region_items == nullptr)
        {
            region_items = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems>();
        }
        return region_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(region_items != nullptr)
    {
        _children["region-items"] = region_items;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region-items" || name == "instance")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::RegionItems()
    :
    tcamstatsregion_list(this, {"regionname"})
{

    yang_name = "region-items"; yang_parent_name = "TcamStatsInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::~RegionItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcamstatsregion_list.len(); index++)
    {
        if(tcamstatsregion_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_operation() const
{
    for (std::size_t index=0; index<tcamstatsregion_list.len(); index++)
    {
        if(tcamstatsregion_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TcamStatsRegion-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList>();
        ent_->parent = this;
        tcamstatsregion_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcamstatsregion_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TcamStatsRegion-list")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::TcamStatsRegionList()
    :
    regionname{YType::str, "regionName"},
    regionsize{YType::uint16, "regionSize"}
        ,
    utilization_items(std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems>())
{
    utilization_items->parent = this;

    yang_name = "TcamStatsRegion-list"; yang_parent_name = "region-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::~TcamStatsRegionList()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_data() const
{
    if (is_presence_container) return true;
    return regionname.is_set
	|| regionsize.is_set
	|| (utilization_items !=  nullptr && utilization_items->has_data());
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regionname.yfilter)
	|| ydk::is_set(regionsize.yfilter)
	|| (utilization_items !=  nullptr && utilization_items->has_operation());
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TcamStatsRegion-list";
    ADD_KEY_TOKEN(regionname, "regionName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regionname.is_set || is_set(regionname.yfilter)) leaf_name_data.push_back(regionname.get_name_leafdata());
    if (regionsize.is_set || is_set(regionsize.yfilter)) leaf_name_data.push_back(regionsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utilization-items")
    {
        if(utilization_items == nullptr)
        {
            utilization_items = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems>();
        }
        return utilization_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utilization_items != nullptr)
    {
        _children["utilization-items"] = utilization_items;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regionName")
    {
        regionname = value;
        regionname.value_namespace = name_space;
        regionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regionSize")
    {
        regionsize = value;
        regionsize.value_namespace = name_space;
        regionsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regionName")
    {
        regionname.yfilter = yfilter;
    }
    if(value_path == "regionSize")
    {
        regionsize.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utilization-items" || name == "regionName" || name == "regionSize")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::UtilizationItems()
    :
    used{YType::uint16, "used"},
    free{YType::uint16, "free"},
    percent{YType::str, "percent"},
    ipv4used{YType::uint16, "ipv4Used"},
    ipv4percent{YType::str, "ipv4Percent"},
    ipv6used{YType::uint16, "ipv6Used"},
    ipv6percent{YType::str, "ipv6Percent"},
    macused{YType::uint16, "macUsed"},
    macpercent{YType::str, "macPercent"},
    allused{YType::uint16, "allUsed"},
    allpercent{YType::str, "allPercent"},
    otherused{YType::uint16, "otherUsed"},
    otherpercent{YType::str, "otherPercent"}
{

    yang_name = "utilization-items"; yang_parent_name = "TcamStatsRegion-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::~UtilizationItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_data() const
{
    if (is_presence_container) return true;
    return used.is_set
	|| free.is_set
	|| percent.is_set
	|| ipv4used.is_set
	|| ipv4percent.is_set
	|| ipv6used.is_set
	|| ipv6percent.is_set
	|| macused.is_set
	|| macpercent.is_set
	|| allused.is_set
	|| allpercent.is_set
	|| otherused.is_set
	|| otherpercent.is_set;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(ipv4used.yfilter)
	|| ydk::is_set(ipv4percent.yfilter)
	|| ydk::is_set(ipv6used.yfilter)
	|| ydk::is_set(ipv6percent.yfilter)
	|| ydk::is_set(macused.yfilter)
	|| ydk::is_set(macpercent.yfilter)
	|| ydk::is_set(allused.yfilter)
	|| ydk::is_set(allpercent.yfilter)
	|| ydk::is_set(otherused.yfilter)
	|| ydk::is_set(otherpercent.yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (ipv4used.is_set || is_set(ipv4used.yfilter)) leaf_name_data.push_back(ipv4used.get_name_leafdata());
    if (ipv4percent.is_set || is_set(ipv4percent.yfilter)) leaf_name_data.push_back(ipv4percent.get_name_leafdata());
    if (ipv6used.is_set || is_set(ipv6used.yfilter)) leaf_name_data.push_back(ipv6used.get_name_leafdata());
    if (ipv6percent.is_set || is_set(ipv6percent.yfilter)) leaf_name_data.push_back(ipv6percent.get_name_leafdata());
    if (macused.is_set || is_set(macused.yfilter)) leaf_name_data.push_back(macused.get_name_leafdata());
    if (macpercent.is_set || is_set(macpercent.yfilter)) leaf_name_data.push_back(macpercent.get_name_leafdata());
    if (allused.is_set || is_set(allused.yfilter)) leaf_name_data.push_back(allused.get_name_leafdata());
    if (allpercent.is_set || is_set(allpercent.yfilter)) leaf_name_data.push_back(allpercent.get_name_leafdata());
    if (otherused.is_set || is_set(otherused.yfilter)) leaf_name_data.push_back(otherused.get_name_leafdata());
    if (otherpercent.is_set || is_set(otherpercent.yfilter)) leaf_name_data.push_back(otherpercent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Used")
    {
        ipv4used = value;
        ipv4used.value_namespace = name_space;
        ipv4used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Percent")
    {
        ipv4percent = value;
        ipv4percent.value_namespace = name_space;
        ipv4percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Used")
    {
        ipv6used = value;
        ipv6used.value_namespace = name_space;
        ipv6used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Percent")
    {
        ipv6percent = value;
        ipv6percent.value_namespace = name_space;
        ipv6percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macUsed")
    {
        macused = value;
        macused.value_namespace = name_space;
        macused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macPercent")
    {
        macpercent = value;
        macpercent.value_namespace = name_space;
        macpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allUsed")
    {
        allused = value;
        allused.value_namespace = name_space;
        allused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allPercent")
    {
        allpercent = value;
        allpercent.value_namespace = name_space;
        allpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherUsed")
    {
        otherused = value;
        otherused.value_namespace = name_space;
        otherused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherPercent")
    {
        otherpercent = value;
        otherpercent.value_namespace = name_space;
        otherpercent.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "ipv4Used")
    {
        ipv4used.yfilter = yfilter;
    }
    if(value_path == "ipv4Percent")
    {
        ipv4percent.yfilter = yfilter;
    }
    if(value_path == "ipv6Used")
    {
        ipv6used.yfilter = yfilter;
    }
    if(value_path == "ipv6Percent")
    {
        ipv6percent.yfilter = yfilter;
    }
    if(value_path == "macUsed")
    {
        macused.yfilter = yfilter;
    }
    if(value_path == "macPercent")
    {
        macpercent.yfilter = yfilter;
    }
    if(value_path == "allUsed")
    {
        allused.yfilter = yfilter;
    }
    if(value_path == "allPercent")
    {
        allpercent.yfilter = yfilter;
    }
    if(value_path == "otherUsed")
    {
        otherused.yfilter = yfilter;
    }
    if(value_path == "otherPercent")
    {
        otherpercent.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used" || name == "free" || name == "percent" || name == "ipv4Used" || name == "ipv4Percent" || name == "ipv6Used" || name == "ipv6Percent" || name == "macUsed" || name == "macPercent" || name == "allUsed" || name == "allPercent" || name == "otherUsed" || name == "otherPercent")
        return true;
    return false;
}

System::PltfmItems::NveItems::NveItems()
    :
    nve_list(this, {"id"})
{

    yang_name = "nve-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::NveItems::~NveItems()
{
}

bool System::PltfmItems::NveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nve_list.len(); index++)
    {
        if(nve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::NveItems::has_operation() const
{
    for (std::size_t index=0; index<nve_list.len(); index++)
    {
        if(nve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::NveItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::NveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NVE-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::NveItems::NVEList>();
        ent_->parent = this;
        nve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::NveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::NveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::NveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NVE-list")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::NVEList()
    :
    id{YType::uint16, "id"}
        ,
    infravlan_items(std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems>())
{
    infravlan_items->parent = this;

    yang_name = "NVE-list"; yang_parent_name = "nve-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::NveItems::NVEList::~NVEList()
{
}

bool System::PltfmItems::NveItems::NVEList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (infravlan_items !=  nullptr && infravlan_items->has_data());
}

bool System::PltfmItems::NveItems::NVEList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (infravlan_items !=  nullptr && infravlan_items->has_operation());
}

std::string System::PltfmItems::NveItems::NVEList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/nve-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::NveItems::NVEList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NVE-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "infravlan-items")
    {
        if(infravlan_items == nullptr)
        {
            infravlan_items = std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems>();
        }
        return infravlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(infravlan_items != nullptr)
    {
        _children["infravlan-items"] = infravlan_items;
    }

    return _children;
}

void System::PltfmItems::NveItems::NVEList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::NveItems::NVEList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::PltfmItems::NveItems::NVEList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "infravlan-items" || name == "id")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfravlanItems()
    :
    infravlan_list(this, {"id"})
{

    yang_name = "infravlan-items"; yang_parent_name = "NVE-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::~InfravlanItems()
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<infravlan_list.len(); index++)
    {
        if(infravlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_operation() const
{
    for (std::size_t index=0; index<infravlan_list.len(); index++)
    {
        if(infravlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::NveItems::NVEList::InfravlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infravlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::InfravlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::InfravlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InfraVlan-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList>();
        ent_->parent = this;
        infravlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::InfravlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : infravlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InfraVlan-list")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::InfraVlanList()
    :
    id{YType::uint16, "id"},
    force{YType::enumeration, "force"}
{

    yang_name = "InfraVlan-list"; yang_parent_name = "infravlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::~InfraVlanList()
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| force.is_set;
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InfraVlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "force")
        return true;
    return false;
}

System::PltfmItems::ForwardingmodeItems::ForwardingmodeItems()
    :
    forwardingmodetype{YType::enumeration, "forwardingModeType"},
    lpmentrywarp{YType::uint32, "lpmEntryWarp"},
    hostentrywarp{YType::uint32, "hostEntryWarp"},
    l2entrywarp{YType::uint32, "l2EntryWarp"},
    mcstentrywarp{YType::uint32, "mcstEntryWarp"},
    lpmentrynormal{YType::uint32, "lpmEntryNormal"},
    mcstentrynormal{YType::uint32, "mcstEntryNormal"},
    fwdmodecfgfailed{YType::uint32, "fwdModeCfgFailed"}
{

    yang_name = "forwardingmode-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::ForwardingmodeItems::~ForwardingmodeItems()
{
}

bool System::PltfmItems::ForwardingmodeItems::has_data() const
{
    if (is_presence_container) return true;
    return forwardingmodetype.is_set
	|| lpmentrywarp.is_set
	|| hostentrywarp.is_set
	|| l2entrywarp.is_set
	|| mcstentrywarp.is_set
	|| lpmentrynormal.is_set
	|| mcstentrynormal.is_set
	|| fwdmodecfgfailed.is_set;
}

bool System::PltfmItems::ForwardingmodeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwardingmodetype.yfilter)
	|| ydk::is_set(lpmentrywarp.yfilter)
	|| ydk::is_set(hostentrywarp.yfilter)
	|| ydk::is_set(l2entrywarp.yfilter)
	|| ydk::is_set(mcstentrywarp.yfilter)
	|| ydk::is_set(lpmentrynormal.yfilter)
	|| ydk::is_set(mcstentrynormal.yfilter)
	|| ydk::is_set(fwdmodecfgfailed.yfilter);
}

std::string System::PltfmItems::ForwardingmodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::ForwardingmodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwardingmode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ForwardingmodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwardingmodetype.is_set || is_set(forwardingmodetype.yfilter)) leaf_name_data.push_back(forwardingmodetype.get_name_leafdata());
    if (lpmentrywarp.is_set || is_set(lpmentrywarp.yfilter)) leaf_name_data.push_back(lpmentrywarp.get_name_leafdata());
    if (hostentrywarp.is_set || is_set(hostentrywarp.yfilter)) leaf_name_data.push_back(hostentrywarp.get_name_leafdata());
    if (l2entrywarp.is_set || is_set(l2entrywarp.yfilter)) leaf_name_data.push_back(l2entrywarp.get_name_leafdata());
    if (mcstentrywarp.is_set || is_set(mcstentrywarp.yfilter)) leaf_name_data.push_back(mcstentrywarp.get_name_leafdata());
    if (lpmentrynormal.is_set || is_set(lpmentrynormal.yfilter)) leaf_name_data.push_back(lpmentrynormal.get_name_leafdata());
    if (mcstentrynormal.is_set || is_set(mcstentrynormal.yfilter)) leaf_name_data.push_back(mcstentrynormal.get_name_leafdata());
    if (fwdmodecfgfailed.is_set || is_set(fwdmodecfgfailed.yfilter)) leaf_name_data.push_back(fwdmodecfgfailed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ForwardingmodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ForwardingmodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::ForwardingmodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwardingModeType")
    {
        forwardingmodetype = value;
        forwardingmodetype.value_namespace = name_space;
        forwardingmodetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpmEntryWarp")
    {
        lpmentrywarp = value;
        lpmentrywarp.value_namespace = name_space;
        lpmentrywarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostEntryWarp")
    {
        hostentrywarp = value;
        hostentrywarp.value_namespace = name_space;
        hostentrywarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2EntryWarp")
    {
        l2entrywarp = value;
        l2entrywarp.value_namespace = name_space;
        l2entrywarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcstEntryWarp")
    {
        mcstentrywarp = value;
        mcstentrywarp.value_namespace = name_space;
        mcstentrywarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpmEntryNormal")
    {
        lpmentrynormal = value;
        lpmentrynormal.value_namespace = name_space;
        lpmentrynormal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcstEntryNormal")
    {
        mcstentrynormal = value;
        mcstentrynormal.value_namespace = name_space;
        mcstentrynormal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdModeCfgFailed")
    {
        fwdmodecfgfailed = value;
        fwdmodecfgfailed.value_namespace = name_space;
        fwdmodecfgfailed.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ForwardingmodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwardingModeType")
    {
        forwardingmodetype.yfilter = yfilter;
    }
    if(value_path == "lpmEntryWarp")
    {
        lpmentrywarp.yfilter = yfilter;
    }
    if(value_path == "hostEntryWarp")
    {
        hostentrywarp.yfilter = yfilter;
    }
    if(value_path == "l2EntryWarp")
    {
        l2entrywarp.yfilter = yfilter;
    }
    if(value_path == "mcstEntryWarp")
    {
        mcstentrywarp.yfilter = yfilter;
    }
    if(value_path == "lpmEntryNormal")
    {
        lpmentrynormal.yfilter = yfilter;
    }
    if(value_path == "mcstEntryNormal")
    {
        mcstentrynormal.yfilter = yfilter;
    }
    if(value_path == "fwdModeCfgFailed")
    {
        fwdmodecfgfailed.yfilter = yfilter;
    }
}

bool System::PltfmItems::ForwardingmodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwardingModeType" || name == "lpmEntryWarp" || name == "hostEntryWarp" || name == "l2EntryWarp" || name == "mcstEntryWarp" || name == "lpmEntryNormal" || name == "mcstEntryNormal" || name == "fwdModeCfgFailed")
        return true;
    return false;
}

System::PltfmItems::EcmpItems::EcmpItems()
    :
    ecmpresilientmode{YType::enumeration, "ecmpResilientMode"},
    ecmpreuse{YType::enumeration, "ecmpReuse"},
    ecmpautorecoverythreshold{YType::uint16, "ecmpAutoRecoveryThreshold"}
{

    yang_name = "ecmp-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::EcmpItems::~EcmpItems()
{
}

bool System::PltfmItems::EcmpItems::has_data() const
{
    if (is_presence_container) return true;
    return ecmpresilientmode.is_set
	|| ecmpreuse.is_set
	|| ecmpautorecoverythreshold.is_set;
}

bool System::PltfmItems::EcmpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ecmpresilientmode.yfilter)
	|| ydk::is_set(ecmpreuse.yfilter)
	|| ydk::is_set(ecmpautorecoverythreshold.yfilter);
}

std::string System::PltfmItems::EcmpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::EcmpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::EcmpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmpresilientmode.is_set || is_set(ecmpresilientmode.yfilter)) leaf_name_data.push_back(ecmpresilientmode.get_name_leafdata());
    if (ecmpreuse.is_set || is_set(ecmpreuse.yfilter)) leaf_name_data.push_back(ecmpreuse.get_name_leafdata());
    if (ecmpautorecoverythreshold.is_set || is_set(ecmpautorecoverythreshold.yfilter)) leaf_name_data.push_back(ecmpautorecoverythreshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::EcmpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::EcmpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::EcmpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ecmpResilientMode")
    {
        ecmpresilientmode = value;
        ecmpresilientmode.value_namespace = name_space;
        ecmpresilientmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmpReuse")
    {
        ecmpreuse = value;
        ecmpreuse.value_namespace = name_space;
        ecmpreuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmpAutoRecoveryThreshold")
    {
        ecmpautorecoverythreshold = value;
        ecmpautorecoverythreshold.value_namespace = name_space;
        ecmpautorecoverythreshold.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::EcmpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ecmpResilientMode")
    {
        ecmpresilientmode.yfilter = yfilter;
    }
    if(value_path == "ecmpReuse")
    {
        ecmpreuse.yfilter = yfilter;
    }
    if(value_path == "ecmpAutoRecoveryThreshold")
    {
        ecmpautorecoverythreshold.yfilter = yfilter;
    }
}

bool System::PltfmItems::EcmpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecmpResilientMode" || name == "ecmpReuse" || name == "ecmpAutoRecoveryThreshold")
        return true;
    return false;
}

System::PltfmItems::QosItems::QosItems()
    :
    pghdrmreserve{YType::uint8, "pgHdrmReserve"},
    pgminvalue{YType::uint8, "pgMinValue"},
    pgnomin{YType::boolean, "pgNoMin"},
    classify{YType::enumeration, "classify"},
    ipg{YType::enumeration, "ipg"},
    pgshare{YType::enumeration, "pgShare"}
{

    yang_name = "qos-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::QosItems::~QosItems()
{
}

bool System::PltfmItems::QosItems::has_data() const
{
    if (is_presence_container) return true;
    return pghdrmreserve.is_set
	|| pgminvalue.is_set
	|| pgnomin.is_set
	|| classify.is_set
	|| ipg.is_set
	|| pgshare.is_set;
}

bool System::PltfmItems::QosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pghdrmreserve.yfilter)
	|| ydk::is_set(pgminvalue.yfilter)
	|| ydk::is_set(pgnomin.yfilter)
	|| ydk::is_set(classify.yfilter)
	|| ydk::is_set(ipg.yfilter)
	|| ydk::is_set(pgshare.yfilter);
}

std::string System::PltfmItems::QosItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::QosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::QosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pghdrmreserve.is_set || is_set(pghdrmreserve.yfilter)) leaf_name_data.push_back(pghdrmreserve.get_name_leafdata());
    if (pgminvalue.is_set || is_set(pgminvalue.yfilter)) leaf_name_data.push_back(pgminvalue.get_name_leafdata());
    if (pgnomin.is_set || is_set(pgnomin.yfilter)) leaf_name_data.push_back(pgnomin.get_name_leafdata());
    if (classify.is_set || is_set(classify.yfilter)) leaf_name_data.push_back(classify.get_name_leafdata());
    if (ipg.is_set || is_set(ipg.yfilter)) leaf_name_data.push_back(ipg.get_name_leafdata());
    if (pgshare.is_set || is_set(pgshare.yfilter)) leaf_name_data.push_back(pgshare.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::QosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::QosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::QosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pgHdrmReserve")
    {
        pghdrmreserve = value;
        pghdrmreserve.value_namespace = name_space;
        pghdrmreserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgMinValue")
    {
        pgminvalue = value;
        pgminvalue.value_namespace = name_space;
        pgminvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgNoMin")
    {
        pgnomin = value;
        pgnomin.value_namespace = name_space;
        pgnomin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classify")
    {
        classify = value;
        classify.value_namespace = name_space;
        classify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipg")
    {
        ipg = value;
        ipg.value_namespace = name_space;
        ipg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pgShare")
    {
        pgshare = value;
        pgshare.value_namespace = name_space;
        pgshare.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::QosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pgHdrmReserve")
    {
        pghdrmreserve.yfilter = yfilter;
    }
    if(value_path == "pgMinValue")
    {
        pgminvalue.yfilter = yfilter;
    }
    if(value_path == "pgNoMin")
    {
        pgnomin.yfilter = yfilter;
    }
    if(value_path == "classify")
    {
        classify.yfilter = yfilter;
    }
    if(value_path == "ipg")
    {
        ipg.yfilter = yfilter;
    }
    if(value_path == "pgShare")
    {
        pgshare.yfilter = yfilter;
    }
}

bool System::PltfmItems::QosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pgHdrmReserve" || name == "pgMinValue" || name == "pgNoMin" || name == "classify" || name == "ipg" || name == "pgShare")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems()
    :
    descr{YType::str, "descr"}
        ,
    bd_items(std::make_shared<System::PltfmItems::BdItems::BdItems_>())
{
    bd_items->parent = this;

    yang_name = "bd-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::~BdItems()
{
}

bool System::PltfmItems::BdItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (bd_items !=  nullptr && bd_items->has_data());
}

bool System::PltfmItems::BdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (bd_items !=  nullptr && bd_items->has_operation());
}

std::string System::PltfmItems::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::PltfmItems::BdItems::BdItems_>();
        }
        return bd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    return _children;
}

void System::PltfmItems::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems_::BdItems_()
    :
    bd_list(this, {"fabencap"})
{

    yang_name = "bd-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::BdItems_::~BdItems_()
{
}

bool System::PltfmItems::BdItems::BdItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::BdItems::BdItems_::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::BdItems::BdItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::BdItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::BdItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::BdItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bd-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::BdItems::BdItems_::BdList>();
        ent_->parent = this;
        bd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::BdItems_::get_children() const
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

void System::PltfmItems::BdItems::BdItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::BdItems::BdItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::BdItems::BdItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bd-list")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems_::BdList::BdList()
    :
    fabencap{YType::str, "fabEncap"}
{

    yang_name = "Bd-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::BdItems_::BdList::~BdList()
{
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set;
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter);
}

std::string System::PltfmItems::BdItems::BdItems_::BdList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/bd-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::BdItems_::BdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bd-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::BdItems_::BdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::BdItems_::BdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::BdItems_::BdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::BdItems::BdItems_::BdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BdItems::BdItems_::BdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabEncap")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IntfItems()
    :
    descr{YType::str, "descr"}
        ,
    if_items(std::make_shared<System::PltfmItems::IntfItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "intf-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::~IntfItems()
{
}

bool System::PltfmItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::PltfmItems::IntfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::PltfmItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::PltfmItems::IntfItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::PltfmItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::IfItems::~IfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::IntfItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::get_children() const
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

void System::PltfmItems::IntfItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::IntfItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::IntfItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    stormctrlcpuarp{YType::uint16, "stormCtrlCpuArp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    mcast_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::McastItems>())
    , eltmif_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems>())
    , rtvrfmbr_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems>())
{
    mcast_items->parent = this;
    eltmif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::IfItems::IfList::~IfList()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| stormctrlcpuarp.is_set
	|| name.is_set
	|| descr.is_set
	|| (mcast_items !=  nullptr && mcast_items->has_data())
	|| (eltmif_items !=  nullptr && eltmif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PltfmItems::IntfItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(stormctrlcpuarp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (mcast_items !=  nullptr && mcast_items->has_operation())
	|| (eltmif_items !=  nullptr && eltmif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/intf-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (stormctrlcpuarp.is_set || is_set(stormctrlcpuarp.yfilter)) leaf_name_data.push_back(stormctrlcpuarp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-items")
    {
        if(mcast_items == nullptr)
        {
            mcast_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::McastItems>();
        }
        return mcast_items;
    }

    if(child_yang_name == "eltmIf-items")
    {
        if(eltmif_items == nullptr)
        {
            eltmif_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems>();
        }
        return eltmif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_items != nullptr)
    {
        _children["mcast-items"] = mcast_items;
    }

    if(eltmif_items != nullptr)
    {
        _children["eltmIf-items"] = eltmif_items;
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

void System::PltfmItems::IntfItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlCpuArp")
    {
        stormctrlcpuarp = value;
        stormctrlcpuarp.value_namespace = name_space;
        stormctrlcpuarp.value_namespace_prefix = name_space_prefix;
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

void System::PltfmItems::IntfItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "stormCtrlCpuArp")
    {
        stormctrlcpuarp.yfilter = yfilter;
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

bool System::PltfmItems::IntfItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-items" || name == "eltmIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "stormCtrlCpuArp" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::McastItems::McastItems()
    :
    mcastslowrcv{YType::enumeration, "mcastSlowRcv"}
{

    yang_name = "mcast-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::McastItems::~McastItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::McastItems::has_data() const
{
    if (is_presence_container) return true;
    return mcastslowrcv.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::McastItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastslowrcv.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::McastItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::McastItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastslowrcv.is_set || is_set(mcastslowrcv.yfilter)) leaf_name_data.push_back(mcastslowrcv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::McastItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::McastItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::McastItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSlowRcv")
    {
        mcastslowrcv = value;
        mcastslowrcv.value_namespace = name_space;
        mcastslowrcv.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::IfItems::IfList::McastItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSlowRcv")
    {
        mcastslowrcv.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::IfItems::IfList::McastItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcastSlowRcv")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::EltmIfItems()
    :
    hwbdid{YType::uint32, "hwBdId"}
{

    yang_name = "eltmIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::~EltmIfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_data() const
{
    if (is_presence_container) return true;
    return hwbdid.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hwbdid.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eltmIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hwbdid.is_set || is_set(hwbdid.yfilter)) leaf_name_data.push_back(hwbdid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hwBdId")
    {
        hwbdid = value;
        hwbdid.value_namespace = name_space;
        hwbdid.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hwBdId")
    {
        hwbdid.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hwBdId")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::PltfmItems::LoglevelItems::LoglevelItems()
    :
    logginglevel{YType::uint16, "loggingLevel"},
    loggingtype{YType::enumeration, "loggingType"}
{

    yang_name = "loglevel-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::LoglevelItems::~LoglevelItems()
{
}

bool System::PltfmItems::LoglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return logginglevel.is_set
	|| loggingtype.is_set;
}

bool System::PltfmItems::LoglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(loggingtype.yfilter);
}

std::string System::PltfmItems::LoglevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::LoglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::LoglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (loggingtype.is_set || is_set(loggingtype.yfilter)) leaf_name_data.push_back(loggingtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::LoglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::LoglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::LoglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingType")
    {
        loggingtype = value;
        loggingtype.value_namespace = name_space;
        loggingtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::LoglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "loggingType")
    {
        loggingtype.yfilter = yfilter;
    }
}

bool System::PltfmItems::LoglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loggingLevel" || name == "loggingType")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffEntityItems()
    :
    descr{YType::str, "descr"}
        ,
    poweroffmodule_items(std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems>())
{
    poweroffmodule_items->parent = this;

    yang_name = "poweroffEntity-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::~PoweroffEntityItems()
{
}

bool System::PltfmItems::PoweroffEntityItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (poweroffmodule_items !=  nullptr && poweroffmodule_items->has_data());
}

bool System::PltfmItems::PoweroffEntityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (poweroffmodule_items !=  nullptr && poweroffmodule_items->has_operation());
}

std::string System::PltfmItems::PoweroffEntityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poweroffEntity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poweroffModule-items")
    {
        if(poweroffmodule_items == nullptr)
        {
            poweroffmodule_items = std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems>();
        }
        return poweroffmodule_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(poweroffmodule_items != nullptr)
    {
        _children["poweroffModule-items"] = poweroffmodule_items;
    }

    return _children;
}

void System::PltfmItems::PoweroffEntityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PoweroffEntityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::PoweroffEntityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poweroffModule-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleItems()
    :
    poweroffmodule_list(this, {"id"})
{

    yang_name = "poweroffModule-items"; yang_parent_name = "poweroffEntity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::~PoweroffModuleItems()
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<poweroffmodule_list.len(); index++)
    {
        if(poweroffmodule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_operation() const
{
    for (std::size_t index=0; index<poweroffmodule_list.len(); index++)
    {
        if(poweroffmodule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/poweroffEntity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poweroffModule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PoweroffModule-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList>();
        ent_->parent = this;
        poweroffmodule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : poweroffmodule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PoweroffModule-list")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::PoweroffModuleList()
    :
    id{YType::uint16, "id"},
    poweroffstatus{YType::enumeration, "poweroffStatus"}
{

    yang_name = "PoweroffModule-list"; yang_parent_name = "poweroffModule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::~PoweroffModuleList()
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| poweroffstatus.is_set;
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poweroffstatus.yfilter);
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/poweroffEntity-items/poweroffModule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PoweroffModule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poweroffstatus.is_set || is_set(poweroffstatus.yfilter)) leaf_name_data.push_back(poweroffstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroffStatus")
    {
        poweroffstatus = value;
        poweroffstatus.value_namespace = name_space;
        poweroffstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poweroffStatus")
    {
        poweroffstatus.yfilter = yfilter;
    }
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "poweroffStatus")
        return true;
    return false;
}

System::PltfmItems::SysmemthItems::SysmemthItems()
    :
    memthminor{YType::uint32, "memThMinor"},
    memthsevere{YType::uint32, "memThSevere"},
    memthcritical{YType::uint32, "memThCritical"}
{

    yang_name = "sysmemth-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::SysmemthItems::~SysmemthItems()
{
}

bool System::PltfmItems::SysmemthItems::has_data() const
{
    if (is_presence_container) return true;
    return memthminor.is_set
	|| memthsevere.is_set
	|| memthcritical.is_set;
}

bool System::PltfmItems::SysmemthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memthminor.yfilter)
	|| ydk::is_set(memthsevere.yfilter)
	|| ydk::is_set(memthcritical.yfilter);
}

std::string System::PltfmItems::SysmemthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::SysmemthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmemth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::SysmemthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memthminor.is_set || is_set(memthminor.yfilter)) leaf_name_data.push_back(memthminor.get_name_leafdata());
    if (memthsevere.is_set || is_set(memthsevere.yfilter)) leaf_name_data.push_back(memthsevere.get_name_leafdata());
    if (memthcritical.is_set || is_set(memthcritical.yfilter)) leaf_name_data.push_back(memthcritical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::SysmemthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::SysmemthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::SysmemthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memThMinor")
    {
        memthminor = value;
        memthminor.value_namespace = name_space;
        memthminor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memThSevere")
    {
        memthsevere = value;
        memthsevere.value_namespace = name_space;
        memthsevere.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memThCritical")
    {
        memthcritical = value;
        memthcritical.value_namespace = name_space;
        memthcritical.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::SysmemthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memThMinor")
    {
        memthminor.yfilter = yfilter;
    }
    if(value_path == "memThSevere")
    {
        memthsevere.yfilter = yfilter;
    }
    if(value_path == "memThCritical")
    {
        memthcritical.yfilter = yfilter;
    }
}

bool System::PltfmItems::SysmemthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memThMinor" || name == "memThSevere" || name == "memThCritical")
        return true;
    return false;
}

System::PltfmItems::TcamRegionItems::TcamRegionItems()
    :
    eraclsize{YType::uint32, "eRaclSize"},
    vpcconvergencesize{YType::uint32, "vpcConvergenceSize"},
    racllitesize{YType::uint32, "raclLiteSize"},
    ipv6ifaclsize{YType::uint32, "ipv6IfaclSize"},
    eipv6raclsize{YType::uint32, "eIpv6RaclSize"},
    ifacllitesize{YType::uint32, "ifaclLiteSize"},
    vaclsize{YType::uint32, "vaclSize"},
    ifaclsize{YType::uint32, "ifaclSize"},
    evaclsize{YType::uint32, "eVaclSize"},
    qossize{YType::uint32, "qosSize"},
    raclsize{YType::uint32, "raclSize"},
    ingflowsize{YType::uint32, "ingFlowSize"},
    natsize{YType::uint32, "natSize"},
    tcpnatsize{YType::uint16, "tcpNatSize"},
    macifaclsize{YType::uint32, "macIfaclSize"},
    eqossize{YType::uint32, "eQosSize"},
    eipv6qossize{YType::uint32, "eIpv6QosSize"},
    emacqossize{YType::uint32, "eMacQosSize"},
    eqoslitesize{YType::uint32, "eQosLiteSize"},
    ipsgsize{YType::uint32, "ipsgSize"},
    ipv6qossize{YType::uint32, "ipv6QosSize"},
    ipv6raclsize{YType::uint32, "ipv6RaclSize"},
    mcastbidirsize{YType::uint32, "mcastBidirSize"},
    macvqossize{YType::uint32, "macVqosSize"},
    fcoeingresssize{YType::uint32, "fcoeIngressSize"},
    fcoeegresssize{YType::uint32, "fcoeEgressSize"},
    ifacludfsize{YType::uint32, "ifaclUdfSize"},
    ipv6l3qossize{YType::uint32, "ipv6L3qosSize"},
    ipv6vaclsize{YType::uint32, "ipv6VaclSize"},
    ipv6vqossize{YType::uint32, "ipv6VqosSize"},
    macl3qossize{YType::uint32, "macL3qosSize"},
    macqossize{YType::uint32, "macQosSize"},
    macvaclsize{YType::uint32, "macVaclSize"},
    mplssize{YType::uint32, "mplsSize"},
    openflowsize{YType::uint32, "openflowSize"},
    openflowlitesize{YType::uint32, "openflowLiteSize"},
    qosintralitesize{YType::uint32, "qosIntraLiteSize"},
    racludfsize{YType::uint32, "raclUdfSize"},
    vacllitesize{YType::uint32, "vaclLiteSize"},
    vqossize{YType::uint32, "vqosSize"},
    vqosintralitesize{YType::uint32, "vqosIntraLiteSize"},
    vxlanp2psize{YType::uint32, "vxlanp2pSize"},
    coppsize{YType::uint32, "coppSize"},
    coppsystemsize{YType::uint32, "coppSystemSize"},
    l3qosintralitesize{YType::uint32, "l3qosIntraLiteSize"},
    svisize{YType::uint32, "sviSize"},
    arpaclsize{YType::uint32, "arpaclSize"},
    pbrsize{YType::uint32, "pbrSize"},
    ipv6pbrsize{YType::uint32, "ipv6PbrSize"},
    supsize{YType::uint32, "supSize"},
    qoslblsize{YType::uint32, "qoslblSize"},
    ipv6spansize{YType::uint32, "ipv6SpanSize"},
    ipv6spanl2size{YType::uint32, "ipv6SpanL2Size"},
    ipv6supsize{YType::uint32, "ipv6SupSize"},
    fhssize{YType::uint32, "fhsSize"},
    n9karpaclsize{YType::uint32, "n9kArpaclSize"},
    mplsdoublewide{YType::boolean, "mplsDoublewide"},
    openflowdoublewide{YType::boolean, "openflowDoublewide"},
    cfgfault{YType::enumeration, "cfgFault"},
    cfgfaultmsg{YType::str, "cfgFaultMsg"},
    cfgfaultbmp{YType::str, "cfgFaultBmp"},
    reinitdefaults{YType::boolean, "reinitDefaults"}
{

    yang_name = "tcamRegion-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::TcamRegionItems::~TcamRegionItems()
{
}

bool System::PltfmItems::TcamRegionItems::has_data() const
{
    if (is_presence_container) return true;
    return eraclsize.is_set
	|| vpcconvergencesize.is_set
	|| racllitesize.is_set
	|| ipv6ifaclsize.is_set
	|| eipv6raclsize.is_set
	|| ifacllitesize.is_set
	|| vaclsize.is_set
	|| ifaclsize.is_set
	|| evaclsize.is_set
	|| qossize.is_set
	|| raclsize.is_set
	|| ingflowsize.is_set
	|| natsize.is_set
	|| tcpnatsize.is_set
	|| macifaclsize.is_set
	|| eqossize.is_set
	|| eipv6qossize.is_set
	|| emacqossize.is_set
	|| eqoslitesize.is_set
	|| ipsgsize.is_set
	|| ipv6qossize.is_set
	|| ipv6raclsize.is_set
	|| mcastbidirsize.is_set
	|| macvqossize.is_set
	|| fcoeingresssize.is_set
	|| fcoeegresssize.is_set
	|| ifacludfsize.is_set
	|| ipv6l3qossize.is_set
	|| ipv6vaclsize.is_set
	|| ipv6vqossize.is_set
	|| macl3qossize.is_set
	|| macqossize.is_set
	|| macvaclsize.is_set
	|| mplssize.is_set
	|| openflowsize.is_set
	|| openflowlitesize.is_set
	|| qosintralitesize.is_set
	|| racludfsize.is_set
	|| vacllitesize.is_set
	|| vqossize.is_set
	|| vqosintralitesize.is_set
	|| vxlanp2psize.is_set
	|| coppsize.is_set
	|| coppsystemsize.is_set
	|| l3qosintralitesize.is_set
	|| svisize.is_set
	|| arpaclsize.is_set
	|| pbrsize.is_set
	|| ipv6pbrsize.is_set
	|| supsize.is_set
	|| qoslblsize.is_set
	|| ipv6spansize.is_set
	|| ipv6spanl2size.is_set
	|| ipv6supsize.is_set
	|| fhssize.is_set
	|| n9karpaclsize.is_set
	|| mplsdoublewide.is_set
	|| openflowdoublewide.is_set
	|| cfgfault.is_set
	|| cfgfaultmsg.is_set
	|| cfgfaultbmp.is_set
	|| reinitdefaults.is_set;
}

bool System::PltfmItems::TcamRegionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eraclsize.yfilter)
	|| ydk::is_set(vpcconvergencesize.yfilter)
	|| ydk::is_set(racllitesize.yfilter)
	|| ydk::is_set(ipv6ifaclsize.yfilter)
	|| ydk::is_set(eipv6raclsize.yfilter)
	|| ydk::is_set(ifacllitesize.yfilter)
	|| ydk::is_set(vaclsize.yfilter)
	|| ydk::is_set(ifaclsize.yfilter)
	|| ydk::is_set(evaclsize.yfilter)
	|| ydk::is_set(qossize.yfilter)
	|| ydk::is_set(raclsize.yfilter)
	|| ydk::is_set(ingflowsize.yfilter)
	|| ydk::is_set(natsize.yfilter)
	|| ydk::is_set(tcpnatsize.yfilter)
	|| ydk::is_set(macifaclsize.yfilter)
	|| ydk::is_set(eqossize.yfilter)
	|| ydk::is_set(eipv6qossize.yfilter)
	|| ydk::is_set(emacqossize.yfilter)
	|| ydk::is_set(eqoslitesize.yfilter)
	|| ydk::is_set(ipsgsize.yfilter)
	|| ydk::is_set(ipv6qossize.yfilter)
	|| ydk::is_set(ipv6raclsize.yfilter)
	|| ydk::is_set(mcastbidirsize.yfilter)
	|| ydk::is_set(macvqossize.yfilter)
	|| ydk::is_set(fcoeingresssize.yfilter)
	|| ydk::is_set(fcoeegresssize.yfilter)
	|| ydk::is_set(ifacludfsize.yfilter)
	|| ydk::is_set(ipv6l3qossize.yfilter)
	|| ydk::is_set(ipv6vaclsize.yfilter)
	|| ydk::is_set(ipv6vqossize.yfilter)
	|| ydk::is_set(macl3qossize.yfilter)
	|| ydk::is_set(macqossize.yfilter)
	|| ydk::is_set(macvaclsize.yfilter)
	|| ydk::is_set(mplssize.yfilter)
	|| ydk::is_set(openflowsize.yfilter)
	|| ydk::is_set(openflowlitesize.yfilter)
	|| ydk::is_set(qosintralitesize.yfilter)
	|| ydk::is_set(racludfsize.yfilter)
	|| ydk::is_set(vacllitesize.yfilter)
	|| ydk::is_set(vqossize.yfilter)
	|| ydk::is_set(vqosintralitesize.yfilter)
	|| ydk::is_set(vxlanp2psize.yfilter)
	|| ydk::is_set(coppsize.yfilter)
	|| ydk::is_set(coppsystemsize.yfilter)
	|| ydk::is_set(l3qosintralitesize.yfilter)
	|| ydk::is_set(svisize.yfilter)
	|| ydk::is_set(arpaclsize.yfilter)
	|| ydk::is_set(pbrsize.yfilter)
	|| ydk::is_set(ipv6pbrsize.yfilter)
	|| ydk::is_set(supsize.yfilter)
	|| ydk::is_set(qoslblsize.yfilter)
	|| ydk::is_set(ipv6spansize.yfilter)
	|| ydk::is_set(ipv6spanl2size.yfilter)
	|| ydk::is_set(ipv6supsize.yfilter)
	|| ydk::is_set(fhssize.yfilter)
	|| ydk::is_set(n9karpaclsize.yfilter)
	|| ydk::is_set(mplsdoublewide.yfilter)
	|| ydk::is_set(openflowdoublewide.yfilter)
	|| ydk::is_set(cfgfault.yfilter)
	|| ydk::is_set(cfgfaultmsg.yfilter)
	|| ydk::is_set(cfgfaultbmp.yfilter)
	|| ydk::is_set(reinitdefaults.yfilter);
}

std::string System::PltfmItems::TcamRegionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::TcamRegionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcamRegion-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::TcamRegionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eraclsize.is_set || is_set(eraclsize.yfilter)) leaf_name_data.push_back(eraclsize.get_name_leafdata());
    if (vpcconvergencesize.is_set || is_set(vpcconvergencesize.yfilter)) leaf_name_data.push_back(vpcconvergencesize.get_name_leafdata());
    if (racllitesize.is_set || is_set(racllitesize.yfilter)) leaf_name_data.push_back(racllitesize.get_name_leafdata());
    if (ipv6ifaclsize.is_set || is_set(ipv6ifaclsize.yfilter)) leaf_name_data.push_back(ipv6ifaclsize.get_name_leafdata());
    if (eipv6raclsize.is_set || is_set(eipv6raclsize.yfilter)) leaf_name_data.push_back(eipv6raclsize.get_name_leafdata());
    if (ifacllitesize.is_set || is_set(ifacllitesize.yfilter)) leaf_name_data.push_back(ifacllitesize.get_name_leafdata());
    if (vaclsize.is_set || is_set(vaclsize.yfilter)) leaf_name_data.push_back(vaclsize.get_name_leafdata());
    if (ifaclsize.is_set || is_set(ifaclsize.yfilter)) leaf_name_data.push_back(ifaclsize.get_name_leafdata());
    if (evaclsize.is_set || is_set(evaclsize.yfilter)) leaf_name_data.push_back(evaclsize.get_name_leafdata());
    if (qossize.is_set || is_set(qossize.yfilter)) leaf_name_data.push_back(qossize.get_name_leafdata());
    if (raclsize.is_set || is_set(raclsize.yfilter)) leaf_name_data.push_back(raclsize.get_name_leafdata());
    if (ingflowsize.is_set || is_set(ingflowsize.yfilter)) leaf_name_data.push_back(ingflowsize.get_name_leafdata());
    if (natsize.is_set || is_set(natsize.yfilter)) leaf_name_data.push_back(natsize.get_name_leafdata());
    if (tcpnatsize.is_set || is_set(tcpnatsize.yfilter)) leaf_name_data.push_back(tcpnatsize.get_name_leafdata());
    if (macifaclsize.is_set || is_set(macifaclsize.yfilter)) leaf_name_data.push_back(macifaclsize.get_name_leafdata());
    if (eqossize.is_set || is_set(eqossize.yfilter)) leaf_name_data.push_back(eqossize.get_name_leafdata());
    if (eipv6qossize.is_set || is_set(eipv6qossize.yfilter)) leaf_name_data.push_back(eipv6qossize.get_name_leafdata());
    if (emacqossize.is_set || is_set(emacqossize.yfilter)) leaf_name_data.push_back(emacqossize.get_name_leafdata());
    if (eqoslitesize.is_set || is_set(eqoslitesize.yfilter)) leaf_name_data.push_back(eqoslitesize.get_name_leafdata());
    if (ipsgsize.is_set || is_set(ipsgsize.yfilter)) leaf_name_data.push_back(ipsgsize.get_name_leafdata());
    if (ipv6qossize.is_set || is_set(ipv6qossize.yfilter)) leaf_name_data.push_back(ipv6qossize.get_name_leafdata());
    if (ipv6raclsize.is_set || is_set(ipv6raclsize.yfilter)) leaf_name_data.push_back(ipv6raclsize.get_name_leafdata());
    if (mcastbidirsize.is_set || is_set(mcastbidirsize.yfilter)) leaf_name_data.push_back(mcastbidirsize.get_name_leafdata());
    if (macvqossize.is_set || is_set(macvqossize.yfilter)) leaf_name_data.push_back(macvqossize.get_name_leafdata());
    if (fcoeingresssize.is_set || is_set(fcoeingresssize.yfilter)) leaf_name_data.push_back(fcoeingresssize.get_name_leafdata());
    if (fcoeegresssize.is_set || is_set(fcoeegresssize.yfilter)) leaf_name_data.push_back(fcoeegresssize.get_name_leafdata());
    if (ifacludfsize.is_set || is_set(ifacludfsize.yfilter)) leaf_name_data.push_back(ifacludfsize.get_name_leafdata());
    if (ipv6l3qossize.is_set || is_set(ipv6l3qossize.yfilter)) leaf_name_data.push_back(ipv6l3qossize.get_name_leafdata());
    if (ipv6vaclsize.is_set || is_set(ipv6vaclsize.yfilter)) leaf_name_data.push_back(ipv6vaclsize.get_name_leafdata());
    if (ipv6vqossize.is_set || is_set(ipv6vqossize.yfilter)) leaf_name_data.push_back(ipv6vqossize.get_name_leafdata());
    if (macl3qossize.is_set || is_set(macl3qossize.yfilter)) leaf_name_data.push_back(macl3qossize.get_name_leafdata());
    if (macqossize.is_set || is_set(macqossize.yfilter)) leaf_name_data.push_back(macqossize.get_name_leafdata());
    if (macvaclsize.is_set || is_set(macvaclsize.yfilter)) leaf_name_data.push_back(macvaclsize.get_name_leafdata());
    if (mplssize.is_set || is_set(mplssize.yfilter)) leaf_name_data.push_back(mplssize.get_name_leafdata());
    if (openflowsize.is_set || is_set(openflowsize.yfilter)) leaf_name_data.push_back(openflowsize.get_name_leafdata());
    if (openflowlitesize.is_set || is_set(openflowlitesize.yfilter)) leaf_name_data.push_back(openflowlitesize.get_name_leafdata());
    if (qosintralitesize.is_set || is_set(qosintralitesize.yfilter)) leaf_name_data.push_back(qosintralitesize.get_name_leafdata());
    if (racludfsize.is_set || is_set(racludfsize.yfilter)) leaf_name_data.push_back(racludfsize.get_name_leafdata());
    if (vacllitesize.is_set || is_set(vacllitesize.yfilter)) leaf_name_data.push_back(vacllitesize.get_name_leafdata());
    if (vqossize.is_set || is_set(vqossize.yfilter)) leaf_name_data.push_back(vqossize.get_name_leafdata());
    if (vqosintralitesize.is_set || is_set(vqosintralitesize.yfilter)) leaf_name_data.push_back(vqosintralitesize.get_name_leafdata());
    if (vxlanp2psize.is_set || is_set(vxlanp2psize.yfilter)) leaf_name_data.push_back(vxlanp2psize.get_name_leafdata());
    if (coppsize.is_set || is_set(coppsize.yfilter)) leaf_name_data.push_back(coppsize.get_name_leafdata());
    if (coppsystemsize.is_set || is_set(coppsystemsize.yfilter)) leaf_name_data.push_back(coppsystemsize.get_name_leafdata());
    if (l3qosintralitesize.is_set || is_set(l3qosintralitesize.yfilter)) leaf_name_data.push_back(l3qosintralitesize.get_name_leafdata());
    if (svisize.is_set || is_set(svisize.yfilter)) leaf_name_data.push_back(svisize.get_name_leafdata());
    if (arpaclsize.is_set || is_set(arpaclsize.yfilter)) leaf_name_data.push_back(arpaclsize.get_name_leafdata());
    if (pbrsize.is_set || is_set(pbrsize.yfilter)) leaf_name_data.push_back(pbrsize.get_name_leafdata());
    if (ipv6pbrsize.is_set || is_set(ipv6pbrsize.yfilter)) leaf_name_data.push_back(ipv6pbrsize.get_name_leafdata());
    if (supsize.is_set || is_set(supsize.yfilter)) leaf_name_data.push_back(supsize.get_name_leafdata());
    if (qoslblsize.is_set || is_set(qoslblsize.yfilter)) leaf_name_data.push_back(qoslblsize.get_name_leafdata());
    if (ipv6spansize.is_set || is_set(ipv6spansize.yfilter)) leaf_name_data.push_back(ipv6spansize.get_name_leafdata());
    if (ipv6spanl2size.is_set || is_set(ipv6spanl2size.yfilter)) leaf_name_data.push_back(ipv6spanl2size.get_name_leafdata());
    if (ipv6supsize.is_set || is_set(ipv6supsize.yfilter)) leaf_name_data.push_back(ipv6supsize.get_name_leafdata());
    if (fhssize.is_set || is_set(fhssize.yfilter)) leaf_name_data.push_back(fhssize.get_name_leafdata());
    if (n9karpaclsize.is_set || is_set(n9karpaclsize.yfilter)) leaf_name_data.push_back(n9karpaclsize.get_name_leafdata());
    if (mplsdoublewide.is_set || is_set(mplsdoublewide.yfilter)) leaf_name_data.push_back(mplsdoublewide.get_name_leafdata());
    if (openflowdoublewide.is_set || is_set(openflowdoublewide.yfilter)) leaf_name_data.push_back(openflowdoublewide.get_name_leafdata());
    if (cfgfault.is_set || is_set(cfgfault.yfilter)) leaf_name_data.push_back(cfgfault.get_name_leafdata());
    if (cfgfaultmsg.is_set || is_set(cfgfaultmsg.yfilter)) leaf_name_data.push_back(cfgfaultmsg.get_name_leafdata());
    if (cfgfaultbmp.is_set || is_set(cfgfaultbmp.yfilter)) leaf_name_data.push_back(cfgfaultbmp.get_name_leafdata());
    if (reinitdefaults.is_set || is_set(reinitdefaults.yfilter)) leaf_name_data.push_back(reinitdefaults.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::TcamRegionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::TcamRegionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::TcamRegionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eRaclSize")
    {
        eraclsize = value;
        eraclsize.value_namespace = name_space;
        eraclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcConvergenceSize")
    {
        vpcconvergencesize = value;
        vpcconvergencesize.value_namespace = name_space;
        vpcconvergencesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raclLiteSize")
    {
        racllitesize = value;
        racllitesize.value_namespace = name_space;
        racllitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6IfaclSize")
    {
        ipv6ifaclsize = value;
        ipv6ifaclsize.value_namespace = name_space;
        ipv6ifaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eIpv6RaclSize")
    {
        eipv6raclsize = value;
        eipv6raclsize.value_namespace = name_space;
        eipv6raclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifaclLiteSize")
    {
        ifacllitesize = value;
        ifacllitesize.value_namespace = name_space;
        ifacllitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaclSize")
    {
        vaclsize = value;
        vaclsize.value_namespace = name_space;
        vaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifaclSize")
    {
        ifaclsize = value;
        ifaclsize.value_namespace = name_space;
        ifaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eVaclSize")
    {
        evaclsize = value;
        evaclsize.value_namespace = name_space;
        evaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosSize")
    {
        qossize = value;
        qossize.value_namespace = name_space;
        qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raclSize")
    {
        raclsize = value;
        raclsize.value_namespace = name_space;
        raclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingFlowSize")
    {
        ingflowsize = value;
        ingflowsize.value_namespace = name_space;
        ingflowsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natSize")
    {
        natsize = value;
        natsize.value_namespace = name_space;
        natsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpNatSize")
    {
        tcpnatsize = value;
        tcpnatsize.value_namespace = name_space;
        tcpnatsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macIfaclSize")
    {
        macifaclsize = value;
        macifaclsize.value_namespace = name_space;
        macifaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eQosSize")
    {
        eqossize = value;
        eqossize.value_namespace = name_space;
        eqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eIpv6QosSize")
    {
        eipv6qossize = value;
        eipv6qossize.value_namespace = name_space;
        eipv6qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eMacQosSize")
    {
        emacqossize = value;
        emacqossize.value_namespace = name_space;
        emacqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eQosLiteSize")
    {
        eqoslitesize = value;
        eqoslitesize.value_namespace = name_space;
        eqoslitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsgSize")
    {
        ipsgsize = value;
        ipsgsize.value_namespace = name_space;
        ipsgsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6QosSize")
    {
        ipv6qossize = value;
        ipv6qossize.value_namespace = name_space;
        ipv6qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6RaclSize")
    {
        ipv6raclsize = value;
        ipv6raclsize.value_namespace = name_space;
        ipv6raclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastBidirSize")
    {
        mcastbidirsize = value;
        mcastbidirsize.value_namespace = name_space;
        mcastbidirsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macVqosSize")
    {
        macvqossize = value;
        macvqossize.value_namespace = name_space;
        macvqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcoeIngressSize")
    {
        fcoeingresssize = value;
        fcoeingresssize.value_namespace = name_space;
        fcoeingresssize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcoeEgressSize")
    {
        fcoeegresssize = value;
        fcoeegresssize.value_namespace = name_space;
        fcoeegresssize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifaclUdfSize")
    {
        ifacludfsize = value;
        ifacludfsize.value_namespace = name_space;
        ifacludfsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6L3qosSize")
    {
        ipv6l3qossize = value;
        ipv6l3qossize.value_namespace = name_space;
        ipv6l3qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6VaclSize")
    {
        ipv6vaclsize = value;
        ipv6vaclsize.value_namespace = name_space;
        ipv6vaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6VqosSize")
    {
        ipv6vqossize = value;
        ipv6vqossize.value_namespace = name_space;
        ipv6vqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL3qosSize")
    {
        macl3qossize = value;
        macl3qossize.value_namespace = name_space;
        macl3qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macQosSize")
    {
        macqossize = value;
        macqossize.value_namespace = name_space;
        macqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macVaclSize")
    {
        macvaclsize = value;
        macvaclsize.value_namespace = name_space;
        macvaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsSize")
    {
        mplssize = value;
        mplssize.value_namespace = name_space;
        mplssize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openflowSize")
    {
        openflowsize = value;
        openflowsize.value_namespace = name_space;
        openflowsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openflowLiteSize")
    {
        openflowlitesize = value;
        openflowlitesize.value_namespace = name_space;
        openflowlitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosIntraLiteSize")
    {
        qosintralitesize = value;
        qosintralitesize.value_namespace = name_space;
        qosintralitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raclUdfSize")
    {
        racludfsize = value;
        racludfsize.value_namespace = name_space;
        racludfsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaclLiteSize")
    {
        vacllitesize = value;
        vacllitesize.value_namespace = name_space;
        vacllitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vqosSize")
    {
        vqossize = value;
        vqossize.value_namespace = name_space;
        vqossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vqosIntraLiteSize")
    {
        vqosintralitesize = value;
        vqosintralitesize.value_namespace = name_space;
        vqosintralitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlanp2pSize")
    {
        vxlanp2psize = value;
        vxlanp2psize.value_namespace = name_space;
        vxlanp2psize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coppSize")
    {
        coppsize = value;
        coppsize.value_namespace = name_space;
        coppsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coppSystemSize")
    {
        coppsystemsize = value;
        coppsystemsize.value_namespace = name_space;
        coppsystemsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3qosIntraLiteSize")
    {
        l3qosintralitesize = value;
        l3qosintralitesize.value_namespace = name_space;
        l3qosintralitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sviSize")
    {
        svisize = value;
        svisize.value_namespace = name_space;
        svisize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpaclSize")
    {
        arpaclsize = value;
        arpaclsize.value_namespace = name_space;
        arpaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbrSize")
    {
        pbrsize = value;
        pbrsize.value_namespace = name_space;
        pbrsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6PbrSize")
    {
        ipv6pbrsize = value;
        ipv6pbrsize.value_namespace = name_space;
        ipv6pbrsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supSize")
    {
        supsize = value;
        supsize.value_namespace = name_space;
        supsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qoslblSize")
    {
        qoslblsize = value;
        qoslblsize.value_namespace = name_space;
        qoslblsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6SpanSize")
    {
        ipv6spansize = value;
        ipv6spansize.value_namespace = name_space;
        ipv6spansize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6SpanL2Size")
    {
        ipv6spanl2size = value;
        ipv6spanl2size.value_namespace = name_space;
        ipv6spanl2size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6SupSize")
    {
        ipv6supsize = value;
        ipv6supsize.value_namespace = name_space;
        ipv6supsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fhsSize")
    {
        fhssize = value;
        fhssize.value_namespace = name_space;
        fhssize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "n9kArpaclSize")
    {
        n9karpaclsize = value;
        n9karpaclsize.value_namespace = name_space;
        n9karpaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsDoublewide")
    {
        mplsdoublewide = value;
        mplsdoublewide.value_namespace = name_space;
        mplsdoublewide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openflowDoublewide")
    {
        openflowdoublewide = value;
        openflowdoublewide.value_namespace = name_space;
        openflowdoublewide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgFault")
    {
        cfgfault = value;
        cfgfault.value_namespace = name_space;
        cfgfault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgFaultMsg")
    {
        cfgfaultmsg = value;
        cfgfaultmsg.value_namespace = name_space;
        cfgfaultmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgFaultBmp")
    {
        cfgfaultbmp = value;
        cfgfaultbmp.value_namespace = name_space;
        cfgfaultbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinitDefaults")
    {
        reinitdefaults = value;
        reinitdefaults.value_namespace = name_space;
        reinitdefaults.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::TcamRegionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eRaclSize")
    {
        eraclsize.yfilter = yfilter;
    }
    if(value_path == "vpcConvergenceSize")
    {
        vpcconvergencesize.yfilter = yfilter;
    }
    if(value_path == "raclLiteSize")
    {
        racllitesize.yfilter = yfilter;
    }
    if(value_path == "ipv6IfaclSize")
    {
        ipv6ifaclsize.yfilter = yfilter;
    }
    if(value_path == "eIpv6RaclSize")
    {
        eipv6raclsize.yfilter = yfilter;
    }
    if(value_path == "ifaclLiteSize")
    {
        ifacllitesize.yfilter = yfilter;
    }
    if(value_path == "vaclSize")
    {
        vaclsize.yfilter = yfilter;
    }
    if(value_path == "ifaclSize")
    {
        ifaclsize.yfilter = yfilter;
    }
    if(value_path == "eVaclSize")
    {
        evaclsize.yfilter = yfilter;
    }
    if(value_path == "qosSize")
    {
        qossize.yfilter = yfilter;
    }
    if(value_path == "raclSize")
    {
        raclsize.yfilter = yfilter;
    }
    if(value_path == "ingFlowSize")
    {
        ingflowsize.yfilter = yfilter;
    }
    if(value_path == "natSize")
    {
        natsize.yfilter = yfilter;
    }
    if(value_path == "tcpNatSize")
    {
        tcpnatsize.yfilter = yfilter;
    }
    if(value_path == "macIfaclSize")
    {
        macifaclsize.yfilter = yfilter;
    }
    if(value_path == "eQosSize")
    {
        eqossize.yfilter = yfilter;
    }
    if(value_path == "eIpv6QosSize")
    {
        eipv6qossize.yfilter = yfilter;
    }
    if(value_path == "eMacQosSize")
    {
        emacqossize.yfilter = yfilter;
    }
    if(value_path == "eQosLiteSize")
    {
        eqoslitesize.yfilter = yfilter;
    }
    if(value_path == "ipsgSize")
    {
        ipsgsize.yfilter = yfilter;
    }
    if(value_path == "ipv6QosSize")
    {
        ipv6qossize.yfilter = yfilter;
    }
    if(value_path == "ipv6RaclSize")
    {
        ipv6raclsize.yfilter = yfilter;
    }
    if(value_path == "mcastBidirSize")
    {
        mcastbidirsize.yfilter = yfilter;
    }
    if(value_path == "macVqosSize")
    {
        macvqossize.yfilter = yfilter;
    }
    if(value_path == "fcoeIngressSize")
    {
        fcoeingresssize.yfilter = yfilter;
    }
    if(value_path == "fcoeEgressSize")
    {
        fcoeegresssize.yfilter = yfilter;
    }
    if(value_path == "ifaclUdfSize")
    {
        ifacludfsize.yfilter = yfilter;
    }
    if(value_path == "ipv6L3qosSize")
    {
        ipv6l3qossize.yfilter = yfilter;
    }
    if(value_path == "ipv6VaclSize")
    {
        ipv6vaclsize.yfilter = yfilter;
    }
    if(value_path == "ipv6VqosSize")
    {
        ipv6vqossize.yfilter = yfilter;
    }
    if(value_path == "macL3qosSize")
    {
        macl3qossize.yfilter = yfilter;
    }
    if(value_path == "macQosSize")
    {
        macqossize.yfilter = yfilter;
    }
    if(value_path == "macVaclSize")
    {
        macvaclsize.yfilter = yfilter;
    }
    if(value_path == "mplsSize")
    {
        mplssize.yfilter = yfilter;
    }
    if(value_path == "openflowSize")
    {
        openflowsize.yfilter = yfilter;
    }
    if(value_path == "openflowLiteSize")
    {
        openflowlitesize.yfilter = yfilter;
    }
    if(value_path == "qosIntraLiteSize")
    {
        qosintralitesize.yfilter = yfilter;
    }
    if(value_path == "raclUdfSize")
    {
        racludfsize.yfilter = yfilter;
    }
    if(value_path == "vaclLiteSize")
    {
        vacllitesize.yfilter = yfilter;
    }
    if(value_path == "vqosSize")
    {
        vqossize.yfilter = yfilter;
    }
    if(value_path == "vqosIntraLiteSize")
    {
        vqosintralitesize.yfilter = yfilter;
    }
    if(value_path == "vxlanp2pSize")
    {
        vxlanp2psize.yfilter = yfilter;
    }
    if(value_path == "coppSize")
    {
        coppsize.yfilter = yfilter;
    }
    if(value_path == "coppSystemSize")
    {
        coppsystemsize.yfilter = yfilter;
    }
    if(value_path == "l3qosIntraLiteSize")
    {
        l3qosintralitesize.yfilter = yfilter;
    }
    if(value_path == "sviSize")
    {
        svisize.yfilter = yfilter;
    }
    if(value_path == "arpaclSize")
    {
        arpaclsize.yfilter = yfilter;
    }
    if(value_path == "pbrSize")
    {
        pbrsize.yfilter = yfilter;
    }
    if(value_path == "ipv6PbrSize")
    {
        ipv6pbrsize.yfilter = yfilter;
    }
    if(value_path == "supSize")
    {
        supsize.yfilter = yfilter;
    }
    if(value_path == "qoslblSize")
    {
        qoslblsize.yfilter = yfilter;
    }
    if(value_path == "ipv6SpanSize")
    {
        ipv6spansize.yfilter = yfilter;
    }
    if(value_path == "ipv6SpanL2Size")
    {
        ipv6spanl2size.yfilter = yfilter;
    }
    if(value_path == "ipv6SupSize")
    {
        ipv6supsize.yfilter = yfilter;
    }
    if(value_path == "fhsSize")
    {
        fhssize.yfilter = yfilter;
    }
    if(value_path == "n9kArpaclSize")
    {
        n9karpaclsize.yfilter = yfilter;
    }
    if(value_path == "mplsDoublewide")
    {
        mplsdoublewide.yfilter = yfilter;
    }
    if(value_path == "openflowDoublewide")
    {
        openflowdoublewide.yfilter = yfilter;
    }
    if(value_path == "cfgFault")
    {
        cfgfault.yfilter = yfilter;
    }
    if(value_path == "cfgFaultMsg")
    {
        cfgfaultmsg.yfilter = yfilter;
    }
    if(value_path == "cfgFaultBmp")
    {
        cfgfaultbmp.yfilter = yfilter;
    }
    if(value_path == "reinitDefaults")
    {
        reinitdefaults.yfilter = yfilter;
    }
}

bool System::PltfmItems::TcamRegionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eRaclSize" || name == "vpcConvergenceSize" || name == "raclLiteSize" || name == "ipv6IfaclSize" || name == "eIpv6RaclSize" || name == "ifaclLiteSize" || name == "vaclSize" || name == "ifaclSize" || name == "eVaclSize" || name == "qosSize" || name == "raclSize" || name == "ingFlowSize" || name == "natSize" || name == "tcpNatSize" || name == "macIfaclSize" || name == "eQosSize" || name == "eIpv6QosSize" || name == "eMacQosSize" || name == "eQosLiteSize" || name == "ipsgSize" || name == "ipv6QosSize" || name == "ipv6RaclSize" || name == "mcastBidirSize" || name == "macVqosSize" || name == "fcoeIngressSize" || name == "fcoeEgressSize" || name == "ifaclUdfSize" || name == "ipv6L3qosSize" || name == "ipv6VaclSize" || name == "ipv6VqosSize" || name == "macL3qosSize" || name == "macQosSize" || name == "macVaclSize" || name == "mplsSize" || name == "openflowSize" || name == "openflowLiteSize" || name == "qosIntraLiteSize" || name == "raclUdfSize" || name == "vaclLiteSize" || name == "vqosSize" || name == "vqosIntraLiteSize" || name == "vxlanp2pSize" || name == "coppSize" || name == "coppSystemSize" || name == "l3qosIntraLiteSize" || name == "sviSize" || name == "arpaclSize" || name == "pbrSize" || name == "ipv6PbrSize" || name == "supSize" || name == "qoslblSize" || name == "ipv6SpanSize" || name == "ipv6SpanL2Size" || name == "ipv6SupSize" || name == "fhsSize" || name == "n9kArpaclSize" || name == "mplsDoublewide" || name == "openflowDoublewide" || name == "cfgFault" || name == "cfgFaultMsg" || name == "cfgFaultBmp" || name == "reinitDefaults")
        return true;
    return false;
}

System::PltfmItems::LatencymonitorItems::LatencymonitorItems()
    :
    sampling{YType::uint32, "sampling"},
    latencymonitorthreshholdavg{YType::uint32, "latencyMonitorThreshholdAvg"},
    latencymonitorthreshholdmax{YType::uint32, "latencyMonitorThreshholdMax"},
    latencymonitorstate{YType::enumeration, "latencyMonitorState"}
{

    yang_name = "latencymonitor-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::LatencymonitorItems::~LatencymonitorItems()
{
}

bool System::PltfmItems::LatencymonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return sampling.is_set
	|| latencymonitorthreshholdavg.is_set
	|| latencymonitorthreshholdmax.is_set
	|| latencymonitorstate.is_set;
}

bool System::PltfmItems::LatencymonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampling.yfilter)
	|| ydk::is_set(latencymonitorthreshholdavg.yfilter)
	|| ydk::is_set(latencymonitorthreshholdmax.yfilter)
	|| ydk::is_set(latencymonitorstate.yfilter);
}

std::string System::PltfmItems::LatencymonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::LatencymonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latencymonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::LatencymonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampling.is_set || is_set(sampling.yfilter)) leaf_name_data.push_back(sampling.get_name_leafdata());
    if (latencymonitorthreshholdavg.is_set || is_set(latencymonitorthreshholdavg.yfilter)) leaf_name_data.push_back(latencymonitorthreshholdavg.get_name_leafdata());
    if (latencymonitorthreshholdmax.is_set || is_set(latencymonitorthreshholdmax.yfilter)) leaf_name_data.push_back(latencymonitorthreshholdmax.get_name_leafdata());
    if (latencymonitorstate.is_set || is_set(latencymonitorstate.yfilter)) leaf_name_data.push_back(latencymonitorstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::LatencymonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::LatencymonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::LatencymonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampling")
    {
        sampling = value;
        sampling.value_namespace = name_space;
        sampling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorThreshholdAvg")
    {
        latencymonitorthreshholdavg = value;
        latencymonitorthreshholdavg.value_namespace = name_space;
        latencymonitorthreshholdavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorThreshholdMax")
    {
        latencymonitorthreshholdmax = value;
        latencymonitorthreshholdmax.value_namespace = name_space;
        latencymonitorthreshholdmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorState")
    {
        latencymonitorstate = value;
        latencymonitorstate.value_namespace = name_space;
        latencymonitorstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::LatencymonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampling")
    {
        sampling.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorThreshholdAvg")
    {
        latencymonitorthreshholdavg.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorThreshholdMax")
    {
        latencymonitorthreshholdmax.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorState")
    {
        latencymonitorstate.yfilter = yfilter;
    }
}

bool System::PltfmItems::LatencymonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling" || name == "latencyMonitorThreshholdAvg" || name == "latencyMonitorThreshholdMax" || name == "latencyMonitorState")
        return true;
    return false;
}

System::PltfmItems::BuffermonitorItems::BuffermonitorItems()
    :
    sampling{YType::uint32, "sampling"},
    buffermonitorthreshhold{YType::uint32, "bufferMonitorThreshhold"},
    buffermonitorstate{YType::enumeration, "bufferMonitorState"},
    buffermonitormode{YType::enumeration, "bufferMonitorMode"}
{

    yang_name = "buffermonitor-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BuffermonitorItems::~BuffermonitorItems()
{
}

bool System::PltfmItems::BuffermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return sampling.is_set
	|| buffermonitorthreshhold.is_set
	|| buffermonitorstate.is_set
	|| buffermonitormode.is_set;
}

bool System::PltfmItems::BuffermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampling.yfilter)
	|| ydk::is_set(buffermonitorthreshhold.yfilter)
	|| ydk::is_set(buffermonitorstate.yfilter)
	|| ydk::is_set(buffermonitormode.yfilter);
}

std::string System::PltfmItems::BuffermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BuffermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BuffermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampling.is_set || is_set(sampling.yfilter)) leaf_name_data.push_back(sampling.get_name_leafdata());
    if (buffermonitorthreshhold.is_set || is_set(buffermonitorthreshhold.yfilter)) leaf_name_data.push_back(buffermonitorthreshhold.get_name_leafdata());
    if (buffermonitorstate.is_set || is_set(buffermonitorstate.yfilter)) leaf_name_data.push_back(buffermonitorstate.get_name_leafdata());
    if (buffermonitormode.is_set || is_set(buffermonitormode.yfilter)) leaf_name_data.push_back(buffermonitormode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BuffermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BuffermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::BuffermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampling")
    {
        sampling = value;
        sampling.value_namespace = name_space;
        sampling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorThreshhold")
    {
        buffermonitorthreshhold = value;
        buffermonitorthreshhold.value_namespace = name_space;
        buffermonitorthreshhold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorState")
    {
        buffermonitorstate = value;
        buffermonitorstate.value_namespace = name_space;
        buffermonitorstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorMode")
    {
        buffermonitormode = value;
        buffermonitormode.value_namespace = name_space;
        buffermonitormode.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BuffermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampling")
    {
        sampling.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorThreshhold")
    {
        buffermonitorthreshhold.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorState")
    {
        buffermonitorstate.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorMode")
    {
        buffermonitormode.yfilter = yfilter;
    }
}

bool System::PltfmItems::BuffermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling" || name == "bufferMonitorThreshhold" || name == "bufferMonitorState" || name == "bufferMonitorMode")
        return true;
    return false;
}

System::PltfmItems::PfcmmubufferItems::PfcmmubufferItems()
    :
    mmubufferstate{YType::enumeration, "mmuBufferState"},
    bufferreservation{YType::uint16, "bufferReservation"},
    cfgfault{YType::enumeration, "cfgFault"}
{

    yang_name = "pfcmmubuffer-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PfcmmubufferItems::~PfcmmubufferItems()
{
}

bool System::PltfmItems::PfcmmubufferItems::has_data() const
{
    if (is_presence_container) return true;
    return mmubufferstate.is_set
	|| bufferreservation.is_set
	|| cfgfault.is_set;
}

bool System::PltfmItems::PfcmmubufferItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mmubufferstate.yfilter)
	|| ydk::is_set(bufferreservation.yfilter)
	|| ydk::is_set(cfgfault.yfilter);
}

std::string System::PltfmItems::PfcmmubufferItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PfcmmubufferItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfcmmubuffer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PfcmmubufferItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mmubufferstate.is_set || is_set(mmubufferstate.yfilter)) leaf_name_data.push_back(mmubufferstate.get_name_leafdata());
    if (bufferreservation.is_set || is_set(bufferreservation.yfilter)) leaf_name_data.push_back(bufferreservation.get_name_leafdata());
    if (cfgfault.is_set || is_set(cfgfault.yfilter)) leaf_name_data.push_back(cfgfault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PfcmmubufferItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PfcmmubufferItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::PfcmmubufferItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mmuBufferState")
    {
        mmubufferstate = value;
        mmubufferstate.value_namespace = name_space;
        mmubufferstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferReservation")
    {
        bufferreservation = value;
        bufferreservation.value_namespace = name_space;
        bufferreservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgFault")
    {
        cfgfault = value;
        cfgfault.value_namespace = name_space;
        cfgfault.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PfcmmubufferItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mmuBufferState")
    {
        mmubufferstate.yfilter = yfilter;
    }
    if(value_path == "bufferReservation")
    {
        bufferreservation.yfilter = yfilter;
    }
    if(value_path == "cfgFault")
    {
        cfgfault.yfilter = yfilter;
    }
}

bool System::PltfmItems::PfcmmubufferItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mmuBufferState" || name == "bufferReservation" || name == "cfgFault")
        return true;
    return false;
}

System::PltfmItems::UdfItems::UdfItems()
    :
    descr{YType::str, "descr"}
        ,
    udf_items(std::make_shared<System::PltfmItems::UdfItems::UdfItems_>())
{
    udf_items->parent = this;

    yang_name = "udf-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::UdfItems::~UdfItems()
{
}

bool System::PltfmItems::UdfItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (udf_items !=  nullptr && udf_items->has_data());
}

bool System::PltfmItems::UdfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (udf_items !=  nullptr && udf_items->has_operation());
}

std::string System::PltfmItems::UdfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::UdfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::UdfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::UdfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-items")
    {
        if(udf_items == nullptr)
        {
            udf_items = std::make_shared<System::PltfmItems::UdfItems::UdfItems_>();
        }
        return udf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::UdfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udf_items != nullptr)
    {
        _children["udf-items"] = udf_items;
    }

    return _children;
}

void System::PltfmItems::UdfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::UdfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::UdfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::UdfItems::UdfItems_::UdfItems_()
    :
    udf_list(this, {"name"})
{

    yang_name = "udf-items"; yang_parent_name = "udf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::UdfItems::UdfItems_::~UdfItems_()
{
}

bool System::PltfmItems::UdfItems::UdfItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udf_list.len(); index++)
    {
        if(udf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::UdfItems::UdfItems_::has_operation() const
{
    for (std::size_t index=0; index<udf_list.len(); index++)
    {
        if(udf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::UdfItems::UdfItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/udf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::UdfItems::UdfItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::UdfItems::UdfItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::UdfItems::UdfItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Udf-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::UdfItems::UdfItems_::UdfList>();
        ent_->parent = this;
        udf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::UdfItems::UdfItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::UdfItems::UdfItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::UdfItems::UdfItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::UdfItems::UdfItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Udf-list")
        return true;
    return false;
}

System::PltfmItems::UdfItems::UdfItems_::UdfList::UdfList()
    :
    name{YType::str, "name"},
    offsetbase{YType::enumeration, "offsetBase"},
    offsetposition{YType::uint8, "offsetPosition"},
    offsetlength{YType::uint8, "offsetLength"},
    qualifyspan{YType::boolean, "qualifySpan"},
    qualifyspanv6{YType::boolean, "qualifySpanV6"},
    qualifyspanv6l2{YType::boolean, "qualifySpanV6L2"},
    cfgfault{YType::enumeration, "cfgFault"}
{

    yang_name = "Udf-list"; yang_parent_name = "udf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::UdfItems::UdfItems_::UdfList::~UdfList()
{
}

bool System::PltfmItems::UdfItems::UdfItems_::UdfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offsetbase.is_set
	|| offsetposition.is_set
	|| offsetlength.is_set
	|| qualifyspan.is_set
	|| qualifyspanv6.is_set
	|| qualifyspanv6l2.is_set
	|| cfgfault.is_set;
}

bool System::PltfmItems::UdfItems::UdfItems_::UdfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offsetbase.yfilter)
	|| ydk::is_set(offsetposition.yfilter)
	|| ydk::is_set(offsetlength.yfilter)
	|| ydk::is_set(qualifyspan.yfilter)
	|| ydk::is_set(qualifyspanv6.yfilter)
	|| ydk::is_set(qualifyspanv6l2.yfilter)
	|| ydk::is_set(cfgfault.yfilter);
}

std::string System::PltfmItems::UdfItems::UdfItems_::UdfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/udf-items/udf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::UdfItems::UdfItems_::UdfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Udf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::UdfItems::UdfItems_::UdfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offsetbase.is_set || is_set(offsetbase.yfilter)) leaf_name_data.push_back(offsetbase.get_name_leafdata());
    if (offsetposition.is_set || is_set(offsetposition.yfilter)) leaf_name_data.push_back(offsetposition.get_name_leafdata());
    if (offsetlength.is_set || is_set(offsetlength.yfilter)) leaf_name_data.push_back(offsetlength.get_name_leafdata());
    if (qualifyspan.is_set || is_set(qualifyspan.yfilter)) leaf_name_data.push_back(qualifyspan.get_name_leafdata());
    if (qualifyspanv6.is_set || is_set(qualifyspanv6.yfilter)) leaf_name_data.push_back(qualifyspanv6.get_name_leafdata());
    if (qualifyspanv6l2.is_set || is_set(qualifyspanv6l2.yfilter)) leaf_name_data.push_back(qualifyspanv6l2.get_name_leafdata());
    if (cfgfault.is_set || is_set(cfgfault.yfilter)) leaf_name_data.push_back(cfgfault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::UdfItems::UdfItems_::UdfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::UdfItems::UdfItems_::UdfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::UdfItems::UdfItems_::UdfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offsetBase")
    {
        offsetbase = value;
        offsetbase.value_namespace = name_space;
        offsetbase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offsetPosition")
    {
        offsetposition = value;
        offsetposition.value_namespace = name_space;
        offsetposition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offsetLength")
    {
        offsetlength = value;
        offsetlength.value_namespace = name_space;
        offsetlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualifySpan")
    {
        qualifyspan = value;
        qualifyspan.value_namespace = name_space;
        qualifyspan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualifySpanV6")
    {
        qualifyspanv6 = value;
        qualifyspanv6.value_namespace = name_space;
        qualifyspanv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qualifySpanV6L2")
    {
        qualifyspanv6l2 = value;
        qualifyspanv6l2.value_namespace = name_space;
        qualifyspanv6l2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgFault")
    {
        cfgfault = value;
        cfgfault.value_namespace = name_space;
        cfgfault.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::UdfItems::UdfItems_::UdfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offsetBase")
    {
        offsetbase.yfilter = yfilter;
    }
    if(value_path == "offsetPosition")
    {
        offsetposition.yfilter = yfilter;
    }
    if(value_path == "offsetLength")
    {
        offsetlength.yfilter = yfilter;
    }
    if(value_path == "qualifySpan")
    {
        qualifyspan.yfilter = yfilter;
    }
    if(value_path == "qualifySpanV6")
    {
        qualifyspanv6.yfilter = yfilter;
    }
    if(value_path == "qualifySpanV6L2")
    {
        qualifyspanv6l2.yfilter = yfilter;
    }
    if(value_path == "cfgFault")
    {
        cfgfault.yfilter = yfilter;
    }
}

bool System::PltfmItems::UdfItems::UdfItems_::UdfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offsetBase" || name == "offsetPosition" || name == "offsetLength" || name == "qualifySpan" || name == "qualifySpanV6" || name == "qualifySpanV6L2" || name == "cfgFault")
        return true;
    return false;
}

System::SatmItems::SatmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    dextch_items(std::make_shared<System::SatmItems::DextchItems>())
    , fex_items(std::make_shared<System::SatmItems::FexItems>())
    , fabp_items(std::make_shared<System::SatmItems::FabpItems>())
{
    dextch_items->parent = this;
    fex_items->parent = this;
    fabp_items->parent = this;

    yang_name = "satm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::~SatmItems()
{
}

bool System::SatmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (dextch_items !=  nullptr && dextch_items->has_data())
	|| (fex_items !=  nullptr && fex_items->has_data())
	|| (fabp_items !=  nullptr && fabp_items->has_data());
}

bool System::SatmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (dextch_items !=  nullptr && dextch_items->has_operation())
	|| (fex_items !=  nullptr && fex_items->has_operation())
	|| (fabp_items !=  nullptr && fabp_items->has_operation());
}

std::string System::SatmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dextch-items")
    {
        if(dextch_items == nullptr)
        {
            dextch_items = std::make_shared<System::SatmItems::DextchItems>();
        }
        return dextch_items;
    }

    if(child_yang_name == "fex-items")
    {
        if(fex_items == nullptr)
        {
            fex_items = std::make_shared<System::SatmItems::FexItems>();
        }
        return fex_items;
    }

    if(child_yang_name == "fabp-items")
    {
        if(fabp_items == nullptr)
        {
            fabp_items = std::make_shared<System::SatmItems::FabpItems>();
        }
        return fabp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dextch_items != nullptr)
    {
        _children["dextch-items"] = dextch_items;
    }

    if(fex_items != nullptr)
    {
        _children["fex-items"] = fex_items;
    }

    if(fabp_items != nullptr)
    {
        _children["fabp-items"] = fabp_items;
    }

    return _children;
}

void System::SatmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SatmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SatmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dextch-items" || name == "fex-items" || name == "fabp-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SatmItems::DextchItems::DextchItems()
    :
    dextch_list(this, {"vendor", "model", "ser"})
{

    yang_name = "dextch-items"; yang_parent_name = "satm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::DextchItems::~DextchItems()
{
}

bool System::SatmItems::DextchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dextch_list.len(); index++)
    {
        if(dextch_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::DextchItems::has_operation() const
{
    for (std::size_t index=0; index<dextch_list.len(); index++)
    {
        if(dextch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::DextchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::DextchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dextch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::DextchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::DextchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DExtCh-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::DextchItems::DExtChList>();
        ent_->parent = this;
        dextch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::DextchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dextch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::DextchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::DextchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::DextchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DExtCh-list")
        return true;
    return false;
}

System::SatmItems::DextchItems::DExtChList::DExtChList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    ser{YType::str, "ser"},
    operst{YType::enumeration, "operSt"},
    ver{YType::str, "ver"},
    swver{YType::str, "swVer"},
    intver{YType::str, "intVer"},
    swintver{YType::str, "swIntVer"},
    swgen{YType::uint16, "swGen"},
    controlfport{YType::str, "controlFPort"},
    rev{YType::str, "rev"},
    id{YType::uint32, "id"},
    descr{YType::str, "descr"}
{

    yang_name = "DExtCh-list"; yang_parent_name = "dextch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::DextchItems::DExtChList::~DExtChList()
{
}

bool System::SatmItems::DextchItems::DExtChList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| ser.is_set
	|| operst.is_set
	|| ver.is_set
	|| swver.is_set
	|| intver.is_set
	|| swintver.is_set
	|| swgen.is_set
	|| controlfport.is_set
	|| rev.is_set
	|| id.is_set
	|| descr.is_set;
}

bool System::SatmItems::DextchItems::DExtChList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(intver.yfilter)
	|| ydk::is_set(swintver.yfilter)
	|| ydk::is_set(swgen.yfilter)
	|| ydk::is_set(controlfport.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SatmItems::DextchItems::DExtChList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/dextch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::DextchItems::DExtChList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DExtCh-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(ser, "ser");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::DextchItems::DExtChList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (intver.is_set || is_set(intver.yfilter)) leaf_name_data.push_back(intver.get_name_leafdata());
    if (swintver.is_set || is_set(swintver.yfilter)) leaf_name_data.push_back(swintver.get_name_leafdata());
    if (swgen.is_set || is_set(swgen.yfilter)) leaf_name_data.push_back(swgen.get_name_leafdata());
    if (controlfport.is_set || is_set(controlfport.yfilter)) leaf_name_data.push_back(controlfport.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::DextchItems::DExtChList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::DextchItems::DExtChList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::DextchItems::DExtChList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intVer")
    {
        intver = value;
        intver.value_namespace = name_space;
        intver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swIntVer")
    {
        swintver = value;
        swintver.value_namespace = name_space;
        swintver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swGen")
    {
        swgen = value;
        swgen.value_namespace = name_space;
        swgen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlFPort")
    {
        controlfport = value;
        controlfport.value_namespace = name_space;
        controlfport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
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

void System::SatmItems::DextchItems::DExtChList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "intVer")
    {
        intver.yfilter = yfilter;
    }
    if(value_path == "swIntVer")
    {
        swintver.yfilter = yfilter;
    }
    if(value_path == "swGen")
    {
        swgen.yfilter = yfilter;
    }
    if(value_path == "controlFPort")
    {
        controlfport.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
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

bool System::SatmItems::DextchItems::DExtChList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "model" || name == "ser" || name == "operSt" || name == "ver" || name == "swVer" || name == "intVer" || name == "swIntVer" || name == "swGen" || name == "controlFPort" || name == "rev" || name == "id" || name == "descr")
        return true;
    return false;
}

System::SatmItems::FexItems::FexItems()
    :
    fex_list(this, {"id"})
{

    yang_name = "fex-items"; yang_parent_name = "satm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FexItems::~FexItems()
{
}

bool System::SatmItems::FexItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fex_list.len(); index++)
    {
        if(fex_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::FexItems::has_operation() const
{
    for (std::size_t index=0; index<fex_list.len(); index++)
    {
        if(fex_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::FexItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FexItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fex-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FexItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FexItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fex-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::FexItems::FexList>();
        ent_->parent = this;
        fex_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FexItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fex_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::FexItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::FexItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::FexItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fex-list")
        return true;
    return false;
}

System::SatmItems::FexItems::FexList::FexList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    serialnumber{YType::str, "serialNumber"}
{

    yang_name = "Fex-list"; yang_parent_name = "fex-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FexItems::FexList::~FexList()
{
}

bool System::SatmItems::FexItems::FexList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| serialnumber.is_set;
}

bool System::SatmItems::FexItems::FexList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(serialnumber.yfilter);
}

std::string System::SatmItems::FexItems::FexList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/fex-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FexItems::FexList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fex-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FexItems::FexList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (serialnumber.is_set || is_set(serialnumber.yfilter)) leaf_name_data.push_back(serialnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FexItems::FexList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FexItems::FexList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FexItems::FexList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serialNumber")
    {
        serialnumber = value;
        serialnumber.value_namespace = name_space;
        serialnumber.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FexItems::FexList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "serialNumber")
    {
        serialnumber.yfilter = yfilter;
    }
}

bool System::SatmItems::FexItems::FexList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "serialNumber")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabpItems()
    :
    fabp_list(this, {"id"})
{

    yang_name = "fabp-items"; yang_parent_name = "satm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FabpItems::~FabpItems()
{
}

bool System::SatmItems::FabpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::FabpItems::has_operation() const
{
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::FabpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FabpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabP-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::FabpItems::FabPList>();
        ent_->parent = this;
        fabp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::FabpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::FabpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::FabpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabP-list")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::FabPList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    extchid{YType::uint16, "extChId"},
    fsmst{YType::enumeration, "fsmSt"},
    remotelinkid{YType::uint16, "remoteLinkId"},
    flags{YType::str, "flags"}
        ,
    hostp_items(std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems>())
    , remotefcot_items(std::make_shared<System::SatmItems::FabpItems::FabPList::RemotefcotItems>())
    , remotefcotx2_items(std::make_shared<System::SatmItems::FabpItems::FabPList::Remotefcotx2Items>())
{
    hostp_items->parent = this;
    remotefcot_items->parent = this;
    remotefcotx2_items->parent = this;

    yang_name = "FabP-list"; yang_parent_name = "fabp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FabpItems::FabPList::~FabPList()
{
}

bool System::SatmItems::FabpItems::FabPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| extchid.is_set
	|| fsmst.is_set
	|| remotelinkid.is_set
	|| flags.is_set
	|| (hostp_items !=  nullptr && hostp_items->has_data())
	|| (remotefcot_items !=  nullptr && remotefcot_items->has_data())
	|| (remotefcotx2_items !=  nullptr && remotefcotx2_items->has_data());
}

bool System::SatmItems::FabpItems::FabPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(extchid.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(remotelinkid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (hostp_items !=  nullptr && hostp_items->has_operation())
	|| (remotefcot_items !=  nullptr && remotefcot_items->has_operation())
	|| (remotefcotx2_items !=  nullptr && remotefcotx2_items->has_operation());
}

std::string System::SatmItems::FabpItems::FabPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/fabp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FabpItems::FabPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (extchid.is_set || is_set(extchid.yfilter)) leaf_name_data.push_back(extchid.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (remotelinkid.is_set || is_set(remotelinkid.yfilter)) leaf_name_data.push_back(remotelinkid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostp-items")
    {
        if(hostp_items == nullptr)
        {
            hostp_items = std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems>();
        }
        return hostp_items;
    }

    if(child_yang_name == "remotefcot-items")
    {
        if(remotefcot_items == nullptr)
        {
            remotefcot_items = std::make_shared<System::SatmItems::FabpItems::FabPList::RemotefcotItems>();
        }
        return remotefcot_items;
    }

    if(child_yang_name == "remotefcotx2-items")
    {
        if(remotefcotx2_items == nullptr)
        {
            remotefcotx2_items = std::make_shared<System::SatmItems::FabpItems::FabPList::Remotefcotx2Items>();
        }
        return remotefcotx2_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hostp_items != nullptr)
    {
        _children["hostp-items"] = hostp_items;
    }

    if(remotefcot_items != nullptr)
    {
        _children["remotefcot-items"] = remotefcot_items;
    }

    if(remotefcotx2_items != nullptr)
    {
        _children["remotefcotx2-items"] = remotefcotx2_items;
    }

    return _children;
}

void System::SatmItems::FabpItems::FabPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extChId")
    {
        extchid = value;
        extchid.value_namespace = name_space;
        extchid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteLinkId")
    {
        remotelinkid = value;
        remotelinkid.value_namespace = name_space;
        remotelinkid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "extChId")
    {
        extchid.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "remoteLinkId")
    {
        remotelinkid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostp-items" || name == "remotefcot-items" || name == "remotefcotx2-items" || name == "id" || name == "operSt" || name == "extChId" || name == "fsmSt" || name == "remoteLinkId" || name == "flags")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostpItems()
    :
    hostp_list(this, {"id"})
{

    yang_name = "hostp-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::HostpItems::~HostpItems()
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostp_list.len(); index++)
    {
        if(hostp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_operation() const
{
    for (std::size_t index=0; index<hostp_list.len(); index++)
    {
        if(hostp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::HostpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::HostpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::HostpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostP-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems::HostPList>();
        ent_->parent = this;
        hostp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::HostpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::FabpItems::FabPList::HostpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::FabpItems::FabPList::HostpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostP-list")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::HostPList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    fabricport{YType::str, "fabricPort"}
{

    yang_name = "HostP-list"; yang_parent_name = "hostp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::~HostPList()
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| fabricport.is_set;
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fabricport.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fabricport.is_set || is_set(fabricport.yfilter)) leaf_name_data.push_back(fabricport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fabricPort")
    {
        fabricport = value;
        fabricport.value_namespace = name_space;
        fabricport.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "fabricPort")
    {
        fabricport.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "fabricPort")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::RemotefcotItems::RemotefcotItems()
    :
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    xcvrid{YType::uint8, "xcvrId"},
    xcvrextid{YType::uint8, "xcvrExtId"},
    connecttype{YType::uint8, "connectType"},
    xcvrcode{YType::str, "xcvrCode"},
    encoding{YType::uint8, "encoding"},
    brin100mhz{YType::uint8, "brIn100MHz"},
    baseresvd1{YType::uint8, "baseResvd1"},
    distinkmfor9u{YType::uint8, "distInKmFor9u"},
    distin100mfor9u{YType::uint8, "distIn100mFor9u"},
    distin10mfor50u{YType::uint8, "distIn10mFor50u"},
    distin10mfor60u{YType::uint8, "distIn10mFor60u"},
    distin1mforcu{YType::uint8, "distIn1mForCu"},
    baseresvd2{YType::uint8, "baseResvd2"},
    vendorname{YType::str, "vendorName"},
    baseresvd3{YType::uint8, "baseResvd3"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    baseresvd4{YType::str, "baseResvd4"},
    ccid{YType::uint8, "ccid"},
    extoption{YType::str, "extOption"},
    brmaxmargin{YType::uint8, "brMaxMargin"},
    brminmargin{YType::uint8, "brMinMargin"},
    vendorsn{YType::str, "vendorSn"},
    datecode{YType::str, "dateCode"},
    diagmontype{YType::uint8, "diagMonType"},
    enhoption{YType::uint8, "enhOption"},
    ccex{YType::uint8, "ccex"},
    vendordata{YType::str, "vendorData"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
{

    yang_name = "remotefcot-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::RemotefcotItems::~RemotefcotItems()
{
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_data() const
{
    if (is_presence_container) return true;
    return isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| xcvrid.is_set
	|| xcvrextid.is_set
	|| connecttype.is_set
	|| xcvrcode.is_set
	|| encoding.is_set
	|| brin100mhz.is_set
	|| baseresvd1.is_set
	|| distinkmfor9u.is_set
	|| distin100mfor9u.is_set
	|| distin10mfor50u.is_set
	|| distin10mfor60u.is_set
	|| distin1mforcu.is_set
	|| baseresvd2.is_set
	|| vendorname.is_set
	|| baseresvd3.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| baseresvd4.is_set
	|| ccid.is_set
	|| extoption.is_set
	|| brmaxmargin.is_set
	|| brminmargin.is_set
	|| vendorsn.is_set
	|| datecode.is_set
	|| diagmontype.is_set
	|| enhoption.is_set
	|| ccex.is_set
	|| vendordata.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set;
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(xcvrid.yfilter)
	|| ydk::is_set(xcvrextid.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(xcvrcode.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(brin100mhz.yfilter)
	|| ydk::is_set(baseresvd1.yfilter)
	|| ydk::is_set(distinkmfor9u.yfilter)
	|| ydk::is_set(distin100mfor9u.yfilter)
	|| ydk::is_set(distin10mfor50u.yfilter)
	|| ydk::is_set(distin10mfor60u.yfilter)
	|| ydk::is_set(distin1mforcu.yfilter)
	|| ydk::is_set(baseresvd2.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(baseresvd3.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(baseresvd4.yfilter)
	|| ydk::is_set(ccid.yfilter)
	|| ydk::is_set(extoption.yfilter)
	|| ydk::is_set(brmaxmargin.yfilter)
	|| ydk::is_set(brminmargin.yfilter)
	|| ydk::is_set(vendorsn.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(diagmontype.yfilter)
	|| ydk::is_set(enhoption.yfilter)
	|| ydk::is_set(ccex.yfilter)
	|| ydk::is_set(vendordata.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotefcot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (xcvrid.is_set || is_set(xcvrid.yfilter)) leaf_name_data.push_back(xcvrid.get_name_leafdata());
    if (xcvrextid.is_set || is_set(xcvrextid.yfilter)) leaf_name_data.push_back(xcvrextid.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (xcvrcode.is_set || is_set(xcvrcode.yfilter)) leaf_name_data.push_back(xcvrcode.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (brin100mhz.is_set || is_set(brin100mhz.yfilter)) leaf_name_data.push_back(brin100mhz.get_name_leafdata());
    if (baseresvd1.is_set || is_set(baseresvd1.yfilter)) leaf_name_data.push_back(baseresvd1.get_name_leafdata());
    if (distinkmfor9u.is_set || is_set(distinkmfor9u.yfilter)) leaf_name_data.push_back(distinkmfor9u.get_name_leafdata());
    if (distin100mfor9u.is_set || is_set(distin100mfor9u.yfilter)) leaf_name_data.push_back(distin100mfor9u.get_name_leafdata());
    if (distin10mfor50u.is_set || is_set(distin10mfor50u.yfilter)) leaf_name_data.push_back(distin10mfor50u.get_name_leafdata());
    if (distin10mfor60u.is_set || is_set(distin10mfor60u.yfilter)) leaf_name_data.push_back(distin10mfor60u.get_name_leafdata());
    if (distin1mforcu.is_set || is_set(distin1mforcu.yfilter)) leaf_name_data.push_back(distin1mforcu.get_name_leafdata());
    if (baseresvd2.is_set || is_set(baseresvd2.yfilter)) leaf_name_data.push_back(baseresvd2.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (baseresvd3.is_set || is_set(baseresvd3.yfilter)) leaf_name_data.push_back(baseresvd3.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (baseresvd4.is_set || is_set(baseresvd4.yfilter)) leaf_name_data.push_back(baseresvd4.get_name_leafdata());
    if (ccid.is_set || is_set(ccid.yfilter)) leaf_name_data.push_back(ccid.get_name_leafdata());
    if (extoption.is_set || is_set(extoption.yfilter)) leaf_name_data.push_back(extoption.get_name_leafdata());
    if (brmaxmargin.is_set || is_set(brmaxmargin.yfilter)) leaf_name_data.push_back(brmaxmargin.get_name_leafdata());
    if (brminmargin.is_set || is_set(brminmargin.yfilter)) leaf_name_data.push_back(brminmargin.get_name_leafdata());
    if (vendorsn.is_set || is_set(vendorsn.yfilter)) leaf_name_data.push_back(vendorsn.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (diagmontype.is_set || is_set(diagmontype.yfilter)) leaf_name_data.push_back(diagmontype.get_name_leafdata());
    if (enhoption.is_set || is_set(enhoption.yfilter)) leaf_name_data.push_back(enhoption.get_name_leafdata());
    if (ccex.is_set || is_set(ccex.yfilter)) leaf_name_data.push_back(ccex.get_name_leafdata());
    if (vendordata.is_set || is_set(vendordata.yfilter)) leaf_name_data.push_back(vendordata.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::RemotefcotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrId")
    {
        xcvrid = value;
        xcvrid.value_namespace = name_space;
        xcvrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid = value;
        xcvrextid.value_namespace = name_space;
        xcvrextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode = value;
        xcvrcode.value_namespace = name_space;
        xcvrcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz = value;
        brin100mhz.value_namespace = name_space;
        brin100mhz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1 = value;
        baseresvd1.value_namespace = name_space;
        baseresvd1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u = value;
        distinkmfor9u.value_namespace = name_space;
        distinkmfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u = value;
        distin100mfor9u.value_namespace = name_space;
        distin100mfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u = value;
        distin10mfor50u.value_namespace = name_space;
        distin10mfor50u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u = value;
        distin10mfor60u.value_namespace = name_space;
        distin10mfor60u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu = value;
        distin1mforcu.value_namespace = name_space;
        distin1mforcu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2 = value;
        baseresvd2.value_namespace = name_space;
        baseresvd2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3 = value;
        baseresvd3.value_namespace = name_space;
        baseresvd3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4 = value;
        baseresvd4.value_namespace = name_space;
        baseresvd4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccid")
    {
        ccid = value;
        ccid.value_namespace = name_space;
        ccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extOption")
    {
        extoption = value;
        extoption.value_namespace = name_space;
        extoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin = value;
        brmaxmargin.value_namespace = name_space;
        brmaxmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin = value;
        brminmargin.value_namespace = name_space;
        brminmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSn")
    {
        vendorsn = value;
        vendorsn.value_namespace = name_space;
        vendorsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagMonType")
    {
        diagmontype = value;
        diagmontype.value_namespace = name_space;
        diagmontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhOption")
    {
        enhoption = value;
        enhoption.value_namespace = name_space;
        enhoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccex")
    {
        ccex = value;
        ccex.value_namespace = name_space;
        ccex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorData")
    {
        vendordata = value;
        vendordata.value_namespace = name_space;
        vendordata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::RemotefcotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "xcvrId")
    {
        xcvrid.yfilter = yfilter;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz.yfilter = yfilter;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1.yfilter = yfilter;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u.yfilter = yfilter;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu.yfilter = yfilter;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4.yfilter = yfilter;
    }
    if(value_path == "ccid")
    {
        ccid.yfilter = yfilter;
    }
    if(value_path == "extOption")
    {
        extoption.yfilter = yfilter;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin.yfilter = yfilter;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin.yfilter = yfilter;
    }
    if(value_path == "vendorSn")
    {
        vendorsn.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "diagMonType")
    {
        diagmontype.yfilter = yfilter;
    }
    if(value_path == "enhOption")
    {
        enhoption.yfilter = yfilter;
    }
    if(value_path == "ccex")
    {
        ccex.yfilter = yfilter;
    }
    if(value_path == "vendorData")
    {
        vendordata.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "xcvrId" || name == "xcvrExtId" || name == "connectType" || name == "xcvrCode" || name == "encoding" || name == "brIn100MHz" || name == "baseResvd1" || name == "distInKmFor9u" || name == "distIn100mFor9u" || name == "distIn10mFor50u" || name == "distIn10mFor60u" || name == "distIn1mForCu" || name == "baseResvd2" || name == "vendorName" || name == "baseResvd3" || name == "vendorPn" || name == "vendorRev" || name == "baseResvd4" || name == "ccid" || name == "extOption" || name == "brMaxMargin" || name == "brMinMargin" || name == "vendorSn" || name == "dateCode" || name == "diagMonType" || name == "enhOption" || name == "ccex" || name == "vendorData" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::Remotefcotx2Items()
    :
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    connecttype{YType::uint8, "connectType"},
    bitencoding{YType::uint8, "bitEncoding"},
    bitratembps{YType::str, "bitRateMbps"},
    protocoltype{YType::uint8, "protocolType"},
    xgethcode{YType::str, "xgEthCode"},
    sonetsdhcode{YType::str, "sonetSdhCode"},
    xgfccode{YType::str, "xgFcCode"},
    range{YType::str, "range"},
    fibretype{YType::str, "fibreType"},
    wavelench0{YType::str, "waveLenCh0"},
    wavelench1{YType::str, "waveLenCh1"},
    wavelench2{YType::str, "waveLenCh2"},
    wavelench3{YType::str, "waveLenCh3"},
    vendorname{YType::str, "vendorName"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    vendorserno{YType::str, "vendorSerNo"},
    datecode{YType::str, "dateCode"},
    fivevstressenv{YType::uint8, "fiveVStressEnv"},
    ciscopid{YType::str, "ciscoPid"},
    ciscovid{YType::str, "ciscoVid"},
    ciscosn{YType::str, "ciscoSN"},
    ciscopn{YType::str, "ciscoPN"},
    ciscorev{YType::str, "ciscoRev"},
    extvendorspecific{YType::str, "extVendorSpecific"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"}
{

    yang_name = "remotefcotx2-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::~Remotefcotx2Items()
{
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_data() const
{
    if (is_presence_container) return true;
    return isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| connecttype.is_set
	|| bitencoding.is_set
	|| bitratembps.is_set
	|| protocoltype.is_set
	|| xgethcode.is_set
	|| sonetsdhcode.is_set
	|| xgfccode.is_set
	|| range.is_set
	|| fibretype.is_set
	|| wavelench0.is_set
	|| wavelench1.is_set
	|| wavelench2.is_set
	|| wavelench3.is_set
	|| vendorname.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| vendorserno.is_set
	|| datecode.is_set
	|| fivevstressenv.is_set
	|| ciscopid.is_set
	|| ciscovid.is_set
	|| ciscosn.is_set
	|| ciscopn.is_set
	|| ciscorev.is_set
	|| extvendorspecific.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set;
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(bitencoding.yfilter)
	|| ydk::is_set(bitratembps.yfilter)
	|| ydk::is_set(protocoltype.yfilter)
	|| ydk::is_set(xgethcode.yfilter)
	|| ydk::is_set(sonetsdhcode.yfilter)
	|| ydk::is_set(xgfccode.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(fibretype.yfilter)
	|| ydk::is_set(wavelench0.yfilter)
	|| ydk::is_set(wavelench1.yfilter)
	|| ydk::is_set(wavelench2.yfilter)
	|| ydk::is_set(wavelench3.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(vendorserno.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(fivevstressenv.yfilter)
	|| ydk::is_set(ciscopid.yfilter)
	|| ydk::is_set(ciscovid.yfilter)
	|| ydk::is_set(ciscosn.yfilter)
	|| ydk::is_set(ciscopn.yfilter)
	|| ydk::is_set(ciscorev.yfilter)
	|| ydk::is_set(extvendorspecific.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotefcotx2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (bitencoding.is_set || is_set(bitencoding.yfilter)) leaf_name_data.push_back(bitencoding.get_name_leafdata());
    if (bitratembps.is_set || is_set(bitratembps.yfilter)) leaf_name_data.push_back(bitratembps.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());
    if (xgethcode.is_set || is_set(xgethcode.yfilter)) leaf_name_data.push_back(xgethcode.get_name_leafdata());
    if (sonetsdhcode.is_set || is_set(sonetsdhcode.yfilter)) leaf_name_data.push_back(sonetsdhcode.get_name_leafdata());
    if (xgfccode.is_set || is_set(xgfccode.yfilter)) leaf_name_data.push_back(xgfccode.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (fibretype.is_set || is_set(fibretype.yfilter)) leaf_name_data.push_back(fibretype.get_name_leafdata());
    if (wavelench0.is_set || is_set(wavelench0.yfilter)) leaf_name_data.push_back(wavelench0.get_name_leafdata());
    if (wavelench1.is_set || is_set(wavelench1.yfilter)) leaf_name_data.push_back(wavelench1.get_name_leafdata());
    if (wavelench2.is_set || is_set(wavelench2.yfilter)) leaf_name_data.push_back(wavelench2.get_name_leafdata());
    if (wavelench3.is_set || is_set(wavelench3.yfilter)) leaf_name_data.push_back(wavelench3.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (vendorserno.is_set || is_set(vendorserno.yfilter)) leaf_name_data.push_back(vendorserno.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (fivevstressenv.is_set || is_set(fivevstressenv.yfilter)) leaf_name_data.push_back(fivevstressenv.get_name_leafdata());
    if (ciscopid.is_set || is_set(ciscopid.yfilter)) leaf_name_data.push_back(ciscopid.get_name_leafdata());
    if (ciscovid.is_set || is_set(ciscovid.yfilter)) leaf_name_data.push_back(ciscovid.get_name_leafdata());
    if (ciscosn.is_set || is_set(ciscosn.yfilter)) leaf_name_data.push_back(ciscosn.get_name_leafdata());
    if (ciscopn.is_set || is_set(ciscopn.yfilter)) leaf_name_data.push_back(ciscopn.get_name_leafdata());
    if (ciscorev.is_set || is_set(ciscorev.yfilter)) leaf_name_data.push_back(ciscorev.get_name_leafdata());
    if (extvendorspecific.is_set || is_set(extvendorspecific.yfilter)) leaf_name_data.push_back(extvendorspecific.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding = value;
        bitencoding.value_namespace = name_space;
        bitencoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps = value;
        bitratembps.value_namespace = name_space;
        bitratembps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode = value;
        xgethcode.value_namespace = name_space;
        xgethcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode = value;
        sonetsdhcode.value_namespace = name_space;
        sonetsdhcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode = value;
        xgfccode.value_namespace = name_space;
        xgfccode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fibreType")
    {
        fibretype = value;
        fibretype.value_namespace = name_space;
        fibretype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0 = value;
        wavelench0.value_namespace = name_space;
        wavelench0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1 = value;
        wavelench1.value_namespace = name_space;
        wavelench1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2 = value;
        wavelench2.value_namespace = name_space;
        wavelench2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3 = value;
        wavelench3.value_namespace = name_space;
        wavelench3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno = value;
        vendorserno.value_namespace = name_space;
        vendorserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv = value;
        fivevstressenv.value_namespace = name_space;
        fivevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid = value;
        ciscopid.value_namespace = name_space;
        ciscopid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid = value;
        ciscovid.value_namespace = name_space;
        ciscovid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn = value;
        ciscosn.value_namespace = name_space;
        ciscosn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn = value;
        ciscopn.value_namespace = name_space;
        ciscopn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev = value;
        ciscorev.value_namespace = name_space;
        ciscorev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific = value;
        extvendorspecific.value_namespace = name_space;
        extvendorspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding.yfilter = yfilter;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode.yfilter = yfilter;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode.yfilter = yfilter;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "fibreType")
    {
        fibretype.yfilter = yfilter;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0.yfilter = yfilter;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1.yfilter = yfilter;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2.yfilter = yfilter;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv.yfilter = yfilter;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid.yfilter = yfilter;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid.yfilter = yfilter;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn.yfilter = yfilter;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn.yfilter = yfilter;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev.yfilter = yfilter;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "connectType" || name == "bitEncoding" || name == "bitRateMbps" || name == "protocolType" || name == "xgEthCode" || name == "sonetSdhCode" || name == "xgFcCode" || name == "range" || name == "fibreType" || name == "waveLenCh0" || name == "waveLenCh1" || name == "waveLenCh2" || name == "waveLenCh3" || name == "vendorName" || name == "vendorPn" || name == "vendorRev" || name == "vendorSerNo" || name == "dateCode" || name == "fiveVStressEnv" || name == "ciscoPid" || name == "ciscoVid" || name == "ciscoSN" || name == "ciscoPN" || name == "ciscoRev" || name == "extVendorSpecific" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC")
        return true;
    return false;
}

System::AdjacencyItems::AdjacencyItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::AdjacencyItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "adjacency-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::~AdjacencyItems()
{
}

bool System::AdjacencyItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AdjacencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AdjacencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AdjacencyItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::AdjacencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AdjacencyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AdjacencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "adjacency-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::~InstItems()
{
}

bool System::AdjacencyItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::AdjacencyItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AdjacencyItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AdjacencyItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::DomItems::~DomItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::get_children() const
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

void System::AdjacencyItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems>())
    , subnetprefix_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems>())
    , aggrprefix_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems>())
{
    if_items->parent = this;
    subnetprefix_items->parent = this;
    aggrprefix_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (subnetprefix_items !=  nullptr && subnetprefix_items->has_data())
	|| (aggrprefix_items !=  nullptr && aggrprefix_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (subnetprefix_items !=  nullptr && subnetprefix_items->has_operation())
	|| (aggrprefix_items !=  nullptr && aggrprefix_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "subnetprefix-items")
    {
        if(subnetprefix_items == nullptr)
        {
            subnetprefix_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems>();
        }
        return subnetprefix_items;
    }

    if(child_yang_name == "aggrprefix-items")
    {
        if(aggrprefix_items == nullptr)
        {
            aggrprefix_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems>();
        }
        return aggrprefix_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(subnetprefix_items != nullptr)
    {
        _children["subnetprefix-items"] = subnetprefix_items;
    }

    if(aggrprefix_items != nullptr)
    {
        _children["aggrprefix-items"] = aggrprefix_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "subnetprefix-items" || name == "aggrprefix-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfItems()
    :
    if_list(this, {"ifid"})
{

    yang_name = "if-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::~IfItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_children() const
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IfList()
    :
    ifid{YType::str, "ifId"}
        ,
    ip_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::~IfList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "ifId")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::IpItems()
    :
    adjep_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::~IpItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_children() const
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::AdjEpList()
    :
    ip{YType::str, "ip"},
    mac{YType::str, "mac"},
    operst{YType::enumeration, "operSt"},
    physifid{YType::str, "physIfId"},
    source{YType::str, "source"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::~AdjEpList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mac.is_set
	|| operst.is_set
	|| physifid.is_set
	|| source.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(physifid.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (physifid.is_set || is_set(physifid.yfilter)) leaf_name_data.push_back(physifid.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physIfId")
    {
        physifid = value;
        physifid.value_namespace = name_space;
        physifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "physIfId")
    {
        physifid.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
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

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "operSt" || name == "physIfId" || name == "source" || name == "flags" || name == "name")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::SubnetprefixItems()
    :
    if_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "subnetprefix-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::~SubnetprefixItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::has_data() const
{
    if (is_presence_container) return true;
    return (if_items !=  nullptr && if_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::has_operation() const
{
    return is_set(yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnetprefix-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfItems()
    :
    ifsubnetprfx_list(this, {"ifid"})
{

    yang_name = "if-items"; yang_parent_name = "subnetprefix-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::~IfItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifsubnetprfx_list.len(); index++)
    {
        if(ifsubnetprfx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<ifsubnetprfx_list.len(); index++)
    {
        if(ifsubnetprfx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfSubnetPrfx-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList>();
        ent_->parent = this;
        ifsubnetprfx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifsubnetprfx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfSubnetPrfx-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IfSubnetPrfxList()
    :
    ifid{YType::str, "ifId"}
        ,
    ip_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "IfSubnetPrfx-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::~IfSubnetPrfxList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfSubnetPrfx-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "ifId")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::IpItems()
    :
    subprfxep_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "IfSubnetPrfx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::~IpItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subprfxep_list.len(); index++)
    {
        if(subprfxep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<subprfxep_list.len(); index++)
    {
        if(subprfxep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SubPrfxEp-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList>();
        ent_->parent = this;
        subprfxep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subprfxep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SubPrfxEp-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::SubPrfxEpList()
    :
    ip{YType::str, "ip"},
    agglen{YType::uint32, "aggLen"},
    nhcount{YType::uint32, "nhCount"}
{

    yang_name = "SubPrfxEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::~SubPrfxEpList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| agglen.is_set
	|| nhcount.is_set;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(agglen.yfilter)
	|| ydk::is_set(nhcount.yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SubPrfxEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (agglen.is_set || is_set(agglen.yfilter)) leaf_name_data.push_back(agglen.get_name_leafdata());
    if (nhcount.is_set || is_set(nhcount.yfilter)) leaf_name_data.push_back(nhcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggLen")
    {
        agglen = value;
        agglen.value_namespace = name_space;
        agglen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhCount")
    {
        nhcount = value;
        nhcount.value_namespace = name_space;
        nhcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "aggLen")
    {
        agglen.yfilter = yfilter;
    }
    if(value_path == "nhCount")
    {
        nhcount.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "aggLen" || name == "nhCount")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::AggrprefixItems()
    :
    if_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "aggrprefix-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::~AggrprefixItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::has_data() const
{
    if (is_presence_container) return true;
    return (if_items !=  nullptr && if_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::has_operation() const
{
    return is_set(yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrprefix-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfItems()
    :
    ifaggrprfx_list(this, {"ifid"})
{

    yang_name = "if-items"; yang_parent_name = "aggrprefix-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::~IfItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifaggrprfx_list.len(); index++)
    {
        if(ifaggrprfx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<ifaggrprfx_list.len(); index++)
    {
        if(ifaggrprfx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfAggrPrfx-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList>();
        ent_->parent = this;
        ifaggrprfx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifaggrprfx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfAggrPrfx-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IfAggrPrfxList()
    :
    ifid{YType::str, "ifId"}
        ,
    ip_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "IfAggrPrfx-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::~IfAggrPrfxList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfAggrPrfx-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "ifId")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::IpItems()
    :
    aggrprfxep_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "IfAggrPrfx-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::~IpItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggrprfxep_list.len(); index++)
    {
        if(aggrprfxep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<aggrprfxep_list.len(); index++)
    {
        if(aggrprfxep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AggrPrfxEp-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList>();
        ent_->parent = this;
        aggrprfxep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggrprfxep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AggrPrfxEp-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::AggrPrfxEpList()
    :
    ip{YType::str, "ip"},
    refcount{YType::uint32, "refCount"}
{

    yang_name = "AggrPrfxEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::~AggrPrfxEpList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| refcount.is_set;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(refcount.yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AggrPrfxEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "refCount")
        return true;
    return false;
}

System::ArpItems::ArpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::ArpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "arp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::~ArpItems()
{
}

bool System::ArpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::ArpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::ArpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ArpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::ArpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ArpItems::InstItems::InstItems()
    :
    timeout{YType::uint16, "timeout"},
    evpn_timeout{YType::uint16, "evpn_timeout"},
    suppression_timeout{YType::uint16, "suppression_timeout"},
    offlisttimeout{YType::uint16, "offListTimeout"},
    rarpfabricfwding{YType::enumeration, "rarpFabricFwding"},
    rarpfabricfwdingrate{YType::uint16, "rarpFabricFwdingRate"},
    cachelimit{YType::uint32, "cacheLimit"},
    cachesyslograte{YType::uint32, "cacheSyslogRate"},
    iparpcos{YType::uint32, "ipArpCos"},
    logginglevel{YType::enumeration, "loggingLevel"},
    adjlogginglevel{YType::enumeration, "adjLoggingLevel"},
    ipadjroutedistance{YType::uint32, "ipAdjRouteDistance"},
    allowstaticarpoutsidesubnet{YType::enumeration, "allowStaticArpOutsideSubnet"},
    arpunnumsviswreplication{YType::enumeration, "arpUnnumSviSwReplication"},
    configerr{YType::str, "configErr"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    globalstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems>())
    , l2stats_items(std::make_shared<System::ArpItems::InstItems::L2statsItems>())
    , dom_items(std::make_shared<System::ArpItems::InstItems::DomItems>())
    , ipgleanthrottle_items(std::make_shared<System::ArpItems::InstItems::IpgleanthrottleItems>())
    , evtlogs_items(std::make_shared<System::ArpItems::InstItems::EvtLogsItems>())
    , vpc_items(std::make_shared<System::ArpItems::InstItems::VpcItems>())
    , db_items(std::make_shared<System::ArpItems::InstItems::DbItems>())
{
    globalstats_items->parent = this;
    l2stats_items->parent = this;
    dom_items->parent = this;
    ipgleanthrottle_items->parent = this;
    evtlogs_items->parent = this;
    vpc_items->parent = this;
    db_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "arp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::~InstItems()
{
}

bool System::ArpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| evpn_timeout.is_set
	|| suppression_timeout.is_set
	|| offlisttimeout.is_set
	|| rarpfabricfwding.is_set
	|| rarpfabricfwdingrate.is_set
	|| cachelimit.is_set
	|| cachesyslograte.is_set
	|| iparpcos.is_set
	|| logginglevel.is_set
	|| adjlogginglevel.is_set
	|| ipadjroutedistance.is_set
	|| allowstaticarpoutsidesubnet.is_set
	|| arpunnumsviswreplication.is_set
	|| configerr.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (globalstats_items !=  nullptr && globalstats_items->has_data())
	|| (l2stats_items !=  nullptr && l2stats_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (ipgleanthrottle_items !=  nullptr && ipgleanthrottle_items->has_data())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::ArpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(evpn_timeout.yfilter)
	|| ydk::is_set(suppression_timeout.yfilter)
	|| ydk::is_set(offlisttimeout.yfilter)
	|| ydk::is_set(rarpfabricfwding.yfilter)
	|| ydk::is_set(rarpfabricfwdingrate.yfilter)
	|| ydk::is_set(cachelimit.yfilter)
	|| ydk::is_set(cachesyslograte.yfilter)
	|| ydk::is_set(iparpcos.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(adjlogginglevel.yfilter)
	|| ydk::is_set(ipadjroutedistance.yfilter)
	|| ydk::is_set(allowstaticarpoutsidesubnet.yfilter)
	|| ydk::is_set(arpunnumsviswreplication.yfilter)
	|| ydk::is_set(configerr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (globalstats_items !=  nullptr && globalstats_items->has_operation())
	|| (l2stats_items !=  nullptr && l2stats_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (ipgleanthrottle_items !=  nullptr && ipgleanthrottle_items->has_operation())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::ArpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (evpn_timeout.is_set || is_set(evpn_timeout.yfilter)) leaf_name_data.push_back(evpn_timeout.get_name_leafdata());
    if (suppression_timeout.is_set || is_set(suppression_timeout.yfilter)) leaf_name_data.push_back(suppression_timeout.get_name_leafdata());
    if (offlisttimeout.is_set || is_set(offlisttimeout.yfilter)) leaf_name_data.push_back(offlisttimeout.get_name_leafdata());
    if (rarpfabricfwding.is_set || is_set(rarpfabricfwding.yfilter)) leaf_name_data.push_back(rarpfabricfwding.get_name_leafdata());
    if (rarpfabricfwdingrate.is_set || is_set(rarpfabricfwdingrate.yfilter)) leaf_name_data.push_back(rarpfabricfwdingrate.get_name_leafdata());
    if (cachelimit.is_set || is_set(cachelimit.yfilter)) leaf_name_data.push_back(cachelimit.get_name_leafdata());
    if (cachesyslograte.is_set || is_set(cachesyslograte.yfilter)) leaf_name_data.push_back(cachesyslograte.get_name_leafdata());
    if (iparpcos.is_set || is_set(iparpcos.yfilter)) leaf_name_data.push_back(iparpcos.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (adjlogginglevel.is_set || is_set(adjlogginglevel.yfilter)) leaf_name_data.push_back(adjlogginglevel.get_name_leafdata());
    if (ipadjroutedistance.is_set || is_set(ipadjroutedistance.yfilter)) leaf_name_data.push_back(ipadjroutedistance.get_name_leafdata());
    if (allowstaticarpoutsidesubnet.is_set || is_set(allowstaticarpoutsidesubnet.yfilter)) leaf_name_data.push_back(allowstaticarpoutsidesubnet.get_name_leafdata());
    if (arpunnumsviswreplication.is_set || is_set(arpunnumsviswreplication.yfilter)) leaf_name_data.push_back(arpunnumsviswreplication.get_name_leafdata());
    if (configerr.is_set || is_set(configerr.yfilter)) leaf_name_data.push_back(configerr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "globalstats-items")
    {
        if(globalstats_items == nullptr)
        {
            globalstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems>();
        }
        return globalstats_items;
    }

    if(child_yang_name == "l2stats-items")
    {
        if(l2stats_items == nullptr)
        {
            l2stats_items = std::make_shared<System::ArpItems::InstItems::L2statsItems>();
        }
        return l2stats_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::ArpItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "ipgleanthrottle-items")
    {
        if(ipgleanthrottle_items == nullptr)
        {
            ipgleanthrottle_items = std::make_shared<System::ArpItems::InstItems::IpgleanthrottleItems>();
        }
        return ipgleanthrottle_items;
    }

    if(child_yang_name == "evtLogs-items")
    {
        if(evtlogs_items == nullptr)
        {
            evtlogs_items = std::make_shared<System::ArpItems::InstItems::EvtLogsItems>();
        }
        return evtlogs_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::ArpItems::InstItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::ArpItems::InstItems::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(globalstats_items != nullptr)
    {
        _children["globalstats-items"] = globalstats_items;
    }

    if(l2stats_items != nullptr)
    {
        _children["l2stats-items"] = l2stats_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(ipgleanthrottle_items != nullptr)
    {
        _children["ipgleanthrottle-items"] = ipgleanthrottle_items;
    }

    if(evtlogs_items != nullptr)
    {
        _children["evtLogs-items"] = evtlogs_items;
    }

    if(vpc_items != nullptr)
    {
        _children["vpc-items"] = vpc_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::ArpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn_timeout")
    {
        evpn_timeout = value;
        evpn_timeout.value_namespace = name_space;
        evpn_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression_timeout")
    {
        suppression_timeout = value;
        suppression_timeout.value_namespace = name_space;
        suppression_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout = value;
        offlisttimeout.value_namespace = name_space;
        offlisttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rarpFabricFwding")
    {
        rarpfabricfwding = value;
        rarpfabricfwding.value_namespace = name_space;
        rarpfabricfwding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rarpFabricFwdingRate")
    {
        rarpfabricfwdingrate = value;
        rarpfabricfwdingrate.value_namespace = name_space;
        rarpfabricfwdingrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit = value;
        cachelimit.value_namespace = name_space;
        cachelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte = value;
        cachesyslograte.value_namespace = name_space;
        cachesyslograte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipArpCos")
    {
        iparpcos = value;
        iparpcos.value_namespace = name_space;
        iparpcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjLoggingLevel")
    {
        adjlogginglevel = value;
        adjlogginglevel.value_namespace = name_space;
        adjlogginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdjRouteDistance")
    {
        ipadjroutedistance = value;
        ipadjroutedistance.value_namespace = name_space;
        ipadjroutedistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowStaticArpOutsideSubnet")
    {
        allowstaticarpoutsidesubnet = value;
        allowstaticarpoutsidesubnet.value_namespace = name_space;
        allowstaticarpoutsidesubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpUnnumSviSwReplication")
    {
        arpunnumsviswreplication = value;
        arpunnumsviswreplication.value_namespace = name_space;
        arpunnumsviswreplication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErr")
    {
        configerr = value;
        configerr.value_namespace = name_space;
        configerr.value_namespace_prefix = name_space_prefix;
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

void System::ArpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "evpn_timeout")
    {
        evpn_timeout.yfilter = yfilter;
    }
    if(value_path == "suppression_timeout")
    {
        suppression_timeout.yfilter = yfilter;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout.yfilter = yfilter;
    }
    if(value_path == "rarpFabricFwding")
    {
        rarpfabricfwding.yfilter = yfilter;
    }
    if(value_path == "rarpFabricFwdingRate")
    {
        rarpfabricfwdingrate.yfilter = yfilter;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit.yfilter = yfilter;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte.yfilter = yfilter;
    }
    if(value_path == "ipArpCos")
    {
        iparpcos.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "adjLoggingLevel")
    {
        adjlogginglevel.yfilter = yfilter;
    }
    if(value_path == "ipAdjRouteDistance")
    {
        ipadjroutedistance.yfilter = yfilter;
    }
    if(value_path == "allowStaticArpOutsideSubnet")
    {
        allowstaticarpoutsidesubnet.yfilter = yfilter;
    }
    if(value_path == "arpUnnumSviSwReplication")
    {
        arpunnumsviswreplication.yfilter = yfilter;
    }
    if(value_path == "configErr")
    {
        configerr.yfilter = yfilter;
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

bool System::ArpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "globalstats-items" || name == "l2stats-items" || name == "dom-items" || name == "ipgleanthrottle-items" || name == "evtLogs-items" || name == "vpc-items" || name == "db-items" || name == "timeout" || name == "evpn_timeout" || name == "suppression_timeout" || name == "offListTimeout" || name == "rarpFabricFwding" || name == "rarpFabricFwdingRate" || name == "cacheLimit" || name == "cacheSyslogRate" || name == "ipArpCos" || name == "loggingLevel" || name == "adjLoggingLevel" || name == "ipAdjRouteDistance" || name == "allowStaticArpOutsideSubnet" || name == "arpUnnumSviSwReplication" || name == "configErr" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::GlobalstatsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    controllerstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems>())
    , vpcstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems>())
    , tunnelstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems>())
    , supcachestats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems>())
    , ofastats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems>())
{
    controllerstats_items->parent = this;
    vpcstats_items->parent = this;
    tunnelstats_items->parent = this;
    supcachestats_items->parent = this;
    ofastats_items->parent = this;

    yang_name = "globalstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::~GlobalstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (controllerstats_items !=  nullptr && controllerstats_items->has_data())
	|| (vpcstats_items !=  nullptr && vpcstats_items->has_data())
	|| (tunnelstats_items !=  nullptr && tunnelstats_items->has_data())
	|| (supcachestats_items !=  nullptr && supcachestats_items->has_data())
	|| (ofastats_items !=  nullptr && ofastats_items->has_data());
}

bool System::ArpItems::InstItems::GlobalstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (controllerstats_items !=  nullptr && controllerstats_items->has_operation())
	|| (vpcstats_items !=  nullptr && vpcstats_items->has_operation())
	|| (tunnelstats_items !=  nullptr && tunnelstats_items->has_operation())
	|| (supcachestats_items !=  nullptr && supcachestats_items->has_operation())
	|| (ofastats_items !=  nullptr && ofastats_items->has_operation());
}

std::string System::ArpItems::InstItems::GlobalstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerstats-items")
    {
        if(controllerstats_items == nullptr)
        {
            controllerstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems>();
        }
        return controllerstats_items;
    }

    if(child_yang_name == "vpcstats-items")
    {
        if(vpcstats_items == nullptr)
        {
            vpcstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems>();
        }
        return vpcstats_items;
    }

    if(child_yang_name == "tunnelstats-items")
    {
        if(tunnelstats_items == nullptr)
        {
            tunnelstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems>();
        }
        return tunnelstats_items;
    }

    if(child_yang_name == "supcachestats-items")
    {
        if(supcachestats_items == nullptr)
        {
            supcachestats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems>();
        }
        return supcachestats_items;
    }

    if(child_yang_name == "ofastats-items")
    {
        if(ofastats_items == nullptr)
        {
            ofastats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems>();
        }
        return ofastats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllerstats_items != nullptr)
    {
        _children["controllerstats-items"] = controllerstats_items;
    }

    if(vpcstats_items != nullptr)
    {
        _children["vpcstats-items"] = vpcstats_items;
    }

    if(tunnelstats_items != nullptr)
    {
        _children["tunnelstats-items"] = tunnelstats_items;
    }

    if(supcachestats_items != nullptr)
    {
        _children["supcachestats-items"] = supcachestats_items;
    }

    if(ofastats_items != nullptr)
    {
        _children["ofastats-items"] = ofastats_items;
    }

    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::GlobalstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::GlobalstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerstats-items" || name == "vpcstats-items" || name == "tunnelstats-items" || name == "supcachestats-items" || name == "ofastats-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::ControllerstatsItems()
    :
    adjaddcount{YType::uint64, "adjAddCount"},
    adjdelcount{YType::uint64, "adjDelCount"},
    adjadderrorcount{YType::uint64, "adjAddErrorCount"},
    adjdelerrorcount{YType::uint64, "adjDelErrorCount"}
{

    yang_name = "controllerstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::~ControllerstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return adjaddcount.is_set
	|| adjdelcount.is_set
	|| adjadderrorcount.is_set
	|| adjdelerrorcount.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjaddcount.yfilter)
	|| ydk::is_set(adjdelcount.yfilter)
	|| ydk::is_set(adjadderrorcount.yfilter)
	|| ydk::is_set(adjdelerrorcount.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjaddcount.is_set || is_set(adjaddcount.yfilter)) leaf_name_data.push_back(adjaddcount.get_name_leafdata());
    if (adjdelcount.is_set || is_set(adjdelcount.yfilter)) leaf_name_data.push_back(adjdelcount.get_name_leafdata());
    if (adjadderrorcount.is_set || is_set(adjadderrorcount.yfilter)) leaf_name_data.push_back(adjadderrorcount.get_name_leafdata());
    if (adjdelerrorcount.is_set || is_set(adjdelerrorcount.yfilter)) leaf_name_data.push_back(adjdelerrorcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjAddCount")
    {
        adjaddcount = value;
        adjaddcount.value_namespace = name_space;
        adjaddcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDelCount")
    {
        adjdelcount = value;
        adjdelcount.value_namespace = name_space;
        adjdelcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjAddErrorCount")
    {
        adjadderrorcount = value;
        adjadderrorcount.value_namespace = name_space;
        adjadderrorcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDelErrorCount")
    {
        adjdelerrorcount = value;
        adjdelerrorcount.value_namespace = name_space;
        adjdelerrorcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjAddCount")
    {
        adjaddcount.yfilter = yfilter;
    }
    if(value_path == "adjDelCount")
    {
        adjdelcount.yfilter = yfilter;
    }
    if(value_path == "adjAddErrorCount")
    {
        adjadderrorcount.yfilter = yfilter;
    }
    if(value_path == "adjDelErrorCount")
    {
        adjdelerrorcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjAddCount" || name == "adjDelCount" || name == "adjAddErrorCount" || name == "adjDelErrorCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::VpcstatsItems()
    :
    cfspulldropsinceoff{YType::uint64, "cfsPullDropSinceOff"},
    cfspushdropsinceoff{YType::uint64, "cfsPushDropSinceOff"},
    sendignorepullreqcfsoe{YType::uint64, "sendIgnorePullReqCfsoe"},
    sendignorepushmsgcfsoe{YType::uint64, "sendIgnorePushMsgCfsoe"},
    imfailcfspayload{YType::uint64, "imFailCFSPayload"},
    mcecmfailcfspayload{YType::uint64, "mcecmFailCFSPayload"},
    invalidmctpccfspayload{YType::uint64, "invalidMctPcCFSPayload"},
    ptlookfailcfspayload{YType::uint64, "ptLookFailCFSPayload"},
    cfsrspfailinvalidmct{YType::uint64, "cfsRspFailInvalidMct"},
    cfsrspfailcfspayload{YType::uint64, "cfsRspFailCfsPayload"},
    retrievevpcfailpushmsg{YType::uint64, "retrieveVpcFailPushMsg"},
    retifindexfrmvpcfail{YType::uint64, "retIfindexFrmVpcFail"},
    retifindexfrmvpcfailsync{YType::uint64, "retIfindexFrmVpcFailSync"},
    rspsentcfsoe{YType::uint64, "rspSentCfsoe"},
    rsprecvcfsoe{YType::uint64, "rspRecvCfsoe"},
    rsprecvcfsoeerr{YType::uint64, "rspRecvCfsoeErr"},
    recvcfsoe{YType::uint64, "recvCfsoe"},
    sentfailcfsoe{YType::uint64, "sentFailCfsoe"},
    mcecmsendapifailcfsoe{YType::uint64, "mcecmSendApiFailCfsoe"},
    sendcfsoe{YType::uint64, "sendCfsoe"},
    vmctpktdropcount{YType::uint64, "vmctPktDropCount"}
        ,
    syncstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems>())
{
    syncstats_items->parent = this;

    yang_name = "vpcstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::~VpcstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return cfspulldropsinceoff.is_set
	|| cfspushdropsinceoff.is_set
	|| sendignorepullreqcfsoe.is_set
	|| sendignorepushmsgcfsoe.is_set
	|| imfailcfspayload.is_set
	|| mcecmfailcfspayload.is_set
	|| invalidmctpccfspayload.is_set
	|| ptlookfailcfspayload.is_set
	|| cfsrspfailinvalidmct.is_set
	|| cfsrspfailcfspayload.is_set
	|| retrievevpcfailpushmsg.is_set
	|| retifindexfrmvpcfail.is_set
	|| retifindexfrmvpcfailsync.is_set
	|| rspsentcfsoe.is_set
	|| rsprecvcfsoe.is_set
	|| rsprecvcfsoeerr.is_set
	|| recvcfsoe.is_set
	|| sentfailcfsoe.is_set
	|| mcecmsendapifailcfsoe.is_set
	|| sendcfsoe.is_set
	|| vmctpktdropcount.is_set
	|| (syncstats_items !=  nullptr && syncstats_items->has_data());
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfspulldropsinceoff.yfilter)
	|| ydk::is_set(cfspushdropsinceoff.yfilter)
	|| ydk::is_set(sendignorepullreqcfsoe.yfilter)
	|| ydk::is_set(sendignorepushmsgcfsoe.yfilter)
	|| ydk::is_set(imfailcfspayload.yfilter)
	|| ydk::is_set(mcecmfailcfspayload.yfilter)
	|| ydk::is_set(invalidmctpccfspayload.yfilter)
	|| ydk::is_set(ptlookfailcfspayload.yfilter)
	|| ydk::is_set(cfsrspfailinvalidmct.yfilter)
	|| ydk::is_set(cfsrspfailcfspayload.yfilter)
	|| ydk::is_set(retrievevpcfailpushmsg.yfilter)
	|| ydk::is_set(retifindexfrmvpcfail.yfilter)
	|| ydk::is_set(retifindexfrmvpcfailsync.yfilter)
	|| ydk::is_set(rspsentcfsoe.yfilter)
	|| ydk::is_set(rsprecvcfsoe.yfilter)
	|| ydk::is_set(rsprecvcfsoeerr.yfilter)
	|| ydk::is_set(recvcfsoe.yfilter)
	|| ydk::is_set(sentfailcfsoe.yfilter)
	|| ydk::is_set(mcecmsendapifailcfsoe.yfilter)
	|| ydk::is_set(sendcfsoe.yfilter)
	|| ydk::is_set(vmctpktdropcount.yfilter)
	|| (syncstats_items !=  nullptr && syncstats_items->has_operation());
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfspulldropsinceoff.is_set || is_set(cfspulldropsinceoff.yfilter)) leaf_name_data.push_back(cfspulldropsinceoff.get_name_leafdata());
    if (cfspushdropsinceoff.is_set || is_set(cfspushdropsinceoff.yfilter)) leaf_name_data.push_back(cfspushdropsinceoff.get_name_leafdata());
    if (sendignorepullreqcfsoe.is_set || is_set(sendignorepullreqcfsoe.yfilter)) leaf_name_data.push_back(sendignorepullreqcfsoe.get_name_leafdata());
    if (sendignorepushmsgcfsoe.is_set || is_set(sendignorepushmsgcfsoe.yfilter)) leaf_name_data.push_back(sendignorepushmsgcfsoe.get_name_leafdata());
    if (imfailcfspayload.is_set || is_set(imfailcfspayload.yfilter)) leaf_name_data.push_back(imfailcfspayload.get_name_leafdata());
    if (mcecmfailcfspayload.is_set || is_set(mcecmfailcfspayload.yfilter)) leaf_name_data.push_back(mcecmfailcfspayload.get_name_leafdata());
    if (invalidmctpccfspayload.is_set || is_set(invalidmctpccfspayload.yfilter)) leaf_name_data.push_back(invalidmctpccfspayload.get_name_leafdata());
    if (ptlookfailcfspayload.is_set || is_set(ptlookfailcfspayload.yfilter)) leaf_name_data.push_back(ptlookfailcfspayload.get_name_leafdata());
    if (cfsrspfailinvalidmct.is_set || is_set(cfsrspfailinvalidmct.yfilter)) leaf_name_data.push_back(cfsrspfailinvalidmct.get_name_leafdata());
    if (cfsrspfailcfspayload.is_set || is_set(cfsrspfailcfspayload.yfilter)) leaf_name_data.push_back(cfsrspfailcfspayload.get_name_leafdata());
    if (retrievevpcfailpushmsg.is_set || is_set(retrievevpcfailpushmsg.yfilter)) leaf_name_data.push_back(retrievevpcfailpushmsg.get_name_leafdata());
    if (retifindexfrmvpcfail.is_set || is_set(retifindexfrmvpcfail.yfilter)) leaf_name_data.push_back(retifindexfrmvpcfail.get_name_leafdata());
    if (retifindexfrmvpcfailsync.is_set || is_set(retifindexfrmvpcfailsync.yfilter)) leaf_name_data.push_back(retifindexfrmvpcfailsync.get_name_leafdata());
    if (rspsentcfsoe.is_set || is_set(rspsentcfsoe.yfilter)) leaf_name_data.push_back(rspsentcfsoe.get_name_leafdata());
    if (rsprecvcfsoe.is_set || is_set(rsprecvcfsoe.yfilter)) leaf_name_data.push_back(rsprecvcfsoe.get_name_leafdata());
    if (rsprecvcfsoeerr.is_set || is_set(rsprecvcfsoeerr.yfilter)) leaf_name_data.push_back(rsprecvcfsoeerr.get_name_leafdata());
    if (recvcfsoe.is_set || is_set(recvcfsoe.yfilter)) leaf_name_data.push_back(recvcfsoe.get_name_leafdata());
    if (sentfailcfsoe.is_set || is_set(sentfailcfsoe.yfilter)) leaf_name_data.push_back(sentfailcfsoe.get_name_leafdata());
    if (mcecmsendapifailcfsoe.is_set || is_set(mcecmsendapifailcfsoe.yfilter)) leaf_name_data.push_back(mcecmsendapifailcfsoe.get_name_leafdata());
    if (sendcfsoe.is_set || is_set(sendcfsoe.yfilter)) leaf_name_data.push_back(sendcfsoe.get_name_leafdata());
    if (vmctpktdropcount.is_set || is_set(vmctpktdropcount.yfilter)) leaf_name_data.push_back(vmctpktdropcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncstats-items")
    {
        if(syncstats_items == nullptr)
        {
            syncstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems>();
        }
        return syncstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syncstats_items != nullptr)
    {
        _children["syncstats-items"] = syncstats_items;
    }

    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfsPullDropSinceOff")
    {
        cfspulldropsinceoff = value;
        cfspulldropsinceoff.value_namespace = name_space;
        cfspulldropsinceoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsPushDropSinceOff")
    {
        cfspushdropsinceoff = value;
        cfspushdropsinceoff.value_namespace = name_space;
        cfspushdropsinceoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendIgnorePullReqCfsoe")
    {
        sendignorepullreqcfsoe = value;
        sendignorepullreqcfsoe.value_namespace = name_space;
        sendignorepullreqcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendIgnorePushMsgCfsoe")
    {
        sendignorepushmsgcfsoe = value;
        sendignorepushmsgcfsoe.value_namespace = name_space;
        sendignorepushmsgcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imFailCFSPayload")
    {
        imfailcfspayload = value;
        imfailcfspayload.value_namespace = name_space;
        imfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmFailCFSPayload")
    {
        mcecmfailcfspayload = value;
        mcecmfailcfspayload.value_namespace = name_space;
        mcecmfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidMctPcCFSPayload")
    {
        invalidmctpccfspayload = value;
        invalidmctpccfspayload.value_namespace = name_space;
        invalidmctpccfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptLookFailCFSPayload")
    {
        ptlookfailcfspayload = value;
        ptlookfailcfspayload.value_namespace = name_space;
        ptlookfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsRspFailInvalidMct")
    {
        cfsrspfailinvalidmct = value;
        cfsrspfailinvalidmct.value_namespace = name_space;
        cfsrspfailinvalidmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsRspFailCfsPayload")
    {
        cfsrspfailcfspayload = value;
        cfsrspfailcfspayload.value_namespace = name_space;
        cfsrspfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retrieveVpcFailPushMsg")
    {
        retrievevpcfailpushmsg = value;
        retrievevpcfailpushmsg.value_namespace = name_space;
        retrievevpcfailpushmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retIfindexFrmVpcFail")
    {
        retifindexfrmvpcfail = value;
        retifindexfrmvpcfail.value_namespace = name_space;
        retifindexfrmvpcfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retIfindexFrmVpcFailSync")
    {
        retifindexfrmvpcfailsync = value;
        retifindexfrmvpcfailsync.value_namespace = name_space;
        retifindexfrmvpcfailsync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspSentCfsoe")
    {
        rspsentcfsoe = value;
        rspsentcfsoe.value_namespace = name_space;
        rspsentcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspRecvCfsoe")
    {
        rsprecvcfsoe = value;
        rsprecvcfsoe.value_namespace = name_space;
        rsprecvcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspRecvCfsoeErr")
    {
        rsprecvcfsoeerr = value;
        rsprecvcfsoeerr.value_namespace = name_space;
        rsprecvcfsoeerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvCfsoe")
    {
        recvcfsoe = value;
        recvcfsoe.value_namespace = name_space;
        recvcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentFailCfsoe")
    {
        sentfailcfsoe = value;
        sentfailcfsoe.value_namespace = name_space;
        sentfailcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmSendApiFailCfsoe")
    {
        mcecmsendapifailcfsoe = value;
        mcecmsendapifailcfsoe.value_namespace = name_space;
        mcecmsendapifailcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendCfsoe")
    {
        sendcfsoe = value;
        sendcfsoe.value_namespace = name_space;
        sendcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmctPktDropCount")
    {
        vmctpktdropcount = value;
        vmctpktdropcount.value_namespace = name_space;
        vmctpktdropcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfsPullDropSinceOff")
    {
        cfspulldropsinceoff.yfilter = yfilter;
    }
    if(value_path == "cfsPushDropSinceOff")
    {
        cfspushdropsinceoff.yfilter = yfilter;
    }
    if(value_path == "sendIgnorePullReqCfsoe")
    {
        sendignorepullreqcfsoe.yfilter = yfilter;
    }
    if(value_path == "sendIgnorePushMsgCfsoe")
    {
        sendignorepushmsgcfsoe.yfilter = yfilter;
    }
    if(value_path == "imFailCFSPayload")
    {
        imfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "mcecmFailCFSPayload")
    {
        mcecmfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "invalidMctPcCFSPayload")
    {
        invalidmctpccfspayload.yfilter = yfilter;
    }
    if(value_path == "ptLookFailCFSPayload")
    {
        ptlookfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "cfsRspFailInvalidMct")
    {
        cfsrspfailinvalidmct.yfilter = yfilter;
    }
    if(value_path == "cfsRspFailCfsPayload")
    {
        cfsrspfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "retrieveVpcFailPushMsg")
    {
        retrievevpcfailpushmsg.yfilter = yfilter;
    }
    if(value_path == "retIfindexFrmVpcFail")
    {
        retifindexfrmvpcfail.yfilter = yfilter;
    }
    if(value_path == "retIfindexFrmVpcFailSync")
    {
        retifindexfrmvpcfailsync.yfilter = yfilter;
    }
    if(value_path == "rspSentCfsoe")
    {
        rspsentcfsoe.yfilter = yfilter;
    }
    if(value_path == "rspRecvCfsoe")
    {
        rsprecvcfsoe.yfilter = yfilter;
    }
    if(value_path == "rspRecvCfsoeErr")
    {
        rsprecvcfsoeerr.yfilter = yfilter;
    }
    if(value_path == "recvCfsoe")
    {
        recvcfsoe.yfilter = yfilter;
    }
    if(value_path == "sentFailCfsoe")
    {
        sentfailcfsoe.yfilter = yfilter;
    }
    if(value_path == "mcecmSendApiFailCfsoe")
    {
        mcecmsendapifailcfsoe.yfilter = yfilter;
    }
    if(value_path == "sendCfsoe")
    {
        sendcfsoe.yfilter = yfilter;
    }
    if(value_path == "vmctPktDropCount")
    {
        vmctpktdropcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncstats-items" || name == "cfsPullDropSinceOff" || name == "cfsPushDropSinceOff" || name == "sendIgnorePullReqCfsoe" || name == "sendIgnorePushMsgCfsoe" || name == "imFailCFSPayload" || name == "mcecmFailCFSPayload" || name == "invalidMctPcCFSPayload" || name == "ptLookFailCFSPayload" || name == "cfsRspFailInvalidMct" || name == "cfsRspFailCfsPayload" || name == "retrieveVpcFailPushMsg" || name == "retIfindexFrmVpcFail" || name == "retIfindexFrmVpcFailSync" || name == "rspSentCfsoe" || name == "rspRecvCfsoe" || name == "rspRecvCfsoeErr" || name == "recvCfsoe" || name == "sentFailCfsoe" || name == "mcecmSendApiFailCfsoe" || name == "sendCfsoe" || name == "vmctPktDropCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::SyncstatsItems()
    :
    ptaddfailofflist{YType::uint64, "ptAddFailOfflist"},
    mallocfailofflistdb{YType::uint64, "mallocFailOfflistDb"},
    timercreatefailofflistdb{YType::uint64, "timerCreateFailOfflistDb"},
    adjaddfailofflistdb{YType::uint64, "adjAddFailOfflistDb"},
    ptlookupfailofflistdb{YType::uint64, "ptLookupFailOfflistDb"},
    vlanmismatchofflistdb{YType::uint64, "vlanMismatchOfflistDb"},
    invalidsviofflistdb{YType::uint64, "invalidSviOfflistDb"},
    svidownofflistdb{YType::uint64, "sviDownOfflistDb"},
    mctdownofflistdb{YType::uint64, "mctDownOfflistDb"},
    ctxtypeinvalidofflistdb{YType::uint64, "ctxTypeInvalidOfflistDb"},
    vrfinvalidofflistdb{YType::uint64, "vrfInvalidOfflistDb"},
    invalidipofflistdb{YType::uint64, "invalidIpOfflistDb"},
    ipsanityfailofflistdb{YType::uint64, "ipSanityFailOfflistDb"},
    macsanityfailofflistdb{YType::uint64, "macSanityFailOfflistDb"},
    ownroutermacofflistdb{YType::uint64, "ownRouterMacOfflistDb"},
    ownipofflistdb{YType::uint64, "ownIpOfflistDb"},
    ownvipofflistdb{YType::uint64, "ownvIpOfflistDb"},
    adjcreatefailofflistdb{YType::uint64, "adjCreateFailOfflistDb"},
    subnetmismatchofflistdb{YType::uint64, "subnetMismatchOfflistDb"},
    dupentryofflistdb{YType::uint64, "dupEntryOfflistDb"},
    ipnotenofflistdb{YType::uint64, "ipNotEnOfflistDb"},
    totdropofflistdb{YType::uint64, "totDropOfflistDb"},
    totdontdropofflistdb{YType::uint64, "totDontDropOfflistDb"},
    totadjaddofflistdb{YType::uint64, "totAdjAddOfflistDb"},
    totadjdelofflistdb{YType::uint64, "totAdjDelOfflistDb"},
    totadjignoredofflistdb{YType::uint64, "totAdjIgnoredOfflistDb"},
    totadjfrmpeertoadd{YType::uint64, "totAdjFrmPeerToAdd"},
    totadjfrmpeertodel{YType::uint64, "totAdjFrmPeerToDel"},
    totadjsentperiodically{YType::uint64, "totAdjSentPeriodically"},
    totadjpeertoadd{YType::uint64, "totAdjPeerToAdd"},
    totadjpeertodel{YType::uint64, "totAdjPeerToDel"},
    totperiodicsyncadj{YType::uint64, "totPeriodicSyncAdj"},
    totadjaddfailduringsyncsend{YType::uint64, "totAdjAddFailDuringSyncSend"},
    totdropduringsyncinvalidsvi{YType::uint64, "totDropDuringSyncInvalidSvi"},
    totdropsyncsvidown{YType::uint64, "totDropSyncSviDown"},
    totdropsyncinvalidctxt{YType::uint64, "totDropSyncInvalidCtxt"},
    totdropsyncnulladj{YType::uint64, "totDropSyncNullAdj"},
    totdropsyncnullip{YType::uint64, "totDropSyncNullIp"},
    totsyncadjaddl2supcache{YType::uint64, "totSyncAdjAddL2SupCache"},
    totsyncstopbcastpkt{YType::uint64, "totSyncStopBcastPkt"},
    totvmctorphansyncdropcount{YType::uint64, "totVmctOrphanSyncDropCount"}
{

    yang_name = "syncstats-items"; yang_parent_name = "vpcstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::~SyncstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return ptaddfailofflist.is_set
	|| mallocfailofflistdb.is_set
	|| timercreatefailofflistdb.is_set
	|| adjaddfailofflistdb.is_set
	|| ptlookupfailofflistdb.is_set
	|| vlanmismatchofflistdb.is_set
	|| invalidsviofflistdb.is_set
	|| svidownofflistdb.is_set
	|| mctdownofflistdb.is_set
	|| ctxtypeinvalidofflistdb.is_set
	|| vrfinvalidofflistdb.is_set
	|| invalidipofflistdb.is_set
	|| ipsanityfailofflistdb.is_set
	|| macsanityfailofflistdb.is_set
	|| ownroutermacofflistdb.is_set
	|| ownipofflistdb.is_set
	|| ownvipofflistdb.is_set
	|| adjcreatefailofflistdb.is_set
	|| subnetmismatchofflistdb.is_set
	|| dupentryofflistdb.is_set
	|| ipnotenofflistdb.is_set
	|| totdropofflistdb.is_set
	|| totdontdropofflistdb.is_set
	|| totadjaddofflistdb.is_set
	|| totadjdelofflistdb.is_set
	|| totadjignoredofflistdb.is_set
	|| totadjfrmpeertoadd.is_set
	|| totadjfrmpeertodel.is_set
	|| totadjsentperiodically.is_set
	|| totadjpeertoadd.is_set
	|| totadjpeertodel.is_set
	|| totperiodicsyncadj.is_set
	|| totadjaddfailduringsyncsend.is_set
	|| totdropduringsyncinvalidsvi.is_set
	|| totdropsyncsvidown.is_set
	|| totdropsyncinvalidctxt.is_set
	|| totdropsyncnulladj.is_set
	|| totdropsyncnullip.is_set
	|| totsyncadjaddl2supcache.is_set
	|| totsyncstopbcastpkt.is_set
	|| totvmctorphansyncdropcount.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptaddfailofflist.yfilter)
	|| ydk::is_set(mallocfailofflistdb.yfilter)
	|| ydk::is_set(timercreatefailofflistdb.yfilter)
	|| ydk::is_set(adjaddfailofflistdb.yfilter)
	|| ydk::is_set(ptlookupfailofflistdb.yfilter)
	|| ydk::is_set(vlanmismatchofflistdb.yfilter)
	|| ydk::is_set(invalidsviofflistdb.yfilter)
	|| ydk::is_set(svidownofflistdb.yfilter)
	|| ydk::is_set(mctdownofflistdb.yfilter)
	|| ydk::is_set(ctxtypeinvalidofflistdb.yfilter)
	|| ydk::is_set(vrfinvalidofflistdb.yfilter)
	|| ydk::is_set(invalidipofflistdb.yfilter)
	|| ydk::is_set(ipsanityfailofflistdb.yfilter)
	|| ydk::is_set(macsanityfailofflistdb.yfilter)
	|| ydk::is_set(ownroutermacofflistdb.yfilter)
	|| ydk::is_set(ownipofflistdb.yfilter)
	|| ydk::is_set(ownvipofflistdb.yfilter)
	|| ydk::is_set(adjcreatefailofflistdb.yfilter)
	|| ydk::is_set(subnetmismatchofflistdb.yfilter)
	|| ydk::is_set(dupentryofflistdb.yfilter)
	|| ydk::is_set(ipnotenofflistdb.yfilter)
	|| ydk::is_set(totdropofflistdb.yfilter)
	|| ydk::is_set(totdontdropofflistdb.yfilter)
	|| ydk::is_set(totadjaddofflistdb.yfilter)
	|| ydk::is_set(totadjdelofflistdb.yfilter)
	|| ydk::is_set(totadjignoredofflistdb.yfilter)
	|| ydk::is_set(totadjfrmpeertoadd.yfilter)
	|| ydk::is_set(totadjfrmpeertodel.yfilter)
	|| ydk::is_set(totadjsentperiodically.yfilter)
	|| ydk::is_set(totadjpeertoadd.yfilter)
	|| ydk::is_set(totadjpeertodel.yfilter)
	|| ydk::is_set(totperiodicsyncadj.yfilter)
	|| ydk::is_set(totadjaddfailduringsyncsend.yfilter)
	|| ydk::is_set(totdropduringsyncinvalidsvi.yfilter)
	|| ydk::is_set(totdropsyncsvidown.yfilter)
	|| ydk::is_set(totdropsyncinvalidctxt.yfilter)
	|| ydk::is_set(totdropsyncnulladj.yfilter)
	|| ydk::is_set(totdropsyncnullip.yfilter)
	|| ydk::is_set(totsyncadjaddl2supcache.yfilter)
	|| ydk::is_set(totsyncstopbcastpkt.yfilter)
	|| ydk::is_set(totvmctorphansyncdropcount.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/vpcstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptaddfailofflist.is_set || is_set(ptaddfailofflist.yfilter)) leaf_name_data.push_back(ptaddfailofflist.get_name_leafdata());
    if (mallocfailofflistdb.is_set || is_set(mallocfailofflistdb.yfilter)) leaf_name_data.push_back(mallocfailofflistdb.get_name_leafdata());
    if (timercreatefailofflistdb.is_set || is_set(timercreatefailofflistdb.yfilter)) leaf_name_data.push_back(timercreatefailofflistdb.get_name_leafdata());
    if (adjaddfailofflistdb.is_set || is_set(adjaddfailofflistdb.yfilter)) leaf_name_data.push_back(adjaddfailofflistdb.get_name_leafdata());
    if (ptlookupfailofflistdb.is_set || is_set(ptlookupfailofflistdb.yfilter)) leaf_name_data.push_back(ptlookupfailofflistdb.get_name_leafdata());
    if (vlanmismatchofflistdb.is_set || is_set(vlanmismatchofflistdb.yfilter)) leaf_name_data.push_back(vlanmismatchofflistdb.get_name_leafdata());
    if (invalidsviofflistdb.is_set || is_set(invalidsviofflistdb.yfilter)) leaf_name_data.push_back(invalidsviofflistdb.get_name_leafdata());
    if (svidownofflistdb.is_set || is_set(svidownofflistdb.yfilter)) leaf_name_data.push_back(svidownofflistdb.get_name_leafdata());
    if (mctdownofflistdb.is_set || is_set(mctdownofflistdb.yfilter)) leaf_name_data.push_back(mctdownofflistdb.get_name_leafdata());
    if (ctxtypeinvalidofflistdb.is_set || is_set(ctxtypeinvalidofflistdb.yfilter)) leaf_name_data.push_back(ctxtypeinvalidofflistdb.get_name_leafdata());
    if (vrfinvalidofflistdb.is_set || is_set(vrfinvalidofflistdb.yfilter)) leaf_name_data.push_back(vrfinvalidofflistdb.get_name_leafdata());
    if (invalidipofflistdb.is_set || is_set(invalidipofflistdb.yfilter)) leaf_name_data.push_back(invalidipofflistdb.get_name_leafdata());
    if (ipsanityfailofflistdb.is_set || is_set(ipsanityfailofflistdb.yfilter)) leaf_name_data.push_back(ipsanityfailofflistdb.get_name_leafdata());
    if (macsanityfailofflistdb.is_set || is_set(macsanityfailofflistdb.yfilter)) leaf_name_data.push_back(macsanityfailofflistdb.get_name_leafdata());
    if (ownroutermacofflistdb.is_set || is_set(ownroutermacofflistdb.yfilter)) leaf_name_data.push_back(ownroutermacofflistdb.get_name_leafdata());
    if (ownipofflistdb.is_set || is_set(ownipofflistdb.yfilter)) leaf_name_data.push_back(ownipofflistdb.get_name_leafdata());
    if (ownvipofflistdb.is_set || is_set(ownvipofflistdb.yfilter)) leaf_name_data.push_back(ownvipofflistdb.get_name_leafdata());
    if (adjcreatefailofflistdb.is_set || is_set(adjcreatefailofflistdb.yfilter)) leaf_name_data.push_back(adjcreatefailofflistdb.get_name_leafdata());
    if (subnetmismatchofflistdb.is_set || is_set(subnetmismatchofflistdb.yfilter)) leaf_name_data.push_back(subnetmismatchofflistdb.get_name_leafdata());
    if (dupentryofflistdb.is_set || is_set(dupentryofflistdb.yfilter)) leaf_name_data.push_back(dupentryofflistdb.get_name_leafdata());
    if (ipnotenofflistdb.is_set || is_set(ipnotenofflistdb.yfilter)) leaf_name_data.push_back(ipnotenofflistdb.get_name_leafdata());
    if (totdropofflistdb.is_set || is_set(totdropofflistdb.yfilter)) leaf_name_data.push_back(totdropofflistdb.get_name_leafdata());
    if (totdontdropofflistdb.is_set || is_set(totdontdropofflistdb.yfilter)) leaf_name_data.push_back(totdontdropofflistdb.get_name_leafdata());
    if (totadjaddofflistdb.is_set || is_set(totadjaddofflistdb.yfilter)) leaf_name_data.push_back(totadjaddofflistdb.get_name_leafdata());
    if (totadjdelofflistdb.is_set || is_set(totadjdelofflistdb.yfilter)) leaf_name_data.push_back(totadjdelofflistdb.get_name_leafdata());
    if (totadjignoredofflistdb.is_set || is_set(totadjignoredofflistdb.yfilter)) leaf_name_data.push_back(totadjignoredofflistdb.get_name_leafdata());
    if (totadjfrmpeertoadd.is_set || is_set(totadjfrmpeertoadd.yfilter)) leaf_name_data.push_back(totadjfrmpeertoadd.get_name_leafdata());
    if (totadjfrmpeertodel.is_set || is_set(totadjfrmpeertodel.yfilter)) leaf_name_data.push_back(totadjfrmpeertodel.get_name_leafdata());
    if (totadjsentperiodically.is_set || is_set(totadjsentperiodically.yfilter)) leaf_name_data.push_back(totadjsentperiodically.get_name_leafdata());
    if (totadjpeertoadd.is_set || is_set(totadjpeertoadd.yfilter)) leaf_name_data.push_back(totadjpeertoadd.get_name_leafdata());
    if (totadjpeertodel.is_set || is_set(totadjpeertodel.yfilter)) leaf_name_data.push_back(totadjpeertodel.get_name_leafdata());
    if (totperiodicsyncadj.is_set || is_set(totperiodicsyncadj.yfilter)) leaf_name_data.push_back(totperiodicsyncadj.get_name_leafdata());
    if (totadjaddfailduringsyncsend.is_set || is_set(totadjaddfailduringsyncsend.yfilter)) leaf_name_data.push_back(totadjaddfailduringsyncsend.get_name_leafdata());
    if (totdropduringsyncinvalidsvi.is_set || is_set(totdropduringsyncinvalidsvi.yfilter)) leaf_name_data.push_back(totdropduringsyncinvalidsvi.get_name_leafdata());
    if (totdropsyncsvidown.is_set || is_set(totdropsyncsvidown.yfilter)) leaf_name_data.push_back(totdropsyncsvidown.get_name_leafdata());
    if (totdropsyncinvalidctxt.is_set || is_set(totdropsyncinvalidctxt.yfilter)) leaf_name_data.push_back(totdropsyncinvalidctxt.get_name_leafdata());
    if (totdropsyncnulladj.is_set || is_set(totdropsyncnulladj.yfilter)) leaf_name_data.push_back(totdropsyncnulladj.get_name_leafdata());
    if (totdropsyncnullip.is_set || is_set(totdropsyncnullip.yfilter)) leaf_name_data.push_back(totdropsyncnullip.get_name_leafdata());
    if (totsyncadjaddl2supcache.is_set || is_set(totsyncadjaddl2supcache.yfilter)) leaf_name_data.push_back(totsyncadjaddl2supcache.get_name_leafdata());
    if (totsyncstopbcastpkt.is_set || is_set(totsyncstopbcastpkt.yfilter)) leaf_name_data.push_back(totsyncstopbcastpkt.get_name_leafdata());
    if (totvmctorphansyncdropcount.is_set || is_set(totvmctorphansyncdropcount.yfilter)) leaf_name_data.push_back(totvmctorphansyncdropcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptAddFailOfflist")
    {
        ptaddfailofflist = value;
        ptaddfailofflist.value_namespace = name_space;
        ptaddfailofflist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mallocFailOfflistDb")
    {
        mallocfailofflistdb = value;
        mallocfailofflistdb.value_namespace = name_space;
        mallocfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timerCreateFailOfflistDb")
    {
        timercreatefailofflistdb = value;
        timercreatefailofflistdb.value_namespace = name_space;
        timercreatefailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjAddFailOfflistDb")
    {
        adjaddfailofflistdb = value;
        adjaddfailofflistdb.value_namespace = name_space;
        adjaddfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptLookupFailOfflistDb")
    {
        ptlookupfailofflistdb = value;
        ptlookupfailofflistdb.value_namespace = name_space;
        ptlookupfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanMismatchOfflistDb")
    {
        vlanmismatchofflistdb = value;
        vlanmismatchofflistdb.value_namespace = name_space;
        vlanmismatchofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSviOfflistDb")
    {
        invalidsviofflistdb = value;
        invalidsviofflistdb.value_namespace = name_space;
        invalidsviofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sviDownOfflistDb")
    {
        svidownofflistdb = value;
        svidownofflistdb.value_namespace = name_space;
        svidownofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mctDownOfflistDb")
    {
        mctdownofflistdb = value;
        mctdownofflistdb.value_namespace = name_space;
        mctdownofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxTypeInvalidOfflistDb")
    {
        ctxtypeinvalidofflistdb = value;
        ctxtypeinvalidofflistdb.value_namespace = name_space;
        ctxtypeinvalidofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfInvalidOfflistDb")
    {
        vrfinvalidofflistdb = value;
        vrfinvalidofflistdb.value_namespace = name_space;
        vrfinvalidofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidIpOfflistDb")
    {
        invalidipofflistdb = value;
        invalidipofflistdb.value_namespace = name_space;
        invalidipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSanityFailOfflistDb")
    {
        ipsanityfailofflistdb = value;
        ipsanityfailofflistdb.value_namespace = name_space;
        ipsanityfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macSanityFailOfflistDb")
    {
        macsanityfailofflistdb = value;
        macsanityfailofflistdb.value_namespace = name_space;
        macsanityfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownRouterMacOfflistDb")
    {
        ownroutermacofflistdb = value;
        ownroutermacofflistdb.value_namespace = name_space;
        ownroutermacofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownIpOfflistDb")
    {
        ownipofflistdb = value;
        ownipofflistdb.value_namespace = name_space;
        ownipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownvIpOfflistDb")
    {
        ownvipofflistdb = value;
        ownvipofflistdb.value_namespace = name_space;
        ownvipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCreateFailOfflistDb")
    {
        adjcreatefailofflistdb = value;
        adjcreatefailofflistdb.value_namespace = name_space;
        adjcreatefailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnetMismatchOfflistDb")
    {
        subnetmismatchofflistdb = value;
        subnetmismatchofflistdb.value_namespace = name_space;
        subnetmismatchofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupEntryOfflistDb")
    {
        dupentryofflistdb = value;
        dupentryofflistdb.value_namespace = name_space;
        dupentryofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNotEnOfflistDb")
    {
        ipnotenofflistdb = value;
        ipnotenofflistdb.value_namespace = name_space;
        ipnotenofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropOfflistDb")
    {
        totdropofflistdb = value;
        totdropofflistdb.value_namespace = name_space;
        totdropofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDontDropOfflistDb")
    {
        totdontdropofflistdb = value;
        totdontdropofflistdb.value_namespace = name_space;
        totdontdropofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjAddOfflistDb")
    {
        totadjaddofflistdb = value;
        totadjaddofflistdb.value_namespace = name_space;
        totadjaddofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjDelOfflistDb")
    {
        totadjdelofflistdb = value;
        totadjdelofflistdb.value_namespace = name_space;
        totadjdelofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjIgnoredOfflistDb")
    {
        totadjignoredofflistdb = value;
        totadjignoredofflistdb.value_namespace = name_space;
        totadjignoredofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjFrmPeerToAdd")
    {
        totadjfrmpeertoadd = value;
        totadjfrmpeertoadd.value_namespace = name_space;
        totadjfrmpeertoadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjFrmPeerToDel")
    {
        totadjfrmpeertodel = value;
        totadjfrmpeertodel.value_namespace = name_space;
        totadjfrmpeertodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjSentPeriodically")
    {
        totadjsentperiodically = value;
        totadjsentperiodically.value_namespace = name_space;
        totadjsentperiodically.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjPeerToAdd")
    {
        totadjpeertoadd = value;
        totadjpeertoadd.value_namespace = name_space;
        totadjpeertoadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjPeerToDel")
    {
        totadjpeertodel = value;
        totadjpeertodel.value_namespace = name_space;
        totadjpeertodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totPeriodicSyncAdj")
    {
        totperiodicsyncadj = value;
        totperiodicsyncadj.value_namespace = name_space;
        totperiodicsyncadj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjAddFailDuringSyncSend")
    {
        totadjaddfailduringsyncsend = value;
        totadjaddfailduringsyncsend.value_namespace = name_space;
        totadjaddfailduringsyncsend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropDuringSyncInvalidSvi")
    {
        totdropduringsyncinvalidsvi = value;
        totdropduringsyncinvalidsvi.value_namespace = name_space;
        totdropduringsyncinvalidsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncSviDown")
    {
        totdropsyncsvidown = value;
        totdropsyncsvidown.value_namespace = name_space;
        totdropsyncsvidown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncInvalidCtxt")
    {
        totdropsyncinvalidctxt = value;
        totdropsyncinvalidctxt.value_namespace = name_space;
        totdropsyncinvalidctxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncNullAdj")
    {
        totdropsyncnulladj = value;
        totdropsyncnulladj.value_namespace = name_space;
        totdropsyncnulladj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncNullIp")
    {
        totdropsyncnullip = value;
        totdropsyncnullip.value_namespace = name_space;
        totdropsyncnullip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSyncAdjAddL2SupCache")
    {
        totsyncadjaddl2supcache = value;
        totsyncadjaddl2supcache.value_namespace = name_space;
        totsyncadjaddl2supcache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSyncStopBcastPkt")
    {
        totsyncstopbcastpkt = value;
        totsyncstopbcastpkt.value_namespace = name_space;
        totsyncstopbcastpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totVmctOrphanSyncDropCount")
    {
        totvmctorphansyncdropcount = value;
        totvmctorphansyncdropcount.value_namespace = name_space;
        totvmctorphansyncdropcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptAddFailOfflist")
    {
        ptaddfailofflist.yfilter = yfilter;
    }
    if(value_path == "mallocFailOfflistDb")
    {
        mallocfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "timerCreateFailOfflistDb")
    {
        timercreatefailofflistdb.yfilter = yfilter;
    }
    if(value_path == "adjAddFailOfflistDb")
    {
        adjaddfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "ptLookupFailOfflistDb")
    {
        ptlookupfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "vlanMismatchOfflistDb")
    {
        vlanmismatchofflistdb.yfilter = yfilter;
    }
    if(value_path == "invalidSviOfflistDb")
    {
        invalidsviofflistdb.yfilter = yfilter;
    }
    if(value_path == "sviDownOfflistDb")
    {
        svidownofflistdb.yfilter = yfilter;
    }
    if(value_path == "mctDownOfflistDb")
    {
        mctdownofflistdb.yfilter = yfilter;
    }
    if(value_path == "ctxTypeInvalidOfflistDb")
    {
        ctxtypeinvalidofflistdb.yfilter = yfilter;
    }
    if(value_path == "vrfInvalidOfflistDb")
    {
        vrfinvalidofflistdb.yfilter = yfilter;
    }
    if(value_path == "invalidIpOfflistDb")
    {
        invalidipofflistdb.yfilter = yfilter;
    }
    if(value_path == "ipSanityFailOfflistDb")
    {
        ipsanityfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "macSanityFailOfflistDb")
    {
        macsanityfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownRouterMacOfflistDb")
    {
        ownroutermacofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownIpOfflistDb")
    {
        ownipofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownvIpOfflistDb")
    {
        ownvipofflistdb.yfilter = yfilter;
    }
    if(value_path == "adjCreateFailOfflistDb")
    {
        adjcreatefailofflistdb.yfilter = yfilter;
    }
    if(value_path == "subnetMismatchOfflistDb")
    {
        subnetmismatchofflistdb.yfilter = yfilter;
    }
    if(value_path == "dupEntryOfflistDb")
    {
        dupentryofflistdb.yfilter = yfilter;
    }
    if(value_path == "ipNotEnOfflistDb")
    {
        ipnotenofflistdb.yfilter = yfilter;
    }
    if(value_path == "totDropOfflistDb")
    {
        totdropofflistdb.yfilter = yfilter;
    }
    if(value_path == "totDontDropOfflistDb")
    {
        totdontdropofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjAddOfflistDb")
    {
        totadjaddofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjDelOfflistDb")
    {
        totadjdelofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjIgnoredOfflistDb")
    {
        totadjignoredofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjFrmPeerToAdd")
    {
        totadjfrmpeertoadd.yfilter = yfilter;
    }
    if(value_path == "totAdjFrmPeerToDel")
    {
        totadjfrmpeertodel.yfilter = yfilter;
    }
    if(value_path == "totAdjSentPeriodically")
    {
        totadjsentperiodically.yfilter = yfilter;
    }
    if(value_path == "totAdjPeerToAdd")
    {
        totadjpeertoadd.yfilter = yfilter;
    }
    if(value_path == "totAdjPeerToDel")
    {
        totadjpeertodel.yfilter = yfilter;
    }
    if(value_path == "totPeriodicSyncAdj")
    {
        totperiodicsyncadj.yfilter = yfilter;
    }
    if(value_path == "totAdjAddFailDuringSyncSend")
    {
        totadjaddfailduringsyncsend.yfilter = yfilter;
    }
    if(value_path == "totDropDuringSyncInvalidSvi")
    {
        totdropduringsyncinvalidsvi.yfilter = yfilter;
    }
    if(value_path == "totDropSyncSviDown")
    {
        totdropsyncsvidown.yfilter = yfilter;
    }
    if(value_path == "totDropSyncInvalidCtxt")
    {
        totdropsyncinvalidctxt.yfilter = yfilter;
    }
    if(value_path == "totDropSyncNullAdj")
    {
        totdropsyncnulladj.yfilter = yfilter;
    }
    if(value_path == "totDropSyncNullIp")
    {
        totdropsyncnullip.yfilter = yfilter;
    }
    if(value_path == "totSyncAdjAddL2SupCache")
    {
        totsyncadjaddl2supcache.yfilter = yfilter;
    }
    if(value_path == "totSyncStopBcastPkt")
    {
        totsyncstopbcastpkt.yfilter = yfilter;
    }
    if(value_path == "totVmctOrphanSyncDropCount")
    {
        totvmctorphansyncdropcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptAddFailOfflist" || name == "mallocFailOfflistDb" || name == "timerCreateFailOfflistDb" || name == "adjAddFailOfflistDb" || name == "ptLookupFailOfflistDb" || name == "vlanMismatchOfflistDb" || name == "invalidSviOfflistDb" || name == "sviDownOfflistDb" || name == "mctDownOfflistDb" || name == "ctxTypeInvalidOfflistDb" || name == "vrfInvalidOfflistDb" || name == "invalidIpOfflistDb" || name == "ipSanityFailOfflistDb" || name == "macSanityFailOfflistDb" || name == "ownRouterMacOfflistDb" || name == "ownIpOfflistDb" || name == "ownvIpOfflistDb" || name == "adjCreateFailOfflistDb" || name == "subnetMismatchOfflistDb" || name == "dupEntryOfflistDb" || name == "ipNotEnOfflistDb" || name == "totDropOfflistDb" || name == "totDontDropOfflistDb" || name == "totAdjAddOfflistDb" || name == "totAdjDelOfflistDb" || name == "totAdjIgnoredOfflistDb" || name == "totAdjFrmPeerToAdd" || name == "totAdjFrmPeerToDel" || name == "totAdjSentPeriodically" || name == "totAdjPeerToAdd" || name == "totAdjPeerToDel" || name == "totPeriodicSyncAdj" || name == "totAdjAddFailDuringSyncSend" || name == "totDropDuringSyncInvalidSvi" || name == "totDropSyncSviDown" || name == "totDropSyncInvalidCtxt" || name == "totDropSyncNullAdj" || name == "totDropSyncNullIp" || name == "totSyncAdjAddL2SupCache" || name == "totSyncStopBcastPkt" || name == "totVmctOrphanSyncDropCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::TunnelstatsItems()
    :
    tottunnelrcvd{YType::uint64, "totTunnelRcvd"},
    rxforingressvpc{YType::uint64, "rxForIngressVpc"},
    rxingressforgpc{YType::uint64, "rxIngressforGpc"},
    rxingressorphanvpc{YType::uint64, "rxIngressOrphanVpc"},
    rxingressorphanvpcplus{YType::uint64, "rxIngressOrphanVpcPlus"},
    totpacksent{YType::uint64, "totPackSent"},
    pktsentarpsnoop{YType::uint64, "pktSentArpSnoop"},
    pktsentnonlocalvip{YType::uint64, "pktSentNonlocalVip"},
    pktsentpeergway{YType::uint64, "pktSentPeerGway"},
    txingressvpc{YType::uint64, "txIngressVpc"},
    txingressgpc{YType::uint64, "txIngressGpc"},
    txingressorphanvpc{YType::uint64, "txIngressOrphanVpc"},
    txingressorphanvpcplus{YType::uint64, "txIngressOrphanVpcPlus"},
    totrecvdropped{YType::uint64, "totRecvDropped"},
    totsenddropped{YType::uint64, "totSendDropped"},
    sendfaildrop{YType::uint64, "sendFailDrop"},
    rcvdinvalidver{YType::uint64, "rcvdInvalidVer"},
    rcvdinvalidpayloadtype{YType::uint64, "rcvdInvalidPayloadType"},
    rcvdmctif{YType::uint64, "rcvdMctIf"},
    rcvdinvalidingressport{YType::uint64, "rcvdInvalidIngressPort"},
    dropsentinvalidport{YType::uint64, "dropSentInvalidPort"},
    droprecvinvalidgpccore{YType::uint64, "dropRecvInvalidGpcCore"},
    droprecvinvalidgpcpeer{YType::uint64, "dropRecvInvalidGpcPeer"},
    droprecvfailretrievegpc{YType::uint64, "dropRecvFailRetrieveGpc"},
    dropsendfailretrievegpc{YType::uint64, "dropSendFailRetrieveGpc"},
    failretrievevpcid{YType::uint64, "failRetrieveVpcId"},
    imapifail{YType::uint64, "imApiFail"},
    invalidcontext{YType::uint64, "invalidContext"},
    dropmctdown{YType::uint64, "dropMctDown"},
    recvdropmbuffail{YType::uint64, "recvDropMbufFail"},
    senddropmbuffail{YType::uint64, "sendDropMbufFail"},
    tunnelfailed{YType::uint64, "tunnelFailed"},
    tunnelfailcenetwork{YType::uint64, "tunnelFailCENetwork"},
    mcecmkeynotfound{YType::uint64, "mcecmKeyNotFound"}
{

    yang_name = "tunnelstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::~TunnelstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return tottunnelrcvd.is_set
	|| rxforingressvpc.is_set
	|| rxingressforgpc.is_set
	|| rxingressorphanvpc.is_set
	|| rxingressorphanvpcplus.is_set
	|| totpacksent.is_set
	|| pktsentarpsnoop.is_set
	|| pktsentnonlocalvip.is_set
	|| pktsentpeergway.is_set
	|| txingressvpc.is_set
	|| txingressgpc.is_set
	|| txingressorphanvpc.is_set
	|| txingressorphanvpcplus.is_set
	|| totrecvdropped.is_set
	|| totsenddropped.is_set
	|| sendfaildrop.is_set
	|| rcvdinvalidver.is_set
	|| rcvdinvalidpayloadtype.is_set
	|| rcvdmctif.is_set
	|| rcvdinvalidingressport.is_set
	|| dropsentinvalidport.is_set
	|| droprecvinvalidgpccore.is_set
	|| droprecvinvalidgpcpeer.is_set
	|| droprecvfailretrievegpc.is_set
	|| dropsendfailretrievegpc.is_set
	|| failretrievevpcid.is_set
	|| imapifail.is_set
	|| invalidcontext.is_set
	|| dropmctdown.is_set
	|| recvdropmbuffail.is_set
	|| senddropmbuffail.is_set
	|| tunnelfailed.is_set
	|| tunnelfailcenetwork.is_set
	|| mcecmkeynotfound.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tottunnelrcvd.yfilter)
	|| ydk::is_set(rxforingressvpc.yfilter)
	|| ydk::is_set(rxingressforgpc.yfilter)
	|| ydk::is_set(rxingressorphanvpc.yfilter)
	|| ydk::is_set(rxingressorphanvpcplus.yfilter)
	|| ydk::is_set(totpacksent.yfilter)
	|| ydk::is_set(pktsentarpsnoop.yfilter)
	|| ydk::is_set(pktsentnonlocalvip.yfilter)
	|| ydk::is_set(pktsentpeergway.yfilter)
	|| ydk::is_set(txingressvpc.yfilter)
	|| ydk::is_set(txingressgpc.yfilter)
	|| ydk::is_set(txingressorphanvpc.yfilter)
	|| ydk::is_set(txingressorphanvpcplus.yfilter)
	|| ydk::is_set(totrecvdropped.yfilter)
	|| ydk::is_set(totsenddropped.yfilter)
	|| ydk::is_set(sendfaildrop.yfilter)
	|| ydk::is_set(rcvdinvalidver.yfilter)
	|| ydk::is_set(rcvdinvalidpayloadtype.yfilter)
	|| ydk::is_set(rcvdmctif.yfilter)
	|| ydk::is_set(rcvdinvalidingressport.yfilter)
	|| ydk::is_set(dropsentinvalidport.yfilter)
	|| ydk::is_set(droprecvinvalidgpccore.yfilter)
	|| ydk::is_set(droprecvinvalidgpcpeer.yfilter)
	|| ydk::is_set(droprecvfailretrievegpc.yfilter)
	|| ydk::is_set(dropsendfailretrievegpc.yfilter)
	|| ydk::is_set(failretrievevpcid.yfilter)
	|| ydk::is_set(imapifail.yfilter)
	|| ydk::is_set(invalidcontext.yfilter)
	|| ydk::is_set(dropmctdown.yfilter)
	|| ydk::is_set(recvdropmbuffail.yfilter)
	|| ydk::is_set(senddropmbuffail.yfilter)
	|| ydk::is_set(tunnelfailed.yfilter)
	|| ydk::is_set(tunnelfailcenetwork.yfilter)
	|| ydk::is_set(mcecmkeynotfound.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tottunnelrcvd.is_set || is_set(tottunnelrcvd.yfilter)) leaf_name_data.push_back(tottunnelrcvd.get_name_leafdata());
    if (rxforingressvpc.is_set || is_set(rxforingressvpc.yfilter)) leaf_name_data.push_back(rxforingressvpc.get_name_leafdata());
    if (rxingressforgpc.is_set || is_set(rxingressforgpc.yfilter)) leaf_name_data.push_back(rxingressforgpc.get_name_leafdata());
    if (rxingressorphanvpc.is_set || is_set(rxingressorphanvpc.yfilter)) leaf_name_data.push_back(rxingressorphanvpc.get_name_leafdata());
    if (rxingressorphanvpcplus.is_set || is_set(rxingressorphanvpcplus.yfilter)) leaf_name_data.push_back(rxingressorphanvpcplus.get_name_leafdata());
    if (totpacksent.is_set || is_set(totpacksent.yfilter)) leaf_name_data.push_back(totpacksent.get_name_leafdata());
    if (pktsentarpsnoop.is_set || is_set(pktsentarpsnoop.yfilter)) leaf_name_data.push_back(pktsentarpsnoop.get_name_leafdata());
    if (pktsentnonlocalvip.is_set || is_set(pktsentnonlocalvip.yfilter)) leaf_name_data.push_back(pktsentnonlocalvip.get_name_leafdata());
    if (pktsentpeergway.is_set || is_set(pktsentpeergway.yfilter)) leaf_name_data.push_back(pktsentpeergway.get_name_leafdata());
    if (txingressvpc.is_set || is_set(txingressvpc.yfilter)) leaf_name_data.push_back(txingressvpc.get_name_leafdata());
    if (txingressgpc.is_set || is_set(txingressgpc.yfilter)) leaf_name_data.push_back(txingressgpc.get_name_leafdata());
    if (txingressorphanvpc.is_set || is_set(txingressorphanvpc.yfilter)) leaf_name_data.push_back(txingressorphanvpc.get_name_leafdata());
    if (txingressorphanvpcplus.is_set || is_set(txingressorphanvpcplus.yfilter)) leaf_name_data.push_back(txingressorphanvpcplus.get_name_leafdata());
    if (totrecvdropped.is_set || is_set(totrecvdropped.yfilter)) leaf_name_data.push_back(totrecvdropped.get_name_leafdata());
    if (totsenddropped.is_set || is_set(totsenddropped.yfilter)) leaf_name_data.push_back(totsenddropped.get_name_leafdata());
    if (sendfaildrop.is_set || is_set(sendfaildrop.yfilter)) leaf_name_data.push_back(sendfaildrop.get_name_leafdata());
    if (rcvdinvalidver.is_set || is_set(rcvdinvalidver.yfilter)) leaf_name_data.push_back(rcvdinvalidver.get_name_leafdata());
    if (rcvdinvalidpayloadtype.is_set || is_set(rcvdinvalidpayloadtype.yfilter)) leaf_name_data.push_back(rcvdinvalidpayloadtype.get_name_leafdata());
    if (rcvdmctif.is_set || is_set(rcvdmctif.yfilter)) leaf_name_data.push_back(rcvdmctif.get_name_leafdata());
    if (rcvdinvalidingressport.is_set || is_set(rcvdinvalidingressport.yfilter)) leaf_name_data.push_back(rcvdinvalidingressport.get_name_leafdata());
    if (dropsentinvalidport.is_set || is_set(dropsentinvalidport.yfilter)) leaf_name_data.push_back(dropsentinvalidport.get_name_leafdata());
    if (droprecvinvalidgpccore.is_set || is_set(droprecvinvalidgpccore.yfilter)) leaf_name_data.push_back(droprecvinvalidgpccore.get_name_leafdata());
    if (droprecvinvalidgpcpeer.is_set || is_set(droprecvinvalidgpcpeer.yfilter)) leaf_name_data.push_back(droprecvinvalidgpcpeer.get_name_leafdata());
    if (droprecvfailretrievegpc.is_set || is_set(droprecvfailretrievegpc.yfilter)) leaf_name_data.push_back(droprecvfailretrievegpc.get_name_leafdata());
    if (dropsendfailretrievegpc.is_set || is_set(dropsendfailretrievegpc.yfilter)) leaf_name_data.push_back(dropsendfailretrievegpc.get_name_leafdata());
    if (failretrievevpcid.is_set || is_set(failretrievevpcid.yfilter)) leaf_name_data.push_back(failretrievevpcid.get_name_leafdata());
    if (imapifail.is_set || is_set(imapifail.yfilter)) leaf_name_data.push_back(imapifail.get_name_leafdata());
    if (invalidcontext.is_set || is_set(invalidcontext.yfilter)) leaf_name_data.push_back(invalidcontext.get_name_leafdata());
    if (dropmctdown.is_set || is_set(dropmctdown.yfilter)) leaf_name_data.push_back(dropmctdown.get_name_leafdata());
    if (recvdropmbuffail.is_set || is_set(recvdropmbuffail.yfilter)) leaf_name_data.push_back(recvdropmbuffail.get_name_leafdata());
    if (senddropmbuffail.is_set || is_set(senddropmbuffail.yfilter)) leaf_name_data.push_back(senddropmbuffail.get_name_leafdata());
    if (tunnelfailed.is_set || is_set(tunnelfailed.yfilter)) leaf_name_data.push_back(tunnelfailed.get_name_leafdata());
    if (tunnelfailcenetwork.is_set || is_set(tunnelfailcenetwork.yfilter)) leaf_name_data.push_back(tunnelfailcenetwork.get_name_leafdata());
    if (mcecmkeynotfound.is_set || is_set(mcecmkeynotfound.yfilter)) leaf_name_data.push_back(mcecmkeynotfound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totTunnelRcvd")
    {
        tottunnelrcvd = value;
        tottunnelrcvd.value_namespace = name_space;
        tottunnelrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxForIngressVpc")
    {
        rxforingressvpc = value;
        rxforingressvpc.value_namespace = name_space;
        rxforingressvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressforGpc")
    {
        rxingressforgpc = value;
        rxingressforgpc.value_namespace = name_space;
        rxingressforgpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressOrphanVpc")
    {
        rxingressorphanvpc = value;
        rxingressorphanvpc.value_namespace = name_space;
        rxingressorphanvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressOrphanVpcPlus")
    {
        rxingressorphanvpcplus = value;
        rxingressorphanvpcplus.value_namespace = name_space;
        rxingressorphanvpcplus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totPackSent")
    {
        totpacksent = value;
        totpacksent.value_namespace = name_space;
        totpacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentArpSnoop")
    {
        pktsentarpsnoop = value;
        pktsentarpsnoop.value_namespace = name_space;
        pktsentarpsnoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentNonlocalVip")
    {
        pktsentnonlocalvip = value;
        pktsentnonlocalvip.value_namespace = name_space;
        pktsentnonlocalvip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentPeerGway")
    {
        pktsentpeergway = value;
        pktsentpeergway.value_namespace = name_space;
        pktsentpeergway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressVpc")
    {
        txingressvpc = value;
        txingressvpc.value_namespace = name_space;
        txingressvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressGpc")
    {
        txingressgpc = value;
        txingressgpc.value_namespace = name_space;
        txingressgpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressOrphanVpc")
    {
        txingressorphanvpc = value;
        txingressorphanvpc.value_namespace = name_space;
        txingressorphanvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressOrphanVpcPlus")
    {
        txingressorphanvpcplus = value;
        txingressorphanvpcplus.value_namespace = name_space;
        txingressorphanvpcplus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRecvDropped")
    {
        totrecvdropped = value;
        totrecvdropped.value_namespace = name_space;
        totrecvdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSendDropped")
    {
        totsenddropped = value;
        totsenddropped.value_namespace = name_space;
        totsenddropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendFailDrop")
    {
        sendfaildrop = value;
        sendfaildrop.value_namespace = name_space;
        sendfaildrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidVer")
    {
        rcvdinvalidver = value;
        rcvdinvalidver.value_namespace = name_space;
        rcvdinvalidver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidPayloadType")
    {
        rcvdinvalidpayloadtype = value;
        rcvdinvalidpayloadtype.value_namespace = name_space;
        rcvdinvalidpayloadtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdMctIf")
    {
        rcvdmctif = value;
        rcvdmctif.value_namespace = name_space;
        rcvdmctif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidIngressPort")
    {
        rcvdinvalidingressport = value;
        rcvdinvalidingressport.value_namespace = name_space;
        rcvdinvalidingressport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSentInvalidPort")
    {
        dropsentinvalidport = value;
        dropsentinvalidport.value_namespace = name_space;
        dropsentinvalidport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvInvalidGpcCore")
    {
        droprecvinvalidgpccore = value;
        droprecvinvalidgpccore.value_namespace = name_space;
        droprecvinvalidgpccore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvInvalidGpcPeer")
    {
        droprecvinvalidgpcpeer = value;
        droprecvinvalidgpcpeer.value_namespace = name_space;
        droprecvinvalidgpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvFailRetrieveGpc")
    {
        droprecvfailretrievegpc = value;
        droprecvfailretrievegpc.value_namespace = name_space;
        droprecvfailretrievegpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSendFailRetrieveGpc")
    {
        dropsendfailretrievegpc = value;
        dropsendfailretrievegpc.value_namespace = name_space;
        dropsendfailretrievegpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failRetrieveVpcId")
    {
        failretrievevpcid = value;
        failretrievevpcid.value_namespace = name_space;
        failretrievevpcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imApiFail")
    {
        imapifail = value;
        imapifail.value_namespace = name_space;
        imapifail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidContext")
    {
        invalidcontext = value;
        invalidcontext.value_namespace = name_space;
        invalidcontext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropMctDown")
    {
        dropmctdown = value;
        dropmctdown.value_namespace = name_space;
        dropmctdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDropMbufFail")
    {
        recvdropmbuffail = value;
        recvdropmbuffail.value_namespace = name_space;
        recvdropmbuffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendDropMbufFail")
    {
        senddropmbuffail = value;
        senddropmbuffail.value_namespace = name_space;
        senddropmbuffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelFailed")
    {
        tunnelfailed = value;
        tunnelfailed.value_namespace = name_space;
        tunnelfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelFailCENetwork")
    {
        tunnelfailcenetwork = value;
        tunnelfailcenetwork.value_namespace = name_space;
        tunnelfailcenetwork.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmKeyNotFound")
    {
        mcecmkeynotfound = value;
        mcecmkeynotfound.value_namespace = name_space;
        mcecmkeynotfound.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totTunnelRcvd")
    {
        tottunnelrcvd.yfilter = yfilter;
    }
    if(value_path == "rxForIngressVpc")
    {
        rxforingressvpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressforGpc")
    {
        rxingressforgpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressOrphanVpc")
    {
        rxingressorphanvpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressOrphanVpcPlus")
    {
        rxingressorphanvpcplus.yfilter = yfilter;
    }
    if(value_path == "totPackSent")
    {
        totpacksent.yfilter = yfilter;
    }
    if(value_path == "pktSentArpSnoop")
    {
        pktsentarpsnoop.yfilter = yfilter;
    }
    if(value_path == "pktSentNonlocalVip")
    {
        pktsentnonlocalvip.yfilter = yfilter;
    }
    if(value_path == "pktSentPeerGway")
    {
        pktsentpeergway.yfilter = yfilter;
    }
    if(value_path == "txIngressVpc")
    {
        txingressvpc.yfilter = yfilter;
    }
    if(value_path == "txIngressGpc")
    {
        txingressgpc.yfilter = yfilter;
    }
    if(value_path == "txIngressOrphanVpc")
    {
        txingressorphanvpc.yfilter = yfilter;
    }
    if(value_path == "txIngressOrphanVpcPlus")
    {
        txingressorphanvpcplus.yfilter = yfilter;
    }
    if(value_path == "totRecvDropped")
    {
        totrecvdropped.yfilter = yfilter;
    }
    if(value_path == "totSendDropped")
    {
        totsenddropped.yfilter = yfilter;
    }
    if(value_path == "sendFailDrop")
    {
        sendfaildrop.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidVer")
    {
        rcvdinvalidver.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidPayloadType")
    {
        rcvdinvalidpayloadtype.yfilter = yfilter;
    }
    if(value_path == "rcvdMctIf")
    {
        rcvdmctif.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidIngressPort")
    {
        rcvdinvalidingressport.yfilter = yfilter;
    }
    if(value_path == "dropSentInvalidPort")
    {
        dropsentinvalidport.yfilter = yfilter;
    }
    if(value_path == "dropRecvInvalidGpcCore")
    {
        droprecvinvalidgpccore.yfilter = yfilter;
    }
    if(value_path == "dropRecvInvalidGpcPeer")
    {
        droprecvinvalidgpcpeer.yfilter = yfilter;
    }
    if(value_path == "dropRecvFailRetrieveGpc")
    {
        droprecvfailretrievegpc.yfilter = yfilter;
    }
    if(value_path == "dropSendFailRetrieveGpc")
    {
        dropsendfailretrievegpc.yfilter = yfilter;
    }
    if(value_path == "failRetrieveVpcId")
    {
        failretrievevpcid.yfilter = yfilter;
    }
    if(value_path == "imApiFail")
    {
        imapifail.yfilter = yfilter;
    }
    if(value_path == "invalidContext")
    {
        invalidcontext.yfilter = yfilter;
    }
    if(value_path == "dropMctDown")
    {
        dropmctdown.yfilter = yfilter;
    }
    if(value_path == "recvDropMbufFail")
    {
        recvdropmbuffail.yfilter = yfilter;
    }
    if(value_path == "sendDropMbufFail")
    {
        senddropmbuffail.yfilter = yfilter;
    }
    if(value_path == "tunnelFailed")
    {
        tunnelfailed.yfilter = yfilter;
    }
    if(value_path == "tunnelFailCENetwork")
    {
        tunnelfailcenetwork.yfilter = yfilter;
    }
    if(value_path == "mcecmKeyNotFound")
    {
        mcecmkeynotfound.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totTunnelRcvd" || name == "rxForIngressVpc" || name == "rxIngressforGpc" || name == "rxIngressOrphanVpc" || name == "rxIngressOrphanVpcPlus" || name == "totPackSent" || name == "pktSentArpSnoop" || name == "pktSentNonlocalVip" || name == "pktSentPeerGway" || name == "txIngressVpc" || name == "txIngressGpc" || name == "txIngressOrphanVpc" || name == "txIngressOrphanVpcPlus" || name == "totRecvDropped" || name == "totSendDropped" || name == "sendFailDrop" || name == "rcvdInvalidVer" || name == "rcvdInvalidPayloadType" || name == "rcvdMctIf" || name == "rcvdInvalidIngressPort" || name == "dropSentInvalidPort" || name == "dropRecvInvalidGpcCore" || name == "dropRecvInvalidGpcPeer" || name == "dropRecvFailRetrieveGpc" || name == "dropSendFailRetrieveGpc" || name == "failRetrieveVpcId" || name == "imApiFail" || name == "invalidContext" || name == "dropMctDown" || name == "recvDropMbufFail" || name == "sendDropMbufFail" || name == "tunnelFailed" || name == "tunnelFailCENetwork" || name == "mcecmKeyNotFound")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::SupcachestatsItems()
    :
    requests{YType::uint64, "requests"},
    requestsl2{YType::uint64, "requestsL2"},
    gratuitous{YType::uint64, "gratuitous"},
    gratuitousl2{YType::uint64, "gratuitousL2"},
    fwdrequestsl3{YType::uint64, "fwdRequestsL3"},
    fwdrepliesl3{YType::uint64, "fwdRepliesL3"},
    fwdrequestoncoreport{YType::uint64, "fwdRequestOnCorePort"},
    fwdreplyoncoreport{YType::uint64, "fwdReplyOnCorePort"},
    sentdrop{YType::uint64, "sentDrop"},
    sentreql2{YType::uint64, "sentReqL2"},
    sentreplyl2{YType::uint64, "sentReplyL2"},
    sentreqcorel2{YType::uint64, "sentReqCoreL2"},
    sentreplycorel2{YType::uint64, "sentReplyCoreL2"},
    sentdropl2{YType::uint64, "sentDropL2"},
    recvreql3{YType::uint64, "recvReqL3"},
    recvreplyl3{YType::uint64, "recvReplyL3"},
    recvlocalreql3{YType::uint64, "recvLocalReqL3"},
    recvlocalreplyl3{YType::uint64, "recvLocalReplyL3"},
    recvgratarp{YType::uint64, "recvGratArp"},
    recvdrop{YType::uint64, "recvDrop"},
    recvrequestl2{YType::uint64, "recvRequestL2"},
    recvreplyl2{YType::uint64, "recvReplyL2"},
    recvgratarpl2{YType::uint64, "recvGratArpL2"},
    recvdropl2{YType::uint64, "recvDropL2"},
    localentryadds{YType::uint64, "localEntryAdds"},
    localentrydel{YType::uint64, "localEntryDel"}
{

    yang_name = "supcachestats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::~SupcachestatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set
	|| requestsl2.is_set
	|| gratuitous.is_set
	|| gratuitousl2.is_set
	|| fwdrequestsl3.is_set
	|| fwdrepliesl3.is_set
	|| fwdrequestoncoreport.is_set
	|| fwdreplyoncoreport.is_set
	|| sentdrop.is_set
	|| sentreql2.is_set
	|| sentreplyl2.is_set
	|| sentreqcorel2.is_set
	|| sentreplycorel2.is_set
	|| sentdropl2.is_set
	|| recvreql3.is_set
	|| recvreplyl3.is_set
	|| recvlocalreql3.is_set
	|| recvlocalreplyl3.is_set
	|| recvgratarp.is_set
	|| recvdrop.is_set
	|| recvrequestl2.is_set
	|| recvreplyl2.is_set
	|| recvgratarpl2.is_set
	|| recvdropl2.is_set
	|| localentryadds.is_set
	|| localentrydel.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(requestsl2.yfilter)
	|| ydk::is_set(gratuitous.yfilter)
	|| ydk::is_set(gratuitousl2.yfilter)
	|| ydk::is_set(fwdrequestsl3.yfilter)
	|| ydk::is_set(fwdrepliesl3.yfilter)
	|| ydk::is_set(fwdrequestoncoreport.yfilter)
	|| ydk::is_set(fwdreplyoncoreport.yfilter)
	|| ydk::is_set(sentdrop.yfilter)
	|| ydk::is_set(sentreql2.yfilter)
	|| ydk::is_set(sentreplyl2.yfilter)
	|| ydk::is_set(sentreqcorel2.yfilter)
	|| ydk::is_set(sentreplycorel2.yfilter)
	|| ydk::is_set(sentdropl2.yfilter)
	|| ydk::is_set(recvreql3.yfilter)
	|| ydk::is_set(recvreplyl3.yfilter)
	|| ydk::is_set(recvlocalreql3.yfilter)
	|| ydk::is_set(recvlocalreplyl3.yfilter)
	|| ydk::is_set(recvgratarp.yfilter)
	|| ydk::is_set(recvdrop.yfilter)
	|| ydk::is_set(recvrequestl2.yfilter)
	|| ydk::is_set(recvreplyl2.yfilter)
	|| ydk::is_set(recvgratarpl2.yfilter)
	|| ydk::is_set(recvdropl2.yfilter)
	|| ydk::is_set(localentryadds.yfilter)
	|| ydk::is_set(localentrydel.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supcachestats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (requestsl2.is_set || is_set(requestsl2.yfilter)) leaf_name_data.push_back(requestsl2.get_name_leafdata());
    if (gratuitous.is_set || is_set(gratuitous.yfilter)) leaf_name_data.push_back(gratuitous.get_name_leafdata());
    if (gratuitousl2.is_set || is_set(gratuitousl2.yfilter)) leaf_name_data.push_back(gratuitousl2.get_name_leafdata());
    if (fwdrequestsl3.is_set || is_set(fwdrequestsl3.yfilter)) leaf_name_data.push_back(fwdrequestsl3.get_name_leafdata());
    if (fwdrepliesl3.is_set || is_set(fwdrepliesl3.yfilter)) leaf_name_data.push_back(fwdrepliesl3.get_name_leafdata());
    if (fwdrequestoncoreport.is_set || is_set(fwdrequestoncoreport.yfilter)) leaf_name_data.push_back(fwdrequestoncoreport.get_name_leafdata());
    if (fwdreplyoncoreport.is_set || is_set(fwdreplyoncoreport.yfilter)) leaf_name_data.push_back(fwdreplyoncoreport.get_name_leafdata());
    if (sentdrop.is_set || is_set(sentdrop.yfilter)) leaf_name_data.push_back(sentdrop.get_name_leafdata());
    if (sentreql2.is_set || is_set(sentreql2.yfilter)) leaf_name_data.push_back(sentreql2.get_name_leafdata());
    if (sentreplyl2.is_set || is_set(sentreplyl2.yfilter)) leaf_name_data.push_back(sentreplyl2.get_name_leafdata());
    if (sentreqcorel2.is_set || is_set(sentreqcorel2.yfilter)) leaf_name_data.push_back(sentreqcorel2.get_name_leafdata());
    if (sentreplycorel2.is_set || is_set(sentreplycorel2.yfilter)) leaf_name_data.push_back(sentreplycorel2.get_name_leafdata());
    if (sentdropl2.is_set || is_set(sentdropl2.yfilter)) leaf_name_data.push_back(sentdropl2.get_name_leafdata());
    if (recvreql3.is_set || is_set(recvreql3.yfilter)) leaf_name_data.push_back(recvreql3.get_name_leafdata());
    if (recvreplyl3.is_set || is_set(recvreplyl3.yfilter)) leaf_name_data.push_back(recvreplyl3.get_name_leafdata());
    if (recvlocalreql3.is_set || is_set(recvlocalreql3.yfilter)) leaf_name_data.push_back(recvlocalreql3.get_name_leafdata());
    if (recvlocalreplyl3.is_set || is_set(recvlocalreplyl3.yfilter)) leaf_name_data.push_back(recvlocalreplyl3.get_name_leafdata());
    if (recvgratarp.is_set || is_set(recvgratarp.yfilter)) leaf_name_data.push_back(recvgratarp.get_name_leafdata());
    if (recvdrop.is_set || is_set(recvdrop.yfilter)) leaf_name_data.push_back(recvdrop.get_name_leafdata());
    if (recvrequestl2.is_set || is_set(recvrequestl2.yfilter)) leaf_name_data.push_back(recvrequestl2.get_name_leafdata());
    if (recvreplyl2.is_set || is_set(recvreplyl2.yfilter)) leaf_name_data.push_back(recvreplyl2.get_name_leafdata());
    if (recvgratarpl2.is_set || is_set(recvgratarpl2.yfilter)) leaf_name_data.push_back(recvgratarpl2.get_name_leafdata());
    if (recvdropl2.is_set || is_set(recvdropl2.yfilter)) leaf_name_data.push_back(recvdropl2.get_name_leafdata());
    if (localentryadds.is_set || is_set(localentryadds.yfilter)) leaf_name_data.push_back(localentryadds.get_name_leafdata());
    if (localentrydel.is_set || is_set(localentrydel.yfilter)) leaf_name_data.push_back(localentrydel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requestsL2")
    {
        requestsl2 = value;
        requestsl2.value_namespace = name_space;
        requestsl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous")
    {
        gratuitous = value;
        gratuitous.value_namespace = name_space;
        gratuitous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousL2")
    {
        gratuitousl2 = value;
        gratuitousl2.value_namespace = name_space;
        gratuitousl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRequestsL3")
    {
        fwdrequestsl3 = value;
        fwdrequestsl3.value_namespace = name_space;
        fwdrequestsl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRepliesL3")
    {
        fwdrepliesl3 = value;
        fwdrepliesl3.value_namespace = name_space;
        fwdrepliesl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRequestOnCorePort")
    {
        fwdrequestoncoreport = value;
        fwdrequestoncoreport.value_namespace = name_space;
        fwdrequestoncoreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdReplyOnCorePort")
    {
        fwdreplyoncoreport = value;
        fwdreplyoncoreport.value_namespace = name_space;
        fwdreplyoncoreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentDrop")
    {
        sentdrop = value;
        sentdrop.value_namespace = name_space;
        sentdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReqL2")
    {
        sentreql2 = value;
        sentreql2.value_namespace = name_space;
        sentreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReplyL2")
    {
        sentreplyl2 = value;
        sentreplyl2.value_namespace = name_space;
        sentreplyl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReqCoreL2")
    {
        sentreqcorel2 = value;
        sentreqcorel2.value_namespace = name_space;
        sentreqcorel2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReplyCoreL2")
    {
        sentreplycorel2 = value;
        sentreplycorel2.value_namespace = name_space;
        sentreplycorel2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentDropL2")
    {
        sentdropl2 = value;
        sentdropl2.value_namespace = name_space;
        sentdropl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReqL3")
    {
        recvreql3 = value;
        recvreql3.value_namespace = name_space;
        recvreql3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReplyL3")
    {
        recvreplyl3 = value;
        recvreplyl3.value_namespace = name_space;
        recvreplyl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvLocalReqL3")
    {
        recvlocalreql3 = value;
        recvlocalreql3.value_namespace = name_space;
        recvlocalreql3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvLocalReplyL3")
    {
        recvlocalreplyl3 = value;
        recvlocalreplyl3.value_namespace = name_space;
        recvlocalreplyl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvGratArp")
    {
        recvgratarp = value;
        recvgratarp.value_namespace = name_space;
        recvgratarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDrop")
    {
        recvdrop = value;
        recvdrop.value_namespace = name_space;
        recvdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvRequestL2")
    {
        recvrequestl2 = value;
        recvrequestl2.value_namespace = name_space;
        recvrequestl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReplyL2")
    {
        recvreplyl2 = value;
        recvreplyl2.value_namespace = name_space;
        recvreplyl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvGratArpL2")
    {
        recvgratarpl2 = value;
        recvgratarpl2.value_namespace = name_space;
        recvgratarpl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDropL2")
    {
        recvdropl2 = value;
        recvdropl2.value_namespace = name_space;
        recvdropl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localEntryAdds")
    {
        localentryadds = value;
        localentryadds.value_namespace = name_space;
        localentryadds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localEntryDel")
    {
        localentrydel = value;
        localentrydel.value_namespace = name_space;
        localentrydel.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "requestsL2")
    {
        requestsl2.yfilter = yfilter;
    }
    if(value_path == "gratuitous")
    {
        gratuitous.yfilter = yfilter;
    }
    if(value_path == "gratuitousL2")
    {
        gratuitousl2.yfilter = yfilter;
    }
    if(value_path == "fwdRequestsL3")
    {
        fwdrequestsl3.yfilter = yfilter;
    }
    if(value_path == "fwdRepliesL3")
    {
        fwdrepliesl3.yfilter = yfilter;
    }
    if(value_path == "fwdRequestOnCorePort")
    {
        fwdrequestoncoreport.yfilter = yfilter;
    }
    if(value_path == "fwdReplyOnCorePort")
    {
        fwdreplyoncoreport.yfilter = yfilter;
    }
    if(value_path == "sentDrop")
    {
        sentdrop.yfilter = yfilter;
    }
    if(value_path == "sentReqL2")
    {
        sentreql2.yfilter = yfilter;
    }
    if(value_path == "sentReplyL2")
    {
        sentreplyl2.yfilter = yfilter;
    }
    if(value_path == "sentReqCoreL2")
    {
        sentreqcorel2.yfilter = yfilter;
    }
    if(value_path == "sentReplyCoreL2")
    {
        sentreplycorel2.yfilter = yfilter;
    }
    if(value_path == "sentDropL2")
    {
        sentdropl2.yfilter = yfilter;
    }
    if(value_path == "recvReqL3")
    {
        recvreql3.yfilter = yfilter;
    }
    if(value_path == "recvReplyL3")
    {
        recvreplyl3.yfilter = yfilter;
    }
    if(value_path == "recvLocalReqL3")
    {
        recvlocalreql3.yfilter = yfilter;
    }
    if(value_path == "recvLocalReplyL3")
    {
        recvlocalreplyl3.yfilter = yfilter;
    }
    if(value_path == "recvGratArp")
    {
        recvgratarp.yfilter = yfilter;
    }
    if(value_path == "recvDrop")
    {
        recvdrop.yfilter = yfilter;
    }
    if(value_path == "recvRequestL2")
    {
        recvrequestl2.yfilter = yfilter;
    }
    if(value_path == "recvReplyL2")
    {
        recvreplyl2.yfilter = yfilter;
    }
    if(value_path == "recvGratArpL2")
    {
        recvgratarpl2.yfilter = yfilter;
    }
    if(value_path == "recvDropL2")
    {
        recvdropl2.yfilter = yfilter;
    }
    if(value_path == "localEntryAdds")
    {
        localentryadds.yfilter = yfilter;
    }
    if(value_path == "localEntryDel")
    {
        localentrydel.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests" || name == "requestsL2" || name == "gratuitous" || name == "gratuitousL2" || name == "fwdRequestsL3" || name == "fwdRepliesL3" || name == "fwdRequestOnCorePort" || name == "fwdReplyOnCorePort" || name == "sentDrop" || name == "sentReqL2" || name == "sentReplyL2" || name == "sentReqCoreL2" || name == "sentReplyCoreL2" || name == "sentDropL2" || name == "recvReqL3" || name == "recvReplyL3" || name == "recvLocalReqL3" || name == "recvLocalReplyL3" || name == "recvGratArp" || name == "recvDrop" || name == "recvRequestL2" || name == "recvReplyL2" || name == "recvGratArpL2" || name == "recvDropL2" || name == "localEntryAdds" || name == "localEntryDel")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::OfastatsItems()
    :
    dpadjerrdel{YType::uint64, "dpAdjErrDel"},
    cpmacmismatcherrdel{YType::uint64, "cpMacMismatchErrDel"},
    cpnullmacerrdel{YType::uint64, "cpNullMacErrDel"},
    cpnoadjerrdel{YType::uint64, "cpNoAdjErrDel"},
    cpcpnhmismatcherrdel{YType::uint64, "cpCpNhMismatchErrDel"},
    cpadjdelfailureerr{YType::uint64, "cpAdjDelFailureErr"},
    cpnullmacerradd{YType::uint64, "cpNullMacErrAdd"},
    cpdpmacmismatcherradd{YType::uint64, "cpDpMacMismatchErrAdd"},
    cpcpmacmismatcherradd{YType::uint64, "cpCpMacMismatchErrAdd"},
    cpaddfirsterr{YType::uint64, "cpAddFirstErr"},
    dpoverwritecperr{YType::uint64, "dpOverwriteCpErr"},
    dpcpnhmismatcherradd{YType::uint64, "dpCpNhMismatchErrAdd"},
    cpcpnhmismatcherradd{YType::uint64, "cpCpNhMismatchErrAdd"},
    cpdpnhmismatcherradd{YType::uint64, "cpDpNhMismatchErrAdd"},
    cpadjaddfailureerr{YType::uint64, "cpAdjAddFailureErr"},
    peeriplookuprecphyiod{YType::uint64, "peerIPLookupRecPhyIod"},
    peeripipv6recphyiod{YType::uint64, "peerIPIPv6RecPhyIod"},
    peeriplookupadjphyiod{YType::uint64, "peerIPLookupAdjPhyIod"},
    peeripipv6adjphyiod{YType::uint64, "peerIPIPv6AdjPhyIod"},
    barrierresponseerr{YType::uint64, "barrierResponseErr"}
{

    yang_name = "ofastats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::~OfastatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dpadjerrdel.is_set
	|| cpmacmismatcherrdel.is_set
	|| cpnullmacerrdel.is_set
	|| cpnoadjerrdel.is_set
	|| cpcpnhmismatcherrdel.is_set
	|| cpadjdelfailureerr.is_set
	|| cpnullmacerradd.is_set
	|| cpdpmacmismatcherradd.is_set
	|| cpcpmacmismatcherradd.is_set
	|| cpaddfirsterr.is_set
	|| dpoverwritecperr.is_set
	|| dpcpnhmismatcherradd.is_set
	|| cpcpnhmismatcherradd.is_set
	|| cpdpnhmismatcherradd.is_set
	|| cpadjaddfailureerr.is_set
	|| peeriplookuprecphyiod.is_set
	|| peeripipv6recphyiod.is_set
	|| peeriplookupadjphyiod.is_set
	|| peeripipv6adjphyiod.is_set
	|| barrierresponseerr.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dpadjerrdel.yfilter)
	|| ydk::is_set(cpmacmismatcherrdel.yfilter)
	|| ydk::is_set(cpnullmacerrdel.yfilter)
	|| ydk::is_set(cpnoadjerrdel.yfilter)
	|| ydk::is_set(cpcpnhmismatcherrdel.yfilter)
	|| ydk::is_set(cpadjdelfailureerr.yfilter)
	|| ydk::is_set(cpnullmacerradd.yfilter)
	|| ydk::is_set(cpdpmacmismatcherradd.yfilter)
	|| ydk::is_set(cpcpmacmismatcherradd.yfilter)
	|| ydk::is_set(cpaddfirsterr.yfilter)
	|| ydk::is_set(dpoverwritecperr.yfilter)
	|| ydk::is_set(dpcpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpcpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpdpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpadjaddfailureerr.yfilter)
	|| ydk::is_set(peeriplookuprecphyiod.yfilter)
	|| ydk::is_set(peeripipv6recphyiod.yfilter)
	|| ydk::is_set(peeriplookupadjphyiod.yfilter)
	|| ydk::is_set(peeripipv6adjphyiod.yfilter)
	|| ydk::is_set(barrierresponseerr.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ofastats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dpadjerrdel.is_set || is_set(dpadjerrdel.yfilter)) leaf_name_data.push_back(dpadjerrdel.get_name_leafdata());
    if (cpmacmismatcherrdel.is_set || is_set(cpmacmismatcherrdel.yfilter)) leaf_name_data.push_back(cpmacmismatcherrdel.get_name_leafdata());
    if (cpnullmacerrdel.is_set || is_set(cpnullmacerrdel.yfilter)) leaf_name_data.push_back(cpnullmacerrdel.get_name_leafdata());
    if (cpnoadjerrdel.is_set || is_set(cpnoadjerrdel.yfilter)) leaf_name_data.push_back(cpnoadjerrdel.get_name_leafdata());
    if (cpcpnhmismatcherrdel.is_set || is_set(cpcpnhmismatcherrdel.yfilter)) leaf_name_data.push_back(cpcpnhmismatcherrdel.get_name_leafdata());
    if (cpadjdelfailureerr.is_set || is_set(cpadjdelfailureerr.yfilter)) leaf_name_data.push_back(cpadjdelfailureerr.get_name_leafdata());
    if (cpnullmacerradd.is_set || is_set(cpnullmacerradd.yfilter)) leaf_name_data.push_back(cpnullmacerradd.get_name_leafdata());
    if (cpdpmacmismatcherradd.is_set || is_set(cpdpmacmismatcherradd.yfilter)) leaf_name_data.push_back(cpdpmacmismatcherradd.get_name_leafdata());
    if (cpcpmacmismatcherradd.is_set || is_set(cpcpmacmismatcherradd.yfilter)) leaf_name_data.push_back(cpcpmacmismatcherradd.get_name_leafdata());
    if (cpaddfirsterr.is_set || is_set(cpaddfirsterr.yfilter)) leaf_name_data.push_back(cpaddfirsterr.get_name_leafdata());
    if (dpoverwritecperr.is_set || is_set(dpoverwritecperr.yfilter)) leaf_name_data.push_back(dpoverwritecperr.get_name_leafdata());
    if (dpcpnhmismatcherradd.is_set || is_set(dpcpnhmismatcherradd.yfilter)) leaf_name_data.push_back(dpcpnhmismatcherradd.get_name_leafdata());
    if (cpcpnhmismatcherradd.is_set || is_set(cpcpnhmismatcherradd.yfilter)) leaf_name_data.push_back(cpcpnhmismatcherradd.get_name_leafdata());
    if (cpdpnhmismatcherradd.is_set || is_set(cpdpnhmismatcherradd.yfilter)) leaf_name_data.push_back(cpdpnhmismatcherradd.get_name_leafdata());
    if (cpadjaddfailureerr.is_set || is_set(cpadjaddfailureerr.yfilter)) leaf_name_data.push_back(cpadjaddfailureerr.get_name_leafdata());
    if (peeriplookuprecphyiod.is_set || is_set(peeriplookuprecphyiod.yfilter)) leaf_name_data.push_back(peeriplookuprecphyiod.get_name_leafdata());
    if (peeripipv6recphyiod.is_set || is_set(peeripipv6recphyiod.yfilter)) leaf_name_data.push_back(peeripipv6recphyiod.get_name_leafdata());
    if (peeriplookupadjphyiod.is_set || is_set(peeriplookupadjphyiod.yfilter)) leaf_name_data.push_back(peeriplookupadjphyiod.get_name_leafdata());
    if (peeripipv6adjphyiod.is_set || is_set(peeripipv6adjphyiod.yfilter)) leaf_name_data.push_back(peeripipv6adjphyiod.get_name_leafdata());
    if (barrierresponseerr.is_set || is_set(barrierresponseerr.yfilter)) leaf_name_data.push_back(barrierresponseerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dpAdjErrDel")
    {
        dpadjerrdel = value;
        dpadjerrdel.value_namespace = name_space;
        dpadjerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpMacMismatchErrDel")
    {
        cpmacmismatcherrdel = value;
        cpmacmismatcherrdel.value_namespace = name_space;
        cpmacmismatcherrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNullMacErrDel")
    {
        cpnullmacerrdel = value;
        cpnullmacerrdel.value_namespace = name_space;
        cpnullmacerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNoAdjErrDel")
    {
        cpnoadjerrdel = value;
        cpnoadjerrdel.value_namespace = name_space;
        cpnoadjerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpNhMismatchErrDel")
    {
        cpcpnhmismatcherrdel = value;
        cpcpnhmismatcherrdel.value_namespace = name_space;
        cpcpnhmismatcherrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAdjDelFailureErr")
    {
        cpadjdelfailureerr = value;
        cpadjdelfailureerr.value_namespace = name_space;
        cpadjdelfailureerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNullMacErrAdd")
    {
        cpnullmacerradd = value;
        cpnullmacerradd.value_namespace = name_space;
        cpnullmacerradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpDpMacMismatchErrAdd")
    {
        cpdpmacmismatcherradd = value;
        cpdpmacmismatcherradd.value_namespace = name_space;
        cpdpmacmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpMacMismatchErrAdd")
    {
        cpcpmacmismatcherradd = value;
        cpcpmacmismatcherradd.value_namespace = name_space;
        cpcpmacmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAddFirstErr")
    {
        cpaddfirsterr = value;
        cpaddfirsterr.value_namespace = name_space;
        cpaddfirsterr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpOverwriteCpErr")
    {
        dpoverwritecperr = value;
        dpoverwritecperr.value_namespace = name_space;
        dpoverwritecperr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpCpNhMismatchErrAdd")
    {
        dpcpnhmismatcherradd = value;
        dpcpnhmismatcherradd.value_namespace = name_space;
        dpcpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpNhMismatchErrAdd")
    {
        cpcpnhmismatcherradd = value;
        cpcpnhmismatcherradd.value_namespace = name_space;
        cpcpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpDpNhMismatchErrAdd")
    {
        cpdpnhmismatcherradd = value;
        cpdpnhmismatcherradd.value_namespace = name_space;
        cpdpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAdjAddFailureErr")
    {
        cpadjaddfailureerr = value;
        cpadjaddfailureerr.value_namespace = name_space;
        cpadjaddfailureerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIPLookupRecPhyIod")
    {
        peeriplookuprecphyiod = value;
        peeriplookuprecphyiod.value_namespace = name_space;
        peeriplookuprecphyiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIPIPv6RecPhyIod")
    {
        peeripipv6recphyiod = value;
        peeripipv6recphyiod.value_namespace = name_space;
        peeripipv6recphyiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIPLookupAdjPhyIod")
    {
        peeriplookupadjphyiod = value;
        peeriplookupadjphyiod.value_namespace = name_space;
        peeriplookupadjphyiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIPIPv6AdjPhyIod")
    {
        peeripipv6adjphyiod = value;
        peeripipv6adjphyiod.value_namespace = name_space;
        peeripipv6adjphyiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "barrierResponseErr")
    {
        barrierresponseerr = value;
        barrierresponseerr.value_namespace = name_space;
        barrierresponseerr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dpAdjErrDel")
    {
        dpadjerrdel.yfilter = yfilter;
    }
    if(value_path == "cpMacMismatchErrDel")
    {
        cpmacmismatcherrdel.yfilter = yfilter;
    }
    if(value_path == "cpNullMacErrDel")
    {
        cpnullmacerrdel.yfilter = yfilter;
    }
    if(value_path == "cpNoAdjErrDel")
    {
        cpnoadjerrdel.yfilter = yfilter;
    }
    if(value_path == "cpCpNhMismatchErrDel")
    {
        cpcpnhmismatcherrdel.yfilter = yfilter;
    }
    if(value_path == "cpAdjDelFailureErr")
    {
        cpadjdelfailureerr.yfilter = yfilter;
    }
    if(value_path == "cpNullMacErrAdd")
    {
        cpnullmacerradd.yfilter = yfilter;
    }
    if(value_path == "cpDpMacMismatchErrAdd")
    {
        cpdpmacmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpCpMacMismatchErrAdd")
    {
        cpcpmacmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpAddFirstErr")
    {
        cpaddfirsterr.yfilter = yfilter;
    }
    if(value_path == "dpOverwriteCpErr")
    {
        dpoverwritecperr.yfilter = yfilter;
    }
    if(value_path == "dpCpNhMismatchErrAdd")
    {
        dpcpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpCpNhMismatchErrAdd")
    {
        cpcpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpDpNhMismatchErrAdd")
    {
        cpdpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpAdjAddFailureErr")
    {
        cpadjaddfailureerr.yfilter = yfilter;
    }
    if(value_path == "peerIPLookupRecPhyIod")
    {
        peeriplookuprecphyiod.yfilter = yfilter;
    }
    if(value_path == "peerIPIPv6RecPhyIod")
    {
        peeripipv6recphyiod.yfilter = yfilter;
    }
    if(value_path == "peerIPLookupAdjPhyIod")
    {
        peeriplookupadjphyiod.yfilter = yfilter;
    }
    if(value_path == "peerIPIPv6AdjPhyIod")
    {
        peeripipv6adjphyiod.yfilter = yfilter;
    }
    if(value_path == "barrierResponseErr")
    {
        barrierresponseerr.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpAdjErrDel" || name == "cpMacMismatchErrDel" || name == "cpNullMacErrDel" || name == "cpNoAdjErrDel" || name == "cpCpNhMismatchErrDel" || name == "cpAdjDelFailureErr" || name == "cpNullMacErrAdd" || name == "cpDpMacMismatchErrAdd" || name == "cpCpMacMismatchErrAdd" || name == "cpAddFirstErr" || name == "dpOverwriteCpErr" || name == "dpCpNhMismatchErrAdd" || name == "cpCpNhMismatchErrAdd" || name == "cpDpNhMismatchErrAdd" || name == "cpAdjAddFailureErr" || name == "peerIPLookupRecPhyIod" || name == "peerIPIPv6RecPhyIod" || name == "peerIPLookupAdjPhyIod" || name == "peerIPIPv6AdjPhyIod" || name == "barrierResponseErr")
        return true;
    return false;
}

System::ArpItems::InstItems::L2statsItems::L2statsItems()
    :
    if_items(std::make_shared<System::ArpItems::InstItems::L2statsItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "l2stats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::L2statsItems::~L2statsItems()
{
}

bool System::ArpItems::InstItems::L2statsItems::has_data() const
{
    if (is_presence_container) return true;
    return (if_items !=  nullptr && if_items->has_data());
}

bool System::ArpItems::InstItems::L2statsItems::has_operation() const
{
    return is_set(yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::ArpItems::InstItems::L2statsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::L2statsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::L2statsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::L2statsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::ArpItems::InstItems::L2statsItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::L2statsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::ArpItems::InstItems::L2statsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::L2statsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::L2statsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items")
        return true;
    return false;
}

System::ArpItems::InstItems::L2statsItems::IfItems::IfItems()
    :
    l2if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "l2stats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::L2statsItems::IfItems::~IfItems()
{
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2if_list.len(); index++)
    {
        if(l2if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<l2if_list.len(); index++)
    {
        if(l2if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::L2statsItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/l2stats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::L2statsItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::L2statsItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::L2statsItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2If-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList>();
        ent_->parent = this;
        l2if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::L2statsItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::L2statsItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::L2statsItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2If-list")
        return true;
    return false;
}

System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::L2IfList()
    :
    id{YType::str, "id"},
    pktrecl2int{YType::uint32, "pktRecL2Int"}
{

    yang_name = "L2If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::~L2IfList()
{
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pktrecl2int.is_set;
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pktrecl2int.yfilter);
}

std::string System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/l2stats-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pktrecl2int.is_set || is_set(pktrecl2int.yfilter)) leaf_name_data.push_back(pktrecl2int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRecL2Int")
    {
        pktrecl2int = value;
        pktrecl2int.value_namespace = name_space;
        pktrecl2int.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pktRecL2Int")
    {
        pktrecl2int.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pktRecL2Int")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DomItems::~DomItems()
{
}

bool System::ArpItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::get_children() const
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

void System::ArpItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    encap{YType::str, "encap"}
        ,
    db_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems>())
    , if_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems>())
{
    db_items->parent = this;
    if_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encap.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "if-items" || name == "name" || name == "encap")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::ArpItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>())
{
    adj_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>();
        }
        return adj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjItems()
    :
    adjep_list(this, {"ifid", "ip"})
{

    yang_name = "adj-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::~AdjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_children() const
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

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::AdjEpList()
    :
    ifid{YType::str, "ifId"},
    ip{YType::str, "ip"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"},
    operst{YType::enumeration, "operSt"},
    physifid{YType::str, "physIfId"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| ip.is_set
	|| mac.is_set
	|| upts.is_set
	|| operst.is_set
	|| physifid.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(physifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (physifid.is_set || is_set(physifid.yfilter)) leaf_name_data.push_back(physifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physIfId")
    {
        physifid = value;
        physifid.value_namespace = name_space;
        physifid.value_namespace_prefix = name_space_prefix;
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

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "physIfId")
    {
        physifid.yfilter = yfilter;
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

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifId" || name == "ip" || name == "mac" || name == "upTS" || name == "operSt" || name == "physIfId" || name == "flags" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    timeout{YType::uint16, "timeout"},
    gratuitousrequest{YType::enumeration, "gratuitousRequest"},
    gratuitousupdate{YType::enumeration, "gratuitousUpdate"},
    gratuitoushsrpdup{YType::enumeration, "gratuitousHsrpDup"},
    proxyarp{YType::enumeration, "proxyArp"},
    localproxyarp{YType::enumeration, "localProxyArp"},
    localproxyarpnohwflood{YType::enumeration, "localProxyArpNoHwFlood"},
    deleteadjonmacdelete{YType::enumeration, "deleteAdjOnMacDelete"},
    refreshtimerformacdelete{YType::uint16, "refreshTimerForMacDelete"},
    duplicateipdetectionforunnumberedsvi{YType::enumeration, "duplicateIpDetectionForUnnumberedSvi"},
    configerror{YType::str, "configError"}
        ,
    sadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>())
    , ifstatstx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>())
    , ifstatsrx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>())
    , ifstatsadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>())
    , ifstatsmisc_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>())
    , ifstatsmh_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>())
    , rtvrfmbr_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    sadj_items->parent = this;
    ifstatstx_items->parent = this;
    ifstatsrx_items->parent = this;
    ifstatsadj_items->parent = this;
    ifstatsmisc_items->parent = this;
    ifstatsmh_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| timeout.is_set
	|| gratuitousrequest.is_set
	|| gratuitousupdate.is_set
	|| gratuitoushsrpdup.is_set
	|| proxyarp.is_set
	|| localproxyarp.is_set
	|| localproxyarpnohwflood.is_set
	|| deleteadjonmacdelete.is_set
	|| refreshtimerformacdelete.is_set
	|| duplicateipdetectionforunnumberedsvi.is_set
	|| configerror.is_set
	|| (sadj_items !=  nullptr && sadj_items->has_data())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_data())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_data())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_data())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_data())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(gratuitousrequest.yfilter)
	|| ydk::is_set(gratuitousupdate.yfilter)
	|| ydk::is_set(gratuitoushsrpdup.yfilter)
	|| ydk::is_set(proxyarp.yfilter)
	|| ydk::is_set(localproxyarp.yfilter)
	|| ydk::is_set(localproxyarpnohwflood.yfilter)
	|| ydk::is_set(deleteadjonmacdelete.yfilter)
	|| ydk::is_set(refreshtimerformacdelete.yfilter)
	|| ydk::is_set(duplicateipdetectionforunnumberedsvi.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| (sadj_items !=  nullptr && sadj_items->has_operation())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_operation())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_operation())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_operation())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_operation())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (gratuitousrequest.is_set || is_set(gratuitousrequest.yfilter)) leaf_name_data.push_back(gratuitousrequest.get_name_leafdata());
    if (gratuitousupdate.is_set || is_set(gratuitousupdate.yfilter)) leaf_name_data.push_back(gratuitousupdate.get_name_leafdata());
    if (gratuitoushsrpdup.is_set || is_set(gratuitoushsrpdup.yfilter)) leaf_name_data.push_back(gratuitoushsrpdup.get_name_leafdata());
    if (proxyarp.is_set || is_set(proxyarp.yfilter)) leaf_name_data.push_back(proxyarp.get_name_leafdata());
    if (localproxyarp.is_set || is_set(localproxyarp.yfilter)) leaf_name_data.push_back(localproxyarp.get_name_leafdata());
    if (localproxyarpnohwflood.is_set || is_set(localproxyarpnohwflood.yfilter)) leaf_name_data.push_back(localproxyarpnohwflood.get_name_leafdata());
    if (deleteadjonmacdelete.is_set || is_set(deleteadjonmacdelete.yfilter)) leaf_name_data.push_back(deleteadjonmacdelete.get_name_leafdata());
    if (refreshtimerformacdelete.is_set || is_set(refreshtimerformacdelete.yfilter)) leaf_name_data.push_back(refreshtimerformacdelete.get_name_leafdata());
    if (duplicateipdetectionforunnumberedsvi.is_set || is_set(duplicateipdetectionforunnumberedsvi.yfilter)) leaf_name_data.push_back(duplicateipdetectionforunnumberedsvi.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sadj-items")
    {
        if(sadj_items == nullptr)
        {
            sadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>();
        }
        return sadj_items;
    }

    if(child_yang_name == "ifstatstx-items")
    {
        if(ifstatstx_items == nullptr)
        {
            ifstatstx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>();
        }
        return ifstatstx_items;
    }

    if(child_yang_name == "ifstatsrx-items")
    {
        if(ifstatsrx_items == nullptr)
        {
            ifstatsrx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>();
        }
        return ifstatsrx_items;
    }

    if(child_yang_name == "ifstatsadj-items")
    {
        if(ifstatsadj_items == nullptr)
        {
            ifstatsadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>();
        }
        return ifstatsadj_items;
    }

    if(child_yang_name == "ifstatsmisc-items")
    {
        if(ifstatsmisc_items == nullptr)
        {
            ifstatsmisc_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>();
        }
        return ifstatsmisc_items;
    }

    if(child_yang_name == "ifstatsmh-items")
    {
        if(ifstatsmh_items == nullptr)
        {
            ifstatsmh_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>();
        }
        return ifstatsmh_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sadj_items != nullptr)
    {
        _children["sadj-items"] = sadj_items;
    }

    if(ifstatstx_items != nullptr)
    {
        _children["ifstatstx-items"] = ifstatstx_items;
    }

    if(ifstatsrx_items != nullptr)
    {
        _children["ifstatsrx-items"] = ifstatsrx_items;
    }

    if(ifstatsadj_items != nullptr)
    {
        _children["ifstatsadj-items"] = ifstatsadj_items;
    }

    if(ifstatsmisc_items != nullptr)
    {
        _children["ifstatsmisc-items"] = ifstatsmisc_items;
    }

    if(ifstatsmh_items != nullptr)
    {
        _children["ifstatsmh-items"] = ifstatsmh_items;
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

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest = value;
        gratuitousrequest.value_namespace = name_space;
        gratuitousrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate = value;
        gratuitousupdate.value_namespace = name_space;
        gratuitousupdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup = value;
        gratuitoushsrpdup.value_namespace = name_space;
        gratuitoushsrpdup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyArp")
    {
        proxyarp = value;
        proxyarp.value_namespace = name_space;
        proxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp = value;
        localproxyarp.value_namespace = name_space;
        localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood = value;
        localproxyarpnohwflood.value_namespace = name_space;
        localproxyarpnohwflood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete = value;
        deleteadjonmacdelete.value_namespace = name_space;
        deleteadjonmacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete = value;
        refreshtimerformacdelete.value_namespace = name_space;
        refreshtimerformacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi = value;
        duplicateipdetectionforunnumberedsvi.value_namespace = name_space;
        duplicateipdetectionforunnumberedsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest.yfilter = yfilter;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate.yfilter = yfilter;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup.yfilter = yfilter;
    }
    if(value_path == "proxyArp")
    {
        proxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood.yfilter = yfilter;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete.yfilter = yfilter;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete.yfilter = yfilter;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sadj-items" || name == "ifstatstx-items" || name == "ifstatsrx-items" || name == "ifstatsadj-items" || name == "ifstatsmisc-items" || name == "ifstatsmh-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "timeout" || name == "gratuitousRequest" || name == "gratuitousUpdate" || name == "gratuitousHsrpDup" || name == "proxyArp" || name == "localProxyArp" || name == "localProxyArpNoHwFlood" || name == "deleteAdjOnMacDelete" || name == "refreshTimerForMacDelete" || name == "duplicateIpDetectionForUnnumberedSvi" || name == "configError")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::SadjItems()
    :
    stadjep_list(this, {"ip"})
{

    yang_name = "sadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::~SadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_operation() const
{
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StAdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList>();
        ent_->parent = this;
        stadjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stadjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::StAdjEpList()
    :
    ip{YType::str, "ip"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    mac{YType::str, "mac"}
        ,
    rtctrlradjeptostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>())
    , rtfvepdefreftostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>())
{
    rtctrlradjeptostadjep_items->parent = this;
    rtfvepdefreftostadjep_items->parent = this;

    yang_name = "StAdjEp-list"; yang_parent_name = "sadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::~StAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| mac.is_set
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_data())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_operation())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StAdjEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtCtrlrAdjEpToStAdjEp-items")
    {
        if(rtctrlradjeptostadjep_items == nullptr)
        {
            rtctrlradjeptostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>();
        }
        return rtctrlradjeptostadjep_items;
    }

    if(child_yang_name == "rtfvEpDefRefToStAdjEp-items")
    {
        if(rtfvepdefreftostadjep_items == nullptr)
        {
            rtfvepdefreftostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>();
        }
        return rtfvepdefreftostadjep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtctrlradjeptostadjep_items != nullptr)
    {
        _children["rtCtrlrAdjEpToStAdjEp-items"] = rtctrlradjeptostadjep_items;
    }

    if(rtfvepdefreftostadjep_items != nullptr)
    {
        _children["rtfvEpDefRefToStAdjEp-items"] = rtfvepdefreftostadjep_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
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
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtCtrlrAdjEpToStAdjEp-items" || name == "rtfvEpDefRefToStAdjEp-items" || name == "ip" || name == "operSt" || name == "operStQual" || name == "name" || name == "mac")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::RtCtrlrAdjEpToStAdjEpItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtCtrlrAdjEpToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::~RtCtrlrAdjEpToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtCtrlrAdjEpToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtfvEpDefRefToStAdjEpItems()
    :
    rtfvepdefreftostadjep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::~RtfvEpDefRefToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToStAdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList>();
        ent_->parent = this;
        rtfvepdefreftostadjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdefreftostadjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToStAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::RtFvEpDefRefToStAdjEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvEpDefRefToStAdjEp-list"; yang_parent_name = "rtfvEpDefRefToStAdjEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::~RtFvEpDefRefToStAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToStAdjEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::IfstatstxItems()
    :
    pktsent{YType::uint32, "pktSent"},
    pktsentreq{YType::uint32, "pktSentReq"},
    pktsentrsp{YType::uint32, "pktSentRsp"},
    pktsentreql2{YType::uint32, "pktSentReqL2"},
    pktsentrspl2{YType::uint32, "pktSentRspL2"},
    pktsentgratreq{YType::uint32, "pktSentGratReq"},
    pktsenttunnel{YType::uint32, "pktSentTunnel"},
    pktsentdrop{YType::uint32, "pktSentDrop"},
    pktsendsrvport{YType::uint32, "pktSendSrvPort"},
    pktsendfbrcport{YType::uint32, "pktSendFbrcPort"},
    pktsendfixupcore{YType::uint32, "pktSendFixupCore"},
    pktsendfixupserver{YType::uint32, "pktSendFixupServer"},
    pktsendfixuprarp{YType::uint32, "pktSendFixupRarp"},
    pktsendanycastglean{YType::uint32, "pktSendAnyCastGlean"},
    pktsentfailinvpkt{YType::uint32, "pktSentFailInvPkt"},
    pktsentfailmbufop{YType::uint32, "pktSentFailMbufOp"},
    pktsentfailnoifindex{YType::uint32, "pktSentFailNoIfindex"},
    pktsentfailunsupportedint{YType::uint32, "pktSentFailUnsupportedInt"},
    pktsentfailimdown{YType::uint32, "pktSentFailImDown"},
    pktsentfailinvsrcip{YType::uint32, "pktSentFailInvSrcIp"},
    pktsentfailinvdstip{YType::uint32, "pktSentFailInvDstIp"},
    pktsentfailownip{YType::uint32, "pktSentFailOwnIp"},
    pktsentfailctxtnotcreated{YType::uint32, "pktSentFailCtxtNotCreated"},
    pktsentfailbadctxtid{YType::uint32, "pktSentFailBadCtxtId"},
    pktsentfailunattachedip{YType::uint32, "pktSentFailUnattachedIp"},
    pktsentfailadjaddfailure{YType::uint32, "pktSentFailAdjAddFailure"},
    pktsentfailnosrcip{YType::uint32, "pktSentFailNoSrcIp"},
    pktsentfailnomac{YType::uint32, "pktSentFailNoMac"},
    pktsentfailclientenqfailed{YType::uint32, "pktSentFailClientEnqFailed"},
    pktsentfailproxydstnotrchbl{YType::uint32, "pktSentFailProxyDstNotRchbl"},
    pktskiprespenhancedproxydestnotreach{YType::uint32, "pktSkipRespEnhancedProxyDestNotReach"},
    pktskiprespenhancedproxyl2porttrack{YType::uint32, "pktSkipRespEnhancedProxyL2portTrack"},
    pktsentfailinvlocalproxy{YType::uint32, "pktSentFailInvLocalProxy"},
    pktsentfailinvproxy{YType::uint32, "pktSentFailInvProxy"},
    pktsentfailvipgroupnotactive{YType::uint32, "pktSentFailVipGroupNotActive"},
    pktrefreshfloodtoserverskipcore{YType::uint32, "pktRefreshFloodToServerSkipCore"}
{

    yang_name = "ifstatstx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::~IfstatstxItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_data() const
{
    if (is_presence_container) return true;
    return pktsent.is_set
	|| pktsentreq.is_set
	|| pktsentrsp.is_set
	|| pktsentreql2.is_set
	|| pktsentrspl2.is_set
	|| pktsentgratreq.is_set
	|| pktsenttunnel.is_set
	|| pktsentdrop.is_set
	|| pktsendsrvport.is_set
	|| pktsendfbrcport.is_set
	|| pktsendfixupcore.is_set
	|| pktsendfixupserver.is_set
	|| pktsendfixuprarp.is_set
	|| pktsendanycastglean.is_set
	|| pktsentfailinvpkt.is_set
	|| pktsentfailmbufop.is_set
	|| pktsentfailnoifindex.is_set
	|| pktsentfailunsupportedint.is_set
	|| pktsentfailimdown.is_set
	|| pktsentfailinvsrcip.is_set
	|| pktsentfailinvdstip.is_set
	|| pktsentfailownip.is_set
	|| pktsentfailctxtnotcreated.is_set
	|| pktsentfailbadctxtid.is_set
	|| pktsentfailunattachedip.is_set
	|| pktsentfailadjaddfailure.is_set
	|| pktsentfailnosrcip.is_set
	|| pktsentfailnomac.is_set
	|| pktsentfailclientenqfailed.is_set
	|| pktsentfailproxydstnotrchbl.is_set
	|| pktskiprespenhancedproxydestnotreach.is_set
	|| pktskiprespenhancedproxyl2porttrack.is_set
	|| pktsentfailinvlocalproxy.is_set
	|| pktsentfailinvproxy.is_set
	|| pktsentfailvipgroupnotactive.is_set
	|| pktrefreshfloodtoserverskipcore.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktsentreq.yfilter)
	|| ydk::is_set(pktsentrsp.yfilter)
	|| ydk::is_set(pktsentreql2.yfilter)
	|| ydk::is_set(pktsentrspl2.yfilter)
	|| ydk::is_set(pktsentgratreq.yfilter)
	|| ydk::is_set(pktsenttunnel.yfilter)
	|| ydk::is_set(pktsentdrop.yfilter)
	|| ydk::is_set(pktsendsrvport.yfilter)
	|| ydk::is_set(pktsendfbrcport.yfilter)
	|| ydk::is_set(pktsendfixupcore.yfilter)
	|| ydk::is_set(pktsendfixupserver.yfilter)
	|| ydk::is_set(pktsendfixuprarp.yfilter)
	|| ydk::is_set(pktsendanycastglean.yfilter)
	|| ydk::is_set(pktsentfailinvpkt.yfilter)
	|| ydk::is_set(pktsentfailmbufop.yfilter)
	|| ydk::is_set(pktsentfailnoifindex.yfilter)
	|| ydk::is_set(pktsentfailunsupportedint.yfilter)
	|| ydk::is_set(pktsentfailimdown.yfilter)
	|| ydk::is_set(pktsentfailinvsrcip.yfilter)
	|| ydk::is_set(pktsentfailinvdstip.yfilter)
	|| ydk::is_set(pktsentfailownip.yfilter)
	|| ydk::is_set(pktsentfailctxtnotcreated.yfilter)
	|| ydk::is_set(pktsentfailbadctxtid.yfilter)
	|| ydk::is_set(pktsentfailunattachedip.yfilter)
	|| ydk::is_set(pktsentfailadjaddfailure.yfilter)
	|| ydk::is_set(pktsentfailnosrcip.yfilter)
	|| ydk::is_set(pktsentfailnomac.yfilter)
	|| ydk::is_set(pktsentfailclientenqfailed.yfilter)
	|| ydk::is_set(pktsentfailproxydstnotrchbl.yfilter)
	|| ydk::is_set(pktskiprespenhancedproxydestnotreach.yfilter)
	|| ydk::is_set(pktskiprespenhancedproxyl2porttrack.yfilter)
	|| ydk::is_set(pktsentfailinvlocalproxy.yfilter)
	|| ydk::is_set(pktsentfailinvproxy.yfilter)
	|| ydk::is_set(pktsentfailvipgroupnotactive.yfilter)
	|| ydk::is_set(pktrefreshfloodtoserverskipcore.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatstx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktsentreq.is_set || is_set(pktsentreq.yfilter)) leaf_name_data.push_back(pktsentreq.get_name_leafdata());
    if (pktsentrsp.is_set || is_set(pktsentrsp.yfilter)) leaf_name_data.push_back(pktsentrsp.get_name_leafdata());
    if (pktsentreql2.is_set || is_set(pktsentreql2.yfilter)) leaf_name_data.push_back(pktsentreql2.get_name_leafdata());
    if (pktsentrspl2.is_set || is_set(pktsentrspl2.yfilter)) leaf_name_data.push_back(pktsentrspl2.get_name_leafdata());
    if (pktsentgratreq.is_set || is_set(pktsentgratreq.yfilter)) leaf_name_data.push_back(pktsentgratreq.get_name_leafdata());
    if (pktsenttunnel.is_set || is_set(pktsenttunnel.yfilter)) leaf_name_data.push_back(pktsenttunnel.get_name_leafdata());
    if (pktsentdrop.is_set || is_set(pktsentdrop.yfilter)) leaf_name_data.push_back(pktsentdrop.get_name_leafdata());
    if (pktsendsrvport.is_set || is_set(pktsendsrvport.yfilter)) leaf_name_data.push_back(pktsendsrvport.get_name_leafdata());
    if (pktsendfbrcport.is_set || is_set(pktsendfbrcport.yfilter)) leaf_name_data.push_back(pktsendfbrcport.get_name_leafdata());
    if (pktsendfixupcore.is_set || is_set(pktsendfixupcore.yfilter)) leaf_name_data.push_back(pktsendfixupcore.get_name_leafdata());
    if (pktsendfixupserver.is_set || is_set(pktsendfixupserver.yfilter)) leaf_name_data.push_back(pktsendfixupserver.get_name_leafdata());
    if (pktsendfixuprarp.is_set || is_set(pktsendfixuprarp.yfilter)) leaf_name_data.push_back(pktsendfixuprarp.get_name_leafdata());
    if (pktsendanycastglean.is_set || is_set(pktsendanycastglean.yfilter)) leaf_name_data.push_back(pktsendanycastglean.get_name_leafdata());
    if (pktsentfailinvpkt.is_set || is_set(pktsentfailinvpkt.yfilter)) leaf_name_data.push_back(pktsentfailinvpkt.get_name_leafdata());
    if (pktsentfailmbufop.is_set || is_set(pktsentfailmbufop.yfilter)) leaf_name_data.push_back(pktsentfailmbufop.get_name_leafdata());
    if (pktsentfailnoifindex.is_set || is_set(pktsentfailnoifindex.yfilter)) leaf_name_data.push_back(pktsentfailnoifindex.get_name_leafdata());
    if (pktsentfailunsupportedint.is_set || is_set(pktsentfailunsupportedint.yfilter)) leaf_name_data.push_back(pktsentfailunsupportedint.get_name_leafdata());
    if (pktsentfailimdown.is_set || is_set(pktsentfailimdown.yfilter)) leaf_name_data.push_back(pktsentfailimdown.get_name_leafdata());
    if (pktsentfailinvsrcip.is_set || is_set(pktsentfailinvsrcip.yfilter)) leaf_name_data.push_back(pktsentfailinvsrcip.get_name_leafdata());
    if (pktsentfailinvdstip.is_set || is_set(pktsentfailinvdstip.yfilter)) leaf_name_data.push_back(pktsentfailinvdstip.get_name_leafdata());
    if (pktsentfailownip.is_set || is_set(pktsentfailownip.yfilter)) leaf_name_data.push_back(pktsentfailownip.get_name_leafdata());
    if (pktsentfailctxtnotcreated.is_set || is_set(pktsentfailctxtnotcreated.yfilter)) leaf_name_data.push_back(pktsentfailctxtnotcreated.get_name_leafdata());
    if (pktsentfailbadctxtid.is_set || is_set(pktsentfailbadctxtid.yfilter)) leaf_name_data.push_back(pktsentfailbadctxtid.get_name_leafdata());
    if (pktsentfailunattachedip.is_set || is_set(pktsentfailunattachedip.yfilter)) leaf_name_data.push_back(pktsentfailunattachedip.get_name_leafdata());
    if (pktsentfailadjaddfailure.is_set || is_set(pktsentfailadjaddfailure.yfilter)) leaf_name_data.push_back(pktsentfailadjaddfailure.get_name_leafdata());
    if (pktsentfailnosrcip.is_set || is_set(pktsentfailnosrcip.yfilter)) leaf_name_data.push_back(pktsentfailnosrcip.get_name_leafdata());
    if (pktsentfailnomac.is_set || is_set(pktsentfailnomac.yfilter)) leaf_name_data.push_back(pktsentfailnomac.get_name_leafdata());
    if (pktsentfailclientenqfailed.is_set || is_set(pktsentfailclientenqfailed.yfilter)) leaf_name_data.push_back(pktsentfailclientenqfailed.get_name_leafdata());
    if (pktsentfailproxydstnotrchbl.is_set || is_set(pktsentfailproxydstnotrchbl.yfilter)) leaf_name_data.push_back(pktsentfailproxydstnotrchbl.get_name_leafdata());
    if (pktskiprespenhancedproxydestnotreach.is_set || is_set(pktskiprespenhancedproxydestnotreach.yfilter)) leaf_name_data.push_back(pktskiprespenhancedproxydestnotreach.get_name_leafdata());
    if (pktskiprespenhancedproxyl2porttrack.is_set || is_set(pktskiprespenhancedproxyl2porttrack.yfilter)) leaf_name_data.push_back(pktskiprespenhancedproxyl2porttrack.get_name_leafdata());
    if (pktsentfailinvlocalproxy.is_set || is_set(pktsentfailinvlocalproxy.yfilter)) leaf_name_data.push_back(pktsentfailinvlocalproxy.get_name_leafdata());
    if (pktsentfailinvproxy.is_set || is_set(pktsentfailinvproxy.yfilter)) leaf_name_data.push_back(pktsentfailinvproxy.get_name_leafdata());
    if (pktsentfailvipgroupnotactive.is_set || is_set(pktsentfailvipgroupnotactive.yfilter)) leaf_name_data.push_back(pktsentfailvipgroupnotactive.get_name_leafdata());
    if (pktrefreshfloodtoserverskipcore.is_set || is_set(pktrefreshfloodtoserverskipcore.yfilter)) leaf_name_data.push_back(pktrefreshfloodtoserverskipcore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentReq")
    {
        pktsentreq = value;
        pktsentreq.value_namespace = name_space;
        pktsentreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentRsp")
    {
        pktsentrsp = value;
        pktsentrsp.value_namespace = name_space;
        pktsentrsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentReqL2")
    {
        pktsentreql2 = value;
        pktsentreql2.value_namespace = name_space;
        pktsentreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentRspL2")
    {
        pktsentrspl2 = value;
        pktsentrspl2.value_namespace = name_space;
        pktsentrspl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentGratReq")
    {
        pktsentgratreq = value;
        pktsentgratreq.value_namespace = name_space;
        pktsentgratreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentTunnel")
    {
        pktsenttunnel = value;
        pktsenttunnel.value_namespace = name_space;
        pktsenttunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentDrop")
    {
        pktsentdrop = value;
        pktsentdrop.value_namespace = name_space;
        pktsentdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendSrvPort")
    {
        pktsendsrvport = value;
        pktsendsrvport.value_namespace = name_space;
        pktsendsrvport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFbrcPort")
    {
        pktsendfbrcport = value;
        pktsendfbrcport.value_namespace = name_space;
        pktsendfbrcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupCore")
    {
        pktsendfixupcore = value;
        pktsendfixupcore.value_namespace = name_space;
        pktsendfixupcore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupServer")
    {
        pktsendfixupserver = value;
        pktsendfixupserver.value_namespace = name_space;
        pktsendfixupserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupRarp")
    {
        pktsendfixuprarp = value;
        pktsendfixuprarp.value_namespace = name_space;
        pktsendfixuprarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendAnyCastGlean")
    {
        pktsendanycastglean = value;
        pktsendanycastglean.value_namespace = name_space;
        pktsendanycastglean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvPkt")
    {
        pktsentfailinvpkt = value;
        pktsentfailinvpkt.value_namespace = name_space;
        pktsentfailinvpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailMbufOp")
    {
        pktsentfailmbufop = value;
        pktsentfailmbufop.value_namespace = name_space;
        pktsentfailmbufop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoIfindex")
    {
        pktsentfailnoifindex = value;
        pktsentfailnoifindex.value_namespace = name_space;
        pktsentfailnoifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailUnsupportedInt")
    {
        pktsentfailunsupportedint = value;
        pktsentfailunsupportedint.value_namespace = name_space;
        pktsentfailunsupportedint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailImDown")
    {
        pktsentfailimdown = value;
        pktsentfailimdown.value_namespace = name_space;
        pktsentfailimdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvSrcIp")
    {
        pktsentfailinvsrcip = value;
        pktsentfailinvsrcip.value_namespace = name_space;
        pktsentfailinvsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvDstIp")
    {
        pktsentfailinvdstip = value;
        pktsentfailinvdstip.value_namespace = name_space;
        pktsentfailinvdstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailOwnIp")
    {
        pktsentfailownip = value;
        pktsentfailownip.value_namespace = name_space;
        pktsentfailownip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailCtxtNotCreated")
    {
        pktsentfailctxtnotcreated = value;
        pktsentfailctxtnotcreated.value_namespace = name_space;
        pktsentfailctxtnotcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailBadCtxtId")
    {
        pktsentfailbadctxtid = value;
        pktsentfailbadctxtid.value_namespace = name_space;
        pktsentfailbadctxtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailUnattachedIp")
    {
        pktsentfailunattachedip = value;
        pktsentfailunattachedip.value_namespace = name_space;
        pktsentfailunattachedip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailAdjAddFailure")
    {
        pktsentfailadjaddfailure = value;
        pktsentfailadjaddfailure.value_namespace = name_space;
        pktsentfailadjaddfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoSrcIp")
    {
        pktsentfailnosrcip = value;
        pktsentfailnosrcip.value_namespace = name_space;
        pktsentfailnosrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoMac")
    {
        pktsentfailnomac = value;
        pktsentfailnomac.value_namespace = name_space;
        pktsentfailnomac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailClientEnqFailed")
    {
        pktsentfailclientenqfailed = value;
        pktsentfailclientenqfailed.value_namespace = name_space;
        pktsentfailclientenqfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailProxyDstNotRchbl")
    {
        pktsentfailproxydstnotrchbl = value;
        pktsentfailproxydstnotrchbl.value_namespace = name_space;
        pktsentfailproxydstnotrchbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSkipRespEnhancedProxyDestNotReach")
    {
        pktskiprespenhancedproxydestnotreach = value;
        pktskiprespenhancedproxydestnotreach.value_namespace = name_space;
        pktskiprespenhancedproxydestnotreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSkipRespEnhancedProxyL2portTrack")
    {
        pktskiprespenhancedproxyl2porttrack = value;
        pktskiprespenhancedproxyl2porttrack.value_namespace = name_space;
        pktskiprespenhancedproxyl2porttrack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvLocalProxy")
    {
        pktsentfailinvlocalproxy = value;
        pktsentfailinvlocalproxy.value_namespace = name_space;
        pktsentfailinvlocalproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvProxy")
    {
        pktsentfailinvproxy = value;
        pktsentfailinvproxy.value_namespace = name_space;
        pktsentfailinvproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailVipGroupNotActive")
    {
        pktsentfailvipgroupnotactive = value;
        pktsentfailvipgroupnotactive.value_namespace = name_space;
        pktsentfailvipgroupnotactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRefreshFloodToServerSkipCore")
    {
        pktrefreshfloodtoserverskipcore = value;
        pktrefreshfloodtoserverskipcore.value_namespace = name_space;
        pktrefreshfloodtoserverskipcore.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktSentReq")
    {
        pktsentreq.yfilter = yfilter;
    }
    if(value_path == "pktSentRsp")
    {
        pktsentrsp.yfilter = yfilter;
    }
    if(value_path == "pktSentReqL2")
    {
        pktsentreql2.yfilter = yfilter;
    }
    if(value_path == "pktSentRspL2")
    {
        pktsentrspl2.yfilter = yfilter;
    }
    if(value_path == "pktSentGratReq")
    {
        pktsentgratreq.yfilter = yfilter;
    }
    if(value_path == "pktSentTunnel")
    {
        pktsenttunnel.yfilter = yfilter;
    }
    if(value_path == "pktSentDrop")
    {
        pktsentdrop.yfilter = yfilter;
    }
    if(value_path == "pktSendSrvPort")
    {
        pktsendsrvport.yfilter = yfilter;
    }
    if(value_path == "pktSendFbrcPort")
    {
        pktsendfbrcport.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupCore")
    {
        pktsendfixupcore.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupServer")
    {
        pktsendfixupserver.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupRarp")
    {
        pktsendfixuprarp.yfilter = yfilter;
    }
    if(value_path == "pktSendAnyCastGlean")
    {
        pktsendanycastglean.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvPkt")
    {
        pktsentfailinvpkt.yfilter = yfilter;
    }
    if(value_path == "pktSentFailMbufOp")
    {
        pktsentfailmbufop.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoIfindex")
    {
        pktsentfailnoifindex.yfilter = yfilter;
    }
    if(value_path == "pktSentFailUnsupportedInt")
    {
        pktsentfailunsupportedint.yfilter = yfilter;
    }
    if(value_path == "pktSentFailImDown")
    {
        pktsentfailimdown.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvSrcIp")
    {
        pktsentfailinvsrcip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvDstIp")
    {
        pktsentfailinvdstip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailOwnIp")
    {
        pktsentfailownip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailCtxtNotCreated")
    {
        pktsentfailctxtnotcreated.yfilter = yfilter;
    }
    if(value_path == "pktSentFailBadCtxtId")
    {
        pktsentfailbadctxtid.yfilter = yfilter;
    }
    if(value_path == "pktSentFailUnattachedIp")
    {
        pktsentfailunattachedip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailAdjAddFailure")
    {
        pktsentfailadjaddfailure.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoSrcIp")
    {
        pktsentfailnosrcip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoMac")
    {
        pktsentfailnomac.yfilter = yfilter;
    }
    if(value_path == "pktSentFailClientEnqFailed")
    {
        pktsentfailclientenqfailed.yfilter = yfilter;
    }
    if(value_path == "pktSentFailProxyDstNotRchbl")
    {
        pktsentfailproxydstnotrchbl.yfilter = yfilter;
    }
    if(value_path == "pktSkipRespEnhancedProxyDestNotReach")
    {
        pktskiprespenhancedproxydestnotreach.yfilter = yfilter;
    }
    if(value_path == "pktSkipRespEnhancedProxyL2portTrack")
    {
        pktskiprespenhancedproxyl2porttrack.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvLocalProxy")
    {
        pktsentfailinvlocalproxy.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvProxy")
    {
        pktsentfailinvproxy.yfilter = yfilter;
    }
    if(value_path == "pktSentFailVipGroupNotActive")
    {
        pktsentfailvipgroupnotactive.yfilter = yfilter;
    }
    if(value_path == "pktRefreshFloodToServerSkipCore")
    {
        pktrefreshfloodtoserverskipcore.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktSentReq" || name == "pktSentRsp" || name == "pktSentReqL2" || name == "pktSentRspL2" || name == "pktSentGratReq" || name == "pktSentTunnel" || name == "pktSentDrop" || name == "pktSendSrvPort" || name == "pktSendFbrcPort" || name == "pktSendFixupCore" || name == "pktSendFixupServer" || name == "pktSendFixupRarp" || name == "pktSendAnyCastGlean" || name == "pktSentFailInvPkt" || name == "pktSentFailMbufOp" || name == "pktSentFailNoIfindex" || name == "pktSentFailUnsupportedInt" || name == "pktSentFailImDown" || name == "pktSentFailInvSrcIp" || name == "pktSentFailInvDstIp" || name == "pktSentFailOwnIp" || name == "pktSentFailCtxtNotCreated" || name == "pktSentFailBadCtxtId" || name == "pktSentFailUnattachedIp" || name == "pktSentFailAdjAddFailure" || name == "pktSentFailNoSrcIp" || name == "pktSentFailNoMac" || name == "pktSentFailClientEnqFailed" || name == "pktSentFailProxyDstNotRchbl" || name == "pktSkipRespEnhancedProxyDestNotReach" || name == "pktSkipRespEnhancedProxyL2portTrack" || name == "pktSentFailInvLocalProxy" || name == "pktSentFailInvProxy" || name == "pktSentFailVipGroupNotActive" || name == "pktRefreshFloodToServerSkipCore")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::IfstatsrxItems()
    :
    pktrcvd{YType::uint32, "pktRcvd"},
    pktrcvdreq{YType::uint32, "pktRcvdReq"},
    pktrcvdrsp{YType::uint32, "pktRcvdRsp"},
    pktrcvdproxyarp{YType::uint32, "pktRcvdProxyArp"},
    pktrcvdlocalproxyarp{YType::uint32, "pktRcvdLocalProxyArp"},
    pktrcvdenhancedproxyarp{YType::uint32, "pktRcvdEnhancedProxyArp"},
    pktrcvdenhancedproxyanycastarp{YType::uint32, "pktRcvdEnhancedProxyAnycastArp"},
    pktrcvdenhancedproxyl2porttrackarp{YType::uint32, "pktRcvdEnhancedProxyL2portTrackArp"},
    pktrcvdserverport{YType::uint32, "pktRcvdServerPort"},
    pktrcvdreql2{YType::uint32, "pktRcvdReqL2"},
    pktrcvdrspl2{YType::uint32, "pktRcvdRspL2"},
    pktrcvdtunnel{YType::uint32, "pktRcvdTunnel"},
    pktrcvdfastpath{YType::uint32, "pktRcvdFastpath"},
    pktrcvdsnoop{YType::uint32, "pktRcvdSnoop"},
    pktrcvddrp{YType::uint32, "pktRcvdDrp"},
    pktrcvddrpbadif{YType::uint32, "pktRcvdDrpBadIf"},
    pktrcvddrpbadlen{YType::uint32, "pktRcvdDrpBadLen"},
    pktrcvddrpbadproto{YType::uint32, "pktRcvdDrpBadProto"},
    pktrcvddropbadhrd{YType::uint32, "pktRcvdDropBadHrd"},
    pktrcvddrpbadl2addrlen{YType::uint32, "pktRcvdDrpBadL2AddrLen"},
    pktrcvddrpbadl3addrlen{YType::uint32, "pktRcvdDrpBadL3AddrLen"},
    pktrcvddrpinvalsrcip{YType::uint32, "pktRcvdDrpInvalSrcIp"},
    pktrcvddrpdirbcast{YType::uint32, "pktRcvdDrpDirBcast"},
    pktrcvddrpinvaldstip{YType::uint32, "pktRcvdDrpInvalDstIp"},
    pktrcvddrpbadsrcmac{YType::uint32, "pktRcvdDrpBadSrcMac"},
    pktrcvddrpownsrcmac{YType::uint32, "pktRcvdDrpOwnSrcMac"},
    pktrcvddrpownsrcip{YType::uint32, "pktRcvdDrpOwnSrcIp"},
    pktrcvddrparpifnomem{YType::uint32, "pktRcvdDrpArpIfNoMem"},
    pktrcvddrpnotforus{YType::uint32, "pktRcvdDrpNotForUs"},
    pktrcvdlearnanddropnotforus{YType::uint32, "pktRcvdLearnAndDropNotForUs"},
    pktrcvddrpsubnetmismatch{YType::uint32, "pktRcvdDrpSubnetMismatch"},
    pktrcvddrpnotinit{YType::uint32, "pktRcvdDrpNotInit"},
    pktrcvddrpbadctxt{YType::uint32, "pktRcvdDrpBadCtxt"},
    pktrcvddrpctxtnotcreated{YType::uint32, "pktRcvdDrpCtxtNotCreated"},
    pktrcvddrpl2localproxyarp{YType::uint32, "pktRcvdDrpL2LocalProxyArp"},
    pktrcvddrpl2purel2pkt{YType::uint32, "pktRcvdDrpL2PureL2Pkt"},
    pktrcvddrpl2prtuntrusted{YType::uint32, "pktRcvdDrpL2PrtUntrusted"},
    pktrcvddrpstdbyfhrpvip{YType::uint32, "pktRcvdDrpStdbyFhrpVip"},
    pktrcvddrpgratonproxyarp{YType::uint32, "pktRcvdDrpGratOnProxyArp"},
    pktrcvddrparprequestignore{YType::uint32, "pktRcvdDrpArpRequestIgnore"},
    pktrcvddrpl2fmqueryfail{YType::uint32, "pktRcvdDrpL2FmQueryFail"},
    pktrcvddrptunnelfail{YType::uint32, "pktRcvdDrpTunnelFail"},
    pktrcvddrprsponhsrpstbyactivevmac{YType::uint32, "pktRcvdDrpRspOnHsrpStbyActiveVmac"},
    pktrcvdfailimdown{YType::uint32, "pktRcvdFailImDown"},
    pktrcvdgleanreqcount{YType::uint32, "pktRcvdGleanReqCount"},
    pktrfrshreqrecfrmclients{YType::uint32, "pktRfrshReqRecFrmClients"},
    pktrcvdsigfrml2rib{YType::uint32, "pktRcvdSigFrmL2rib"}
{

    yang_name = "ifstatsrx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::~IfstatsrxItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_data() const
{
    if (is_presence_container) return true;
    return pktrcvd.is_set
	|| pktrcvdreq.is_set
	|| pktrcvdrsp.is_set
	|| pktrcvdproxyarp.is_set
	|| pktrcvdlocalproxyarp.is_set
	|| pktrcvdenhancedproxyarp.is_set
	|| pktrcvdenhancedproxyanycastarp.is_set
	|| pktrcvdenhancedproxyl2porttrackarp.is_set
	|| pktrcvdserverport.is_set
	|| pktrcvdreql2.is_set
	|| pktrcvdrspl2.is_set
	|| pktrcvdtunnel.is_set
	|| pktrcvdfastpath.is_set
	|| pktrcvdsnoop.is_set
	|| pktrcvddrp.is_set
	|| pktrcvddrpbadif.is_set
	|| pktrcvddrpbadlen.is_set
	|| pktrcvddrpbadproto.is_set
	|| pktrcvddropbadhrd.is_set
	|| pktrcvddrpbadl2addrlen.is_set
	|| pktrcvddrpbadl3addrlen.is_set
	|| pktrcvddrpinvalsrcip.is_set
	|| pktrcvddrpdirbcast.is_set
	|| pktrcvddrpinvaldstip.is_set
	|| pktrcvddrpbadsrcmac.is_set
	|| pktrcvddrpownsrcmac.is_set
	|| pktrcvddrpownsrcip.is_set
	|| pktrcvddrparpifnomem.is_set
	|| pktrcvddrpnotforus.is_set
	|| pktrcvdlearnanddropnotforus.is_set
	|| pktrcvddrpsubnetmismatch.is_set
	|| pktrcvddrpnotinit.is_set
	|| pktrcvddrpbadctxt.is_set
	|| pktrcvddrpctxtnotcreated.is_set
	|| pktrcvddrpl2localproxyarp.is_set
	|| pktrcvddrpl2purel2pkt.is_set
	|| pktrcvddrpl2prtuntrusted.is_set
	|| pktrcvddrpstdbyfhrpvip.is_set
	|| pktrcvddrpgratonproxyarp.is_set
	|| pktrcvddrparprequestignore.is_set
	|| pktrcvddrpl2fmqueryfail.is_set
	|| pktrcvddrptunnelfail.is_set
	|| pktrcvddrprsponhsrpstbyactivevmac.is_set
	|| pktrcvdfailimdown.is_set
	|| pktrcvdgleanreqcount.is_set
	|| pktrfrshreqrecfrmclients.is_set
	|| pktrcvdsigfrml2rib.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(pktrcvdreq.yfilter)
	|| ydk::is_set(pktrcvdrsp.yfilter)
	|| ydk::is_set(pktrcvdproxyarp.yfilter)
	|| ydk::is_set(pktrcvdlocalproxyarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyanycastarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyl2porttrackarp.yfilter)
	|| ydk::is_set(pktrcvdserverport.yfilter)
	|| ydk::is_set(pktrcvdreql2.yfilter)
	|| ydk::is_set(pktrcvdrspl2.yfilter)
	|| ydk::is_set(pktrcvdtunnel.yfilter)
	|| ydk::is_set(pktrcvdfastpath.yfilter)
	|| ydk::is_set(pktrcvdsnoop.yfilter)
	|| ydk::is_set(pktrcvddrp.yfilter)
	|| ydk::is_set(pktrcvddrpbadif.yfilter)
	|| ydk::is_set(pktrcvddrpbadlen.yfilter)
	|| ydk::is_set(pktrcvddrpbadproto.yfilter)
	|| ydk::is_set(pktrcvddropbadhrd.yfilter)
	|| ydk::is_set(pktrcvddrpbadl2addrlen.yfilter)
	|| ydk::is_set(pktrcvddrpbadl3addrlen.yfilter)
	|| ydk::is_set(pktrcvddrpinvalsrcip.yfilter)
	|| ydk::is_set(pktrcvddrpdirbcast.yfilter)
	|| ydk::is_set(pktrcvddrpinvaldstip.yfilter)
	|| ydk::is_set(pktrcvddrpbadsrcmac.yfilter)
	|| ydk::is_set(pktrcvddrpownsrcmac.yfilter)
	|| ydk::is_set(pktrcvddrpownsrcip.yfilter)
	|| ydk::is_set(pktrcvddrparpifnomem.yfilter)
	|| ydk::is_set(pktrcvddrpnotforus.yfilter)
	|| ydk::is_set(pktrcvdlearnanddropnotforus.yfilter)
	|| ydk::is_set(pktrcvddrpsubnetmismatch.yfilter)
	|| ydk::is_set(pktrcvddrpnotinit.yfilter)
	|| ydk::is_set(pktrcvddrpbadctxt.yfilter)
	|| ydk::is_set(pktrcvddrpctxtnotcreated.yfilter)
	|| ydk::is_set(pktrcvddrpl2localproxyarp.yfilter)
	|| ydk::is_set(pktrcvddrpl2purel2pkt.yfilter)
	|| ydk::is_set(pktrcvddrpl2prtuntrusted.yfilter)
	|| ydk::is_set(pktrcvddrpstdbyfhrpvip.yfilter)
	|| ydk::is_set(pktrcvddrpgratonproxyarp.yfilter)
	|| ydk::is_set(pktrcvddrparprequestignore.yfilter)
	|| ydk::is_set(pktrcvddrpl2fmqueryfail.yfilter)
	|| ydk::is_set(pktrcvddrptunnelfail.yfilter)
	|| ydk::is_set(pktrcvddrprsponhsrpstbyactivevmac.yfilter)
	|| ydk::is_set(pktrcvdfailimdown.yfilter)
	|| ydk::is_set(pktrcvdgleanreqcount.yfilter)
	|| ydk::is_set(pktrfrshreqrecfrmclients.yfilter)
	|| ydk::is_set(pktrcvdsigfrml2rib.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsrx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (pktrcvdreq.is_set || is_set(pktrcvdreq.yfilter)) leaf_name_data.push_back(pktrcvdreq.get_name_leafdata());
    if (pktrcvdrsp.is_set || is_set(pktrcvdrsp.yfilter)) leaf_name_data.push_back(pktrcvdrsp.get_name_leafdata());
    if (pktrcvdproxyarp.is_set || is_set(pktrcvdproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdproxyarp.get_name_leafdata());
    if (pktrcvdlocalproxyarp.is_set || is_set(pktrcvdlocalproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdlocalproxyarp.get_name_leafdata());
    if (pktrcvdenhancedproxyarp.is_set || is_set(pktrcvdenhancedproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyarp.get_name_leafdata());
    if (pktrcvdenhancedproxyanycastarp.is_set || is_set(pktrcvdenhancedproxyanycastarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyanycastarp.get_name_leafdata());
    if (pktrcvdenhancedproxyl2porttrackarp.is_set || is_set(pktrcvdenhancedproxyl2porttrackarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyl2porttrackarp.get_name_leafdata());
    if (pktrcvdserverport.is_set || is_set(pktrcvdserverport.yfilter)) leaf_name_data.push_back(pktrcvdserverport.get_name_leafdata());
    if (pktrcvdreql2.is_set || is_set(pktrcvdreql2.yfilter)) leaf_name_data.push_back(pktrcvdreql2.get_name_leafdata());
    if (pktrcvdrspl2.is_set || is_set(pktrcvdrspl2.yfilter)) leaf_name_data.push_back(pktrcvdrspl2.get_name_leafdata());
    if (pktrcvdtunnel.is_set || is_set(pktrcvdtunnel.yfilter)) leaf_name_data.push_back(pktrcvdtunnel.get_name_leafdata());
    if (pktrcvdfastpath.is_set || is_set(pktrcvdfastpath.yfilter)) leaf_name_data.push_back(pktrcvdfastpath.get_name_leafdata());
    if (pktrcvdsnoop.is_set || is_set(pktrcvdsnoop.yfilter)) leaf_name_data.push_back(pktrcvdsnoop.get_name_leafdata());
    if (pktrcvddrp.is_set || is_set(pktrcvddrp.yfilter)) leaf_name_data.push_back(pktrcvddrp.get_name_leafdata());
    if (pktrcvddrpbadif.is_set || is_set(pktrcvddrpbadif.yfilter)) leaf_name_data.push_back(pktrcvddrpbadif.get_name_leafdata());
    if (pktrcvddrpbadlen.is_set || is_set(pktrcvddrpbadlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadlen.get_name_leafdata());
    if (pktrcvddrpbadproto.is_set || is_set(pktrcvddrpbadproto.yfilter)) leaf_name_data.push_back(pktrcvddrpbadproto.get_name_leafdata());
    if (pktrcvddropbadhrd.is_set || is_set(pktrcvddropbadhrd.yfilter)) leaf_name_data.push_back(pktrcvddropbadhrd.get_name_leafdata());
    if (pktrcvddrpbadl2addrlen.is_set || is_set(pktrcvddrpbadl2addrlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadl2addrlen.get_name_leafdata());
    if (pktrcvddrpbadl3addrlen.is_set || is_set(pktrcvddrpbadl3addrlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadl3addrlen.get_name_leafdata());
    if (pktrcvddrpinvalsrcip.is_set || is_set(pktrcvddrpinvalsrcip.yfilter)) leaf_name_data.push_back(pktrcvddrpinvalsrcip.get_name_leafdata());
    if (pktrcvddrpdirbcast.is_set || is_set(pktrcvddrpdirbcast.yfilter)) leaf_name_data.push_back(pktrcvddrpdirbcast.get_name_leafdata());
    if (pktrcvddrpinvaldstip.is_set || is_set(pktrcvddrpinvaldstip.yfilter)) leaf_name_data.push_back(pktrcvddrpinvaldstip.get_name_leafdata());
    if (pktrcvddrpbadsrcmac.is_set || is_set(pktrcvddrpbadsrcmac.yfilter)) leaf_name_data.push_back(pktrcvddrpbadsrcmac.get_name_leafdata());
    if (pktrcvddrpownsrcmac.is_set || is_set(pktrcvddrpownsrcmac.yfilter)) leaf_name_data.push_back(pktrcvddrpownsrcmac.get_name_leafdata());
    if (pktrcvddrpownsrcip.is_set || is_set(pktrcvddrpownsrcip.yfilter)) leaf_name_data.push_back(pktrcvddrpownsrcip.get_name_leafdata());
    if (pktrcvddrparpifnomem.is_set || is_set(pktrcvddrparpifnomem.yfilter)) leaf_name_data.push_back(pktrcvddrparpifnomem.get_name_leafdata());
    if (pktrcvddrpnotforus.is_set || is_set(pktrcvddrpnotforus.yfilter)) leaf_name_data.push_back(pktrcvddrpnotforus.get_name_leafdata());
    if (pktrcvdlearnanddropnotforus.is_set || is_set(pktrcvdlearnanddropnotforus.yfilter)) leaf_name_data.push_back(pktrcvdlearnanddropnotforus.get_name_leafdata());
    if (pktrcvddrpsubnetmismatch.is_set || is_set(pktrcvddrpsubnetmismatch.yfilter)) leaf_name_data.push_back(pktrcvddrpsubnetmismatch.get_name_leafdata());
    if (pktrcvddrpnotinit.is_set || is_set(pktrcvddrpnotinit.yfilter)) leaf_name_data.push_back(pktrcvddrpnotinit.get_name_leafdata());
    if (pktrcvddrpbadctxt.is_set || is_set(pktrcvddrpbadctxt.yfilter)) leaf_name_data.push_back(pktrcvddrpbadctxt.get_name_leafdata());
    if (pktrcvddrpctxtnotcreated.is_set || is_set(pktrcvddrpctxtnotcreated.yfilter)) leaf_name_data.push_back(pktrcvddrpctxtnotcreated.get_name_leafdata());
    if (pktrcvddrpl2localproxyarp.is_set || is_set(pktrcvddrpl2localproxyarp.yfilter)) leaf_name_data.push_back(pktrcvddrpl2localproxyarp.get_name_leafdata());
    if (pktrcvddrpl2purel2pkt.is_set || is_set(pktrcvddrpl2purel2pkt.yfilter)) leaf_name_data.push_back(pktrcvddrpl2purel2pkt.get_name_leafdata());
    if (pktrcvddrpl2prtuntrusted.is_set || is_set(pktrcvddrpl2prtuntrusted.yfilter)) leaf_name_data.push_back(pktrcvddrpl2prtuntrusted.get_name_leafdata());
    if (pktrcvddrpstdbyfhrpvip.is_set || is_set(pktrcvddrpstdbyfhrpvip.yfilter)) leaf_name_data.push_back(pktrcvddrpstdbyfhrpvip.get_name_leafdata());
    if (pktrcvddrpgratonproxyarp.is_set || is_set(pktrcvddrpgratonproxyarp.yfilter)) leaf_name_data.push_back(pktrcvddrpgratonproxyarp.get_name_leafdata());
    if (pktrcvddrparprequestignore.is_set || is_set(pktrcvddrparprequestignore.yfilter)) leaf_name_data.push_back(pktrcvddrparprequestignore.get_name_leafdata());
    if (pktrcvddrpl2fmqueryfail.is_set || is_set(pktrcvddrpl2fmqueryfail.yfilter)) leaf_name_data.push_back(pktrcvddrpl2fmqueryfail.get_name_leafdata());
    if (pktrcvddrptunnelfail.is_set || is_set(pktrcvddrptunnelfail.yfilter)) leaf_name_data.push_back(pktrcvddrptunnelfail.get_name_leafdata());
    if (pktrcvddrprsponhsrpstbyactivevmac.is_set || is_set(pktrcvddrprsponhsrpstbyactivevmac.yfilter)) leaf_name_data.push_back(pktrcvddrprsponhsrpstbyactivevmac.get_name_leafdata());
    if (pktrcvdfailimdown.is_set || is_set(pktrcvdfailimdown.yfilter)) leaf_name_data.push_back(pktrcvdfailimdown.get_name_leafdata());
    if (pktrcvdgleanreqcount.is_set || is_set(pktrcvdgleanreqcount.yfilter)) leaf_name_data.push_back(pktrcvdgleanreqcount.get_name_leafdata());
    if (pktrfrshreqrecfrmclients.is_set || is_set(pktrfrshreqrecfrmclients.yfilter)) leaf_name_data.push_back(pktrfrshreqrecfrmclients.get_name_leafdata());
    if (pktrcvdsigfrml2rib.is_set || is_set(pktrcvdsigfrml2rib.yfilter)) leaf_name_data.push_back(pktrcvdsigfrml2rib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdReq")
    {
        pktrcvdreq = value;
        pktrcvdreq.value_namespace = name_space;
        pktrcvdreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdRsp")
    {
        pktrcvdrsp = value;
        pktrcvdrsp.value_namespace = name_space;
        pktrcvdrsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdProxyArp")
    {
        pktrcvdproxyarp = value;
        pktrcvdproxyarp.value_namespace = name_space;
        pktrcvdproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdLocalProxyArp")
    {
        pktrcvdlocalproxyarp = value;
        pktrcvdlocalproxyarp.value_namespace = name_space;
        pktrcvdlocalproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyArp")
    {
        pktrcvdenhancedproxyarp = value;
        pktrcvdenhancedproxyarp.value_namespace = name_space;
        pktrcvdenhancedproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyAnycastArp")
    {
        pktrcvdenhancedproxyanycastarp = value;
        pktrcvdenhancedproxyanycastarp.value_namespace = name_space;
        pktrcvdenhancedproxyanycastarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyL2portTrackArp")
    {
        pktrcvdenhancedproxyl2porttrackarp = value;
        pktrcvdenhancedproxyl2porttrackarp.value_namespace = name_space;
        pktrcvdenhancedproxyl2porttrackarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdServerPort")
    {
        pktrcvdserverport = value;
        pktrcvdserverport.value_namespace = name_space;
        pktrcvdserverport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdReqL2")
    {
        pktrcvdreql2 = value;
        pktrcvdreql2.value_namespace = name_space;
        pktrcvdreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdRspL2")
    {
        pktrcvdrspl2 = value;
        pktrcvdrspl2.value_namespace = name_space;
        pktrcvdrspl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdTunnel")
    {
        pktrcvdtunnel = value;
        pktrcvdtunnel.value_namespace = name_space;
        pktrcvdtunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdFastpath")
    {
        pktrcvdfastpath = value;
        pktrcvdfastpath.value_namespace = name_space;
        pktrcvdfastpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdSnoop")
    {
        pktrcvdsnoop = value;
        pktrcvdsnoop.value_namespace = name_space;
        pktrcvdsnoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrp")
    {
        pktrcvddrp = value;
        pktrcvddrp.value_namespace = name_space;
        pktrcvddrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadIf")
    {
        pktrcvddrpbadif = value;
        pktrcvddrpbadif.value_namespace = name_space;
        pktrcvddrpbadif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadLen")
    {
        pktrcvddrpbadlen = value;
        pktrcvddrpbadlen.value_namespace = name_space;
        pktrcvddrpbadlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadProto")
    {
        pktrcvddrpbadproto = value;
        pktrcvddrpbadproto.value_namespace = name_space;
        pktrcvddrpbadproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDropBadHrd")
    {
        pktrcvddropbadhrd = value;
        pktrcvddropbadhrd.value_namespace = name_space;
        pktrcvddropbadhrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadL2AddrLen")
    {
        pktrcvddrpbadl2addrlen = value;
        pktrcvddrpbadl2addrlen.value_namespace = name_space;
        pktrcvddrpbadl2addrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadL3AddrLen")
    {
        pktrcvddrpbadl3addrlen = value;
        pktrcvddrpbadl3addrlen.value_namespace = name_space;
        pktrcvddrpbadl3addrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpInvalSrcIp")
    {
        pktrcvddrpinvalsrcip = value;
        pktrcvddrpinvalsrcip.value_namespace = name_space;
        pktrcvddrpinvalsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpDirBcast")
    {
        pktrcvddrpdirbcast = value;
        pktrcvddrpdirbcast.value_namespace = name_space;
        pktrcvddrpdirbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpInvalDstIp")
    {
        pktrcvddrpinvaldstip = value;
        pktrcvddrpinvaldstip.value_namespace = name_space;
        pktrcvddrpinvaldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadSrcMac")
    {
        pktrcvddrpbadsrcmac = value;
        pktrcvddrpbadsrcmac.value_namespace = name_space;
        pktrcvddrpbadsrcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpOwnSrcMac")
    {
        pktrcvddrpownsrcmac = value;
        pktrcvddrpownsrcmac.value_namespace = name_space;
        pktrcvddrpownsrcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpOwnSrcIp")
    {
        pktrcvddrpownsrcip = value;
        pktrcvddrpownsrcip.value_namespace = name_space;
        pktrcvddrpownsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpArpIfNoMem")
    {
        pktrcvddrparpifnomem = value;
        pktrcvddrparpifnomem.value_namespace = name_space;
        pktrcvddrparpifnomem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpNotForUs")
    {
        pktrcvddrpnotforus = value;
        pktrcvddrpnotforus.value_namespace = name_space;
        pktrcvddrpnotforus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdLearnAndDropNotForUs")
    {
        pktrcvdlearnanddropnotforus = value;
        pktrcvdlearnanddropnotforus.value_namespace = name_space;
        pktrcvdlearnanddropnotforus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpSubnetMismatch")
    {
        pktrcvddrpsubnetmismatch = value;
        pktrcvddrpsubnetmismatch.value_namespace = name_space;
        pktrcvddrpsubnetmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpNotInit")
    {
        pktrcvddrpnotinit = value;
        pktrcvddrpnotinit.value_namespace = name_space;
        pktrcvddrpnotinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadCtxt")
    {
        pktrcvddrpbadctxt = value;
        pktrcvddrpbadctxt.value_namespace = name_space;
        pktrcvddrpbadctxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpCtxtNotCreated")
    {
        pktrcvddrpctxtnotcreated = value;
        pktrcvddrpctxtnotcreated.value_namespace = name_space;
        pktrcvddrpctxtnotcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2LocalProxyArp")
    {
        pktrcvddrpl2localproxyarp = value;
        pktrcvddrpl2localproxyarp.value_namespace = name_space;
        pktrcvddrpl2localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2PureL2Pkt")
    {
        pktrcvddrpl2purel2pkt = value;
        pktrcvddrpl2purel2pkt.value_namespace = name_space;
        pktrcvddrpl2purel2pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2PrtUntrusted")
    {
        pktrcvddrpl2prtuntrusted = value;
        pktrcvddrpl2prtuntrusted.value_namespace = name_space;
        pktrcvddrpl2prtuntrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpStdbyFhrpVip")
    {
        pktrcvddrpstdbyfhrpvip = value;
        pktrcvddrpstdbyfhrpvip.value_namespace = name_space;
        pktrcvddrpstdbyfhrpvip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpGratOnProxyArp")
    {
        pktrcvddrpgratonproxyarp = value;
        pktrcvddrpgratonproxyarp.value_namespace = name_space;
        pktrcvddrpgratonproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpArpRequestIgnore")
    {
        pktrcvddrparprequestignore = value;
        pktrcvddrparprequestignore.value_namespace = name_space;
        pktrcvddrparprequestignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2FmQueryFail")
    {
        pktrcvddrpl2fmqueryfail = value;
        pktrcvddrpl2fmqueryfail.value_namespace = name_space;
        pktrcvddrpl2fmqueryfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpTunnelFail")
    {
        pktrcvddrptunnelfail = value;
        pktrcvddrptunnelfail.value_namespace = name_space;
        pktrcvddrptunnelfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpRspOnHsrpStbyActiveVmac")
    {
        pktrcvddrprsponhsrpstbyactivevmac = value;
        pktrcvddrprsponhsrpstbyactivevmac.value_namespace = name_space;
        pktrcvddrprsponhsrpstbyactivevmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdFailImDown")
    {
        pktrcvdfailimdown = value;
        pktrcvdfailimdown.value_namespace = name_space;
        pktrcvdfailimdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdGleanReqCount")
    {
        pktrcvdgleanreqcount = value;
        pktrcvdgleanreqcount.value_namespace = name_space;
        pktrcvdgleanreqcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRfrshReqRecFrmClients")
    {
        pktrfrshreqrecfrmclients = value;
        pktrfrshreqrecfrmclients.value_namespace = name_space;
        pktrfrshreqrecfrmclients.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdSigFrmL2rib")
    {
        pktrcvdsigfrml2rib = value;
        pktrcvdsigfrml2rib.value_namespace = name_space;
        pktrcvdsigfrml2rib.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktRcvdReq")
    {
        pktrcvdreq.yfilter = yfilter;
    }
    if(value_path == "pktRcvdRsp")
    {
        pktrcvdrsp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdProxyArp")
    {
        pktrcvdproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdLocalProxyArp")
    {
        pktrcvdlocalproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyArp")
    {
        pktrcvdenhancedproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyAnycastArp")
    {
        pktrcvdenhancedproxyanycastarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyL2portTrackArp")
    {
        pktrcvdenhancedproxyl2porttrackarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdServerPort")
    {
        pktrcvdserverport.yfilter = yfilter;
    }
    if(value_path == "pktRcvdReqL2")
    {
        pktrcvdreql2.yfilter = yfilter;
    }
    if(value_path == "pktRcvdRspL2")
    {
        pktrcvdrspl2.yfilter = yfilter;
    }
    if(value_path == "pktRcvdTunnel")
    {
        pktrcvdtunnel.yfilter = yfilter;
    }
    if(value_path == "pktRcvdFastpath")
    {
        pktrcvdfastpath.yfilter = yfilter;
    }
    if(value_path == "pktRcvdSnoop")
    {
        pktrcvdsnoop.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrp")
    {
        pktrcvddrp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadIf")
    {
        pktrcvddrpbadif.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadLen")
    {
        pktrcvddrpbadlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadProto")
    {
        pktrcvddrpbadproto.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDropBadHrd")
    {
        pktrcvddropbadhrd.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadL2AddrLen")
    {
        pktrcvddrpbadl2addrlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadL3AddrLen")
    {
        pktrcvddrpbadl3addrlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpInvalSrcIp")
    {
        pktrcvddrpinvalsrcip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpDirBcast")
    {
        pktrcvddrpdirbcast.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpInvalDstIp")
    {
        pktrcvddrpinvaldstip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadSrcMac")
    {
        pktrcvddrpbadsrcmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpOwnSrcMac")
    {
        pktrcvddrpownsrcmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpOwnSrcIp")
    {
        pktrcvddrpownsrcip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpArpIfNoMem")
    {
        pktrcvddrparpifnomem.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpNotForUs")
    {
        pktrcvddrpnotforus.yfilter = yfilter;
    }
    if(value_path == "pktRcvdLearnAndDropNotForUs")
    {
        pktrcvdlearnanddropnotforus.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpSubnetMismatch")
    {
        pktrcvddrpsubnetmismatch.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpNotInit")
    {
        pktrcvddrpnotinit.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadCtxt")
    {
        pktrcvddrpbadctxt.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpCtxtNotCreated")
    {
        pktrcvddrpctxtnotcreated.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2LocalProxyArp")
    {
        pktrcvddrpl2localproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2PureL2Pkt")
    {
        pktrcvddrpl2purel2pkt.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2PrtUntrusted")
    {
        pktrcvddrpl2prtuntrusted.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpStdbyFhrpVip")
    {
        pktrcvddrpstdbyfhrpvip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpGratOnProxyArp")
    {
        pktrcvddrpgratonproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpArpRequestIgnore")
    {
        pktrcvddrparprequestignore.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2FmQueryFail")
    {
        pktrcvddrpl2fmqueryfail.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpTunnelFail")
    {
        pktrcvddrptunnelfail.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpRspOnHsrpStbyActiveVmac")
    {
        pktrcvddrprsponhsrpstbyactivevmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdFailImDown")
    {
        pktrcvdfailimdown.yfilter = yfilter;
    }
    if(value_path == "pktRcvdGleanReqCount")
    {
        pktrcvdgleanreqcount.yfilter = yfilter;
    }
    if(value_path == "pktRfrshReqRecFrmClients")
    {
        pktrfrshreqrecfrmclients.yfilter = yfilter;
    }
    if(value_path == "pktRcvdSigFrmL2rib")
    {
        pktrcvdsigfrml2rib.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktRcvd" || name == "pktRcvdReq" || name == "pktRcvdRsp" || name == "pktRcvdProxyArp" || name == "pktRcvdLocalProxyArp" || name == "pktRcvdEnhancedProxyArp" || name == "pktRcvdEnhancedProxyAnycastArp" || name == "pktRcvdEnhancedProxyL2portTrackArp" || name == "pktRcvdServerPort" || name == "pktRcvdReqL2" || name == "pktRcvdRspL2" || name == "pktRcvdTunnel" || name == "pktRcvdFastpath" || name == "pktRcvdSnoop" || name == "pktRcvdDrp" || name == "pktRcvdDrpBadIf" || name == "pktRcvdDrpBadLen" || name == "pktRcvdDrpBadProto" || name == "pktRcvdDropBadHrd" || name == "pktRcvdDrpBadL2AddrLen" || name == "pktRcvdDrpBadL3AddrLen" || name == "pktRcvdDrpInvalSrcIp" || name == "pktRcvdDrpDirBcast" || name == "pktRcvdDrpInvalDstIp" || name == "pktRcvdDrpBadSrcMac" || name == "pktRcvdDrpOwnSrcMac" || name == "pktRcvdDrpOwnSrcIp" || name == "pktRcvdDrpArpIfNoMem" || name == "pktRcvdDrpNotForUs" || name == "pktRcvdLearnAndDropNotForUs" || name == "pktRcvdDrpSubnetMismatch" || name == "pktRcvdDrpNotInit" || name == "pktRcvdDrpBadCtxt" || name == "pktRcvdDrpCtxtNotCreated" || name == "pktRcvdDrpL2LocalProxyArp" || name == "pktRcvdDrpL2PureL2Pkt" || name == "pktRcvdDrpL2PrtUntrusted" || name == "pktRcvdDrpStdbyFhrpVip" || name == "pktRcvdDrpGratOnProxyArp" || name == "pktRcvdDrpArpRequestIgnore" || name == "pktRcvdDrpL2FmQueryFail" || name == "pktRcvdDrpTunnelFail" || name == "pktRcvdDrpRspOnHsrpStbyActiveVmac" || name == "pktRcvdFailImDown" || name == "pktRcvdGleanReqCount" || name == "pktRfrshReqRecFrmClients" || name == "pktRcvdSigFrmL2rib")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::IfstatsadjItems()
    :
    adjadd{YType::uint32, "adjAdd"},
    adjdel{YType::uint32, "adjDel"},
    adjtimeout{YType::uint32, "adjTimeout"}
{

    yang_name = "ifstatsadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::~IfstatsadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_data() const
{
    if (is_presence_container) return true;
    return adjadd.is_set
	|| adjdel.is_set
	|| adjtimeout.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjadd.yfilter)
	|| ydk::is_set(adjdel.yfilter)
	|| ydk::is_set(adjtimeout.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjadd.is_set || is_set(adjadd.yfilter)) leaf_name_data.push_back(adjadd.get_name_leafdata());
    if (adjdel.is_set || is_set(adjdel.yfilter)) leaf_name_data.push_back(adjdel.get_name_leafdata());
    if (adjtimeout.is_set || is_set(adjtimeout.yfilter)) leaf_name_data.push_back(adjtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjAdd")
    {
        adjadd = value;
        adjadd.value_namespace = name_space;
        adjadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDel")
    {
        adjdel = value;
        adjdel.value_namespace = name_space;
        adjdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout = value;
        adjtimeout.value_namespace = name_space;
        adjtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjAdd")
    {
        adjadd.yfilter = yfilter;
    }
    if(value_path == "adjDel")
    {
        adjdel.yfilter = yfilter;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjAdd" || name == "adjDel" || name == "adjTimeout")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::IfstatsmiscItems()
    :
    clientmsg{YType::uint32, "clientMsg"},
    clientmsgfail{YType::uint32, "clientMsgFail"},
    iftimeoutmsgfail{YType::uint32, "ifTimeoutMsgFail"},
    ifstatusmsgfail{YType::uint32, "ifStatusMsgFail"}
{

    yang_name = "ifstatsmisc-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::~IfstatsmiscItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_data() const
{
    if (is_presence_container) return true;
    return clientmsg.is_set
	|| clientmsgfail.is_set
	|| iftimeoutmsgfail.is_set
	|| ifstatusmsgfail.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientmsg.yfilter)
	|| ydk::is_set(clientmsgfail.yfilter)
	|| ydk::is_set(iftimeoutmsgfail.yfilter)
	|| ydk::is_set(ifstatusmsgfail.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsmisc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientmsg.is_set || is_set(clientmsg.yfilter)) leaf_name_data.push_back(clientmsg.get_name_leafdata());
    if (clientmsgfail.is_set || is_set(clientmsgfail.yfilter)) leaf_name_data.push_back(clientmsgfail.get_name_leafdata());
    if (iftimeoutmsgfail.is_set || is_set(iftimeoutmsgfail.yfilter)) leaf_name_data.push_back(iftimeoutmsgfail.get_name_leafdata());
    if (ifstatusmsgfail.is_set || is_set(ifstatusmsgfail.yfilter)) leaf_name_data.push_back(ifstatusmsgfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientMsg")
    {
        clientmsg = value;
        clientmsg.value_namespace = name_space;
        clientmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail = value;
        clientmsgfail.value_namespace = name_space;
        clientmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail = value;
        iftimeoutmsgfail.value_namespace = name_space;
        iftimeoutmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail = value;
        ifstatusmsgfail.value_namespace = name_space;
        ifstatusmsgfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientMsg")
    {
        clientmsg.yfilter = yfilter;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clientMsg" || name == "clientMsgFail" || name == "ifTimeoutMsgFail" || name == "ifStatusMsgFail")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::IfstatsmhItems()
    :
    recvaddfrml2rib{YType::uint32, "recvaddfrml2rib"},
    processaddfrml2rib{YType::uint32, "processaddfrml2rib"},
    recvdelfrml2rib{YType::uint32, "recvdelfrml2rib"},
    processdelfrml2rib{YType::uint32, "processdelfrml2rib"},
    recvpcshutfrml2rib{YType::uint32, "recvpcshutfrml2rib"},
    processpcshutfrml2rib{YType::uint32, "processpcshutfrml2rib"},
    recvremoteupdfrml2rib{YType::uint32, "recvremoteupdfrml2rib"},
    processremoteupdfrml2rib{YType::uint32, "processremoteupdfrml2rib"},
    psadderrinvalidflags{YType::uint32, "psadderrinvalidflags"},
    psdelerrinvalidflags{YType::uint32, "psdelerrinvalidflags"},
    psadderrinvalidcurrstate{YType::uint32, "psadderrinvalidcurrstate"},
    psdelerrinvalidcurrstate{YType::uint32, "psdelerrinvalidcurrstate"},
    psdelerrmacmismatch{YType::uint32, "psdelerrmacmismatch"},
    psdelerrsecdelfrml2rib{YType::uint32, "psdelerrsecdelfrml2rib"},
    psdelerrfortlroute{YType::uint32, "psdelerrfortlroute"},
    tldelerrforpsroroute{YType::uint32, "tldelerrforpsroroute"}
{

    yang_name = "ifstatsmh-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::~IfstatsmhItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_data() const
{
    if (is_presence_container) return true;
    return recvaddfrml2rib.is_set
	|| processaddfrml2rib.is_set
	|| recvdelfrml2rib.is_set
	|| processdelfrml2rib.is_set
	|| recvpcshutfrml2rib.is_set
	|| processpcshutfrml2rib.is_set
	|| recvremoteupdfrml2rib.is_set
	|| processremoteupdfrml2rib.is_set
	|| psadderrinvalidflags.is_set
	|| psdelerrinvalidflags.is_set
	|| psadderrinvalidcurrstate.is_set
	|| psdelerrinvalidcurrstate.is_set
	|| psdelerrmacmismatch.is_set
	|| psdelerrsecdelfrml2rib.is_set
	|| psdelerrfortlroute.is_set
	|| tldelerrforpsroroute.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recvaddfrml2rib.yfilter)
	|| ydk::is_set(processaddfrml2rib.yfilter)
	|| ydk::is_set(recvdelfrml2rib.yfilter)
	|| ydk::is_set(processdelfrml2rib.yfilter)
	|| ydk::is_set(recvpcshutfrml2rib.yfilter)
	|| ydk::is_set(processpcshutfrml2rib.yfilter)
	|| ydk::is_set(recvremoteupdfrml2rib.yfilter)
	|| ydk::is_set(processremoteupdfrml2rib.yfilter)
	|| ydk::is_set(psadderrinvalidflags.yfilter)
	|| ydk::is_set(psdelerrinvalidflags.yfilter)
	|| ydk::is_set(psadderrinvalidcurrstate.yfilter)
	|| ydk::is_set(psdelerrinvalidcurrstate.yfilter)
	|| ydk::is_set(psdelerrmacmismatch.yfilter)
	|| ydk::is_set(psdelerrsecdelfrml2rib.yfilter)
	|| ydk::is_set(psdelerrfortlroute.yfilter)
	|| ydk::is_set(tldelerrforpsroroute.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsmh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recvaddfrml2rib.is_set || is_set(recvaddfrml2rib.yfilter)) leaf_name_data.push_back(recvaddfrml2rib.get_name_leafdata());
    if (processaddfrml2rib.is_set || is_set(processaddfrml2rib.yfilter)) leaf_name_data.push_back(processaddfrml2rib.get_name_leafdata());
    if (recvdelfrml2rib.is_set || is_set(recvdelfrml2rib.yfilter)) leaf_name_data.push_back(recvdelfrml2rib.get_name_leafdata());
    if (processdelfrml2rib.is_set || is_set(processdelfrml2rib.yfilter)) leaf_name_data.push_back(processdelfrml2rib.get_name_leafdata());
    if (recvpcshutfrml2rib.is_set || is_set(recvpcshutfrml2rib.yfilter)) leaf_name_data.push_back(recvpcshutfrml2rib.get_name_leafdata());
    if (processpcshutfrml2rib.is_set || is_set(processpcshutfrml2rib.yfilter)) leaf_name_data.push_back(processpcshutfrml2rib.get_name_leafdata());
    if (recvremoteupdfrml2rib.is_set || is_set(recvremoteupdfrml2rib.yfilter)) leaf_name_data.push_back(recvremoteupdfrml2rib.get_name_leafdata());
    if (processremoteupdfrml2rib.is_set || is_set(processremoteupdfrml2rib.yfilter)) leaf_name_data.push_back(processremoteupdfrml2rib.get_name_leafdata());
    if (psadderrinvalidflags.is_set || is_set(psadderrinvalidflags.yfilter)) leaf_name_data.push_back(psadderrinvalidflags.get_name_leafdata());
    if (psdelerrinvalidflags.is_set || is_set(psdelerrinvalidflags.yfilter)) leaf_name_data.push_back(psdelerrinvalidflags.get_name_leafdata());
    if (psadderrinvalidcurrstate.is_set || is_set(psadderrinvalidcurrstate.yfilter)) leaf_name_data.push_back(psadderrinvalidcurrstate.get_name_leafdata());
    if (psdelerrinvalidcurrstate.is_set || is_set(psdelerrinvalidcurrstate.yfilter)) leaf_name_data.push_back(psdelerrinvalidcurrstate.get_name_leafdata());
    if (psdelerrmacmismatch.is_set || is_set(psdelerrmacmismatch.yfilter)) leaf_name_data.push_back(psdelerrmacmismatch.get_name_leafdata());
    if (psdelerrsecdelfrml2rib.is_set || is_set(psdelerrsecdelfrml2rib.yfilter)) leaf_name_data.push_back(psdelerrsecdelfrml2rib.get_name_leafdata());
    if (psdelerrfortlroute.is_set || is_set(psdelerrfortlroute.yfilter)) leaf_name_data.push_back(psdelerrfortlroute.get_name_leafdata());
    if (tldelerrforpsroroute.is_set || is_set(tldelerrforpsroroute.yfilter)) leaf_name_data.push_back(tldelerrforpsroroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recvaddfrml2rib")
    {
        recvaddfrml2rib = value;
        recvaddfrml2rib.value_namespace = name_space;
        recvaddfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processaddfrml2rib")
    {
        processaddfrml2rib = value;
        processaddfrml2rib.value_namespace = name_space;
        processaddfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvdelfrml2rib")
    {
        recvdelfrml2rib = value;
        recvdelfrml2rib.value_namespace = name_space;
        recvdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processdelfrml2rib")
    {
        processdelfrml2rib = value;
        processdelfrml2rib.value_namespace = name_space;
        processdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvpcshutfrml2rib")
    {
        recvpcshutfrml2rib = value;
        recvpcshutfrml2rib.value_namespace = name_space;
        recvpcshutfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processpcshutfrml2rib")
    {
        processpcshutfrml2rib = value;
        processpcshutfrml2rib.value_namespace = name_space;
        processpcshutfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvremoteupdfrml2rib")
    {
        recvremoteupdfrml2rib = value;
        recvremoteupdfrml2rib.value_namespace = name_space;
        recvremoteupdfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processremoteupdfrml2rib")
    {
        processremoteupdfrml2rib = value;
        processremoteupdfrml2rib.value_namespace = name_space;
        processremoteupdfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psadderrinvalidflags")
    {
        psadderrinvalidflags = value;
        psadderrinvalidflags.value_namespace = name_space;
        psadderrinvalidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrinvalidflags")
    {
        psdelerrinvalidflags = value;
        psdelerrinvalidflags.value_namespace = name_space;
        psdelerrinvalidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psadderrinvalidcurrstate")
    {
        psadderrinvalidcurrstate = value;
        psadderrinvalidcurrstate.value_namespace = name_space;
        psadderrinvalidcurrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrinvalidcurrstate")
    {
        psdelerrinvalidcurrstate = value;
        psdelerrinvalidcurrstate.value_namespace = name_space;
        psdelerrinvalidcurrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrmacmismatch")
    {
        psdelerrmacmismatch = value;
        psdelerrmacmismatch.value_namespace = name_space;
        psdelerrmacmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrsecdelfrml2rib")
    {
        psdelerrsecdelfrml2rib = value;
        psdelerrsecdelfrml2rib.value_namespace = name_space;
        psdelerrsecdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrfortlroute")
    {
        psdelerrfortlroute = value;
        psdelerrfortlroute.value_namespace = name_space;
        psdelerrfortlroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tldelerrforpsroroute")
    {
        tldelerrforpsroroute = value;
        tldelerrforpsroroute.value_namespace = name_space;
        tldelerrforpsroroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recvaddfrml2rib")
    {
        recvaddfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processaddfrml2rib")
    {
        processaddfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvdelfrml2rib")
    {
        recvdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processdelfrml2rib")
    {
        processdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvpcshutfrml2rib")
    {
        recvpcshutfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processpcshutfrml2rib")
    {
        processpcshutfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvremoteupdfrml2rib")
    {
        recvremoteupdfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processremoteupdfrml2rib")
    {
        processremoteupdfrml2rib.yfilter = yfilter;
    }
    if(value_path == "psadderrinvalidflags")
    {
        psadderrinvalidflags.yfilter = yfilter;
    }
    if(value_path == "psdelerrinvalidflags")
    {
        psdelerrinvalidflags.yfilter = yfilter;
    }
    if(value_path == "psadderrinvalidcurrstate")
    {
        psadderrinvalidcurrstate.yfilter = yfilter;
    }
    if(value_path == "psdelerrinvalidcurrstate")
    {
        psdelerrinvalidcurrstate.yfilter = yfilter;
    }
    if(value_path == "psdelerrmacmismatch")
    {
        psdelerrmacmismatch.yfilter = yfilter;
    }
    if(value_path == "psdelerrsecdelfrml2rib")
    {
        psdelerrsecdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "psdelerrfortlroute")
    {
        psdelerrfortlroute.yfilter = yfilter;
    }
    if(value_path == "tldelerrforpsroroute")
    {
        tldelerrforpsroroute.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recvaddfrml2rib" || name == "processaddfrml2rib" || name == "recvdelfrml2rib" || name == "processdelfrml2rib" || name == "recvpcshutfrml2rib" || name == "processpcshutfrml2rib" || name == "recvremoteupdfrml2rib" || name == "processremoteupdfrml2rib" || name == "psadderrinvalidflags" || name == "psdelerrinvalidflags" || name == "psadderrinvalidcurrstate" || name == "psdelerrinvalidcurrstate" || name == "psdelerrmacmismatch" || name == "psdelerrsecdelfrml2rib" || name == "psdelerrfortlroute" || name == "tldelerrforpsroroute")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ArpItems::InstItems::IpgleanthrottleItems::IpgleanthrottleItems()
    :
    adminst{YType::enumeration, "adminSt"},
    syslog{YType::uint32, "syslog"},
    maxpacket{YType::uint32, "maxPacket"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "ipgleanthrottle-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::IpgleanthrottleItems::~IpgleanthrottleItems()
{
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| syslog.is_set
	|| maxpacket.is_set
	|| timeout.is_set;
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(maxpacket.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::ArpItems::InstItems::IpgleanthrottleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::IpgleanthrottleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipgleanthrottle-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::IpgleanthrottleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (maxpacket.is_set || is_set(maxpacket.yfilter)) leaf_name_data.push_back(maxpacket.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::IpgleanthrottleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::IpgleanthrottleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::IpgleanthrottleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPacket")
    {
        maxpacket = value;
        maxpacket.value_namespace = name_space;
        maxpacket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::IpgleanthrottleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "maxPacket")
    {
        maxpacket.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "syslog" || name == "maxPacket" || name == "timeout")
        return true;
    return false;
}

System::ArpItems::InstItems::EvtLogsItems::EvtLogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtLogs-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::EvtLogsItems::~EvtLogsItems()
{
}

bool System::ArpItems::InstItems::EvtLogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::EvtLogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::EvtLogsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::EvtLogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtLogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::EvtLogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::EvtLogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::EvtLogsItems::EventLogsList>();
        ent_->parent = this;
        eventlogs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::EvtLogsItems::get_children() const
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

void System::ArpItems::InstItems::EvtLogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::EvtLogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::EvtLogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::ArpItems::InstItems::EvtLogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtLogs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::EvtLogsItems::EventLogsList::~EventLogsList()
{
}

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set;
}

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter);
}

std::string System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/evtLogs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::EvtLogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::EvtLogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize")
        return true;
    return false;
}

System::ArpItems::InstItems::VpcItems::VpcItems()
    :
    dom_items(std::make_shared<System::ArpItems::InstItems::VpcItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::VpcItems::~VpcItems()
{
}

bool System::ArpItems::InstItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::ArpItems::InstItems::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::ArpItems::InstItems::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::ArpItems::InstItems::VpcItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::ArpItems::InstItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::ArpItems::InstItems::VpcItems::DomItems::DomItems()
    :
    vpcdom_list(this, {"domainid"})
{

    yang_name = "dom-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::VpcItems::DomItems::~DomItems()
{
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vpcdom_list.len(); index++)
    {
        if(vpcdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<vpcdom_list.len(); index++)
    {
        if(vpcdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::VpcItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::VpcItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VpcDom-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList>();
        ent_->parent = this;
        vpcdom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::VpcItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vpcdom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::VpcItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::VpcItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VpcDom-list")
        return true;
    return false;
}

System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::VpcDomList()
    :
    domainid{YType::uint16, "domainId"},
    arpsync{YType::enumeration, "arpSync"}
{

    yang_name = "VpcDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::~VpcDomList()
{
}

bool System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::has_data() const
{
    if (is_presence_container) return true;
    return domainid.is_set
	|| arpsync.is_set;
}

bool System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domainid.yfilter)
	|| ydk::is_set(arpsync.yfilter);
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/vpc-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VpcDom-list";
    ADD_KEY_TOKEN(domainid, "domainId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domainid.is_set || is_set(domainid.yfilter)) leaf_name_data.push_back(domainid.get_name_leafdata());
    if (arpsync.is_set || is_set(arpsync.yfilter)) leaf_name_data.push_back(arpsync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domainId")
    {
        domainid = value;
        domainid.value_namespace = name_space;
        domainid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpSync")
    {
        arpsync = value;
        arpsync.value_namespace = name_space;
        arpsync.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domainId")
    {
        domainid.yfilter = yfilter;
    }
    if(value_path == "arpSync")
    {
        arpsync.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domainId" || name == "arpSync")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbItems()
    :
    dbsupcache_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DbItems::~DbItems()
{
}

bool System::ArpItems::InstItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dbsupcache_list.len(); index++)
    {
        if(dbsupcache_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<dbsupcache_list.len(); index++)
    {
        if(dbsupcache_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DbSupCache-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList>();
        ent_->parent = this;
        dbsupcache_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dbsupcache_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DbSupCache-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::DbSupCacheList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    vlan_items(std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "DbSupCache-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::~DbSupCacheList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DbSupCache-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DbItems::DbSupCacheList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::VlanItems()
    :
    supcachevlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "DbSupCache-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::~VlanItems()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supcachevlan_list.len(); index++)
    {
        if(supcachevlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<supcachevlan_list.len(); index++)
    {
        if(supcachevlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupCacheVlan-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList>();
        ent_->parent = this;
        supcachevlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : supcachevlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupCacheVlan-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::SupCacheVlanList()
    :
    id{YType::uint16, "id"},
    suppressarpmode{YType::enumeration, "suppressArpMode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    ip_items(std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "SupCacheVlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::~SupCacheVlanList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| suppressarpmode.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(suppressarpmode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupCacheVlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (suppressarpmode.is_set || is_set(suppressarpmode.yfilter)) leaf_name_data.push_back(suppressarpmode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressArpMode")
    {
        suppressarpmode = value;
        suppressarpmode.value_namespace = name_space;
        suppressarpmode.value_namespace_prefix = name_space_prefix;
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
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "suppressArpMode")
    {
        suppressarpmode.yfilter = yfilter;
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
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "id" || name == "suppressArpMode" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::IpItems()
    :
    supcacheentry_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "SupCacheVlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::~IpItems()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supcacheentry_list.len(); index++)
    {
        if(supcacheentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<supcacheentry_list.len(); index++)
    {
        if(supcacheentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupCacheEntry-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList>();
        ent_->parent = this;
        supcacheentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : supcacheentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupCacheEntry-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::SupCacheEntryList()
    :
    ip{YType::str, "ip"},
    flags{YType::str, "flags"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"},
    phyid{YType::str, "phyid"},
    remotevtepaddr{YType::str, "remotevtepaddr"}
{

    yang_name = "SupCacheEntry-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::~SupCacheEntryList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| flags.is_set
	|| mac.is_set
	|| upts.is_set
	|| phyid.is_set
	|| remotevtepaddr.is_set;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(phyid.yfilter)
	|| ydk::is_set(remotevtepaddr.yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupCacheEntry-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (phyid.is_set || is_set(phyid.yfilter)) leaf_name_data.push_back(phyid.get_name_leafdata());
    if (remotevtepaddr.is_set || is_set(remotevtepaddr.yfilter)) leaf_name_data.push_back(remotevtepaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phyid")
    {
        phyid = value;
        phyid.value_namespace = name_space;
        phyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotevtepaddr")
    {
        remotevtepaddr = value;
        remotevtepaddr.value_namespace = name_space;
        remotevtepaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "phyid")
    {
        phyid.yfilter = yfilter;
    }
    if(value_path == "remotevtepaddr")
    {
        remotevtepaddr.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "flags" || name == "mac" || name == "upTS" || name == "phyid" || name == "remotevtepaddr")
        return true;
    return false;
}

System::BfdItems::BfdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::BfdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::~BfdItems()
{
}

bool System::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::BfdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::BfdItems::InstItems::InstItems()
    :
    echoif{YType::str, "echoIf"},
    startupintvl{YType::uint16, "startupIntvl"},
    slowintvl{YType::uint16, "slowIntvl"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    if_items(std::make_shared<System::BfdItems::InstItems::IfItems>())
    , af_items(std::make_shared<System::BfdItems::InstItems::AfItems>())
    , mhop_items(std::make_shared<System::BfdItems::InstItems::MhopItems>())
    , ka_items(std::make_shared<System::BfdItems::InstItems::KaItems>())
    , session_items(std::make_shared<System::BfdItems::InstItems::SessionItems>())
{
    if_items->parent = this;
    af_items->parent = this;
    mhop_items->parent = this;
    ka_items->parent = this;
    session_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::~InstItems()
{
}

bool System::BfdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return echoif.is_set
	|| startupintvl.is_set
	|| slowintvl.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (mhop_items !=  nullptr && mhop_items->has_data())
	|| (ka_items !=  nullptr && ka_items->has_data())
	|| (session_items !=  nullptr && session_items->has_data());
}

bool System::BfdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echoif.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (mhop_items !=  nullptr && mhop_items->has_operation())
	|| (ka_items !=  nullptr && ka_items->has_operation())
	|| (session_items !=  nullptr && session_items->has_operation());
}

std::string System::BfdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echoif.is_set || is_set(echoif.yfilter)) leaf_name_data.push_back(echoif.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::BfdItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BfdItems::InstItems::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "mhop-items")
    {
        if(mhop_items == nullptr)
        {
            mhop_items = std::make_shared<System::BfdItems::InstItems::MhopItems>();
        }
        return mhop_items;
    }

    if(child_yang_name == "ka-items")
    {
        if(ka_items == nullptr)
        {
            ka_items = std::make_shared<System::BfdItems::InstItems::KaItems>();
        }
        return ka_items;
    }

    if(child_yang_name == "session-items")
    {
        if(session_items == nullptr)
        {
            session_items = std::make_shared<System::BfdItems::InstItems::SessionItems>();
        }
        return session_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    if(mhop_items != nullptr)
    {
        _children["mhop-items"] = mhop_items;
    }

    if(ka_items != nullptr)
    {
        _children["ka-items"] = ka_items;
    }

    if(session_items != nullptr)
    {
        _children["session-items"] = session_items;
    }

    return _children;
}

void System::BfdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echoIf")
    {
        echoif = value;
        echoif.value_namespace = name_space;
        echoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
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

void System::BfdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echoIf")
    {
        echoif.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
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

bool System::BfdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "af-items" || name == "mhop-items" || name == "ka-items" || name == "session-items" || name == "echoIf" || name == "startupIntvl" || name == "slowIntvl" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::IfItems::~IfItems()
{
}

bool System::BfdItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::get_children() const
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

void System::BfdItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    echoadminst{YType::enumeration, "echoAdminSt"},
    ctrl{YType::str, "ctrl"},
    trkmbrlnk{YType::enumeration, "trkMbrLnk"},
    sttm{YType::uint32, "stTm"},
    dst{YType::str, "dst"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    auth_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AuthItems>())
    , af_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems>())
    , nbr_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems>())
    , ifka_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::IfkaItems>())
    , rtvrfmbr_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    auth_items->parent = this;
    af_items->parent = this;
    nbr_items->parent = this;
    ifka_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| echoadminst.is_set
	|| ctrl.is_set
	|| trkmbrlnk.is_set
	|| sttm.is_set
	|| dst.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (nbr_items !=  nullptr && nbr_items->has_data())
	|| (ifka_items !=  nullptr && ifka_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::BfdItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(echoadminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(trkmbrlnk.yfilter)
	|| ydk::is_set(sttm.yfilter)
	|| ydk::is_set(dst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (nbr_items !=  nullptr && nbr_items->has_operation())
	|| (ifka_items !=  nullptr && ifka_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::BfdItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (echoadminst.is_set || is_set(echoadminst.yfilter)) leaf_name_data.push_back(echoadminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (trkmbrlnk.is_set || is_set(trkmbrlnk.yfilter)) leaf_name_data.push_back(trkmbrlnk.get_name_leafdata());
    if (sttm.is_set || is_set(sttm.yfilter)) leaf_name_data.push_back(sttm.get_name_leafdata());
    if (dst.is_set || is_set(dst.yfilter)) leaf_name_data.push_back(dst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "nbr-items")
    {
        if(nbr_items == nullptr)
        {
            nbr_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems>();
        }
        return nbr_items;
    }

    if(child_yang_name == "ifka-items")
    {
        if(ifka_items == nullptr)
        {
            ifka_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::IfkaItems>();
        }
        return ifka_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_items != nullptr)
    {
        _children["auth-items"] = auth_items;
    }

    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    if(nbr_items != nullptr)
    {
        _children["nbr-items"] = nbr_items;
    }

    if(ifka_items != nullptr)
    {
        _children["ifka-items"] = ifka_items;
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

void System::BfdItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst = value;
        echoadminst.value_namespace = name_space;
        echoadminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trkMbrLnk")
    {
        trkmbrlnk = value;
        trkmbrlnk.value_namespace = name_space;
        trkmbrlnk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stTm")
    {
        sttm = value;
        sttm.value_namespace = name_space;
        sttm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst")
    {
        dst = value;
        dst.value_namespace = name_space;
        dst.value_namespace_prefix = name_space_prefix;
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

void System::BfdItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "trkMbrLnk")
    {
        trkmbrlnk.yfilter = yfilter;
    }
    if(value_path == "stTm")
    {
        sttm.yfilter = yfilter;
    }
    if(value_path == "dst")
    {
        dst.yfilter = yfilter;
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

bool System::BfdItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "af-items" || name == "nbr-items" || name == "ifka-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "echoAdminSt" || name == "ctrl" || name == "trkMbrLnk" || name == "stTm" || name == "dst" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AuthItems::AuthItems()
    :
    authinterop{YType::enumeration, "authInterop"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    hexkeysize{YType::uint8, "hexKeySize"},
    hexkey{YType::str, "hexKey"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AuthItems::~AuthItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return authinterop.is_set
	|| type.is_set
	|| keyid.is_set
	|| hexkeysize.is_set
	|| hexkey.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authinterop.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(hexkeysize.yfilter)
	|| ydk::is_set(hexkey.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authinterop.is_set || is_set(authinterop.yfilter)) leaf_name_data.push_back(authinterop.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (hexkeysize.is_set || is_set(hexkeysize.yfilter)) leaf_name_data.push_back(hexkeysize.get_name_leafdata());
    if (hexkey.is_set || is_set(hexkey.yfilter)) leaf_name_data.push_back(hexkey.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authInterop")
    {
        authinterop = value;
        authinterop.value_namespace = name_space;
        authinterop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hexKeySize")
    {
        hexkeysize = value;
        hexkeysize.value_namespace = name_space;
        hexkeysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKey")
    {
        hexkey = value;
        hexkey.value_namespace = name_space;
        hexkey.value_namespace_prefix = name_space_prefix;
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

void System::BfdItems::InstItems::IfItems::IfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authInterop")
    {
        authinterop.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize.yfilter = yfilter;
    }
    if(value_path == "hexKey")
    {
        hexkey.yfilter = yfilter;
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

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authInterop" || name == "type" || name == "keyId" || name == "hexKeySize" || name == "hexKey" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::AfItems()
    :
    ifaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::~AfItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfAf-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList>();
        ent_->parent = this;
        ifaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfAf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfAfList()
    :
    type{YType::enumeration, "type"},
    adminst{YType::enumeration, "adminSt"},
    echoadminst{YType::enumeration, "echoAdminSt"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"}
        ,
    auth_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems>())
    , ifka_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems>())
{
    auth_items->parent = this;
    ifka_items->parent = this;

    yang_name = "IfAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::~IfAfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| adminst.is_set
	|| echoadminst.is_set
	|| ctrl.is_set
	|| name.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (ifka_items !=  nullptr && ifka_items->has_data());
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(echoadminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (ifka_items !=  nullptr && ifka_items->has_operation());
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (echoadminst.is_set || is_set(echoadminst.yfilter)) leaf_name_data.push_back(echoadminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "ifka-items")
    {
        if(ifka_items == nullptr)
        {
            ifka_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems>();
        }
        return ifka_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auth_items != nullptr)
    {
        _children["auth-items"] = auth_items;
    }

    if(ifka_items != nullptr)
    {
        _children["ifka-items"] = ifka_items;
    }

    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "echoAdminSt")
    {
        echoadminst = value;
        echoadminst.value_namespace = name_space;
        echoadminst.value_namespace_prefix = name_space_prefix;
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

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst.yfilter = yfilter;
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

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "ifka-items" || name == "type" || name == "adminSt" || name == "echoAdminSt" || name == "ctrl" || name == "name")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::AuthItems()
    :
    authinterop{YType::enumeration, "authInterop"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    hexkeysize{YType::uint8, "hexKeySize"},
    hexkey{YType::str, "hexKey"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::~AuthItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return authinterop.is_set
	|| type.is_set
	|| keyid.is_set
	|| hexkeysize.is_set
	|| hexkey.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authinterop.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(hexkeysize.yfilter)
	|| ydk::is_set(hexkey.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authinterop.is_set || is_set(authinterop.yfilter)) leaf_name_data.push_back(authinterop.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (hexkeysize.is_set || is_set(hexkeysize.yfilter)) leaf_name_data.push_back(hexkeysize.get_name_leafdata());
    if (hexkey.is_set || is_set(hexkey.yfilter)) leaf_name_data.push_back(hexkey.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authInterop")
    {
        authinterop = value;
        authinterop.value_namespace = name_space;
        authinterop.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hexKeySize")
    {
        hexkeysize = value;
        hexkeysize.value_namespace = name_space;
        hexkeysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKey")
    {
        hexkey = value;
        hexkey.value_namespace = name_space;
        hexkey.value_namespace_prefix = name_space_prefix;
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

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authInterop")
    {
        authinterop.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize.yfilter = yfilter;
    }
    if(value_path == "hexKey")
    {
        hexkey.yfilter = yfilter;
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

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authInterop" || name == "type" || name == "keyId" || name == "hexKeySize" || name == "hexKey" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::IfkaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ifka-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::~IfkaItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrItems()
    :
    nbr_list(this, {"srcip", "destip"})
{

    yang_name = "nbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::~NbrItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbr_list.len(); index++)
    {
        if(nbr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_operation() const
{
    for (std::size_t index=0; index<nbr_list.len(); index++)
    {
        if(nbr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nbr-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList>();
        ent_->parent = this;
        nbr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nbr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nbr-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::NbrList()
    :
    srcip{YType::str, "srcip"},
    destip{YType::str, "destip"}
{

    yang_name = "Nbr-list"; yang_parent_name = "nbr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::~NbrList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| destip.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(destip.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nbr-list";
    ADD_KEY_TOKEN(srcip, "srcip");
    ADD_KEY_TOKEN(destip, "destip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcip" || name == "destip")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::IfkaItems::IfkaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ifka-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::IfkaItems::~IfkaItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::IfkaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::IfkaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::AfItems()
    :
    instaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::AfItems::~AfItems()
{
}

bool System::BfdItems::InstItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instaf_list.len(); index++)
    {
        if(instaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<instaf_list.len(); index++)
    {
        if(instaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstAf-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList>();
        ent_->parent = this;
        instaf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instaf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstAf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::InstAfList::InstAfList()
    :
    type{YType::enumeration, "type"},
    slowintvl{YType::uint16, "slowIntvl"},
    name{YType::str, "name"}
        ,
    ka_items(std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList::KaItems>())
{
    ka_items->parent = this;

    yang_name = "InstAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::AfItems::InstAfList::~InstAfList()
{
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| slowintvl.is_set
	|| name.is_set
	|| (ka_items !=  nullptr && ka_items->has_data());
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ka_items !=  nullptr && ka_items->has_operation());
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::InstAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::AfItems::InstAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ka-items")
    {
        if(ka_items == nullptr)
        {
            ka_items = std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList::KaItems>();
        }
        return ka_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::AfItems::InstAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ka_items != nullptr)
    {
        _children["ka-items"] = ka_items;
    }

    return _children;
}

void System::BfdItems::InstItems::AfItems::InstAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::AfItems::InstAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ka-items" || name == "type" || name == "slowIntvl" || name == "name")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::InstAfList::KaItems::KaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ka-items"; yang_parent_name = "InstAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::AfItems::InstAfList::KaItems::~KaItems()
{
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::AfItems::InstAfList::KaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::AfItems::InstAfList::KaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::MhopItems::MhopItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"}
{

    yang_name = "mhop-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::MhopItems::~MhopItems()
{
}

bool System::BfdItems::InstItems::MhopItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set;
}

bool System::BfdItems::InstItems::MhopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter);
}

std::string System::BfdItems::InstItems::MhopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::MhopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mhop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::MhopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::MhopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::MhopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::MhopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::MhopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::MhopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult")
        return true;
    return false;
}

System::BfdItems::InstItems::KaItems::KaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ka-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::KaItems::~KaItems()
{
}

bool System::BfdItems::InstItems::KaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::KaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::KaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::KaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::KaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::KaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::KaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::KaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::KaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::KaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessionItems()
    :
    sess_list(this, {"discr"})
{

    yang_name = "session-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::SessionItems::~SessionItems()
{
}

bool System::BfdItems::InstItems::SessionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sess_list.len(); index++)
    {
        if(sess_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::has_operation() const
{
    for (std::size_t index=0; index<sess_list.len(); index++)
    {
        if(sess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::SessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sess-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList>();
        ent_->parent = this;
        sess_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sess_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::SessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sess-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::SessList()
    :
    discr{YType::uint32, "discr"},
    remotediscr{YType::uint32, "remoteDiscr"},
    asyncport{YType::uint16, "asyncPort"},
    echoport{YType::uint16, "echoPort"},
    localmac{YType::str, "localMac"},
    remotemac{YType::str, "remoteMac"},
    ifid{YType::str, "ifId"},
    iod{YType::uint32, "iod"},
    vrfname{YType::str, "vrfName"},
    srcaddr{YType::str, "srcAddr"},
    destaddr{YType::str, "destAddr"},
    localtxintvl{YType::uint16, "localTxIntvl"},
    localrxintvl{YType::uint16, "localRxIntvl"},
    localdetectmult{YType::uint8, "localDetectMult"},
    txintvl{YType::uint16, "txIntvl"},
    echotxintvl{YType::uint16, "echoTxIntvl"},
    rxintvl{YType::uint16, "rxIntvl"},
    slowintvl{YType::uint16, "slowIntvl"},
    detectmult{YType::uint8, "detectMult"},
    authtype{YType::enumeration, "authType"},
    authseqno{YType::uint32, "authSeqno"},
    operst{YType::enumeration, "operSt"},
    remoteoperst{YType::enumeration, "remoteOperSt"},
    diag{YType::enumeration, "diag"},
    flags{YType::str, "flags"},
    lasttranstime{YType::str, "lastTransTime"},
    lastdiag{YType::enumeration, "lastDiag"},
    lastdowntime{YType::str, "lastDownTime"}
        ,
    stats_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::StatsItems>())
    , peerv_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::PeervItems>())
    , app_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems>())
    , rsmbrsess_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems>())
{
    stats_items->parent = this;
    peerv_items->parent = this;
    app_items->parent = this;
    rsmbrsess_items->parent = this;

    yang_name = "Sess-list"; yang_parent_name = "session-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::SessionItems::SessList::~SessList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_data() const
{
    if (is_presence_container) return true;
    return discr.is_set
	|| remotediscr.is_set
	|| asyncport.is_set
	|| echoport.is_set
	|| localmac.is_set
	|| remotemac.is_set
	|| ifid.is_set
	|| iod.is_set
	|| vrfname.is_set
	|| srcaddr.is_set
	|| destaddr.is_set
	|| localtxintvl.is_set
	|| localrxintvl.is_set
	|| localdetectmult.is_set
	|| txintvl.is_set
	|| echotxintvl.is_set
	|| rxintvl.is_set
	|| slowintvl.is_set
	|| detectmult.is_set
	|| authtype.is_set
	|| authseqno.is_set
	|| operst.is_set
	|| remoteoperst.is_set
	|| diag.is_set
	|| flags.is_set
	|| lasttranstime.is_set
	|| lastdiag.is_set
	|| lastdowntime.is_set
	|| (stats_items !=  nullptr && stats_items->has_data())
	|| (peerv_items !=  nullptr && peerv_items->has_data())
	|| (app_items !=  nullptr && app_items->has_data())
	|| (rsmbrsess_items !=  nullptr && rsmbrsess_items->has_data());
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discr.yfilter)
	|| ydk::is_set(remotediscr.yfilter)
	|| ydk::is_set(asyncport.yfilter)
	|| ydk::is_set(echoport.yfilter)
	|| ydk::is_set(localmac.yfilter)
	|| ydk::is_set(remotemac.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(destaddr.yfilter)
	|| ydk::is_set(localtxintvl.yfilter)
	|| ydk::is_set(localrxintvl.yfilter)
	|| ydk::is_set(localdetectmult.yfilter)
	|| ydk::is_set(txintvl.yfilter)
	|| ydk::is_set(echotxintvl.yfilter)
	|| ydk::is_set(rxintvl.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authseqno.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(remoteoperst.yfilter)
	|| ydk::is_set(diag.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(lasttranstime.yfilter)
	|| ydk::is_set(lastdiag.yfilter)
	|| ydk::is_set(lastdowntime.yfilter)
	|| (stats_items !=  nullptr && stats_items->has_operation())
	|| (peerv_items !=  nullptr && peerv_items->has_operation())
	|| (app_items !=  nullptr && app_items->has_operation())
	|| (rsmbrsess_items !=  nullptr && rsmbrsess_items->has_operation());
}

std::string System::BfdItems::InstItems::SessionItems::SessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/session-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::SessionItems::SessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sess-list";
    ADD_KEY_TOKEN(discr, "discr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discr.is_set || is_set(discr.yfilter)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (remotediscr.is_set || is_set(remotediscr.yfilter)) leaf_name_data.push_back(remotediscr.get_name_leafdata());
    if (asyncport.is_set || is_set(asyncport.yfilter)) leaf_name_data.push_back(asyncport.get_name_leafdata());
    if (echoport.is_set || is_set(echoport.yfilter)) leaf_name_data.push_back(echoport.get_name_leafdata());
    if (localmac.is_set || is_set(localmac.yfilter)) leaf_name_data.push_back(localmac.get_name_leafdata());
    if (remotemac.is_set || is_set(remotemac.yfilter)) leaf_name_data.push_back(remotemac.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (destaddr.is_set || is_set(destaddr.yfilter)) leaf_name_data.push_back(destaddr.get_name_leafdata());
    if (localtxintvl.is_set || is_set(localtxintvl.yfilter)) leaf_name_data.push_back(localtxintvl.get_name_leafdata());
    if (localrxintvl.is_set || is_set(localrxintvl.yfilter)) leaf_name_data.push_back(localrxintvl.get_name_leafdata());
    if (localdetectmult.is_set || is_set(localdetectmult.yfilter)) leaf_name_data.push_back(localdetectmult.get_name_leafdata());
    if (txintvl.is_set || is_set(txintvl.yfilter)) leaf_name_data.push_back(txintvl.get_name_leafdata());
    if (echotxintvl.is_set || is_set(echotxintvl.yfilter)) leaf_name_data.push_back(echotxintvl.get_name_leafdata());
    if (rxintvl.is_set || is_set(rxintvl.yfilter)) leaf_name_data.push_back(rxintvl.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authseqno.is_set || is_set(authseqno.yfilter)) leaf_name_data.push_back(authseqno.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (remoteoperst.is_set || is_set(remoteoperst.yfilter)) leaf_name_data.push_back(remoteoperst.get_name_leafdata());
    if (diag.is_set || is_set(diag.yfilter)) leaf_name_data.push_back(diag.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (lasttranstime.is_set || is_set(lasttranstime.yfilter)) leaf_name_data.push_back(lasttranstime.get_name_leafdata());
    if (lastdiag.is_set || is_set(lastdiag.yfilter)) leaf_name_data.push_back(lastdiag.get_name_leafdata());
    if (lastdowntime.is_set || is_set(lastdowntime.yfilter)) leaf_name_data.push_back(lastdowntime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::StatsItems>();
        }
        return stats_items;
    }

    if(child_yang_name == "peerv-items")
    {
        if(peerv_items == nullptr)
        {
            peerv_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::PeervItems>();
        }
        return peerv_items;
    }

    if(child_yang_name == "app-items")
    {
        if(app_items == nullptr)
        {
            app_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems>();
        }
        return app_items;
    }

    if(child_yang_name == "rsmbrSess-items")
    {
        if(rsmbrsess_items == nullptr)
        {
            rsmbrsess_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems>();
        }
        return rsmbrsess_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats_items != nullptr)
    {
        _children["stats-items"] = stats_items;
    }

    if(peerv_items != nullptr)
    {
        _children["peerv-items"] = peerv_items;
    }

    if(app_items != nullptr)
    {
        _children["app-items"] = app_items;
    }

    if(rsmbrsess_items != nullptr)
    {
        _children["rsmbrSess-items"] = rsmbrsess_items;
    }

    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discr")
    {
        discr = value;
        discr.value_namespace = name_space;
        discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteDiscr")
    {
        remotediscr = value;
        remotediscr.value_namespace = name_space;
        remotediscr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asyncPort")
    {
        asyncport = value;
        asyncport.value_namespace = name_space;
        asyncport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoPort")
    {
        echoport = value;
        echoport.value_namespace = name_space;
        echoport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localMac")
    {
        localmac = value;
        localmac.value_namespace = name_space;
        localmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteMac")
    {
        remotemac = value;
        remotemac.value_namespace = name_space;
        remotemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destAddr")
    {
        destaddr = value;
        destaddr.value_namespace = name_space;
        destaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localTxIntvl")
    {
        localtxintvl = value;
        localtxintvl.value_namespace = name_space;
        localtxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRxIntvl")
    {
        localrxintvl = value;
        localrxintvl.value_namespace = name_space;
        localrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localDetectMult")
    {
        localdetectmult = value;
        localdetectmult.value_namespace = name_space;
        localdetectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIntvl")
    {
        txintvl = value;
        txintvl.value_namespace = name_space;
        txintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoTxIntvl")
    {
        echotxintvl = value;
        echotxintvl.value_namespace = name_space;
        echotxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIntvl")
    {
        rxintvl = value;
        rxintvl.value_namespace = name_space;
        rxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSeqno")
    {
        authseqno = value;
        authseqno.value_namespace = name_space;
        authseqno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst = value;
        remoteoperst.value_namespace = name_space;
        remoteoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag")
    {
        diag = value;
        diag.value_namespace = name_space;
        diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTransTime")
    {
        lasttranstime = value;
        lasttranstime.value_namespace = name_space;
        lasttranstime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDiag")
    {
        lastdiag = value;
        lastdiag.value_namespace = name_space;
        lastdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDownTime")
    {
        lastdowntime = value;
        lastdowntime.value_namespace = name_space;
        lastdowntime.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discr")
    {
        discr.yfilter = yfilter;
    }
    if(value_path == "remoteDiscr")
    {
        remotediscr.yfilter = yfilter;
    }
    if(value_path == "asyncPort")
    {
        asyncport.yfilter = yfilter;
    }
    if(value_path == "echoPort")
    {
        echoport.yfilter = yfilter;
    }
    if(value_path == "localMac")
    {
        localmac.yfilter = yfilter;
    }
    if(value_path == "remoteMac")
    {
        remotemac.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "destAddr")
    {
        destaddr.yfilter = yfilter;
    }
    if(value_path == "localTxIntvl")
    {
        localtxintvl.yfilter = yfilter;
    }
    if(value_path == "localRxIntvl")
    {
        localrxintvl.yfilter = yfilter;
    }
    if(value_path == "localDetectMult")
    {
        localdetectmult.yfilter = yfilter;
    }
    if(value_path == "txIntvl")
    {
        txintvl.yfilter = yfilter;
    }
    if(value_path == "echoTxIntvl")
    {
        echotxintvl.yfilter = yfilter;
    }
    if(value_path == "rxIntvl")
    {
        rxintvl.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authSeqno")
    {
        authseqno.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst.yfilter = yfilter;
    }
    if(value_path == "diag")
    {
        diag.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "lastTransTime")
    {
        lasttranstime.yfilter = yfilter;
    }
    if(value_path == "lastDiag")
    {
        lastdiag.yfilter = yfilter;
    }
    if(value_path == "lastDownTime")
    {
        lastdowntime.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-items" || name == "peerv-items" || name == "app-items" || name == "rsmbrSess-items" || name == "discr" || name == "remoteDiscr" || name == "asyncPort" || name == "echoPort" || name == "localMac" || name == "remoteMac" || name == "ifId" || name == "iod" || name == "vrfName" || name == "srcAddr" || name == "destAddr" || name == "localTxIntvl" || name == "localRxIntvl" || name == "localDetectMult" || name == "txIntvl" || name == "echoTxIntvl" || name == "rxIntvl" || name == "slowIntvl" || name == "detectMult" || name == "authType" || name == "authSeqno" || name == "operSt" || name == "remoteOperSt" || name == "diag" || name == "flags" || name == "lastTransTime" || name == "lastDiag" || name == "lastDownTime")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::StatsItems::StatsItems()
    :
    rxcnt{YType::uint64, "rxCnt"},
    rxavg{YType::uint32, "rxAvg"},
    rxmin{YType::uint32, "rxMin"},
    rxmax{YType::uint32, "rxMax"},
    lastrxpkt{YType::str, "lastRxPkt"},
    txcnt{YType::uint64, "txCnt"},
    txavg{YType::uint32, "txAvg"},
    txmin{YType::uint32, "txMin"},
    txmax{YType::uint32, "txMax"},
    lasttxpkt{YType::str, "lastTxPkt"},
    upcnt{YType::uint32, "upCnt"},
    downcnt{YType::uint32, "downCnt"}
{

    yang_name = "stats-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::StatsItems::~StatsItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return rxcnt.is_set
	|| rxavg.is_set
	|| rxmin.is_set
	|| rxmax.is_set
	|| lastrxpkt.is_set
	|| txcnt.is_set
	|| txavg.is_set
	|| txmin.is_set
	|| txmax.is_set
	|| lasttxpkt.is_set
	|| upcnt.is_set
	|| downcnt.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rxcnt.yfilter)
	|| ydk::is_set(rxavg.yfilter)
	|| ydk::is_set(rxmin.yfilter)
	|| ydk::is_set(rxmax.yfilter)
	|| ydk::is_set(lastrxpkt.yfilter)
	|| ydk::is_set(txcnt.yfilter)
	|| ydk::is_set(txavg.yfilter)
	|| ydk::is_set(txmin.yfilter)
	|| ydk::is_set(txmax.yfilter)
	|| ydk::is_set(lasttxpkt.yfilter)
	|| ydk::is_set(upcnt.yfilter)
	|| ydk::is_set(downcnt.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rxcnt.is_set || is_set(rxcnt.yfilter)) leaf_name_data.push_back(rxcnt.get_name_leafdata());
    if (rxavg.is_set || is_set(rxavg.yfilter)) leaf_name_data.push_back(rxavg.get_name_leafdata());
    if (rxmin.is_set || is_set(rxmin.yfilter)) leaf_name_data.push_back(rxmin.get_name_leafdata());
    if (rxmax.is_set || is_set(rxmax.yfilter)) leaf_name_data.push_back(rxmax.get_name_leafdata());
    if (lastrxpkt.is_set || is_set(lastrxpkt.yfilter)) leaf_name_data.push_back(lastrxpkt.get_name_leafdata());
    if (txcnt.is_set || is_set(txcnt.yfilter)) leaf_name_data.push_back(txcnt.get_name_leafdata());
    if (txavg.is_set || is_set(txavg.yfilter)) leaf_name_data.push_back(txavg.get_name_leafdata());
    if (txmin.is_set || is_set(txmin.yfilter)) leaf_name_data.push_back(txmin.get_name_leafdata());
    if (txmax.is_set || is_set(txmax.yfilter)) leaf_name_data.push_back(txmax.get_name_leafdata());
    if (lasttxpkt.is_set || is_set(lasttxpkt.yfilter)) leaf_name_data.push_back(lasttxpkt.get_name_leafdata());
    if (upcnt.is_set || is_set(upcnt.yfilter)) leaf_name_data.push_back(upcnt.get_name_leafdata());
    if (downcnt.is_set || is_set(downcnt.yfilter)) leaf_name_data.push_back(downcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rxCnt")
    {
        rxcnt = value;
        rxcnt.value_namespace = name_space;
        rxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxAvg")
    {
        rxavg = value;
        rxavg.value_namespace = name_space;
        rxavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMin")
    {
        rxmin = value;
        rxmin.value_namespace = name_space;
        rxmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMax")
    {
        rxmax = value;
        rxmax.value_namespace = name_space;
        rxmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRxPkt")
    {
        lastrxpkt = value;
        lastrxpkt.value_namespace = name_space;
        lastrxpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txCnt")
    {
        txcnt = value;
        txcnt.value_namespace = name_space;
        txcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txAvg")
    {
        txavg = value;
        txavg.value_namespace = name_space;
        txavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMin")
    {
        txmin = value;
        txmin.value_namespace = name_space;
        txmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMax")
    {
        txmax = value;
        txmax.value_namespace = name_space;
        txmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTxPkt")
    {
        lasttxpkt = value;
        lasttxpkt.value_namespace = name_space;
        lasttxpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upCnt")
    {
        upcnt = value;
        upcnt.value_namespace = name_space;
        upcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downCnt")
    {
        downcnt = value;
        downcnt.value_namespace = name_space;
        downcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rxCnt")
    {
        rxcnt.yfilter = yfilter;
    }
    if(value_path == "rxAvg")
    {
        rxavg.yfilter = yfilter;
    }
    if(value_path == "rxMin")
    {
        rxmin.yfilter = yfilter;
    }
    if(value_path == "rxMax")
    {
        rxmax.yfilter = yfilter;
    }
    if(value_path == "lastRxPkt")
    {
        lastrxpkt.yfilter = yfilter;
    }
    if(value_path == "txCnt")
    {
        txcnt.yfilter = yfilter;
    }
    if(value_path == "txAvg")
    {
        txavg.yfilter = yfilter;
    }
    if(value_path == "txMin")
    {
        txmin.yfilter = yfilter;
    }
    if(value_path == "txMax")
    {
        txmax.yfilter = yfilter;
    }
    if(value_path == "lastTxPkt")
    {
        lasttxpkt.yfilter = yfilter;
    }
    if(value_path == "upCnt")
    {
        upcnt.yfilter = yfilter;
    }
    if(value_path == "downCnt")
    {
        downcnt.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rxCnt" || name == "rxAvg" || name == "rxMin" || name == "rxMax" || name == "lastRxPkt" || name == "txCnt" || name == "txAvg" || name == "txMin" || name == "txMax" || name == "lastTxPkt" || name == "upCnt" || name == "downCnt")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::PeervItems::PeervItems()
    :
    diag{YType::enumeration, "diag"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    detectmult{YType::uint8, "detectMult"},
    mydisc{YType::uint32, "myDisc"},
    yourdisc{YType::uint32, "yourDisc"},
    mintx{YType::uint16, "minTx"},
    minrx{YType::uint16, "minRx"},
    minecho{YType::uint16, "minEcho"}
{

    yang_name = "peerv-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::PeervItems::~PeervItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_data() const
{
    if (is_presence_container) return true;
    return diag.is_set
	|| operst.is_set
	|| flags.is_set
	|| detectmult.is_set
	|| mydisc.is_set
	|| yourdisc.is_set
	|| mintx.is_set
	|| minrx.is_set
	|| minecho.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(mydisc.yfilter)
	|| ydk::is_set(yourdisc.yfilter)
	|| ydk::is_set(mintx.yfilter)
	|| ydk::is_set(minrx.yfilter)
	|| ydk::is_set(minecho.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peerv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diag.is_set || is_set(diag.yfilter)) leaf_name_data.push_back(diag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (mydisc.is_set || is_set(mydisc.yfilter)) leaf_name_data.push_back(mydisc.get_name_leafdata());
    if (yourdisc.is_set || is_set(yourdisc.yfilter)) leaf_name_data.push_back(yourdisc.get_name_leafdata());
    if (mintx.is_set || is_set(mintx.yfilter)) leaf_name_data.push_back(mintx.get_name_leafdata());
    if (minrx.is_set || is_set(minrx.yfilter)) leaf_name_data.push_back(minrx.get_name_leafdata());
    if (minecho.is_set || is_set(minecho.yfilter)) leaf_name_data.push_back(minecho.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::PeervItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diag")
    {
        diag = value;
        diag.value_namespace = name_space;
        diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myDisc")
    {
        mydisc = value;
        mydisc.value_namespace = name_space;
        mydisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yourDisc")
    {
        yourdisc = value;
        yourdisc.value_namespace = name_space;
        yourdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTx")
    {
        mintx = value;
        mintx.value_namespace = name_space;
        mintx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRx")
    {
        minrx = value;
        minrx.value_namespace = name_space;
        minrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minEcho")
    {
        minecho = value;
        minecho.value_namespace = name_space;
        minecho.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::PeervItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diag")
    {
        diag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "myDisc")
    {
        mydisc.yfilter = yfilter;
    }
    if(value_path == "yourDisc")
    {
        yourdisc.yfilter = yfilter;
    }
    if(value_path == "minTx")
    {
        mintx.yfilter = yfilter;
    }
    if(value_path == "minRx")
    {
        minrx.yfilter = yfilter;
    }
    if(value_path == "minEcho")
    {
        minecho.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diag" || name == "operSt" || name == "flags" || name == "detectMult" || name == "myDisc" || name == "yourDisc" || name == "minTx" || name == "minRx" || name == "minEcho")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::AppItems()
    :
    sessapp_list(this, {"id"})
{

    yang_name = "app-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::~AppItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessapp_list.len(); index++)
    {
        if(sessapp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_operation() const
{
    for (std::size_t index=0; index<sessapp_list.len(); index++)
    {
        if(sessapp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessApp-list")
    {
        auto ent_ = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList>();
        ent_->parent = this;
        sessapp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sessapp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessApp-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::SessAppList()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    sapid{YType::uint32, "sapId"},
    descr{YType::str, "descr"},
    flags{YType::str, "flags"},
    data{YType::str, "data"},
    autoexptime{YType::str, "autoExpTime"}
{

    yang_name = "SessApp-list"; yang_parent_name = "app-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::~SessAppList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| sapid.is_set
	|| descr.is_set
	|| flags.is_set
	|| data.is_set
	|| autoexptime.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(autoexptime.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessApp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (autoexptime.is_set || is_set(autoexptime.yfilter)) leaf_name_data.push_back(autoexptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoExpTime")
    {
        autoexptime = value;
        autoexptime.value_namespace = name_space;
        autoexptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "autoExpTime")
    {
        autoexptime.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "sapId" || name == "descr" || name == "flags" || name == "data" || name == "autoExpTime")
        return true;
    return false;
}

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
    tdn{YType::str, "tDn"}
{

    yang_name = "RsMbrSess-list"; yang_parent_name = "rsmbrSess-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::~RsMbrSessList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::CfsItems::CfsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::CfsItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "cfs-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CfsItems::~CfsItems()
{
}

bool System::CfsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::CfsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::CfsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::CfsItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::CfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::CfsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::CfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::CfsItems::InstItems::InstItems()
    :
    distribute{YType::enumeration, "distribute"},
    ethdist{YType::enumeration, "ethDist"},
    ipv4dist{YType::enumeration, "ipv4Dist"},
    ipv6dist{YType::enumeration, "ipv6Dist"},
    ipv4mcast{YType::str, "ipv4Mcast"},
    ipv6mcast{YType::str, "ipv6Mcast"}
{

    yang_name = "inst-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CfsItems::InstItems::~InstItems()
{
}

bool System::CfsItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return distribute.is_set
	|| ethdist.is_set
	|| ipv4dist.is_set
	|| ipv6dist.is_set
	|| ipv4mcast.is_set
	|| ipv6mcast.is_set;
}

bool System::CfsItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| ydk::is_set(ethdist.yfilter)
	|| ydk::is_set(ipv4dist.yfilter)
	|| ydk::is_set(ipv6dist.yfilter)
	|| ydk::is_set(ipv4mcast.yfilter)
	|| ydk::is_set(ipv6mcast.yfilter);
}

std::string System::CfsItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CfsItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CfsItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());
    if (ethdist.is_set || is_set(ethdist.yfilter)) leaf_name_data.push_back(ethdist.get_name_leafdata());
    if (ipv4dist.is_set || is_set(ipv4dist.yfilter)) leaf_name_data.push_back(ipv4dist.get_name_leafdata());
    if (ipv6dist.is_set || is_set(ipv6dist.yfilter)) leaf_name_data.push_back(ipv6dist.get_name_leafdata());
    if (ipv4mcast.is_set || is_set(ipv4mcast.yfilter)) leaf_name_data.push_back(ipv4mcast.get_name_leafdata());
    if (ipv6mcast.is_set || is_set(ipv6mcast.yfilter)) leaf_name_data.push_back(ipv6mcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CfsItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CfsItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CfsItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethDist")
    {
        ethdist = value;
        ethdist.value_namespace = name_space;
        ethdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Dist")
    {
        ipv4dist = value;
        ipv4dist.value_namespace = name_space;
        ipv4dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Dist")
    {
        ipv6dist = value;
        ipv6dist.value_namespace = name_space;
        ipv6dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Mcast")
    {
        ipv4mcast = value;
        ipv4mcast.value_namespace = name_space;
        ipv4mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Mcast")
    {
        ipv6mcast = value;
        ipv6mcast.value_namespace = name_space;
        ipv6mcast.value_namespace_prefix = name_space_prefix;
    }
}

void System::CfsItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
    if(value_path == "ethDist")
    {
        ethdist.yfilter = yfilter;
    }
    if(value_path == "ipv4Dist")
    {
        ipv4dist.yfilter = yfilter;
    }
    if(value_path == "ipv6Dist")
    {
        ipv6dist.yfilter = yfilter;
    }
    if(value_path == "ipv4Mcast")
    {
        ipv4mcast.yfilter = yfilter;
    }
    if(value_path == "ipv6Mcast")
    {
        ipv6mcast.yfilter = yfilter;
    }
}

bool System::CfsItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "ethDist" || name == "ipv4Dist" || name == "ipv6Dist" || name == "ipv4Mcast" || name == "ipv6Mcast")
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
    if(name == "grp-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "version" || name == "ctrl" || name == "biaScope" || name == "name" || name == "descr" || name == "adminSt")
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
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
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
}

void System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}


}
}

