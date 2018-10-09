
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_43.hpp"
#include "Cisco_NX_OS_device_44.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::BSRInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "BSRInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::~BSRInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BSRInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::~GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList>();
        c->parent = this;
        rpgrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::RPGrangeList()
    :
    addr{YType::str, "addr"},
    flags{YType::str, "flags"},
    rpaddr{YType::str, "rpAddr"}
{

    yang_name = "RPGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::~RPGrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| flags.is_set
	|| rpaddr.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(rpaddr.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "flags" || name == "rpAddr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_children() const
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rpaddrroute{YType::str, "rpAddrRoute"},
    iif{YType::str, "iif"},
    expiryts{YType::str, "expiryTs"},
    rpfnbr{YType::str, "rpfNbr"},
    rpfsrc{YType::str, "rpfSrc"},
    createts{YType::str, "createTs"},
    asserttime{YType::str, "assertTime"},
    rttype{YType::str, "rtType"},
    swpktcnt{YType::uint32, "swPktCnt"},
    swbytecnt{YType::uint32, "swByteCnt"},
    hwpktcnt{YType::uint32, "hwPktCnt"},
    hwbytecnt{YType::uint32, "hwByteCnt"},
    assertmetric{YType::uint32, "assertMetric"},
    assertmetricpref{YType::uint32, "assertMetricPref"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
{

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| name.is_set
	|| ver.is_set
	|| rpaddrroute.is_set
	|| iif.is_set
	|| expiryts.is_set
	|| rpfnbr.is_set
	|| rpfsrc.is_set
	|| createts.is_set
	|| asserttime.is_set
	|| rttype.is_set
	|| swpktcnt.is_set
	|| swbytecnt.is_set
	|| hwpktcnt.is_set
	|| hwbytecnt.is_set
	|| assertmetric.is_set
	|| assertmetricpref.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rpaddrroute.yfilter)
	|| ydk::is_set(iif.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(rpfsrc.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(asserttime.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(swpktcnt.yfilter)
	|| ydk::is_set(swbytecnt.yfilter)
	|| ydk::is_set(hwpktcnt.yfilter)
	|| ydk::is_set(hwbytecnt.yfilter)
	|| ydk::is_set(assertmetric.yfilter)
	|| ydk::is_set(assertmetricpref.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rpaddrroute.is_set || is_set(rpaddrroute.yfilter)) leaf_name_data.push_back(rpaddrroute.get_name_leafdata());
    if (iif.is_set || is_set(iif.yfilter)) leaf_name_data.push_back(iif.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (rpfsrc.is_set || is_set(rpfsrc.yfilter)) leaf_name_data.push_back(rpfsrc.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (asserttime.is_set || is_set(asserttime.yfilter)) leaf_name_data.push_back(asserttime.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (swpktcnt.is_set || is_set(swpktcnt.yfilter)) leaf_name_data.push_back(swpktcnt.get_name_leafdata());
    if (swbytecnt.is_set || is_set(swbytecnt.yfilter)) leaf_name_data.push_back(swbytecnt.get_name_leafdata());
    if (hwpktcnt.is_set || is_set(hwpktcnt.yfilter)) leaf_name_data.push_back(hwpktcnt.get_name_leafdata());
    if (hwbytecnt.is_set || is_set(hwbytecnt.yfilter)) leaf_name_data.push_back(hwbytecnt.get_name_leafdata());
    if (assertmetric.is_set || is_set(assertmetric.yfilter)) leaf_name_data.push_back(assertmetric.get_name_leafdata());
    if (assertmetricpref.is_set || is_set(assertmetricpref.yfilter)) leaf_name_data.push_back(assertmetricpref.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute = value;
        rpaddrroute.value_namespace = name_space;
        rpaddrroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iif")
    {
        iif = value;
        iif.value_namespace = name_space;
        iif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc = value;
        rpfsrc.value_namespace = name_space;
        rpfsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertTime")
    {
        asserttime = value;
        asserttime.value_namespace = name_space;
        asserttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt = value;
        swpktcnt.value_namespace = name_space;
        swpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt = value;
        swbytecnt.value_namespace = name_space;
        swbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt = value;
        hwpktcnt.value_namespace = name_space;
        hwpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt = value;
        hwbytecnt.value_namespace = name_space;
        hwbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetric")
    {
        assertmetric = value;
        assertmetric.value_namespace = name_space;
        assertmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref = value;
        assertmetricpref.value_namespace = name_space;
        assertmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute.yfilter = yfilter;
    }
    if(value_path == "iif")
    {
        iif.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "assertTime")
    {
        asserttime.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt.yfilter = yfilter;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt.yfilter = yfilter;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt.yfilter = yfilter;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt.yfilter = yfilter;
    }
    if(value_path == "assertMetric")
    {
        assertmetric.yfilter = yfilter;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src" || name == "grp" || name == "name" || name == "ver" || name == "rpAddrRoute" || name == "iif" || name == "expiryTs" || name == "rpfNbr" || name == "rpfSrc" || name == "createTs" || name == "assertTime" || name == "rtType" || name == "swPktCnt" || name == "swByteCnt" || name == "hwPktCnt" || name == "hwByteCnt" || name == "assertMetric" || name == "assertMetricPref" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RpItems()
    :
    rpinfo_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::~RpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList>();
        c->parent = this;
        rpinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RPInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    local{YType::boolean, "local"},
    uptime{YType::str, "uptime"},
    arpexp{YType::str, "arpExp"},
    bsrexp{YType::str, "bsrExp"},
    bsraddr{YType::str, "bsrAddr"},
    priority{YType::uint32, "priority"},
    disctype{YType::str, "discType"},
    dfordinal{YType::uint32, "dfOrdinal"}
        ,
    rsrp2grange_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>())
{
    rsrp2grange_items->parent = this;

    yang_name = "RPInfo-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::~RPInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| local.is_set
	|| uptime.is_set
	|| arpexp.is_set
	|| bsrexp.is_set
	|| bsraddr.is_set
	|| priority.is_set
	|| disctype.is_set
	|| dfordinal.is_set
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(arpexp.yfilter)
	|| ydk::is_set(bsrexp.yfilter)
	|| ydk::is_set(bsraddr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(disctype.yfilter)
	|| ydk::is_set(dfordinal.yfilter)
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (arpexp.is_set || is_set(arpexp.yfilter)) leaf_name_data.push_back(arpexp.get_name_leafdata());
    if (bsrexp.is_set || is_set(bsrexp.yfilter)) leaf_name_data.push_back(bsrexp.get_name_leafdata());
    if (bsraddr.is_set || is_set(bsraddr.yfilter)) leaf_name_data.push_back(bsraddr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (disctype.is_set || is_set(disctype.yfilter)) leaf_name_data.push_back(disctype.get_name_leafdata());
    if (dfordinal.is_set || is_set(dfordinal.yfilter)) leaf_name_data.push_back(dfordinal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrP2Grange-items")
    {
        if(rsrp2grange_items == nullptr)
        {
            rsrp2grange_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>();
        }
        return rsrp2grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrp2grange_items != nullptr)
    {
        children["rsrP2Grange-items"] = rsrp2grange_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpExp")
    {
        arpexp = value;
        arpexp.value_namespace = name_space;
        arpexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrExp")
    {
        bsrexp = value;
        bsrexp.value_namespace = name_space;
        bsrexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr = value;
        bsraddr.value_namespace = name_space;
        bsraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discType")
    {
        disctype = value;
        disctype.value_namespace = name_space;
        disctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal = value;
        dfordinal.value_namespace = name_space;
        dfordinal.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "arpExp")
    {
        arpexp.yfilter = yfilter;
    }
    if(value_path == "bsrExp")
    {
        bsrexp.yfilter = yfilter;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "discType")
    {
        disctype.yfilter = yfilter;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrP2Grange-items" || name == "addr" || name == "name" || name == "local" || name == "uptime" || name == "arpExp" || name == "bsrExp" || name == "bsrAddr" || name == "priority" || name == "discType" || name == "dfOrdinal")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsrP2GrangeItems()
    :
    rsrp2grange_list(this, {"tdn"})
{

    yang_name = "rsrP2Grange-items"; yang_parent_name = "RPInfo-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::~RsrP2GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrP2Grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRP2Grange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList>();
        c->parent = this;
        rsrp2grange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrp2grange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRP2Grange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::RsRP2GrangeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRP2Grange-list"; yang_parent_name = "rsrP2Grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::~RsRP2GrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRP2Grange-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbItems()
    :
    ifdb_list(this, {"ifdbtype"})
{

    yang_name = "ifdb-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::~IfdbItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifdb_list.len(); index++)
    {
        if(ifdb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::has_operation() const
{
    for (std::size_t index=0; index<ifdb_list.len(); index++)
    {
        if(ifdb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifdb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ifdb-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList>();
        c->parent = this;
        ifdb_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifdb_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ifdb-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfdbList()
    :
    ifdbtype{YType::enumeration, "ifdbtype"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems>())
    , ifprop_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems>())
    , ifstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems>())
{
    adj_items->parent = this;
    ifprop_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "Ifdb-list"; yang_parent_name = "ifdb-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::~IfdbList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::has_data() const
{
    if (is_presence_container) return true;
    return ifdbtype.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (ifprop_items !=  nullptr && ifprop_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifdbtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (ifprop_items !=  nullptr && ifprop_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ifdb-list";
    ADD_KEY_TOKEN(ifdbtype, "ifdbtype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifdbtype.is_set || is_set(ifdbtype.yfilter)) leaf_name_data.push_back(ifdbtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "ifprop-items")
    {
        if(ifprop_items == nullptr)
        {
            ifprop_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems>();
        }
        return ifprop_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(ifprop_items != nullptr)
    {
        children["ifprop-items"] = ifprop_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifdbtype")
    {
        ifdbtype = value;
        ifdbtype.value_namespace = name_space;
        ifdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifdbtype")
    {
        ifdbtype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "ifprop-items" || name == "ifstats-items" || name == "ifdbtype" || name == "name")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjItems()
    :
    adjep_list(this, {"addr"})
{

    yang_name = "adj-items"; yang_parent_name = "Ifdb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::~AdjItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::get_children() const
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::IfpropItems()
    :
    nexthello{YType::str, "nextHello"},
    nbrholdtime{YType::uint32, "nbrHoldTime"},
    dr{YType::str, "dr"},
    genid{YType::uint32, "genID"}
{

    yang_name = "ifprop-items"; yang_parent_name = "Ifdb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::~IfpropItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::has_data() const
{
    if (is_presence_container) return true;
    return nexthello.is_set
	|| nbrholdtime.is_set
	|| dr.is_set
	|| genid.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthello.yfilter)
	|| ydk::is_set(nbrholdtime.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(genid.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifprop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthello.is_set || is_set(nexthello.yfilter)) leaf_name_data.push_back(nexthello.get_name_leafdata());
    if (nbrholdtime.is_set || is_set(nbrholdtime.yfilter)) leaf_name_data.push_back(nbrholdtime.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nextHello")
    {
        nexthello = value;
        nexthello.value_namespace = name_space;
        nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime = value;
        nbrholdtime.value_namespace = name_space;
        nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genID")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nextHello")
    {
        nexthello.yfilter = yfilter;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "genID")
    {
        genid.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nextHello" || name == "nbrHoldTime" || name == "dr" || name == "genID")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "Ifdb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::~IfstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpItems()
    :
    jptrp_list(this, {"policydir"})
{

    yang_name = "jp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::~JpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_operation() const
{
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "JPTrP-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList>();
        c->parent = this;
        jptrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : jptrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "JPTrP-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::JPTrPList()
    :
    policydir{YType::enumeration, "policyDir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "RtMap"},
    pfxlist{YType::str, "pfxList"},
    itvl{YType::uint16, "itvl"}
{

    yang_name = "JPTrP-list"; yang_parent_name = "jp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::~JPTrPList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_data() const
{
    if (is_presence_container) return true;
    return policydir.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| itvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policydir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(itvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "JPTrP-list";
    ADD_KEY_TOKEN(policydir, "policyDir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policydir.is_set || is_set(policydir.yfilter)) leaf_name_data.push_back(policydir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (itvl.is_set || is_set(itvl.yfilter)) leaf_name_data.push_back(itvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyDir")
    {
        policydir = value;
        policydir.value_namespace = name_space;
        policydir.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "itvl")
    {
        itvl = value;
        itvl.value_namespace = name_space;
        itvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyDir")
    {
        policydir.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "RtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "itvl")
    {
        itvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyDir" || name == "name" || name == "descr" || name == "RtMap" || name == "pfxList" || name == "itvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::HelloItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    helloitvl{YType::uint32, "helloItvl"},
    autht{YType::enumeration, "authT"},
    authkey{YType::str, "authKey"}
{

    yang_name = "hello-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::~HelloItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| helloitvl.is_set
	|| autht.is_set
	|| authkey.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(helloitvl.yfilter)
	|| ydk::is_set(autht.yfilter)
	|| ydk::is_set(authkey.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (helloitvl.is_set || is_set(helloitvl.yfilter)) leaf_name_data.push_back(helloitvl.get_name_leafdata());
    if (autht.is_set || is_set(autht.yfilter)) leaf_name_data.push_back(autht.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "helloItvl")
    {
        helloitvl = value;
        helloitvl.value_namespace = name_space;
        helloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authT")
    {
        autht = value;
        autht.value_namespace = name_space;
        autht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "helloItvl")
    {
        helloitvl.yfilter = yfilter;
    }
    if(value_path == "authT")
    {
        autht.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "helloItvl" || name == "authT" || name == "authKey")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::LimitItems::LimitItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    max{YType::uint32, "max"},
    rsvd{YType::uint32, "rsvd"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "limit-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::LimitItems::~LimitItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| max.is_set
	|| rsvd.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(rsvd.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::LimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::LimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (rsvd.is_set || is_set(rsvd.yfilter)) leaf_name_data.push_back(rsvd.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::LimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::LimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::LimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvd")
    {
        rsvd = value;
        rsvd.value_namespace = name_space;
        rsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::LimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "rsvd")
    {
        rsvd.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "max" || name == "rsvd" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::AsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    prebuildspt{YType::boolean, "preBuildSpt"},
    force{YType::boolean, "force"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
        ,
    sgexp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems>())
    , shared_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems>())
    , reg_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems>())
{
    sgexp_items->parent = this;
    shared_items->parent = this;
    reg_items->parent = this;

    yang_name = "asm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::~AsmItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| prebuildspt.is_set
	|| force.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| (sgexp_items !=  nullptr && sgexp_items->has_data())
	|| (shared_items !=  nullptr && shared_items->has_data())
	|| (reg_items !=  nullptr && reg_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(prebuildspt.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| (sgexp_items !=  nullptr && sgexp_items->has_operation())
	|| (shared_items !=  nullptr && shared_items->has_operation())
	|| (reg_items !=  nullptr && reg_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (prebuildspt.is_set || is_set(prebuildspt.yfilter)) leaf_name_data.push_back(prebuildspt.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgexp-items")
    {
        if(sgexp_items == nullptr)
        {
            sgexp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems>();
        }
        return sgexp_items;
    }

    if(child_yang_name == "shared-items")
    {
        if(shared_items == nullptr)
        {
            shared_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems>();
        }
        return shared_items;
    }

    if(child_yang_name == "reg-items")
    {
        if(reg_items == nullptr)
        {
            reg_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems>();
        }
        return reg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sgexp_items != nullptr)
    {
        children["sgexp-items"] = sgexp_items;
    }

    if(shared_items != nullptr)
    {
        children["shared-items"] = shared_items;
    }

    if(reg_items != nullptr)
    {
        children["reg-items"] = reg_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt = value;
        prebuildspt.value_namespace = name_space;
        prebuildspt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgexp-items" || name == "shared-items" || name == "reg-items" || name == "name" || name == "descr" || name == "ctrl" || name == "preBuildSpt" || name == "force" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::SgexpItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    sgexpitvl{YType::uint32, "sgExpItvl"}
{

    yang_name = "sgexp-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::~SgexpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| sgexpitvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(sgexpitvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgexp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (sgexpitvl.is_set || is_set(sgexpitvl.yfilter)) leaf_name_data.push_back(sgexpitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl = value;
        sgexpitvl.value_namespace = name_space;
        sgexpitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "sgExpItvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::SharedItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    usesptcommand{YType::boolean, "useSPTCommand"}
{

    yang_name = "shared-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::~SharedItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| usesptcommand.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(usesptcommand.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (usesptcommand.is_set || is_set(usesptcommand.yfilter)) leaf_name_data.push_back(usesptcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand = value;
        usesptcommand.value_namespace = name_space;
        usesptcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "useSPTCommand")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::RegItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    addr{YType::str, "addr"},
    srcif{YType::str, "srcIf"},
    maxrate{YType::uint16, "maxRate"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
{

    yang_name = "reg-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::~RegItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| addr.is_set
	|| srcif.is_set
	|| maxrate.is_set
	|| rtmap.is_set
	|| pfxlist.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(maxrate.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (maxrate.is_set || is_set(maxrate.yfilter)) leaf_name_data.push_back(maxrate.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRate")
    {
        maxrate = value;
        maxrate.value_namespace = name_space;
        maxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "maxRate")
    {
        maxrate.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "addr" || name == "srcIf" || name == "maxRate" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::SsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "ssm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::~SsmItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::SsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::SsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::SsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::SsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::DomItems::DomList::SsmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::RangeItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "range-items"; yang_parent_name = "ssm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BidirItems::BidirItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxrp{YType::uint16, "maxRP"},
    dfobitvl{YType::uint16, "dfobItvl"}
{

    yang_name = "bidir-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BidirItems::~BidirItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxrp.is_set
	|| dfobitvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxrp.yfilter)
	|| ydk::is_set(dfobitvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BidirItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BidirItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxrp.is_set || is_set(maxrp.yfilter)) leaf_name_data.push_back(maxrp.get_name_leafdata());
    if (dfobitvl.is_set || is_set(dfobitvl.yfilter)) leaf_name_data.push_back(dfobitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BidirItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BidirItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BidirItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxRP")
    {
        maxrp = value;
        maxrp.value_namespace = name_space;
        maxrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl = value;
        dfobitvl.value_namespace = name_space;
        dfobitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BidirItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxRP")
    {
        maxrp.yfilter = yfilter;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxRP" || name == "dfobItvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::StaticrpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems>())
{
    rp_items->parent = this;

    yang_name = "staticrp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::~StaticrpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "staticrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::RpItems()
    :
    staticrp_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "staticrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::~RpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_operation() const
{
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticRP-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList>();
        c->parent = this;
        staticrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : staticrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticRP-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::StaticRPList()
    :
    addr{YType::str, "addr"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>())
    , rpgrplist_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>())
{
    range_items->parent = this;
    rpgrplist_items->parent = this;

    yang_name = "StaticRP-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::~StaticRPList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| (range_items !=  nullptr && range_items->has_data())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticRP-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>();
        }
        return range_items;
    }

    if(child_yang_name == "rpgrplist-items")
    {
        if(rpgrplist_items == nullptr)
        {
            rpgrplist_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>();
        }
        return rpgrplist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    if(rpgrplist_items != nullptr)
    {
        children["rpgrplist-items"] = rpgrplist_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "rpgrplist-items" || name == "addr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpRange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpRange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::RPGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RPGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::~RPGrpRangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpgrplistItems()
    :
    rpgrplist_list(this, {"grplistname"})
{

    yang_name = "rpgrplist-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::~RpgrplistItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpgrplist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpList-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList>();
        c->parent = this;
        rpgrplist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrplist_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpList-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::RPGrpListList()
    :
    grplistname{YType::str, "grpListName"},
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"}
{

    yang_name = "RPGrpList-list"; yang_parent_name = "rpgrplist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::~RPGrpListList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_data() const
{
    if (is_presence_container) return true;
    return grplistname.is_set
	|| bidir.is_set
	|| override.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grplistname.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpList-list";
    ADD_KEY_TOKEN(grplistname, "grpListName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grplistname.is_set || is_set(grplistname.yfilter)) leaf_name_data.push_back(grplistname.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpListName")
    {
        grplistname = value;
        grplistname.value_namespace = name_space;
        grplistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpListName")
    {
        grplistname.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpListName" || name == "bidir" || name == "override")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::PimItems::InstItems::GlItems::GlItems()
    :
    loglvl{YType::uint16, "logLvl"},
    isolate{YType::boolean, "isolate"}
{

    yang_name = "gl-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::GlItems::~GlItems()
{
}

bool System::PimItems::InstItems::GlItems::has_data() const
{
    if (is_presence_container) return true;
    return loglvl.is_set
	|| isolate.is_set;
}

bool System::PimItems::InstItems::GlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loglvl.yfilter)
	|| ydk::is_set(isolate.yfilter);
}

std::string System::PimItems::InstItems::GlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::GlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::GlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loglvl.is_set || is_set(loglvl.yfilter)) leaf_name_data.push_back(loglvl.get_name_leafdata());
    if (isolate.is_set || is_set(isolate.yfilter)) leaf_name_data.push_back(isolate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::GlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::GlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::GlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logLvl")
    {
        loglvl = value;
        loglvl.value_namespace = name_space;
        loglvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolate")
    {
        isolate = value;
        isolate.value_namespace = name_space;
        isolate.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::GlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logLvl")
    {
        loglvl.yfilter = yfilter;
    }
    if(value_path == "isolate")
    {
        isolate.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::GlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logLvl" || name == "isolate")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RoutedbItems()
    :
    routedb_list(this, {"type"})
{

    yang_name = "routedb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::RoutedbItems::~RoutedbItems()
{
}

bool System::PimItems::InstItems::RoutedbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routedb_list.len(); index++)
    {
        if(routedb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::RoutedbItems::has_operation() const
{
    for (std::size_t index=0; index<routedb_list.len(); index++)
    {
        if(routedb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::RoutedbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routedb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteDb-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList>();
        c->parent = this;
        routedb_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routedb_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::RoutedbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::RoutedbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteDb-list")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::RouteDbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    vrf_items(std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "RouteDb-list"; yang_parent_name = "routedb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::~RouteDbList()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/inst-items/routedb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteDb-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PimItems::InstItems::RoutedbItems::RouteDbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "RouteDb-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::~VrfItems()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::get_children() const
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

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"}
        ,
    group_items(std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::~VrfList()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"}
        ,
    source_items(std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    rpaddressroute{YType::str, "rpAddressRoute"},
    assertmetrics{YType::uint32, "assertMetrics"},
    assertmetricprefs{YType::uint32, "assertMetricPrefs"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    rpaddrroute{YType::str, "rpAddrRoute"},
    iif{YType::str, "iif"},
    expiryts{YType::str, "expiryTs"},
    rpfnbr{YType::str, "rpfNbr"},
    rpfsrc{YType::str, "rpfSrc"},
    createts{YType::str, "createTs"},
    asserttime{YType::str, "assertTime"},
    rttype{YType::str, "rtType"},
    swpktcnt{YType::uint32, "swPktCnt"},
    swbytecnt{YType::uint32, "swByteCnt"},
    hwpktcnt{YType::uint32, "hwPktCnt"},
    hwbytecnt{YType::uint32, "hwByteCnt"},
    assertmetric{YType::uint32, "assertMetric"},
    assertmetricpref{YType::uint32, "assertMetricPref"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| rpaddressroute.is_set
	|| assertmetrics.is_set
	|| assertmetricprefs.is_set
	|| name.is_set
	|| ver.is_set
	|| src.is_set
	|| grp.is_set
	|| rpaddrroute.is_set
	|| iif.is_set
	|| expiryts.is_set
	|| rpfnbr.is_set
	|| rpfsrc.is_set
	|| createts.is_set
	|| asserttime.is_set
	|| rttype.is_set
	|| swpktcnt.is_set
	|| swbytecnt.is_set
	|| hwpktcnt.is_set
	|| hwbytecnt.is_set
	|| assertmetric.is_set
	|| assertmetricpref.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(rpaddressroute.yfilter)
	|| ydk::is_set(assertmetrics.yfilter)
	|| ydk::is_set(assertmetricprefs.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(rpaddrroute.yfilter)
	|| ydk::is_set(iif.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(rpfsrc.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(asserttime.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(swpktcnt.yfilter)
	|| ydk::is_set(swbytecnt.yfilter)
	|| ydk::is_set(hwpktcnt.yfilter)
	|| ydk::is_set(hwbytecnt.yfilter)
	|| ydk::is_set(assertmetric.yfilter)
	|| ydk::is_set(assertmetricpref.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (rpaddressroute.is_set || is_set(rpaddressroute.yfilter)) leaf_name_data.push_back(rpaddressroute.get_name_leafdata());
    if (assertmetrics.is_set || is_set(assertmetrics.yfilter)) leaf_name_data.push_back(assertmetrics.get_name_leafdata());
    if (assertmetricprefs.is_set || is_set(assertmetricprefs.yfilter)) leaf_name_data.push_back(assertmetricprefs.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (rpaddrroute.is_set || is_set(rpaddrroute.yfilter)) leaf_name_data.push_back(rpaddrroute.get_name_leafdata());
    if (iif.is_set || is_set(iif.yfilter)) leaf_name_data.push_back(iif.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (rpfsrc.is_set || is_set(rpfsrc.yfilter)) leaf_name_data.push_back(rpfsrc.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (asserttime.is_set || is_set(asserttime.yfilter)) leaf_name_data.push_back(asserttime.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (swpktcnt.is_set || is_set(swpktcnt.yfilter)) leaf_name_data.push_back(swpktcnt.get_name_leafdata());
    if (swbytecnt.is_set || is_set(swbytecnt.yfilter)) leaf_name_data.push_back(swbytecnt.get_name_leafdata());
    if (hwpktcnt.is_set || is_set(hwpktcnt.yfilter)) leaf_name_data.push_back(hwpktcnt.get_name_leafdata());
    if (hwbytecnt.is_set || is_set(hwbytecnt.yfilter)) leaf_name_data.push_back(hwbytecnt.get_name_leafdata());
    if (assertmetric.is_set || is_set(assertmetric.yfilter)) leaf_name_data.push_back(assertmetric.get_name_leafdata());
    if (assertmetricpref.is_set || is_set(assertmetricpref.yfilter)) leaf_name_data.push_back(assertmetricpref.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddressRoute")
    {
        rpaddressroute = value;
        rpaddressroute.value_namespace = name_space;
        rpaddressroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics = value;
        assertmetrics.value_namespace = name_space;
        assertmetrics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs = value;
        assertmetricprefs.value_namespace = name_space;
        assertmetricprefs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute = value;
        rpaddrroute.value_namespace = name_space;
        rpaddrroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iif")
    {
        iif = value;
        iif.value_namespace = name_space;
        iif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc = value;
        rpfsrc.value_namespace = name_space;
        rpfsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertTime")
    {
        asserttime = value;
        asserttime.value_namespace = name_space;
        asserttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt = value;
        swpktcnt.value_namespace = name_space;
        swpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt = value;
        swbytecnt.value_namespace = name_space;
        swbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt = value;
        hwpktcnt.value_namespace = name_space;
        hwpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt = value;
        hwbytecnt.value_namespace = name_space;
        hwbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetric")
    {
        assertmetric = value;
        assertmetric.value_namespace = name_space;
        assertmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref = value;
        assertmetricpref.value_namespace = name_space;
        assertmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "rpAddressRoute")
    {
        rpaddressroute.yfilter = yfilter;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics.yfilter = yfilter;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute.yfilter = yfilter;
    }
    if(value_path == "iif")
    {
        iif.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "assertTime")
    {
        asserttime.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt.yfilter = yfilter;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt.yfilter = yfilter;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt.yfilter = yfilter;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt.yfilter = yfilter;
    }
    if(value_path == "assertMetric")
    {
        assertmetric.yfilter = yfilter;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "rpAddressRoute" || name == "assertMetrics" || name == "assertMetricPrefs" || name == "name" || name == "ver" || name == "src" || name == "grp" || name == "rpAddrRoute" || name == "iif" || name == "expiryTs" || name == "rpfNbr" || name == "rpfSrc" || name == "createTs" || name == "assertTime" || name == "rtType" || name == "swPktCnt" || name == "swByteCnt" || name == "hwPktCnt" || name == "hwByteCnt" || name == "assertMetric" || name == "assertMetricPref" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oif{YType::str, "oIf"},
    oifflags{YType::str, "oifFlags"},
    flags{YType::str, "flags"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| oifflags.is_set
	|| flags.is_set;
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(oifflags.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oif, "oIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (oifflags.is_set || is_set(oifflags.yfilter)) leaf_name_data.push_back(oifflags.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oIf")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifFlags")
    {
        oifflags = value;
        oifflags.value_namespace = name_space;
        oifflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oIf")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "oifFlags")
    {
        oifflags.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oIf" || name == "oifFlags" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::Pim6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::Pim6Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "pim6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::~Pim6Items()
{
}

bool System::Pim6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Pim6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Pim6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Pim6Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::Pim6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Pim6Items::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    jpdelay{YType::uint32, "jpDelay"},
    nrdelay{YType::uint16, "nrDelay"},
    nrnumrt{YType::uint16, "nrNumRt"},
    regstop{YType::boolean, "regStop"}
        ,
    db_items(std::make_shared<System::Pim6Items::InstItems::DbItems>())
    , dom_items(std::make_shared<System::Pim6Items::InstItems::DomItems>())
    , routedb_items(std::make_shared<System::Pim6Items::InstItems::RoutedbItems>())
{
    db_items->parent = this;
    dom_items->parent = this;
    routedb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "pim6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::~InstItems()
{
}

bool System::Pim6Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| jpdelay.is_set
	|| nrdelay.is_set
	|| nrnumrt.is_set
	|| regstop.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (routedb_items !=  nullptr && routedb_items->has_data());
}

bool System::Pim6Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(nrdelay.yfilter)
	|| ydk::is_set(nrnumrt.yfilter)
	|| ydk::is_set(regstop.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (routedb_items !=  nullptr && routedb_items->has_operation());
}

std::string System::Pim6Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (nrdelay.is_set || is_set(nrdelay.yfilter)) leaf_name_data.push_back(nrdelay.get_name_leafdata());
    if (nrnumrt.is_set || is_set(nrnumrt.yfilter)) leaf_name_data.push_back(nrnumrt.get_name_leafdata());
    if (regstop.is_set || is_set(regstop.yfilter)) leaf_name_data.push_back(regstop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Pim6Items::InstItems::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Pim6Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "routedb-items")
    {
        if(routedb_items == nullptr)
        {
            routedb_items = std::make_shared<System::Pim6Items::InstItems::RoutedbItems>();
        }
        return routedb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(routedb_items != nullptr)
    {
        children["routedb-items"] = routedb_items;
    }

    return children;
}

void System::Pim6Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrDelay")
    {
        nrdelay = value;
        nrdelay.value_namespace = name_space;
        nrdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt = value;
        nrnumrt.value_namespace = name_space;
        nrnumrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStop")
    {
        regstop = value;
        regstop.value_namespace = name_space;
        regstop.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "nrDelay")
    {
        nrdelay.yfilter = yfilter;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt.yfilter = yfilter;
    }
    if(value_path == "regStop")
    {
        regstop.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "dom-items" || name == "routedb-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "jpDelay" || name == "nrDelay" || name == "nrNumRt" || name == "regStop")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::DbItems::~DbItems()
{
}

bool System::Pim6Items::InstItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::get_children() const
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

void System::Pim6Items::InstItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    vrf_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::DbItems::DbList::~DbList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::get_children() const
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

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    totalnumroutes{YType::uint32, "totalNumRoutes"}
        ,
    autorp_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems>())
    , bsr_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems>())
    , grange_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems>())
    , group_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems>())
    , ifrec_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems>())
    , rp_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    group_items->parent = this;
    ifrec_items->parent = this;
    rp_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::~VrfList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| totalnumroutes.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (ifrec_items !=  nullptr && ifrec_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (ifrec_items !=  nullptr && ifrec_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "ifrec-items")
    {
        if(ifrec_items == nullptr)
        {
            ifrec_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems>();
        }
        return ifrec_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems>();
        }
        return rp_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        children["grange-items"] = grange_items;
    }

    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    if(ifrec_items != nullptr)
    {
        children["ifrec-items"] = ifrec_items;
    }

    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "group-items" || name == "ifrec-items" || name == "rp-items" || name == "trstats-items" || name == "name" || name == "totalNumRoutes")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::~AutorpItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRppInfo-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList>();
        c->parent = this;
        autorppinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : autorppinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRppInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::AutoRppInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRppInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::~AutoRppInfoList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRppInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"addr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::~BsrItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BsrInfo-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList>();
        c->parent = this;
        bsrinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsrinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BsrInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::BsrInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "BsrInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::~BsrInfoList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BsrInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList>();
        c->parent = this;
        rpgrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::RpGrangeList()
    :
    addr{YType::str, "addr"},
    rpaddr{YType::str, "rpAddr"},
    mode{YType::str, "mode"},
    usershared{YType::uint32, "userShared"}
{

    yang_name = "RpGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::~RpGrangeList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpaddr.is_set
	|| mode.is_set
	|| usershared.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(usershared.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (usershared.is_set || is_set(usershared.yfilter)) leaf_name_data.push_back(usershared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userShared")
    {
        usershared = value;
        usershared.value_namespace = name_space;
        usershared.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "userShared")
    {
        usershared.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpAddr" || name == "mode" || name == "userShared")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    expiryts{YType::str, "expiryTs"},
    assertmetrics{YType::uint32, "assertMetrics"},
    assertmetricprefs{YType::uint32, "assertMetricPrefs"},
    oifcount{YType::uint32, "oifcount"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| expiryts.is_set
	|| assertmetrics.is_set
	|| assertmetricprefs.is_set
	|| oifcount.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(assertmetrics.yfilter)
	|| ydk::is_set(assertmetricprefs.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (assertmetrics.is_set || is_set(assertmetrics.yfilter)) leaf_name_data.push_back(assertmetrics.get_name_leafdata());
    if (assertmetricprefs.is_set || is_set(assertmetricprefs.yfilter)) leaf_name_data.push_back(assertmetricprefs.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics = value;
        assertmetrics.value_namespace = name_space;
        assertmetrics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs = value;
        assertmetricprefs.value_namespace = name_space;
        assertmetricprefs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics.yfilter = yfilter;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "expiryTs" || name == "assertMetrics" || name == "assertMetricPrefs" || name == "oifcount" || name == "routeIif" || name == "rpfNbr" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfrecItems()
    :
    ifrec_list(this, {"pim6ifname"})
{

    yang_name = "ifrec-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::~IfrecItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_operation() const
{
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList>();
        c->parent = this;
        ifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfRecList()
    :
    pim6ifname{YType::str, "pim6IfName"},
    pim6dr{YType::str, "pim6Dr"},
    pim6drprio{YType::uint32, "pim6DrPrio"},
    pim6nbrholdtime{YType::uint32, "pim6NbrHoldTime"},
    pim6genid{YType::uint32, "pim6GenID"},
    pim6nexthello{YType::str, "pim6NextHello"},
    pim6ipaddr{YType::str, "pim6IpAddr"},
    pim6border{YType::boolean, "pim6Border"},
    pim6sparsemode{YType::boolean, "pim6SparseMode"}
        ,
    adjrec_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>())
    , ifstats_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>())
{
    adjrec_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "IfRec-list"; yang_parent_name = "ifrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::~IfRecList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_data() const
{
    if (is_presence_container) return true;
    return pim6ifname.is_set
	|| pim6dr.is_set
	|| pim6drprio.is_set
	|| pim6nbrholdtime.is_set
	|| pim6genid.is_set
	|| pim6nexthello.is_set
	|| pim6ipaddr.is_set
	|| pim6border.is_set
	|| pim6sparsemode.is_set
	|| (adjrec_items !=  nullptr && adjrec_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim6ifname.yfilter)
	|| ydk::is_set(pim6dr.yfilter)
	|| ydk::is_set(pim6drprio.yfilter)
	|| ydk::is_set(pim6nbrholdtime.yfilter)
	|| ydk::is_set(pim6genid.yfilter)
	|| ydk::is_set(pim6nexthello.yfilter)
	|| ydk::is_set(pim6ipaddr.yfilter)
	|| ydk::is_set(pim6border.yfilter)
	|| ydk::is_set(pim6sparsemode.yfilter)
	|| (adjrec_items !=  nullptr && adjrec_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfRec-list";
    ADD_KEY_TOKEN(pim6ifname, "pim6IfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim6ifname.is_set || is_set(pim6ifname.yfilter)) leaf_name_data.push_back(pim6ifname.get_name_leafdata());
    if (pim6dr.is_set || is_set(pim6dr.yfilter)) leaf_name_data.push_back(pim6dr.get_name_leafdata());
    if (pim6drprio.is_set || is_set(pim6drprio.yfilter)) leaf_name_data.push_back(pim6drprio.get_name_leafdata());
    if (pim6nbrholdtime.is_set || is_set(pim6nbrholdtime.yfilter)) leaf_name_data.push_back(pim6nbrholdtime.get_name_leafdata());
    if (pim6genid.is_set || is_set(pim6genid.yfilter)) leaf_name_data.push_back(pim6genid.get_name_leafdata());
    if (pim6nexthello.is_set || is_set(pim6nexthello.yfilter)) leaf_name_data.push_back(pim6nexthello.get_name_leafdata());
    if (pim6ipaddr.is_set || is_set(pim6ipaddr.yfilter)) leaf_name_data.push_back(pim6ipaddr.get_name_leafdata());
    if (pim6border.is_set || is_set(pim6border.yfilter)) leaf_name_data.push_back(pim6border.get_name_leafdata());
    if (pim6sparsemode.is_set || is_set(pim6sparsemode.yfilter)) leaf_name_data.push_back(pim6sparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjrec-items")
    {
        if(adjrec_items == nullptr)
        {
            adjrec_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>();
        }
        return adjrec_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjrec_items != nullptr)
    {
        children["adjrec-items"] = adjrec_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname = value;
        pim6ifname.value_namespace = name_space;
        pim6ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr = value;
        pim6dr.value_namespace = name_space;
        pim6dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio = value;
        pim6drprio.value_namespace = name_space;
        pim6drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime = value;
        pim6nbrholdtime.value_namespace = name_space;
        pim6nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid = value;
        pim6genid.value_namespace = name_space;
        pim6genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello = value;
        pim6nexthello.value_namespace = name_space;
        pim6nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr = value;
        pim6ipaddr.value_namespace = name_space;
        pim6ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Border")
    {
        pim6border = value;
        pim6border.value_namespace = name_space;
        pim6border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode = value;
        pim6sparsemode.value_namespace = name_space;
        pim6sparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname.yfilter = yfilter;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr.yfilter = yfilter;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio.yfilter = yfilter;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid.yfilter = yfilter;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello.yfilter = yfilter;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr.yfilter = yfilter;
    }
    if(value_path == "pim6Border")
    {
        pim6border.yfilter = yfilter;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjrec-items" || name == "ifstats-items" || name == "pim6IfName" || name == "pim6Dr" || name == "pim6DrPrio" || name == "pim6NbrHoldTime" || name == "pim6GenID" || name == "pim6NextHello" || name == "pim6IpAddr" || name == "pim6Border" || name == "pim6SparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjrecItems()
    :
    adjeprec_list(this, {"addr"})
{

    yang_name = "adjrec-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::~AdjrecItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_operation() const
{
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEpRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList>();
        c->parent = this;
        adjeprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjeprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEpRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjEpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEpRec-list"; yang_parent_name = "adjrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::~AdjEpRecList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertsent{YType::uint32, "assertSent"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktsent{YType::uint32, "invalidPktSent"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::~IfstatsItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertsent.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktsent.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertsent.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktsent.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertsent.is_set || is_set(assertsent.yfilter)) leaf_name_data.push_back(assertsent.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktsent.is_set || is_set(invalidpktsent.yfilter)) leaf_name_data.push_back(invalidpktsent.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertSent")
    {
        assertsent = value;
        assertsent.value_namespace = name_space;
        assertsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent = value;
        invalidpktsent.value_namespace = name_space;
        invalidpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertSent")
    {
        assertsent.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertSent" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktSent" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpItems()
    :
    rpinforec_list(this, {"rpaddr"})
{

    yang_name = "rp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpInfoRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList>();
        c->parent = this;
        rpinforec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpinforec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpInfoRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpInfoRecList()
    :
    rpaddr{YType::str, "rpAddr"},
    rplocal{YType::boolean, "rpLocal"},
    rpuptime{YType::str, "rpUptime"},
    rppriority{YType::uint32, "rpPriority"},
    rpdisctype{YType::str, "rpDiscType"},
    rpdfordinal{YType::uint32, "rpDfOrdinal"}
        ,
    rsrp2grange_items(std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems>())
{
    rsrp2grange_items->parent = this;

    yang_name = "RpInfoRec-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::~RpInfoRecList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_data() const
{
    if (is_presence_container) return true;
    return rpaddr.is_set
	|| rplocal.is_set
	|| rpuptime.is_set
	|| rppriority.is_set
	|| rpdisctype.is_set
	|| rpdfordinal.is_set
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_data());
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(rplocal.yfilter)
	|| ydk::is_set(rpuptime.yfilter)
	|| ydk::is_set(rppriority.yfilter)
	|| ydk::is_set(rpdisctype.yfilter)
	|| ydk::is_set(rpdfordinal.yfilter)
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_operation());
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpInfoRec-list";
    ADD_KEY_TOKEN(rpaddr, "rpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (rplocal.is_set || is_set(rplocal.yfilter)) leaf_name_data.push_back(rplocal.get_name_leafdata());
    if (rpuptime.is_set || is_set(rpuptime.yfilter)) leaf_name_data.push_back(rpuptime.get_name_leafdata());
    if (rppriority.is_set || is_set(rppriority.yfilter)) leaf_name_data.push_back(rppriority.get_name_leafdata());
    if (rpdisctype.is_set || is_set(rpdisctype.yfilter)) leaf_name_data.push_back(rpdisctype.get_name_leafdata());
    if (rpdfordinal.is_set || is_set(rpdfordinal.yfilter)) leaf_name_data.push_back(rpdfordinal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrP2Grange-items")
    {
        if(rsrp2grange_items == nullptr)
        {
            rsrp2grange_items = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems>();
        }
        return rsrp2grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrp2grange_items != nullptr)
    {
        children["rsrP2Grange-items"] = rsrp2grange_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpLocal")
    {
        rplocal = value;
        rplocal.value_namespace = name_space;
        rplocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUptime")
    {
        rpuptime = value;
        rpuptime.value_namespace = name_space;
        rpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpPriority")
    {
        rppriority = value;
        rppriority.value_namespace = name_space;
        rppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype = value;
        rpdisctype.value_namespace = name_space;
        rpdisctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal = value;
        rpdfordinal.value_namespace = name_space;
        rpdfordinal.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "rpLocal")
    {
        rplocal.yfilter = yfilter;
    }
    if(value_path == "rpUptime")
    {
        rpuptime.yfilter = yfilter;
    }
    if(value_path == "rpPriority")
    {
        rppriority.yfilter = yfilter;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype.yfilter = yfilter;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrP2Grange-items" || name == "rpAddr" || name == "rpLocal" || name == "rpUptime" || name == "rpPriority" || name == "rpDiscType" || name == "rpDfOrdinal")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsrP2GrangeItems()
    :
    rsrp2grange_list(this, {"tdn"})
{

    yang_name = "rsrP2Grange-items"; yang_parent_name = "RpInfoRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::~RsrP2GrangeItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrP2Grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRP2Grange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList>();
        c->parent = this;
        rsrp2grange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrp2grange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRP2Grange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::RsRP2GrangeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRP2Grange-list"; yang_parent_name = "rsrP2Grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::~RsRP2GrangeList()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRP2Grange-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::DomItems::~DomItems()
{
}

bool System::Pim6Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"}
        ,
    acastrpfunc_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems>())
    , autorp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems>())
    , bsr_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems>())
    , eventhist_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::EventhistItems>())
    , if_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems>())
    , limit_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::LimitItems>())
    , asm_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems>())
    , ssm_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems>())
    , bidir_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BidirItems>())
    , staticrp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems>())
{
    acastrpfunc_items->parent = this;
    autorp_items->parent = this;
    bsr_items->parent = this;
    eventhist_items->parent = this;
    if_items->parent = this;
    limit_items->parent = this;
    asm_items->parent = this;
    ssm_items->parent = this;
    bidir_items->parent = this;
    staticrp_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Pim6Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| (acastrpfunc_items !=  nullptr && acastrpfunc_items->has_data())
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (limit_items !=  nullptr && limit_items->has_data())
	|| (asm_items !=  nullptr && asm_items->has_data())
	|| (ssm_items !=  nullptr && ssm_items->has_data())
	|| (bidir_items !=  nullptr && bidir_items->has_data())
	|| (staticrp_items !=  nullptr && staticrp_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| (acastrpfunc_items !=  nullptr && acastrpfunc_items->has_operation())
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (limit_items !=  nullptr && limit_items->has_operation())
	|| (asm_items !=  nullptr && asm_items->has_operation())
	|| (ssm_items !=  nullptr && ssm_items->has_operation())
	|| (bidir_items !=  nullptr && bidir_items->has_operation())
	|| (staticrp_items !=  nullptr && staticrp_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim6-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Pim6Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acastrpfunc-items")
    {
        if(acastrpfunc_items == nullptr)
        {
            acastrpfunc_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems>();
        }
        return acastrpfunc_items;
    }

    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "eventhist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::EventhistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "limit-items")
    {
        if(limit_items == nullptr)
        {
            limit_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::LimitItems>();
        }
        return limit_items;
    }

    if(child_yang_name == "asm-items")
    {
        if(asm_items == nullptr)
        {
            asm_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems>();
        }
        return asm_items;
    }

    if(child_yang_name == "ssm-items")
    {
        if(ssm_items == nullptr)
        {
            ssm_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems>();
        }
        return ssm_items;
    }

    if(child_yang_name == "bidir-items")
    {
        if(bidir_items == nullptr)
        {
            bidir_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BidirItems>();
        }
        return bidir_items;
    }

    if(child_yang_name == "staticrp-items")
    {
        if(staticrp_items == nullptr)
        {
            staticrp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems>();
        }
        return staticrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acastrpfunc_items != nullptr)
    {
        children["acastrpfunc-items"] = acastrpfunc_items;
    }

    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(eventhist_items != nullptr)
    {
        children["eventhist-items"] = eventhist_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(limit_items != nullptr)
    {
        children["limit-items"] = limit_items;
    }

    if(asm_items != nullptr)
    {
        children["asm-items"] = asm_items;
    }

    if(ssm_items != nullptr)
    {
        children["ssm-items"] = ssm_items;
    }

    if(bidir_items != nullptr)
    {
        children["bidir-items"] = bidir_items;
    }

    if(staticrp_items != nullptr)
    {
        children["staticrp-items"] = staticrp_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acastrpfunc-items" || name == "autorp-items" || name == "bsr-items" || name == "eventhist-items" || name == "if-items" || name == "limit-items" || name == "asm-items" || name == "ssm-items" || name == "bidir-items" || name == "staticrp-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::AcastrpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    localif{YType::str, "localIf"}
        ,
    peer_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems>())
{
    peer_items->parent = this;

    yang_name = "acastrpfunc-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::~AcastrpfuncItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| localif.is_set
	|| (peer_items !=  nullptr && peer_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(localif.yfilter)
	|| (peer_items !=  nullptr && peer_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acastrpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (localif.is_set || is_set(localif.yfilter)) leaf_name_data.push_back(localif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-items")
    {
        if(peer_items == nullptr)
        {
            peer_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems>();
        }
        return peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_items != nullptr)
    {
        children["peer-items"] = peer_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localIf")
    {
        localif = value;
        localif.value_namespace = name_space;
        localif.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "localIf")
    {
        localif.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-items" || name == "name" || name == "descr" || name == "srcIf" || name == "localIf")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::PeerItems()
    :
    acastrppeer_list(this, {"addr", "rpsetaddr"})
{

    yang_name = "peer-items"; yang_parent_name = "acastrpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::~PeerItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acastrppeer_list.len(); index++)
    {
        if(acastrppeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_operation() const
{
    for (std::size_t index=0; index<acastrppeer_list.len(); index++)
    {
        if(acastrppeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AcastRpPeer-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList>();
        c->parent = this;
        acastrppeer_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acastrppeer_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AcastRpPeer-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::AcastRpPeerList()
    :
    addr{YType::str, "addr"},
    rpsetaddr{YType::str, "rpSetAddr"}
{

    yang_name = "AcastRpPeer-list"; yang_parent_name = "peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::~AcastRpPeerList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpsetaddr.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpsetaddr.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AcastRpPeer-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(rpsetaddr, "rpSetAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpsetaddr.is_set || is_set(rpsetaddr.yfilter)) leaf_name_data.push_back(rpsetaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpSetAddr")
    {
        rpsetaddr = value;
        rpsetaddr.value_namespace = name_space;
        rpsetaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpSetAddr")
    {
        rpsetaddr.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpSetAddr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::AutorpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"}
        ,
    rpfilter_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems>())
    , mafilter_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems>())
    , rpfunc_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems>())
    , mafunc_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems>())
{
    rpfilter_items->parent = this;
    mafilter_items->parent = this;
    rpfunc_items->parent = this;
    mafunc_items->parent = this;

    yang_name = "autorp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::~AutorpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_data())
	|| (mafilter_items !=  nullptr && mafilter_items->has_data())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_data())
	|| (mafunc_items !=  nullptr && mafunc_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_operation())
	|| (mafilter_items !=  nullptr && mafilter_items->has_operation())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_operation())
	|| (mafunc_items !=  nullptr && mafunc_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpfilter-items")
    {
        if(rpfilter_items == nullptr)
        {
            rpfilter_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems>();
        }
        return rpfilter_items;
    }

    if(child_yang_name == "mafilter-items")
    {
        if(mafilter_items == nullptr)
        {
            mafilter_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems>();
        }
        return mafilter_items;
    }

    if(child_yang_name == "rpfunc-items")
    {
        if(rpfunc_items == nullptr)
        {
            rpfunc_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems>();
        }
        return rpfunc_items;
    }

    if(child_yang_name == "mafunc-items")
    {
        if(mafunc_items == nullptr)
        {
            mafunc_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems>();
        }
        return mafunc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpfilter_items != nullptr)
    {
        children["rpfilter-items"] = rpfilter_items;
    }

    if(mafilter_items != nullptr)
    {
        children["mafilter-items"] = mafilter_items;
    }

    if(rpfunc_items != nullptr)
    {
        children["rpfunc-items"] = rpfunc_items;
    }

    if(mafunc_items != nullptr)
    {
        children["mafunc-items"] = mafunc_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpfilter-items" || name == "mafilter-items" || name == "rpfunc-items" || name == "mafunc-items" || name == "name" || name == "descr" || name == "ctrl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::RpfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rpfilter-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::~RpfilterItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::MafilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "mafilter-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::~MafilterItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mafilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"},
    scope{YType::uint16, "scope"},
    addr{YType::str, "addr"},
    usesendrpanncommand{YType::boolean, "useSendRPAnnCommand"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "rpfunc-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::~RpfuncItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| prio.is_set
	|| interval.is_set
	|| scope.is_set
	|| addr.is_set
	|| usesendrpanncommand.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(usesendrpanncommand.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (usesendrpanncommand.is_set || is_set(usesendrpanncommand.yfilter)) leaf_name_data.push_back(usesendrpanncommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand = value;
        usesendrpanncommand.value_namespace = name_space;
        usesendrpanncommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr" || name == "srcIf" || name == "prio" || name == "interval" || name == "scope" || name == "addr" || name == "useSendRPAnnCommand")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "rpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrpRange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrpRange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::RpGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RpGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::~RpGrpRangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RpGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::MafuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    scope{YType::uint16, "scope"},
    usesendrpdiscommand{YType::boolean, "useSendRPDisCommand"}
{

    yang_name = "mafunc-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::~MafuncItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| scope.is_set
	|| usesendrpdiscommand.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(usesendrpdiscommand.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mafunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (usesendrpdiscommand.is_set || is_set(usesendrpdiscommand.yfilter)) leaf_name_data.push_back(usesendrpdiscommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPDisCommand")
    {
        usesendrpdiscommand = value;
        usesendrpdiscommand.value_namespace = name_space;
        usesendrpdiscommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "useSendRPDisCommand")
    {
        usesendrpdiscommand.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "srcIf" || name == "scope" || name == "useSendRPDisCommand")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"}
        ,
    rpfilter_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems>())
    , bsrfilter_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems>())
    , rpfunc_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems>())
    , bsrfunc_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems>())
{
    rpfilter_items->parent = this;
    bsrfilter_items->parent = this;
    rpfunc_items->parent = this;
    bsrfunc_items->parent = this;

    yang_name = "bsr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::~BsrItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_data())
	|| (bsrfilter_items !=  nullptr && bsrfilter_items->has_data())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_data())
	|| (bsrfunc_items !=  nullptr && bsrfunc_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_operation())
	|| (bsrfilter_items !=  nullptr && bsrfilter_items->has_operation())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_operation())
	|| (bsrfunc_items !=  nullptr && bsrfunc_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpfilter-items")
    {
        if(rpfilter_items == nullptr)
        {
            rpfilter_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems>();
        }
        return rpfilter_items;
    }

    if(child_yang_name == "bsrfilter-items")
    {
        if(bsrfilter_items == nullptr)
        {
            bsrfilter_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems>();
        }
        return bsrfilter_items;
    }

    if(child_yang_name == "rpfunc-items")
    {
        if(rpfunc_items == nullptr)
        {
            rpfunc_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems>();
        }
        return rpfunc_items;
    }

    if(child_yang_name == "bsrfunc-items")
    {
        if(bsrfunc_items == nullptr)
        {
            bsrfunc_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems>();
        }
        return bsrfunc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpfilter_items != nullptr)
    {
        children["rpfilter-items"] = rpfilter_items;
    }

    if(bsrfilter_items != nullptr)
    {
        children["bsrfilter-items"] = bsrfilter_items;
    }

    if(rpfunc_items != nullptr)
    {
        children["rpfunc-items"] = rpfunc_items;
    }

    if(bsrfunc_items != nullptr)
    {
        children["bsrfunc-items"] = bsrfunc_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpfilter-items" || name == "bsrfilter-items" || name == "rpfunc-items" || name == "bsrfunc-items" || name == "name" || name == "descr" || name == "ctrl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::RpfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rpfilter-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::~RpfilterItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::BsrfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "bsrfilter-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::~BsrfilterItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsrfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"},
    scope{YType::uint16, "scope"},
    addr{YType::str, "addr"},
    usesendrpanncommand{YType::boolean, "useSendRPAnnCommand"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "rpfunc-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::~RpfuncItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| prio.is_set
	|| interval.is_set
	|| scope.is_set
	|| addr.is_set
	|| usesendrpanncommand.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(usesendrpanncommand.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (usesendrpanncommand.is_set || is_set(usesendrpanncommand.yfilter)) leaf_name_data.push_back(usesendrpanncommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand = value;
        usesendrpanncommand.value_namespace = name_space;
        usesendrpanncommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr" || name == "srcIf" || name == "prio" || name == "interval" || name == "scope" || name == "addr" || name == "useSendRPAnnCommand")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "rpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrpRange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrpRange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::RpGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RpGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::~RpGrpRangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::BsrfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    hashlen{YType::uint16, "hashLen"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"}
{

    yang_name = "bsrfunc-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::~BsrfuncItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| hashlen.is_set
	|| prio.is_set
	|| interval.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(hashlen.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsrfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (hashlen.is_set || is_set(hashlen.yfilter)) leaf_name_data.push_back(hashlen.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashLen")
    {
        hashlen = value;
        hashlen.value_namespace = name_space;
        hashlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "hashLen")
    {
        hashlen.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "srcIf" || name == "hashLen" || name == "prio" || name == "interval")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventhistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventhist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::~EventhistItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventhist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList>();
        c->parent = this;
        eventhistory_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventhistory_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventhist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    dr{YType::str, "dr"},
    nbrholdtime{YType::uint32, "nbrHoldTime"},
    genid{YType::uint32, "genID"},
    nexthello{YType::str, "nextHello"},
    ipaddr{YType::str, "ipAddr"},
    ifname{YType::str, "ifName"},
    drprio{YType::uint32, "drPrio"},
    drdelay{YType::uint16, "drDelay"},
    jprtmap{YType::str, "jpRtMap"},
    neighrtmap{YType::str, "neighRtMap"},
    neighpfxlist{YType::str, "neighpfxList"},
    border{YType::boolean, "border"},
    rteppdn{YType::str, "rtEpPDn"},
    bfdinst{YType::enumeration, "bfdInst"},
    pimsparsemode{YType::boolean, "pimSparseMode"}
        ,
    adj_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>())
    , db_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems>())
    , jp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems>())
    , hello_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    db_items->parent = this;
    jp_items->parent = this;
    hello_items->parent = this;
    trstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| dr.is_set
	|| nbrholdtime.is_set
	|| genid.is_set
	|| nexthello.is_set
	|| ipaddr.is_set
	|| ifname.is_set
	|| drprio.is_set
	|| drdelay.is_set
	|| jprtmap.is_set
	|| neighrtmap.is_set
	|| neighpfxlist.is_set
	|| border.is_set
	|| rteppdn.is_set
	|| bfdinst.is_set
	|| pimsparsemode.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (jp_items !=  nullptr && jp_items->has_data())
	|| (hello_items !=  nullptr && hello_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(nbrholdtime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(nexthello.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(drdelay.yfilter)
	|| ydk::is_set(jprtmap.yfilter)
	|| ydk::is_set(neighrtmap.yfilter)
	|| ydk::is_set(neighpfxlist.yfilter)
	|| ydk::is_set(border.yfilter)
	|| ydk::is_set(rteppdn.yfilter)
	|| ydk::is_set(bfdinst.yfilter)
	|| ydk::is_set(pimsparsemode.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (jp_items !=  nullptr && jp_items->has_operation())
	|| (hello_items !=  nullptr && hello_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (nbrholdtime.is_set || is_set(nbrholdtime.yfilter)) leaf_name_data.push_back(nbrholdtime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (nexthello.is_set || is_set(nexthello.yfilter)) leaf_name_data.push_back(nexthello.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (drdelay.is_set || is_set(drdelay.yfilter)) leaf_name_data.push_back(drdelay.get_name_leafdata());
    if (jprtmap.is_set || is_set(jprtmap.yfilter)) leaf_name_data.push_back(jprtmap.get_name_leafdata());
    if (neighrtmap.is_set || is_set(neighrtmap.yfilter)) leaf_name_data.push_back(neighrtmap.get_name_leafdata());
    if (neighpfxlist.is_set || is_set(neighpfxlist.yfilter)) leaf_name_data.push_back(neighpfxlist.get_name_leafdata());
    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());
    if (rteppdn.is_set || is_set(rteppdn.yfilter)) leaf_name_data.push_back(rteppdn.get_name_leafdata());
    if (bfdinst.is_set || is_set(bfdinst.yfilter)) leaf_name_data.push_back(bfdinst.get_name_leafdata());
    if (pimsparsemode.is_set || is_set(pimsparsemode.yfilter)) leaf_name_data.push_back(pimsparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "jp-items")
    {
        if(jp_items == nullptr)
        {
            jp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems>();
        }
        return jp_items;
    }

    if(child_yang_name == "hello-items")
    {
        if(hello_items == nullptr)
        {
            hello_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>();
        }
        return hello_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(jp_items != nullptr)
    {
        children["jp-items"] = jp_items;
    }

    if(hello_items != nullptr)
    {
        children["hello-items"] = hello_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime = value;
        nbrholdtime.value_namespace = name_space;
        nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genID")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextHello")
    {
        nexthello = value;
        nexthello.value_namespace = name_space;
        nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drDelay")
    {
        drdelay = value;
        drdelay.value_namespace = name_space;
        drdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap = value;
        jprtmap.value_namespace = name_space;
        jprtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap = value;
        neighrtmap.value_namespace = name_space;
        neighrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist = value;
        neighpfxlist.value_namespace = name_space;
        neighpfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn = value;
        rteppdn.value_namespace = name_space;
        rteppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdInst")
    {
        bfdinst = value;
        bfdinst.value_namespace = name_space;
        bfdinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode = value;
        pimsparsemode.value_namespace = name_space;
        pimsparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "genID")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "nextHello")
    {
        nexthello.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "drDelay")
    {
        drdelay.yfilter = yfilter;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap.yfilter = yfilter;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap.yfilter = yfilter;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist.yfilter = yfilter;
    }
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn.yfilter = yfilter;
    }
    if(value_path == "bfdInst")
    {
        bfdinst.yfilter = yfilter;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "db-items" || name == "jp-items" || name == "hello-items" || name == "trstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "dr" || name == "nbrHoldTime" || name == "genID" || name == "nextHello" || name == "ipAddr" || name == "ifName" || name == "drPrio" || name == "drDelay" || name == "jpRtMap" || name == "neighRtMap" || name == "neighpfxList" || name == "border" || name == "rtEpPDn" || name == "bfdInst" || name == "pimSparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"addr"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    vrf_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    totalnumroutes{YType::uint32, "totalNumRoutes"}
        ,
    autorp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems>())
    , bsr_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems>())
    , grange_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems>())
    , group_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems>())
    , ifrec_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems>())
    , rp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems>())
    , trstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    group_items->parent = this;
    ifrec_items->parent = this;
    rp_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::~VrfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| totalnumroutes.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (ifrec_items !=  nullptr && ifrec_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (ifrec_items !=  nullptr && ifrec_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "ifrec-items")
    {
        if(ifrec_items == nullptr)
        {
            ifrec_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems>();
        }
        return ifrec_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems>();
        }
        return rp_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        children["grange-items"] = grange_items;
    }

    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    if(ifrec_items != nullptr)
    {
        children["ifrec-items"] = ifrec_items;
    }

    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "group-items" || name == "ifrec-items" || name == "rp-items" || name == "trstats-items" || name == "name" || name == "totalNumRoutes")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::~AutorpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRppInfo-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList>();
        c->parent = this;
        autorppinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : autorppinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRppInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::AutoRppInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRppInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::~AutoRppInfoList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRppInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"addr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::~BsrItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BsrInfo-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList>();
        c->parent = this;
        bsrinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsrinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BsrInfo-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::BsrInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "BsrInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::~BsrInfoList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BsrInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::~GrangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList>();
        c->parent = this;
        rpgrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::RpGrangeList()
    :
    addr{YType::str, "addr"},
    rpaddr{YType::str, "rpAddr"},
    mode{YType::str, "mode"},
    usershared{YType::uint32, "userShared"}
{

    yang_name = "RpGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::~RpGrangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpaddr.is_set
	|| mode.is_set
	|| usershared.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(usershared.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (usershared.is_set || is_set(usershared.yfilter)) leaf_name_data.push_back(usershared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userShared")
    {
        usershared = value;
        usershared.value_namespace = name_space;
        usershared.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "userShared")
    {
        usershared.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpAddr" || name == "mode" || name == "userShared")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    expiryts{YType::str, "expiryTs"},
    assertmetrics{YType::uint32, "assertMetrics"},
    assertmetricprefs{YType::uint32, "assertMetricPrefs"},
    oifcount{YType::uint32, "oifcount"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| expiryts.is_set
	|| assertmetrics.is_set
	|| assertmetricprefs.is_set
	|| oifcount.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(assertmetrics.yfilter)
	|| ydk::is_set(assertmetricprefs.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (assertmetrics.is_set || is_set(assertmetrics.yfilter)) leaf_name_data.push_back(assertmetrics.get_name_leafdata());
    if (assertmetricprefs.is_set || is_set(assertmetricprefs.yfilter)) leaf_name_data.push_back(assertmetricprefs.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics = value;
        assertmetrics.value_namespace = name_space;
        assertmetrics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs = value;
        assertmetricprefs.value_namespace = name_space;
        assertmetricprefs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "assertMetrics")
    {
        assertmetrics.yfilter = yfilter;
    }
    if(value_path == "assertMetricPrefs")
    {
        assertmetricprefs.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "srcAddr" || name == "expiryTs" || name == "assertMetrics" || name == "assertMetricPrefs" || name == "oifcount" || name == "routeIif" || name == "rpfNbr" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfrecItems()
    :
    ifrec_list(this, {"pim6ifname"})
{

    yang_name = "ifrec-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::~IfrecItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_operation() const
{
    for (std::size_t index=0; index<ifrec_list.len(); index++)
    {
        if(ifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList>();
        c->parent = this;
        ifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfRecList()
    :
    pim6ifname{YType::str, "pim6IfName"},
    pim6dr{YType::str, "pim6Dr"},
    pim6drprio{YType::uint32, "pim6DrPrio"},
    pim6nbrholdtime{YType::uint32, "pim6NbrHoldTime"},
    pim6genid{YType::uint32, "pim6GenID"},
    pim6nexthello{YType::str, "pim6NextHello"},
    pim6ipaddr{YType::str, "pim6IpAddr"},
    pim6border{YType::boolean, "pim6Border"},
    pim6sparsemode{YType::boolean, "pim6SparseMode"}
        ,
    adjrec_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>())
    , ifstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>())
{
    adjrec_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "IfRec-list"; yang_parent_name = "ifrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::~IfRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_data() const
{
    if (is_presence_container) return true;
    return pim6ifname.is_set
	|| pim6dr.is_set
	|| pim6drprio.is_set
	|| pim6nbrholdtime.is_set
	|| pim6genid.is_set
	|| pim6nexthello.is_set
	|| pim6ipaddr.is_set
	|| pim6border.is_set
	|| pim6sparsemode.is_set
	|| (adjrec_items !=  nullptr && adjrec_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim6ifname.yfilter)
	|| ydk::is_set(pim6dr.yfilter)
	|| ydk::is_set(pim6drprio.yfilter)
	|| ydk::is_set(pim6nbrholdtime.yfilter)
	|| ydk::is_set(pim6genid.yfilter)
	|| ydk::is_set(pim6nexthello.yfilter)
	|| ydk::is_set(pim6ipaddr.yfilter)
	|| ydk::is_set(pim6border.yfilter)
	|| ydk::is_set(pim6sparsemode.yfilter)
	|| (adjrec_items !=  nullptr && adjrec_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfRec-list";
    ADD_KEY_TOKEN(pim6ifname, "pim6IfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim6ifname.is_set || is_set(pim6ifname.yfilter)) leaf_name_data.push_back(pim6ifname.get_name_leafdata());
    if (pim6dr.is_set || is_set(pim6dr.yfilter)) leaf_name_data.push_back(pim6dr.get_name_leafdata());
    if (pim6drprio.is_set || is_set(pim6drprio.yfilter)) leaf_name_data.push_back(pim6drprio.get_name_leafdata());
    if (pim6nbrholdtime.is_set || is_set(pim6nbrholdtime.yfilter)) leaf_name_data.push_back(pim6nbrholdtime.get_name_leafdata());
    if (pim6genid.is_set || is_set(pim6genid.yfilter)) leaf_name_data.push_back(pim6genid.get_name_leafdata());
    if (pim6nexthello.is_set || is_set(pim6nexthello.yfilter)) leaf_name_data.push_back(pim6nexthello.get_name_leafdata());
    if (pim6ipaddr.is_set || is_set(pim6ipaddr.yfilter)) leaf_name_data.push_back(pim6ipaddr.get_name_leafdata());
    if (pim6border.is_set || is_set(pim6border.yfilter)) leaf_name_data.push_back(pim6border.get_name_leafdata());
    if (pim6sparsemode.is_set || is_set(pim6sparsemode.yfilter)) leaf_name_data.push_back(pim6sparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjrec-items")
    {
        if(adjrec_items == nullptr)
        {
            adjrec_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems>();
        }
        return adjrec_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjrec_items != nullptr)
    {
        children["adjrec-items"] = adjrec_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname = value;
        pim6ifname.value_namespace = name_space;
        pim6ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr = value;
        pim6dr.value_namespace = name_space;
        pim6dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio = value;
        pim6drprio.value_namespace = name_space;
        pim6drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime = value;
        pim6nbrholdtime.value_namespace = name_space;
        pim6nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid = value;
        pim6genid.value_namespace = name_space;
        pim6genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello = value;
        pim6nexthello.value_namespace = name_space;
        pim6nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr = value;
        pim6ipaddr.value_namespace = name_space;
        pim6ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6Border")
    {
        pim6border = value;
        pim6border.value_namespace = name_space;
        pim6border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode = value;
        pim6sparsemode.value_namespace = name_space;
        pim6sparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim6IfName")
    {
        pim6ifname.yfilter = yfilter;
    }
    if(value_path == "pim6Dr")
    {
        pim6dr.yfilter = yfilter;
    }
    if(value_path == "pim6DrPrio")
    {
        pim6drprio.yfilter = yfilter;
    }
    if(value_path == "pim6NbrHoldTime")
    {
        pim6nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "pim6GenID")
    {
        pim6genid.yfilter = yfilter;
    }
    if(value_path == "pim6NextHello")
    {
        pim6nexthello.yfilter = yfilter;
    }
    if(value_path == "pim6IpAddr")
    {
        pim6ipaddr.yfilter = yfilter;
    }
    if(value_path == "pim6Border")
    {
        pim6border.yfilter = yfilter;
    }
    if(value_path == "pim6SparseMode")
    {
        pim6sparsemode.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjrec-items" || name == "ifstats-items" || name == "pim6IfName" || name == "pim6Dr" || name == "pim6DrPrio" || name == "pim6NbrHoldTime" || name == "pim6GenID" || name == "pim6NextHello" || name == "pim6IpAddr" || name == "pim6Border" || name == "pim6SparseMode")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjrecItems()
    :
    adjeprec_list(this, {"addr"})
{

    yang_name = "adjrec-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::~AdjrecItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_operation() const
{
    for (std::size_t index=0; index<adjeprec_list.len(); index++)
    {
        if(adjeprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEpRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList>();
        c->parent = this;
        adjeprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjeprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEpRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjEpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    nbrname{YType::str, "nbrName"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEpRec-list"; yang_parent_name = "adjrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::~AdjEpRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| nbrname.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(nbrname.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (nbrname.is_set || is_set(nbrname.yfilter)) leaf_name_data.push_back(nbrname.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nbrName")
    {
        nbrname = value;
        nbrname.value_namespace = name_space;
        nbrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
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
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "nbrName")
    {
        nbrname.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "nbrName" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertsent{YType::uint32, "assertSent"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktsent{YType::uint32, "invalidPktSent"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "IfRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::~IfstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertsent.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktsent.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertsent.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktsent.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertsent.is_set || is_set(assertsent.yfilter)) leaf_name_data.push_back(assertsent.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktsent.is_set || is_set(invalidpktsent.yfilter)) leaf_name_data.push_back(invalidpktsent.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertSent")
    {
        assertsent = value;
        assertsent.value_namespace = name_space;
        assertsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent = value;
        invalidpktsent.value_namespace = name_space;
        invalidpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertSent")
    {
        assertsent.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertSent" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktSent" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpItems()
    :
    rpinforec_list(this, {"rpaddr"})
{

    yang_name = "rp-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinforec_list.len(); index++)
    {
        if(rpinforec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpInfoRec-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList>();
        c->parent = this;
        rpinforec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpinforec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpInfoRec-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpInfoRecList()
    :
    rpaddr{YType::str, "rpAddr"},
    rplocal{YType::boolean, "rpLocal"},
    rpuptime{YType::str, "rpUptime"},
    rppriority{YType::uint32, "rpPriority"},
    rpdisctype{YType::str, "rpDiscType"},
    rpdfordinal{YType::uint32, "rpDfOrdinal"}
        ,
    rsrp2grange_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems>())
{
    rsrp2grange_items->parent = this;

    yang_name = "RpInfoRec-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::~RpInfoRecList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_data() const
{
    if (is_presence_container) return true;
    return rpaddr.is_set
	|| rplocal.is_set
	|| rpuptime.is_set
	|| rppriority.is_set
	|| rpdisctype.is_set
	|| rpdfordinal.is_set
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpaddr.yfilter)
	|| ydk::is_set(rplocal.yfilter)
	|| ydk::is_set(rpuptime.yfilter)
	|| ydk::is_set(rppriority.yfilter)
	|| ydk::is_set(rpdisctype.yfilter)
	|| ydk::is_set(rpdfordinal.yfilter)
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpInfoRec-list";
    ADD_KEY_TOKEN(rpaddr, "rpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());
    if (rplocal.is_set || is_set(rplocal.yfilter)) leaf_name_data.push_back(rplocal.get_name_leafdata());
    if (rpuptime.is_set || is_set(rpuptime.yfilter)) leaf_name_data.push_back(rpuptime.get_name_leafdata());
    if (rppriority.is_set || is_set(rppriority.yfilter)) leaf_name_data.push_back(rppriority.get_name_leafdata());
    if (rpdisctype.is_set || is_set(rpdisctype.yfilter)) leaf_name_data.push_back(rpdisctype.get_name_leafdata());
    if (rpdfordinal.is_set || is_set(rpdfordinal.yfilter)) leaf_name_data.push_back(rpdfordinal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrP2Grange-items")
    {
        if(rsrp2grange_items == nullptr)
        {
            rsrp2grange_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems>();
        }
        return rsrp2grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrp2grange_items != nullptr)
    {
        children["rsrP2Grange-items"] = rsrp2grange_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpLocal")
    {
        rplocal = value;
        rplocal.value_namespace = name_space;
        rplocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpUptime")
    {
        rpuptime = value;
        rpuptime.value_namespace = name_space;
        rpuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpPriority")
    {
        rppriority = value;
        rppriority.value_namespace = name_space;
        rppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype = value;
        rpdisctype.value_namespace = name_space;
        rpdisctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal = value;
        rpdfordinal.value_namespace = name_space;
        rpdfordinal.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
    if(value_path == "rpLocal")
    {
        rplocal.yfilter = yfilter;
    }
    if(value_path == "rpUptime")
    {
        rpuptime.yfilter = yfilter;
    }
    if(value_path == "rpPriority")
    {
        rppriority.yfilter = yfilter;
    }
    if(value_path == "rpDiscType")
    {
        rpdisctype.yfilter = yfilter;
    }
    if(value_path == "rpDfOrdinal")
    {
        rpdfordinal.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrP2Grange-items" || name == "rpAddr" || name == "rpLocal" || name == "rpUptime" || name == "rpPriority" || name == "rpDiscType" || name == "rpDfOrdinal")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsrP2GrangeItems()
    :
    rsrp2grange_list(this, {"tdn"})
{

    yang_name = "rsrP2Grange-items"; yang_parent_name = "RpInfoRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::~RsrP2GrangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrP2Grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRP2Grange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList>();
        c->parent = this;
        rsrp2grange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrp2grange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRP2Grange-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::RsRP2GrangeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRP2Grange-list"; yang_parent_name = "rsrP2Grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::~RsRP2GrangeList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRP2Grange-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpItems()
    :
    jptrp_list(this, {"policydir"})
{

    yang_name = "jp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::~JpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_operation() const
{
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "JpTrP-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList>();
        c->parent = this;
        jptrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : jptrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "JpTrP-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::JpTrPList()
    :
    policydir{YType::enumeration, "policyDir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "RtMap"},
    pfxlist{YType::str, "pfxList"},
    itvl{YType::uint16, "itvl"}
{

    yang_name = "JpTrP-list"; yang_parent_name = "jp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::~JpTrPList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_data() const
{
    if (is_presence_container) return true;
    return policydir.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| itvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policydir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(itvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "JpTrP-list";
    ADD_KEY_TOKEN(policydir, "policyDir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policydir.is_set || is_set(policydir.yfilter)) leaf_name_data.push_back(policydir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (itvl.is_set || is_set(itvl.yfilter)) leaf_name_data.push_back(itvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyDir")
    {
        policydir = value;
        policydir.value_namespace = name_space;
        policydir.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "itvl")
    {
        itvl = value;
        itvl.value_namespace = name_space;
        itvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyDir")
    {
        policydir.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "RtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "itvl")
    {
        itvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyDir" || name == "name" || name == "descr" || name == "RtMap" || name == "pfxList" || name == "itvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::HelloItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    helloitvl{YType::uint32, "helloItvl"},
    autht{YType::enumeration, "authT"},
    authkey{YType::str, "authKey"}
{

    yang_name = "hello-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::~HelloItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| helloitvl.is_set
	|| autht.is_set
	|| authkey.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(helloitvl.yfilter)
	|| ydk::is_set(autht.yfilter)
	|| ydk::is_set(authkey.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (helloitvl.is_set || is_set(helloitvl.yfilter)) leaf_name_data.push_back(helloitvl.get_name_leafdata());
    if (autht.is_set || is_set(autht.yfilter)) leaf_name_data.push_back(autht.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "helloItvl")
    {
        helloitvl = value;
        helloitvl.value_namespace = name_space;
        helloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authT")
    {
        autht = value;
        autht.value_namespace = name_space;
        autht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "helloItvl")
    {
        helloitvl.yfilter = yfilter;
    }
    if(value_path == "authT")
    {
        autht.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "helloItvl" || name == "authT" || name == "authKey")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    lastclearts{YType::str, "lastClearTs"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    bsrcvd{YType::uint32, "bsRcvd"},
    candrprcvd{YType::uint32, "candRpRcvd"},
    autorpannrcvd{YType::uint32, "autorpAnnRcvd"},
    autorpdiscrcvd{YType::uint32, "autorpDiscRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    regstopsent{YType::uint32, "regStopSent"},
    bssent{YType::uint32, "bsSent"},
    candrpsent{YType::uint32, "candRPSent"},
    autorpannsent{YType::uint32, "autorpAnnSent"},
    autorpdiscsent{YType::uint32, "autorpDiscSent"},
    autorprpfsent{YType::uint32, "autorpRpfSent"},
    autorpbrddeny{YType::uint32, "autorpBrdDeny"},
    autorrpnolistn{YType::uint32, "autorrpNoListn"},
    autorpttlexp{YType::uint32, "autorpTtlExp"},
    autorpinvtype{YType::uint32, "autorpInvType"},
    bsnonbr{YType::uint32, "bsNoNbr"},
    bsborddeny{YType::uint32, "bsBordDeny"},
    bslenerr{YType::uint32, "bsLenErr"},
    bsrpffail{YType::uint32, "bsRpfFail"},
    bsnolis{YType::uint32, "bsNoLis"},
    candrpnolis{YType::uint32, "candrpNoLis"},
    candrpborddeny{YType::uint32, "candrpBordDeny"},
    regrcvdnorp{YType::uint32, "regRcvdNoRP"},
    regrcvdforssm{YType::uint32, "regRcvdForSSM"},
    regrcvdforbd{YType::uint32, "regRcvdForBd"},
    noroute{YType::uint32, "noRoute"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastclearts.is_set
	|| regrcvd.is_set
	|| nullregrcvd.is_set
	|| regstoprcvd.is_set
	|| bsrcvd.is_set
	|| candrprcvd.is_set
	|| autorpannrcvd.is_set
	|| autorpdiscrcvd.is_set
	|| nullregsent.is_set
	|| regstopsent.is_set
	|| bssent.is_set
	|| candrpsent.is_set
	|| autorpannsent.is_set
	|| autorpdiscsent.is_set
	|| autorprpfsent.is_set
	|| autorpbrddeny.is_set
	|| autorrpnolistn.is_set
	|| autorpttlexp.is_set
	|| autorpinvtype.is_set
	|| bsnonbr.is_set
	|| bsborddeny.is_set
	|| bslenerr.is_set
	|| bsrpffail.is_set
	|| bsnolis.is_set
	|| candrpnolis.is_set
	|| candrpborddeny.is_set
	|| regrcvdnorp.is_set
	|| regrcvdforssm.is_set
	|| regrcvdforbd.is_set
	|| noroute.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastclearts.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(bsrcvd.yfilter)
	|| ydk::is_set(candrprcvd.yfilter)
	|| ydk::is_set(autorpannrcvd.yfilter)
	|| ydk::is_set(autorpdiscrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(bssent.yfilter)
	|| ydk::is_set(candrpsent.yfilter)
	|| ydk::is_set(autorpannsent.yfilter)
	|| ydk::is_set(autorpdiscsent.yfilter)
	|| ydk::is_set(autorprpfsent.yfilter)
	|| ydk::is_set(autorpbrddeny.yfilter)
	|| ydk::is_set(autorrpnolistn.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorpinvtype.yfilter)
	|| ydk::is_set(bsnonbr.yfilter)
	|| ydk::is_set(bsborddeny.yfilter)
	|| ydk::is_set(bslenerr.yfilter)
	|| ydk::is_set(bsrpffail.yfilter)
	|| ydk::is_set(bsnolis.yfilter)
	|| ydk::is_set(candrpnolis.yfilter)
	|| ydk::is_set(candrpborddeny.yfilter)
	|| ydk::is_set(regrcvdnorp.yfilter)
	|| ydk::is_set(regrcvdforssm.yfilter)
	|| ydk::is_set(regrcvdforbd.yfilter)
	|| ydk::is_set(noroute.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastclearts.is_set || is_set(lastclearts.yfilter)) leaf_name_data.push_back(lastclearts.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (bsrcvd.is_set || is_set(bsrcvd.yfilter)) leaf_name_data.push_back(bsrcvd.get_name_leafdata());
    if (candrprcvd.is_set || is_set(candrprcvd.yfilter)) leaf_name_data.push_back(candrprcvd.get_name_leafdata());
    if (autorpannrcvd.is_set || is_set(autorpannrcvd.yfilter)) leaf_name_data.push_back(autorpannrcvd.get_name_leafdata());
    if (autorpdiscrcvd.is_set || is_set(autorpdiscrcvd.yfilter)) leaf_name_data.push_back(autorpdiscrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (bssent.is_set || is_set(bssent.yfilter)) leaf_name_data.push_back(bssent.get_name_leafdata());
    if (candrpsent.is_set || is_set(candrpsent.yfilter)) leaf_name_data.push_back(candrpsent.get_name_leafdata());
    if (autorpannsent.is_set || is_set(autorpannsent.yfilter)) leaf_name_data.push_back(autorpannsent.get_name_leafdata());
    if (autorpdiscsent.is_set || is_set(autorpdiscsent.yfilter)) leaf_name_data.push_back(autorpdiscsent.get_name_leafdata());
    if (autorprpfsent.is_set || is_set(autorprpfsent.yfilter)) leaf_name_data.push_back(autorprpfsent.get_name_leafdata());
    if (autorpbrddeny.is_set || is_set(autorpbrddeny.yfilter)) leaf_name_data.push_back(autorpbrddeny.get_name_leafdata());
    if (autorrpnolistn.is_set || is_set(autorrpnolistn.yfilter)) leaf_name_data.push_back(autorrpnolistn.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorpinvtype.is_set || is_set(autorpinvtype.yfilter)) leaf_name_data.push_back(autorpinvtype.get_name_leafdata());
    if (bsnonbr.is_set || is_set(bsnonbr.yfilter)) leaf_name_data.push_back(bsnonbr.get_name_leafdata());
    if (bsborddeny.is_set || is_set(bsborddeny.yfilter)) leaf_name_data.push_back(bsborddeny.get_name_leafdata());
    if (bslenerr.is_set || is_set(bslenerr.yfilter)) leaf_name_data.push_back(bslenerr.get_name_leafdata());
    if (bsrpffail.is_set || is_set(bsrpffail.yfilter)) leaf_name_data.push_back(bsrpffail.get_name_leafdata());
    if (bsnolis.is_set || is_set(bsnolis.yfilter)) leaf_name_data.push_back(bsnolis.get_name_leafdata());
    if (candrpnolis.is_set || is_set(candrpnolis.yfilter)) leaf_name_data.push_back(candrpnolis.get_name_leafdata());
    if (candrpborddeny.is_set || is_set(candrpborddeny.yfilter)) leaf_name_data.push_back(candrpborddeny.get_name_leafdata());
    if (regrcvdnorp.is_set || is_set(regrcvdnorp.yfilter)) leaf_name_data.push_back(regrcvdnorp.get_name_leafdata());
    if (regrcvdforssm.is_set || is_set(regrcvdforssm.yfilter)) leaf_name_data.push_back(regrcvdforssm.get_name_leafdata());
    if (regrcvdforbd.is_set || is_set(regrcvdforbd.yfilter)) leaf_name_data.push_back(regrcvdforbd.get_name_leafdata());
    if (noroute.is_set || is_set(noroute.yfilter)) leaf_name_data.push_back(noroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastClearTs")
    {
        lastclearts = value;
        lastclearts.value_namespace = name_space;
        lastclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd = value;
        bsrcvd.value_namespace = name_space;
        bsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd = value;
        candrprcvd.value_namespace = name_space;
        candrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd = value;
        autorpannrcvd.value_namespace = name_space;
        autorpannrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd = value;
        autorpdiscrcvd.value_namespace = name_space;
        autorpdiscrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsSent")
    {
        bssent = value;
        bssent.value_namespace = name_space;
        bssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candRPSent")
    {
        candrpsent = value;
        candrpsent.value_namespace = name_space;
        candrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent = value;
        autorpannsent.value_namespace = name_space;
        autorpannsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent = value;
        autorpdiscsent.value_namespace = name_space;
        autorpdiscsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent = value;
        autorprpfsent.value_namespace = name_space;
        autorprpfsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny = value;
        autorpbrddeny.value_namespace = name_space;
        autorpbrddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn = value;
        autorrpnolistn.value_namespace = name_space;
        autorrpnolistn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype = value;
        autorpinvtype.value_namespace = name_space;
        autorpinvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr = value;
        bsnonbr.value_namespace = name_space;
        bsnonbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny = value;
        bsborddeny.value_namespace = name_space;
        bsborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr = value;
        bslenerr.value_namespace = name_space;
        bslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail = value;
        bsrpffail.value_namespace = name_space;
        bsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis = value;
        bsnolis.value_namespace = name_space;
        bsnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis = value;
        candrpnolis.value_namespace = name_space;
        candrpnolis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny = value;
        candrpborddeny.value_namespace = name_space;
        candrpborddeny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp = value;
        regrcvdnorp.value_namespace = name_space;
        regrcvdnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm = value;
        regrcvdforssm.value_namespace = name_space;
        regrcvdforssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd = value;
        regrcvdforbd.value_namespace = name_space;
        regrcvdforbd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noRoute")
    {
        noroute = value;
        noroute.value_namespace = name_space;
        noroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastClearTs")
    {
        lastclearts.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "bsRcvd")
    {
        bsrcvd.yfilter = yfilter;
    }
    if(value_path == "candRpRcvd")
    {
        candrprcvd.yfilter = yfilter;
    }
    if(value_path == "autorpAnnRcvd")
    {
        autorpannrcvd.yfilter = yfilter;
    }
    if(value_path == "autorpDiscRcvd")
    {
        autorpdiscrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "bsSent")
    {
        bssent.yfilter = yfilter;
    }
    if(value_path == "candRPSent")
    {
        candrpsent.yfilter = yfilter;
    }
    if(value_path == "autorpAnnSent")
    {
        autorpannsent.yfilter = yfilter;
    }
    if(value_path == "autorpDiscSent")
    {
        autorpdiscsent.yfilter = yfilter;
    }
    if(value_path == "autorpRpfSent")
    {
        autorprpfsent.yfilter = yfilter;
    }
    if(value_path == "autorpBrdDeny")
    {
        autorpbrddeny.yfilter = yfilter;
    }
    if(value_path == "autorrpNoListn")
    {
        autorrpnolistn.yfilter = yfilter;
    }
    if(value_path == "autorpTtlExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autorpInvType")
    {
        autorpinvtype.yfilter = yfilter;
    }
    if(value_path == "bsNoNbr")
    {
        bsnonbr.yfilter = yfilter;
    }
    if(value_path == "bsBordDeny")
    {
        bsborddeny.yfilter = yfilter;
    }
    if(value_path == "bsLenErr")
    {
        bslenerr.yfilter = yfilter;
    }
    if(value_path == "bsRpfFail")
    {
        bsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsNoLis")
    {
        bsnolis.yfilter = yfilter;
    }
    if(value_path == "candrpNoLis")
    {
        candrpnolis.yfilter = yfilter;
    }
    if(value_path == "candrpBordDeny")
    {
        candrpborddeny.yfilter = yfilter;
    }
    if(value_path == "regRcvdNoRP")
    {
        regrcvdnorp.yfilter = yfilter;
    }
    if(value_path == "regRcvdForSSM")
    {
        regrcvdforssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdForBd")
    {
        regrcvdforbd.yfilter = yfilter;
    }
    if(value_path == "noRoute")
    {
        noroute.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastClearTs" || name == "regRcvd" || name == "nullRegRcvd" || name == "regStopRcvd" || name == "bsRcvd" || name == "candRpRcvd" || name == "autorpAnnRcvd" || name == "autorpDiscRcvd" || name == "nullRegSent" || name == "regStopSent" || name == "bsSent" || name == "candRPSent" || name == "autorpAnnSent" || name == "autorpDiscSent" || name == "autorpRpfSent" || name == "autorpBrdDeny" || name == "autorrpNoListn" || name == "autorpTtlExp" || name == "autorpInvType" || name == "bsNoNbr" || name == "bsBordDeny" || name == "bsLenErr" || name == "bsRpfFail" || name == "bsNoLis" || name == "candrpNoLis" || name == "candrpBordDeny" || name == "regRcvdNoRP" || name == "regRcvdForSSM" || name == "regRcvdForBd" || name == "noRoute")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::LimitItems::LimitItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    max{YType::uint32, "max"},
    rsvd{YType::uint32, "rsvd"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "limit-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::LimitItems::~LimitItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| max.is_set
	|| rsvd.is_set
	|| rtmap.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(rsvd.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (rsvd.is_set || is_set(rsvd.yfilter)) leaf_name_data.push_back(rsvd.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::LimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::LimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvd")
    {
        rsvd = value;
        rsvd.value_namespace = name_space;
        rsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::LimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "rsvd")
    {
        rsvd.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::LimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "max" || name == "rsvd" || name == "rtMap")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::AsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    prebuildspt{YType::boolean, "preBuildSpt"},
    force{YType::boolean, "force"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
        ,
    sgexp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems>())
    , shared_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems>())
    , reg_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems>())
{
    sgexp_items->parent = this;
    shared_items->parent = this;
    reg_items->parent = this;

    yang_name = "asm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::~AsmItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| prebuildspt.is_set
	|| force.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| (sgexp_items !=  nullptr && sgexp_items->has_data())
	|| (shared_items !=  nullptr && shared_items->has_data())
	|| (reg_items !=  nullptr && reg_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(prebuildspt.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| (sgexp_items !=  nullptr && sgexp_items->has_operation())
	|| (shared_items !=  nullptr && shared_items->has_operation())
	|| (reg_items !=  nullptr && reg_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (prebuildspt.is_set || is_set(prebuildspt.yfilter)) leaf_name_data.push_back(prebuildspt.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgexp-items")
    {
        if(sgexp_items == nullptr)
        {
            sgexp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems>();
        }
        return sgexp_items;
    }

    if(child_yang_name == "shared-items")
    {
        if(shared_items == nullptr)
        {
            shared_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems>();
        }
        return shared_items;
    }

    if(child_yang_name == "reg-items")
    {
        if(reg_items == nullptr)
        {
            reg_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems>();
        }
        return reg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sgexp_items != nullptr)
    {
        children["sgexp-items"] = sgexp_items;
    }

    if(shared_items != nullptr)
    {
        children["shared-items"] = shared_items;
    }

    if(reg_items != nullptr)
    {
        children["reg-items"] = reg_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt = value;
        prebuildspt.value_namespace = name_space;
        prebuildspt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgexp-items" || name == "shared-items" || name == "reg-items" || name == "name" || name == "descr" || name == "ctrl" || name == "preBuildSpt" || name == "force" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::SgexpItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    sgexpitvl{YType::uint32, "sgExpItvl"}
{

    yang_name = "sgexp-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::~SgexpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| sgexpitvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(sgexpitvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgexp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (sgexpitvl.is_set || is_set(sgexpitvl.yfilter)) leaf_name_data.push_back(sgexpitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl = value;
        sgexpitvl.value_namespace = name_space;
        sgexpitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "sgExpItvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::SharedItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    usesptcommand{YType::boolean, "useSPTCommand"}
{

    yang_name = "shared-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::~SharedItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| usesptcommand.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(usesptcommand.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (usesptcommand.is_set || is_set(usesptcommand.yfilter)) leaf_name_data.push_back(usesptcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand = value;
        usesptcommand.value_namespace = name_space;
        usesptcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "useSPTCommand")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::RegItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    addr{YType::str, "addr"},
    srcif{YType::str, "srcIf"},
    maxrate{YType::uint16, "maxRate"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
{

    yang_name = "reg-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::~RegItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| addr.is_set
	|| srcif.is_set
	|| maxrate.is_set
	|| rtmap.is_set
	|| pfxlist.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(maxrate.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (maxrate.is_set || is_set(maxrate.yfilter)) leaf_name_data.push_back(maxrate.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRate")
    {
        maxrate = value;
        maxrate.value_namespace = name_space;
        maxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "maxRate")
    {
        maxrate.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "addr" || name == "srcIf" || name == "maxRate" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::SsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "ssm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::~SsmItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::RangeItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "range-items"; yang_parent_name = "ssm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::BidirItems::BidirItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxrp{YType::uint16, "maxRP"},
    dfobitvl{YType::uint16, "dfobItvl"}
{

    yang_name = "bidir-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::BidirItems::~BidirItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxrp.is_set
	|| dfobitvl.is_set;
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxrp.yfilter)
	|| ydk::is_set(dfobitvl.yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxrp.is_set || is_set(maxrp.yfilter)) leaf_name_data.push_back(maxrp.get_name_leafdata());
    if (dfobitvl.is_set || is_set(dfobitvl.yfilter)) leaf_name_data.push_back(dfobitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::BidirItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::BidirItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxRP")
    {
        maxrp = value;
        maxrp.value_namespace = name_space;
        maxrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl = value;
        dfobitvl.value_namespace = name_space;
        dfobitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::BidirItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxRP")
    {
        maxrp.yfilter = yfilter;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::BidirItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxRP" || name == "dfobItvl")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::StaticrpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rp_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems>())
{
    rp_items->parent = this;

    yang_name = "staticrp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::~StaticrpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "staticrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::RpItems()
    :
    staticrp_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "staticrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::~RpItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_operation() const
{
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticRP-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList>();
        c->parent = this;
        staticrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : staticrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticRP-list")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::StaticRPList()
    :
    addr{YType::str, "addr"}
        ,
    range_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>())
    , rpgrplist_items(std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>())
{
    range_items->parent = this;
    rpgrplist_items->parent = this;

    yang_name = "StaticRP-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::~StaticRPList()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| (range_items !=  nullptr && range_items->has_data())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_data());
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_operation());
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticRP-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>();
        }
        return range_items;
    }

    if(child_yang_name == "rpgrplist-items")
    {
        if(rpgrplist_items == nullptr)
        {
            rpgrplist_items = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>();
        }
        return rpgrplist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    if(rpgrplist_items != nullptr)
    {
        children["rpgrplist-items"] = rpgrplist_items;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "rpgrplist-items" || name == "addr")
        return true;
    return false;
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::~RangeItems()
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpGrpRange-list")
    {
        auto c = std::make_shared<System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpGrpRange-list")
        return true;
    return false;
}


}
}

