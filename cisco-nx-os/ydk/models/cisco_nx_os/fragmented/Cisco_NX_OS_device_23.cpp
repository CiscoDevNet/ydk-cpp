
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_23.hpp"
#include "Cisco_NX_OS_device_24.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    evcnt{YType::uint32, "evCnt"},
    lsacnt{YType::uint32, "lsaCnt"},
    peercnt{YType::uint32, "peerCnt"},
    floodtopeercnt{YType::uint32, "floodToPeerCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return evcnt.is_set
	|| lsacnt.is_set
	|| peercnt.is_set
	|| floodtopeercnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evcnt.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(floodtopeercnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evcnt.is_set || is_set(evcnt.yfilter)) leaf_name_data.push_back(evcnt.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (floodtopeercnt.is_set || is_set(floodtopeercnt.yfilter)) leaf_name_data.push_back(floodtopeercnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evCnt")
    {
        evcnt = value;
        evcnt.value_namespace = name_space;
        evcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt = value;
        floodtopeercnt.value_namespace = name_space;
        floodtopeercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evCnt")
    {
        evcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evCnt" || name == "lsaCnt" || name == "peerCnt" || name == "floodToPeerCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiareaItems()
    :
    multiarea_list(this, {"multiareaid"})
{

    yang_name = "multiarea-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::~MultiareaItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_operation() const
{
    for (std::size_t index=0; index<multiarea_list.len(); index++)
    {
        if(multiarea_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiarea-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MultiArea-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList>();
        c->parent = this;
        multiarea_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : multiarea_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MultiArea-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::MultiAreaList()
    :
    multiareaid{YType::str, "multiareaid"}
{

    yang_name = "MultiArea-list"; yang_parent_name = "multiarea-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::~MultiAreaList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_data() const
{
    if (is_presence_container) return true;
    return multiareaid.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiareaid.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MultiArea-list";
    ADD_KEY_TOKEN(multiareaid, "multiareaid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiareaid.is_set || is_set(multiareaid.yfilter)) leaf_name_data.push_back(multiareaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiareaid")
    {
        multiareaid = value;
        multiareaid.value_namespace = name_space;
        multiareaid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiareaid")
    {
        multiareaid.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiareaid")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    unknownsendpkts{YType::uint32, "unknownSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| unknownsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(unknownsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (unknownsendpkts.is_set || is_set(unknownsendpkts.yfilter)) leaf_name_data.push_back(unknownsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts = value;
        unknownsendpkts.value_namespace = name_space;
        unknownsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "unknownSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtospfIfDefToOspfIfItems()
    :
    rtospfifdeftoospfif_list(this, {"tdn"})
{

    yang_name = "rtospfIfDefToOspfIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::~RtospfIfDefToOspfIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtospfifdeftoospfif_list.len(); index++)
    {
        if(rtospfifdeftoospfif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtospfIfDefToOspfIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtOspfIfDefToOspfIf-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList>();
        c->parent = this;
        rtospfifdeftoospfif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtospfifdeftoospfif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtOspfIfDefToOspfIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::RtOspfIfDefToOspfIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtOspfIfDefToOspfIf-list"; yang_parent_name = "rtospfIfDefToOspfIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::~RtOspfIfDefToOspfIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtOspfIfDefToOspfIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::MaxlsapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxlsa{YType::uint32, "maxLsa"},
    thresh{YType::uint16, "thresh"},
    sleepcnt{YType::uint32, "sleepCnt"},
    sleepintvl{YType::uint16, "sleepIntvl"},
    resetintvl{YType::uint32, "resetIntvl"},
    action{YType::enumeration, "action"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    nonselflsacnt{YType::uint32, "nonSelfLsaCnt"},
    currsleepcnt{YType::uint32, "currSleepCnt"}
{

    yang_name = "maxlsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::~MaxlsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxlsa.is_set
	|| thresh.is_set
	|| sleepcnt.is_set
	|| sleepintvl.is_set
	|| resetintvl.is_set
	|| action.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| nonselflsacnt.is_set
	|| currsleepcnt.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxlsa.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(sleepcnt.yfilter)
	|| ydk::is_set(sleepintvl.yfilter)
	|| ydk::is_set(resetintvl.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(nonselflsacnt.yfilter)
	|| ydk::is_set(currsleepcnt.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxlsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxlsa.is_set || is_set(maxlsa.yfilter)) leaf_name_data.push_back(maxlsa.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (sleepcnt.is_set || is_set(sleepcnt.yfilter)) leaf_name_data.push_back(sleepcnt.get_name_leafdata());
    if (sleepintvl.is_set || is_set(sleepintvl.yfilter)) leaf_name_data.push_back(sleepintvl.get_name_leafdata());
    if (resetintvl.is_set || is_set(resetintvl.yfilter)) leaf_name_data.push_back(resetintvl.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (nonselflsacnt.is_set || is_set(nonselflsacnt.yfilter)) leaf_name_data.push_back(nonselflsacnt.get_name_leafdata());
    if (currsleepcnt.is_set || is_set(currsleepcnt.yfilter)) leaf_name_data.push_back(currsleepcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "maxLsa")
    {
        maxlsa = value;
        maxlsa.value_namespace = name_space;
        maxlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt = value;
        sleepcnt.value_namespace = name_space;
        sleepcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl = value;
        sleepintvl.value_namespace = name_space;
        sleepintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl = value;
        resetintvl.value_namespace = name_space;
        resetintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt = value;
        nonselflsacnt.value_namespace = name_space;
        nonselflsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt = value;
        currsleepcnt.value_namespace = name_space;
        currsleepcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxLsa")
    {
        maxlsa.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "sleepCnt")
    {
        sleepcnt.yfilter = yfilter;
    }
    if(value_path == "sleepIntvl")
    {
        sleepintvl.yfilter = yfilter;
    }
    if(value_path == "resetIntvl")
    {
        resetintvl.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "nonSelfLsaCnt")
    {
        nonselflsacnt.yfilter = yfilter;
    }
    if(value_path == "currSleepCnt")
    {
        currsleepcnt.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxLsa" || name == "thresh" || name == "sleepCnt" || name == "sleepIntvl" || name == "resetIntvl" || name == "action" || name == "operSt" || name == "operStQual" || name == "nonSelfLsaCnt" || name == "currSleepCnt")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::MaxmetriclsapItems()
    :
    ctrl{YType::str, "ctrl"},
    maxmetricextlsa{YType::uint32, "maxMetricExtLsa"},
    maxmetricsummlsa{YType::uint32, "maxMetricSummLsa"},
    startupintvl{YType::uint32, "startupIntvl"},
    awaitconvbgpasn{YType::str, "awaitConvBgpAsn"}
{

    yang_name = "maxmetriclsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::~MaxmetriclsapItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_data() const
{
    if (is_presence_container) return true;
    return ctrl.is_set
	|| maxmetricextlsa.is_set
	|| maxmetricsummlsa.is_set
	|| startupintvl.is_set
	|| awaitconvbgpasn.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(maxmetricextlsa.yfilter)
	|| ydk::is_set(maxmetricsummlsa.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(awaitconvbgpasn.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxmetriclsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (maxmetricextlsa.is_set || is_set(maxmetricextlsa.yfilter)) leaf_name_data.push_back(maxmetricextlsa.get_name_leafdata());
    if (maxmetricsummlsa.is_set || is_set(maxmetricsummlsa.yfilter)) leaf_name_data.push_back(maxmetricsummlsa.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (awaitconvbgpasn.is_set || is_set(awaitconvbgpasn.yfilter)) leaf_name_data.push_back(awaitconvbgpasn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa = value;
        maxmetricextlsa.value_namespace = name_space;
        maxmetricextlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa = value;
        maxmetricsummlsa.value_namespace = name_space;
        maxmetricsummlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn = value;
        awaitconvbgpasn.value_namespace = name_space;
        awaitconvbgpasn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa.yfilter = yfilter;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl" || name == "maxMetricExtLsa" || name == "maxMetricSummLsa" || name == "startupIntvl" || name == "awaitConvBgpAsn")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::~InterleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::get_children() const
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

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| max.is_set
	|| thresh.is_set
	|| retries.is_set
	|| duration.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::RibleakItems()
    :
    rtmap{YType::str, "rtMap"},
    always{YType::boolean, "always"}
{

    yang_name = "ribleak-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::~RibleakItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| always.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "always")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtrtsumItems()
    :
    extrtsum_list(this, {"addr"})
{

    yang_name = "extrtsum-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::~ExtrtsumItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_operation() const
{
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtRtSum-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList>();
        c->parent = this;
        extrtsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extrtsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtRtSum-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::ExtRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ExtRtSum-list"; yang_parent_name = "extrtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::~ExtRtSumList()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| tag.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "tag")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    unknownsendpkts{YType::uint32, "unknownSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| unknownsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(unknownsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (unknownsendpkts.is_set || is_set(unknownsendpkts.yfilter)) leaf_name_data.push_back(unknownsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts = value;
        unknownsendpkts.value_namespace = name_space;
        unknownsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "unknownSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EvtlogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtlogs-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::~EvtlogsItems()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtlogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto c = std::make_shared<System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList>();
        c->parent = this;
        eventlogs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventlogs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"},
    logsizekbytes{YType::uint16, "logSizeKBytes"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtlogs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::~EventLogsList()
{
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set
	|| logsizekbytes.is_set;
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter)
	|| ydk::is_set(logsizekbytes.yfilter);
}

std::string System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());
    if (logsizekbytes.is_set || is_set(logsizekbytes.yfilter)) leaf_name_data.push_back(logsizekbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes = value;
        logsizekbytes.value_namespace = name_space;
        logsizekbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes.yfilter = yfilter;
    }
}

bool System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize" || name == "logSizeKBytes")
        return true;
    return false;
}

System::OspfItems::IfItems::IfItems()
    :
    internalif_list(this, {"id", "instanceid"})
{

    yang_name = "if-items"; yang_parent_name = "ospf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::IfItems::~IfItems()
{
}

bool System::OspfItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalIf-list")
    {
        auto c = std::make_shared<System::OspfItems::IfItems::InternalIfList>();
        c->parent = this;
        internalif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::get_children() const
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

void System::OspfItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalIf-list")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::InternalIfList()
    :
    id{YType::str, "id"},
    instanceid{YType::uint8, "instanceid"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    passivectrl{YType::enumeration, "passiveCtrl"},
    bfdctrl{YType::enumeration, "bfdCtrl"},
    nwt{YType::enumeration, "nwT"},
    prio{YType::uint8, "prio"},
    area{YType::str, "area"},
    advertisesecondaries{YType::boolean, "advertiseSecondaries"},
    operst{YType::enumeration, "operSt"},
    failstqual{YType::str, "failStQual"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"},
    addr{YType::str, "addr"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    drid{YType::str, "drId"},
    bdrid{YType::str, "bdrId"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    opercost{YType::uint16, "operCost"},
    operdeadintvl{YType::uint16, "operDeadIntvl"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"},
    instance{YType::str, "instance"},
    dom{YType::str, "dom"},
    instancedeletedviacli{YType::str, "instanceDeletedViaCLI"}
        ,
    authnew_items(std::make_shared<System::OspfItems::IfItems::InternalIfList::AuthnewItems>())
    , multiarea_items(std::make_shared<System::OspfItems::IfItems::InternalIfList::MultiareaItems>())
    , rtvrfmbr_items(std::make_shared<System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems>())
{
    authnew_items->parent = this;
    multiarea_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "InternalIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OspfItems::IfItems::InternalIfList::~InternalIfList()
{
}

bool System::OspfItems::IfItems::InternalIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| instanceid.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| passivectrl.is_set
	|| bfdctrl.is_set
	|| nwt.is_set
	|| prio.is_set
	|| area.is_set
	|| advertisesecondaries.is_set
	|| operst.is_set
	|| failstqual.is_set
	|| type.is_set
	|| flags.is_set
	|| addr.is_set
	|| dr.is_set
	|| bdr.is_set
	|| drid.is_set
	|| bdrid.is_set
	|| lsacksumsum.is_set
	|| opercost.is_set
	|| operdeadintvl.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| instance.is_set
	|| dom.is_set
	|| instancedeletedviacli.is_set
	|| (authnew_items !=  nullptr && authnew_items->has_data())
	|| (multiarea_items !=  nullptr && multiarea_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::OspfItems::IfItems::InternalIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instanceid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(passivectrl.yfilter)
	|| ydk::is_set(bfdctrl.yfilter)
	|| ydk::is_set(nwt.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(advertisesecondaries.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(failstqual.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(drid.yfilter)
	|| ydk::is_set(bdrid.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(operdeadintvl.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(dom.yfilter)
	|| ydk::is_set(instancedeletedviacli.yfilter)
	|| (authnew_items !=  nullptr && authnew_items->has_operation())
	|| (multiarea_items !=  nullptr && multiarea_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::OspfItems::IfItems::InternalIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospf-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OspfItems::IfItems::InternalIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalIf-list";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(instanceid, "instanceid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instanceid.is_set || is_set(instanceid.yfilter)) leaf_name_data.push_back(instanceid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (passivectrl.is_set || is_set(passivectrl.yfilter)) leaf_name_data.push_back(passivectrl.get_name_leafdata());
    if (bfdctrl.is_set || is_set(bfdctrl.yfilter)) leaf_name_data.push_back(bfdctrl.get_name_leafdata());
    if (nwt.is_set || is_set(nwt.yfilter)) leaf_name_data.push_back(nwt.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (advertisesecondaries.is_set || is_set(advertisesecondaries.yfilter)) leaf_name_data.push_back(advertisesecondaries.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (failstqual.is_set || is_set(failstqual.yfilter)) leaf_name_data.push_back(failstqual.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (drid.is_set || is_set(drid.yfilter)) leaf_name_data.push_back(drid.get_name_leafdata());
    if (bdrid.is_set || is_set(bdrid.yfilter)) leaf_name_data.push_back(bdrid.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (operdeadintvl.is_set || is_set(operdeadintvl.yfilter)) leaf_name_data.push_back(operdeadintvl.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (dom.is_set || is_set(dom.yfilter)) leaf_name_data.push_back(dom.get_name_leafdata());
    if (instancedeletedviacli.is_set || is_set(instancedeletedviacli.yfilter)) leaf_name_data.push_back(instancedeletedviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authnew-items")
    {
        if(authnew_items == nullptr)
        {
            authnew_items = std::make_shared<System::OspfItems::IfItems::InternalIfList::AuthnewItems>();
        }
        return authnew_items;
    }

    if(child_yang_name == "multiarea-items")
    {
        if(multiarea_items == nullptr)
        {
            multiarea_items = std::make_shared<System::OspfItems::IfItems::InternalIfList::MultiareaItems>();
        }
        return multiarea_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authnew_items != nullptr)
    {
        children["authnew-items"] = authnew_items;
    }

    if(multiarea_items != nullptr)
    {
        children["multiarea-items"] = multiarea_items;
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

void System::OspfItems::IfItems::InternalIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instanceid")
    {
        instanceid = value;
        instanceid.value_namespace = name_space;
        instanceid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "passiveCtrl")
    {
        passivectrl = value;
        passivectrl.value_namespace = name_space;
        passivectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl = value;
        bfdctrl.value_namespace = name_space;
        bfdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwT")
    {
        nwt = value;
        nwt.value_namespace = name_space;
        nwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries = value;
        advertisesecondaries.value_namespace = name_space;
        advertisesecondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStQual")
    {
        failstqual = value;
        failstqual.value_namespace = name_space;
        failstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drId")
    {
        drid = value;
        drid.value_namespace = name_space;
        drid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdrId")
    {
        bdrid = value;
        bdrid.value_namespace = name_space;
        bdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl = value;
        operdeadintvl.value_namespace = name_space;
        operdeadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "instanceDeletedViaCLI")
    {
        instancedeletedviacli = value;
        instancedeletedviacli.value_namespace = name_space;
        instancedeletedviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::IfItems::InternalIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instanceid")
    {
        instanceid.yfilter = yfilter;
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
    if(value_path == "passiveCtrl")
    {
        passivectrl.yfilter = yfilter;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl.yfilter = yfilter;
    }
    if(value_path == "nwT")
    {
        nwt.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "failStQual")
    {
        failstqual.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "drId")
    {
        drid.yfilter = yfilter;
    }
    if(value_path == "bdrId")
    {
        bdrid.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "dom")
    {
        dom.yfilter = yfilter;
    }
    if(value_path == "instanceDeletedViaCLI")
    {
        instancedeletedviacli.yfilter = yfilter;
    }
}

bool System::OspfItems::IfItems::InternalIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authnew-items" || name == "multiarea-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "instanceid" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "area" || name == "advertiseSecondaries" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost" || name == "instance" || name == "dom" || name == "instanceDeletedViaCLI")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::AuthnewItems::AuthnewItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    key{YType::str, "key"},
    keysecuremode{YType::boolean, "keySecureMode"},
    md5key{YType::str, "md5key"},
    md5keysecuremode{YType::boolean, "md5keySecureMode"},
    keychain{YType::str, "keychain"}
{

    yang_name = "authnew-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::AuthnewItems::~AuthnewItems()
{
}

bool System::OspfItems::IfItems::InternalIfList::AuthnewItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| keyid.is_set
	|| key.is_set
	|| keysecuremode.is_set
	|| md5key.is_set
	|| md5keysecuremode.is_set
	|| keychain.is_set;
}

bool System::OspfItems::IfItems::InternalIfList::AuthnewItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keysecuremode.yfilter)
	|| ydk::is_set(md5key.yfilter)
	|| ydk::is_set(md5keysecuremode.yfilter)
	|| ydk::is_set(keychain.yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::AuthnewItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authnew-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::AuthnewItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keysecuremode.is_set || is_set(keysecuremode.yfilter)) leaf_name_data.push_back(keysecuremode.get_name_leafdata());
    if (md5key.is_set || is_set(md5key.yfilter)) leaf_name_data.push_back(md5key.get_name_leafdata());
    if (md5keysecuremode.is_set || is_set(md5keysecuremode.yfilter)) leaf_name_data.push_back(md5keysecuremode.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::AuthnewItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::AuthnewItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::IfItems::InternalIfList::AuthnewItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode = value;
        keysecuremode.value_namespace = name_space;
        keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5key")
    {
        md5key = value;
        md5key.value_namespace = name_space;
        md5key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode = value;
        md5keysecuremode.value_namespace = name_space;
        md5keysecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::IfItems::InternalIfList::AuthnewItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySecureMode")
    {
        keysecuremode.yfilter = yfilter;
    }
    if(value_path == "md5key")
    {
        md5key.yfilter = yfilter;
    }
    if(value_path == "md5keySecureMode")
    {
        md5keysecuremode.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
}

bool System::OspfItems::IfItems::InternalIfList::AuthnewItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "type" || name == "keyId" || name == "key" || name == "keySecureMode" || name == "md5key" || name == "md5keySecureMode" || name == "keychain")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::MultiareaItems::MultiareaItems()
    :
    internalmultiarea_list(this, {"multiareaid"})
{

    yang_name = "multiarea-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::MultiareaItems::~MultiareaItems()
{
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalmultiarea_list.len(); index++)
    {
        if(internalmultiarea_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::has_operation() const
{
    for (std::size_t index=0; index<internalmultiarea_list.len(); index++)
    {
        if(internalmultiarea_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::MultiareaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiarea-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::MultiareaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::MultiareaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalMultiArea-list")
    {
        auto c = std::make_shared<System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList>();
        c->parent = this;
        internalmultiarea_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::MultiareaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalmultiarea_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::OspfItems::IfItems::InternalIfList::MultiareaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::IfItems::InternalIfList::MultiareaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalMultiArea-list")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::InternalMultiAreaList()
    :
    multiareaid{YType::str, "multiareaid"}
{

    yang_name = "InternalMultiArea-list"; yang_parent_name = "multiarea-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::~InternalMultiAreaList()
{
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::has_data() const
{
    if (is_presence_container) return true;
    return multiareaid.is_set;
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multiareaid.yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalMultiArea-list";
    ADD_KEY_TOKEN(multiareaid, "multiareaid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multiareaid.is_set || is_set(multiareaid.yfilter)) leaf_name_data.push_back(multiareaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multiareaid")
    {
        multiareaid = value;
        multiareaid.value_namespace = name_space;
        multiareaid.value_namespace_prefix = name_space_prefix;
    }
}

void System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multiareaid")
    {
        multiareaid.yfilter = yfilter;
    }
}

bool System::OspfItems::IfItems::InternalIfList::MultiareaItems::InternalMultiAreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multiareaid")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::IfItems::InternalIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::get_children() const
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

void System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OspfItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::EvpnItems::EvpnItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    bdevi_items(std::make_shared<System::EvpnItems::BdeviItems>())
{
    bdevi_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::~EvpnItems()
{
}

bool System::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (bdevi_items !=  nullptr && bdevi_items->has_data());
}

bool System::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (bdevi_items !=  nullptr && bdevi_items->has_operation());
}

std::string System::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdevi-items")
    {
        if(bdevi_items == nullptr)
        {
            bdevi_items = std::make_shared<System::EvpnItems::BdeviItems>();
        }
        return bdevi_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bdevi_items != nullptr)
    {
        children["bdevi-items"] = bdevi_items;
    }

    return children;
}

void System::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdevi-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BdeviItems()
    :
    bdevi_list(this, {"encap"})
{

    yang_name = "bdevi-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::~BdeviItems()
{
}

bool System::EvpnItems::BdeviItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::has_operation() const
{
    for (std::size_t index=0; index<bdevi_list.len(); index++)
    {
        if(bdevi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdevi-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BDEvi-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList>();
        c->parent = this;
        bdevi_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdevi_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EvpnItems::BdeviItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BDEvi-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::BDEviList()
    :
    encap{YType::str, "encap"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrd{YType::str, "operRd"},
    name{YType::str, "name"},
    rd{YType::str, "rd"}
        ,
    rttp_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>())
{
    rttp_items->parent = this;

    yang_name = "BDEvi-list"; yang_parent_name = "bdevi-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EvpnItems::BdeviItems::BDEviList::~BDEviList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| cfgsrcctrlr.is_set
	|| operrd.is_set
	|| name.is_set
	|| rd.is_set
	|| (rttp_items !=  nullptr && rttp_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrd.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (rttp_items !=  nullptr && rttp_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/evpn-items/bdevi-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EvpnItems::BdeviItems::BDEviList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDEvi-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrd.is_set || is_set(operrd.yfilter)) leaf_name_data.push_back(operrd.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttp-items")
    {
        if(rttp_items == nullptr)
        {
            rttp_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems>();
        }
        return rttp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rttp_items != nullptr)
    {
        children["rttp-items"] = rttp_items;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRd")
    {
        operrd = value;
        operrd.value_namespace = name_space;
        operrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRd")
    {
        operrd.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttp-items" || name == "encap" || name == "cfgSrcCtrlr" || name == "operRd" || name == "name" || name == "rd")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttpItems()
    :
    rttp_list(this, {"type"})
{

    yang_name = "rttp-items"; yang_parent_name = "BDEvi-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::~RttpItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_operation() const
{
    for (std::size_t index=0; index<rttp_list.len(); index++)
    {
        if(rttp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttP-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList>();
        c->parent = this;
        rttp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::get_children() const
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttP-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RttPList()
    :
    type{YType::enumeration, "type"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"},
    operrttauto{YType::str, "operRttAuto"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    ent_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>())
    , rtctrlmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>())
    , rtctrldefmap_items(std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>())
{
    ent_items->parent = this;
    rtctrlmap_items->parent = this;
    rtctrldefmap_items->parent = this;

    yang_name = "RttP-list"; yang_parent_name = "rttp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::~RttPList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| cfgsrcctrlr.is_set
	|| operrttauto.is_set
	|| name.is_set
	|| descr.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_data())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_data());
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter)
	|| ydk::is_set(operrttauto.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtctrlmap_items !=  nullptr && rtctrlmap_items->has_operation())
	|| (rtctrldefmap_items !=  nullptr && rtctrldefmap_items->has_operation());
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttP-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());
    if (operrttauto.is_set || is_set(operrttauto.yfilter)) leaf_name_data.push_back(operrttauto.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtctrlmap-items")
    {
        if(rtctrlmap_items == nullptr)
        {
            rtctrlmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems>();
        }
        return rtctrlmap_items;
    }

    if(child_yang_name == "rtctrldefmap-items")
    {
        if(rtctrldefmap_items == nullptr)
        {
            rtctrldefmap_items = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems>();
        }
        return rtctrldefmap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(rtctrlmap_items != nullptr)
    {
        children["rtctrlmap-items"] = rtctrlmap_items;
    }

    if(rtctrldefmap_items != nullptr)
    {
        children["rtctrldefmap-items"] = rtctrldefmap_items;
    }

    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto = value;
        operrttauto.value_namespace = name_space;
        operrttauto.value_namespace_prefix = name_space_prefix;
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
    if(value_path == "operRttAuto")
    {
        operrttauto.yfilter = yfilter;
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

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtctrlmap-items" || name == "rtctrldefmap-items" || name == "type" || name == "cfgSrcCtrlr" || name == "operRttAuto" || name == "name" || name == "descr")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::EntItems()
    :
    rttentry_list(this, {"rtt"})
{

    yang_name = "ent-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::~EntItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<rttentry_list.len(); index++)
    {
        if(rttentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RttEntry-list")
    {
        auto c = std::make_shared<System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList>();
        c->parent = this;
        rttentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::get_children() const
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RttEntry-list")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::RttEntryList()
    :
    rtt{YType::str, "rtt"},
    cfgsrcctrlr{YType::enumeration, "cfgSrcCtrlr"}
{

    yang_name = "RttEntry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::~RttEntryList()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_data() const
{
    if (is_presence_container) return true;
    return rtt.is_set
	|| cfgsrcctrlr.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(cfgsrcctrlr.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RttEntry-list";
    ADD_KEY_TOKEN(rtt, "rtt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (cfgsrcctrlr.is_set || is_set(cfgsrcctrlr.yfilter)) leaf_name_data.push_back(cfgsrcctrlr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr = value;
        cfgsrcctrlr.value_namespace = name_space;
        cfgsrcctrlr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "cfgSrcCtrlr")
    {
        cfgsrcctrlr.yfilter = yfilter;
    }
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtt" || name == "cfgSrcCtrlr")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::RtctrlmapItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrlmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::~RtctrlmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrlmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::RtctrldefmapItems()
    :
    pfxlimit{YType::uint32, "pfxLimit"},
    allowvpn{YType::boolean, "allowVpn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rtctrldefmap-items"; yang_parent_name = "RttP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::~RtctrldefmapItems()
{
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlimit.is_set
	|| allowvpn.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlimit.yfilter)
	|| ydk::is_set(allowvpn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrldefmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlimit.is_set || is_set(pfxlimit.yfilter)) leaf_name_data.push_back(pfxlimit.get_name_leafdata());
    if (allowvpn.is_set || is_set(allowvpn.yfilter)) leaf_name_data.push_back(allowvpn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit = value;
        pfxlimit.value_namespace = name_space;
        pfxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowVpn")
    {
        allowvpn = value;
        allowvpn.value_namespace = name_space;
        allowvpn.value_namespace_prefix = name_space_prefix;
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

void System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxLimit")
    {
        pfxlimit.yfilter = yfilter;
    }
    if(value_path == "allowVpn")
    {
        allowvpn.yfilter = yfilter;
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

bool System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxLimit" || name == "allowVpn" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::UserextItems::UserextItems()
    :
    pwdstrengthcheck{YType::enumeration, "pwdStrengthCheck"},
    pwdsecuremode{YType::enumeration, "pwdSecureMode"},
    pwdminlength{YType::uint16, "pwdMinLength"},
    pwdmaxlength{YType::uint16, "pwdMaxLength"},
    svcpwdrecovery{YType::enumeration, "svcPwdRecovery"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    radiusext_items(std::make_shared<System::UserextItems::RadiusextItems>())
    , ldapext_items(std::make_shared<System::UserextItems::LdapextItems>())
    , tacacsext_items(std::make_shared<System::UserextItems::TacacsextItems>())
    , authrealm_items(std::make_shared<System::UserextItems::AuthrealmItems>())
    , logindomain_items(std::make_shared<System::UserextItems::LogindomainItems>())
    , preloginbanner_items(std::make_shared<System::UserextItems::PreloginbannerItems>())
    , remoteuser_items(std::make_shared<System::UserextItems::RemoteuserItems>())
    , user_items(std::make_shared<System::UserextItems::UserItems>())
    , role_items(std::make_shared<System::UserextItems::RoleItems>())
    , factoryrole_items(std::make_shared<System::UserextItems::FactoryroleItems>())
    , domain_items(std::make_shared<System::UserextItems::DomainItems>())
    , pwdprofile_items(std::make_shared<System::UserextItems::PwdprofileItems>())
    , pkiext_items(std::make_shared<System::UserextItems::PkiextItems>())
    , rtfabricresuserep_items(std::make_shared<System::UserextItems::RtfabricResUserEpItems>())
    , rtaaauserep_items(std::make_shared<System::UserextItems::RtaaaUserEpItems>())
{
    radiusext_items->parent = this;
    ldapext_items->parent = this;
    tacacsext_items->parent = this;
    authrealm_items->parent = this;
    logindomain_items->parent = this;
    preloginbanner_items->parent = this;
    remoteuser_items->parent = this;
    user_items->parent = this;
    role_items->parent = this;
    factoryrole_items->parent = this;
    domain_items->parent = this;
    pwdprofile_items->parent = this;
    pkiext_items->parent = this;
    rtfabricresuserep_items->parent = this;
    rtaaauserep_items->parent = this;

    yang_name = "userext-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::~UserextItems()
{
}

bool System::UserextItems::has_data() const
{
    if (is_presence_container) return true;
    return pwdstrengthcheck.is_set
	|| pwdsecuremode.is_set
	|| pwdminlength.is_set
	|| pwdmaxlength.is_set
	|| svcpwdrecovery.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (radiusext_items !=  nullptr && radiusext_items->has_data())
	|| (ldapext_items !=  nullptr && ldapext_items->has_data())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_data())
	|| (authrealm_items !=  nullptr && authrealm_items->has_data())
	|| (logindomain_items !=  nullptr && logindomain_items->has_data())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_data())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (role_items !=  nullptr && role_items->has_data())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_data())
	|| (domain_items !=  nullptr && domain_items->has_data())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_data())
	|| (pkiext_items !=  nullptr && pkiext_items->has_data())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_data())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_data());
}

bool System::UserextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwdstrengthcheck.yfilter)
	|| ydk::is_set(pwdsecuremode.yfilter)
	|| ydk::is_set(pwdminlength.yfilter)
	|| ydk::is_set(pwdmaxlength.yfilter)
	|| ydk::is_set(svcpwdrecovery.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (radiusext_items !=  nullptr && radiusext_items->has_operation())
	|| (ldapext_items !=  nullptr && ldapext_items->has_operation())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_operation())
	|| (authrealm_items !=  nullptr && authrealm_items->has_operation())
	|| (logindomain_items !=  nullptr && logindomain_items->has_operation())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_operation())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (role_items !=  nullptr && role_items->has_operation())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_operation())
	|| (domain_items !=  nullptr && domain_items->has_operation())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_operation())
	|| (pkiext_items !=  nullptr && pkiext_items->has_operation())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_operation())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_operation());
}

std::string System::UserextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwdstrengthcheck.is_set || is_set(pwdstrengthcheck.yfilter)) leaf_name_data.push_back(pwdstrengthcheck.get_name_leafdata());
    if (pwdsecuremode.is_set || is_set(pwdsecuremode.yfilter)) leaf_name_data.push_back(pwdsecuremode.get_name_leafdata());
    if (pwdminlength.is_set || is_set(pwdminlength.yfilter)) leaf_name_data.push_back(pwdminlength.get_name_leafdata());
    if (pwdmaxlength.is_set || is_set(pwdmaxlength.yfilter)) leaf_name_data.push_back(pwdmaxlength.get_name_leafdata());
    if (svcpwdrecovery.is_set || is_set(svcpwdrecovery.yfilter)) leaf_name_data.push_back(svcpwdrecovery.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusext-items")
    {
        if(radiusext_items == nullptr)
        {
            radiusext_items = std::make_shared<System::UserextItems::RadiusextItems>();
        }
        return radiusext_items;
    }

    if(child_yang_name == "ldapext-items")
    {
        if(ldapext_items == nullptr)
        {
            ldapext_items = std::make_shared<System::UserextItems::LdapextItems>();
        }
        return ldapext_items;
    }

    if(child_yang_name == "tacacsext-items")
    {
        if(tacacsext_items == nullptr)
        {
            tacacsext_items = std::make_shared<System::UserextItems::TacacsextItems>();
        }
        return tacacsext_items;
    }

    if(child_yang_name == "authrealm-items")
    {
        if(authrealm_items == nullptr)
        {
            authrealm_items = std::make_shared<System::UserextItems::AuthrealmItems>();
        }
        return authrealm_items;
    }

    if(child_yang_name == "logindomain-items")
    {
        if(logindomain_items == nullptr)
        {
            logindomain_items = std::make_shared<System::UserextItems::LogindomainItems>();
        }
        return logindomain_items;
    }

    if(child_yang_name == "preloginbanner-items")
    {
        if(preloginbanner_items == nullptr)
        {
            preloginbanner_items = std::make_shared<System::UserextItems::PreloginbannerItems>();
        }
        return preloginbanner_items;
    }

    if(child_yang_name == "remoteuser-items")
    {
        if(remoteuser_items == nullptr)
        {
            remoteuser_items = std::make_shared<System::UserextItems::RemoteuserItems>();
        }
        return remoteuser_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::UserextItems::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::RoleItems>();
        }
        return role_items;
    }

    if(child_yang_name == "factoryrole-items")
    {
        if(factoryrole_items == nullptr)
        {
            factoryrole_items = std::make_shared<System::UserextItems::FactoryroleItems>();
        }
        return factoryrole_items;
    }

    if(child_yang_name == "domain-items")
    {
        if(domain_items == nullptr)
        {
            domain_items = std::make_shared<System::UserextItems::DomainItems>();
        }
        return domain_items;
    }

    if(child_yang_name == "pwdprofile-items")
    {
        if(pwdprofile_items == nullptr)
        {
            pwdprofile_items = std::make_shared<System::UserextItems::PwdprofileItems>();
        }
        return pwdprofile_items;
    }

    if(child_yang_name == "pkiext-items")
    {
        if(pkiext_items == nullptr)
        {
            pkiext_items = std::make_shared<System::UserextItems::PkiextItems>();
        }
        return pkiext_items;
    }

    if(child_yang_name == "rtfabricResUserEp-items")
    {
        if(rtfabricresuserep_items == nullptr)
        {
            rtfabricresuserep_items = std::make_shared<System::UserextItems::RtfabricResUserEpItems>();
        }
        return rtfabricresuserep_items;
    }

    if(child_yang_name == "rtaaaUserEp-items")
    {
        if(rtaaauserep_items == nullptr)
        {
            rtaaauserep_items = std::make_shared<System::UserextItems::RtaaaUserEpItems>();
        }
        return rtaaauserep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(radiusext_items != nullptr)
    {
        children["radiusext-items"] = radiusext_items;
    }

    if(ldapext_items != nullptr)
    {
        children["ldapext-items"] = ldapext_items;
    }

    if(tacacsext_items != nullptr)
    {
        children["tacacsext-items"] = tacacsext_items;
    }

    if(authrealm_items != nullptr)
    {
        children["authrealm-items"] = authrealm_items;
    }

    if(logindomain_items != nullptr)
    {
        children["logindomain-items"] = logindomain_items;
    }

    if(preloginbanner_items != nullptr)
    {
        children["preloginbanner-items"] = preloginbanner_items;
    }

    if(remoteuser_items != nullptr)
    {
        children["remoteuser-items"] = remoteuser_items;
    }

    if(user_items != nullptr)
    {
        children["user-items"] = user_items;
    }

    if(role_items != nullptr)
    {
        children["role-items"] = role_items;
    }

    if(factoryrole_items != nullptr)
    {
        children["factoryrole-items"] = factoryrole_items;
    }

    if(domain_items != nullptr)
    {
        children["domain-items"] = domain_items;
    }

    if(pwdprofile_items != nullptr)
    {
        children["pwdprofile-items"] = pwdprofile_items;
    }

    if(pkiext_items != nullptr)
    {
        children["pkiext-items"] = pkiext_items;
    }

    if(rtfabricresuserep_items != nullptr)
    {
        children["rtfabricResUserEp-items"] = rtfabricresuserep_items;
    }

    if(rtaaauserep_items != nullptr)
    {
        children["rtaaaUserEp-items"] = rtaaauserep_items;
    }

    return children;
}

void System::UserextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck = value;
        pwdstrengthcheck.value_namespace = name_space;
        pwdstrengthcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode = value;
        pwdsecuremode.value_namespace = name_space;
        pwdsecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength = value;
        pwdminlength.value_namespace = name_space;
        pwdminlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength = value;
        pwdmaxlength.value_namespace = name_space;
        pwdmaxlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery = value;
        svcpwdrecovery.value_namespace = name_space;
        svcpwdrecovery.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck.yfilter = yfilter;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode.yfilter = yfilter;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength.yfilter = yfilter;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength.yfilter = yfilter;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery.yfilter = yfilter;
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

bool System::UserextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusext-items" || name == "ldapext-items" || name == "tacacsext-items" || name == "authrealm-items" || name == "logindomain-items" || name == "preloginbanner-items" || name == "remoteuser-items" || name == "user-items" || name == "role-items" || name == "factoryrole-items" || name == "domain-items" || name == "pwdprofile-items" || name == "pkiext-items" || name == "rtfabricResUserEp-items" || name == "rtaaaUserEp-items" || name == "pwdStrengthCheck" || name == "pwdSecureMode" || name == "pwdMinLength" || name == "pwdMaxLength" || name == "svcPwdRecovery" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    radiusprovider_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>())
    , radiusprovidergroup_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>())
    , radiusservermonitor_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>())
    , rtfabricresradiusep_items(std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>())
{
    radiusprovider_items->parent = this;
    radiusprovidergroup_items->parent = this;
    radiusservermonitor_items->parent = this;
    rtfabricresradiusep_items->parent = this;

    yang_name = "radiusext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::~RadiusextItems()
{
}

bool System::UserextItems::RadiusextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| key.is_set
	|| keyenc.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_data())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_data())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_data())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_data());
}

bool System::UserextItems::RadiusextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_operation())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_operation())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_operation())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_operation());
}

std::string System::UserextItems::RadiusextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusprovider-items")
    {
        if(radiusprovider_items == nullptr)
        {
            radiusprovider_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>();
        }
        return radiusprovider_items;
    }

    if(child_yang_name == "radiusprovidergroup-items")
    {
        if(radiusprovidergroup_items == nullptr)
        {
            radiusprovidergroup_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>();
        }
        return radiusprovidergroup_items;
    }

    if(child_yang_name == "radiusservermonitor-items")
    {
        if(radiusservermonitor_items == nullptr)
        {
            radiusservermonitor_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>();
        }
        return radiusservermonitor_items;
    }

    if(child_yang_name == "rtfabricResRadiusEp-items")
    {
        if(rtfabricresradiusep_items == nullptr)
        {
            rtfabricresradiusep_items = std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>();
        }
        return rtfabricresradiusep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(radiusprovider_items != nullptr)
    {
        children["radiusprovider-items"] = radiusprovider_items;
    }

    if(radiusprovidergroup_items != nullptr)
    {
        children["radiusprovidergroup-items"] = radiusprovidergroup_items;
    }

    if(radiusservermonitor_items != nullptr)
    {
        children["radiusservermonitor-items"] = radiusservermonitor_items;
    }

    if(rtfabricresradiusep_items != nullptr)
    {
        children["rtfabricResRadiusEp-items"] = rtfabricresradiusep_items;
    }

    return children;
}

void System::UserextItems::RadiusextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusprovider-items" || name == "radiusprovidergroup-items" || name == "radiusservermonitor-items" || name == "rtfabricResRadiusEp-items" || name == "deadtime" || name == "key" || name == "keyEnc" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusproviderItems()
    :
    radiusprovider_list(this, {"name"})
{

    yang_name = "radiusprovider-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusproviderItems::~RadiusproviderItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radiusprovider_list.len(); index++)
    {
        if(radiusprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_operation() const
{
    for (std::size_t index=0; index<radiusprovider_list.len(); index++)
    {
        if(radiusprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RadiusProvider-list")
    {
        auto c = std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList>();
        c->parent = this;
        radiusprovider_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : radiusprovider_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RadiusProvider-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::RadiusProviderList()
    :
    name{YType::str, "name"},
    usetype{YType::enumeration, "useType"},
    authport{YType::uint32, "authPort"},
    acctport{YType::uint32, "acctPort"},
    authprotocol{YType::enumeration, "authProtocol"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyset{YType::boolean, "keySet"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    operstate{YType::enumeration, "operState"},
    monitorserver{YType::enumeration, "monitorServer"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "RadiusProvider-list"; yang_parent_name = "radiusprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::~RadiusProviderList()
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| usetype.is_set
	|| authport.is_set
	|| acctport.is_set
	|| authprotocol.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyset.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| operstate.is_set
	|| monitorserver.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(usetype.yfilter)
	|| ydk::is_set(authport.yfilter)
	|| ydk::is_set(acctport.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyset.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(monitorserver.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/radiusprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RadiusProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (usetype.is_set || is_set(usetype.yfilter)) leaf_name_data.push_back(usetype.get_name_leafdata());
    if (authport.is_set || is_set(authport.yfilter)) leaf_name_data.push_back(authport.get_name_leafdata());
    if (acctport.is_set || is_set(acctport.yfilter)) leaf_name_data.push_back(acctport.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyset.is_set || is_set(keyset.yfilter)) leaf_name_data.push_back(keyset.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (monitorserver.is_set || is_set(monitorserver.yfilter)) leaf_name_data.push_back(monitorserver.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useType")
    {
        usetype = value;
        usetype.value_namespace = name_space;
        usetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authPort")
    {
        authport = value;
        authport.value_namespace = name_space;
        authport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acctPort")
    {
        acctport = value;
        acctport.value_namespace = name_space;
        acctport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySet")
    {
        keyset = value;
        keyset.value_namespace = name_space;
        keyset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitorServer")
    {
        monitorserver = value;
        monitorserver.value_namespace = name_space;
        monitorserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "useType")
    {
        usetype.yfilter = yfilter;
    }
    if(value_path == "authPort")
    {
        authport.yfilter = yfilter;
    }
    if(value_path == "acctPort")
    {
        acctport.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
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
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySet")
    {
        keyset.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "monitorServer")
    {
        monitorserver.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "useType" || name == "authPort" || name == "acctPort" || name == "authProtocol" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keySet" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "operState" || name == "monitorServer" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "vrfName" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusprovidergroupItems()
    :
    radiusprovidergroup_list(this, {"name"})
{

    yang_name = "radiusprovidergroup-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::~RadiusprovidergroupItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radiusprovidergroup_list.len(); index++)
    {
        if(radiusprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<radiusprovidergroup_list.len(); index++)
    {
        if(radiusprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RadiusProviderGroup-list")
    {
        auto c = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList>();
        c->parent = this;
        radiusprovidergroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : radiusprovidergroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RadiusProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::RadiusProviderGroupList()
    :
    name{YType::str, "name"},
    deadtime{YType::uint32, "deadtime"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "RadiusProviderGroup-list"; yang_parent_name = "radiusprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::~RadiusProviderGroupList()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| deadtime.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/radiusprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RadiusProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(providerref_items != nullptr)
    {
        children["providerref-items"] = providerref_items;
    }

    return children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
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
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "deadtime" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "RadiusProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto c = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList>();
        c->parent = this;
        providerref_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : providerref_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
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

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusservermonitorItems::RadiusservermonitorItems()
    :
    pwd{YType::str, "pwd"},
    idletime{YType::uint16, "idleTime"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "radiusservermonitor-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusservermonitorItems::~RadiusservermonitorItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| idletime.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(idletime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusservermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (idletime.is_set || is_set(idletime.yfilter)) leaf_name_data.push_back(idletime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RadiusextItems::RadiusservermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTime")
    {
        idletime = value;
        idletime.value_namespace = name_space;
        idletime.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::RadiusextItems::RadiusservermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "idleTime")
    {
        idletime.yfilter = yfilter;
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

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "idleTime" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtfabricResRadiusEpItems()
    :
    rtfabricresradiusep_list(this, {"tdn"})
{

    yang_name = "rtfabricResRadiusEp-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::~RtfabricResRadiusEpItems()
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresradiusep_list.len(); index++)
    {
        if(rtfabricresradiusep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresradiusep_list.len(); index++)
    {
        if(rtfabricresradiusep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResRadiusEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResRadiusEp-list")
    {
        auto c = std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList>();
        c->parent = this;
        rtfabricresradiusep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricresradiusep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResRadiusEp-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::RtFabricResRadiusEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResRadiusEp-list"; yang_parent_name = "rtfabricResRadiusEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::~RtFabricResRadiusEpList()
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/rtfabricResRadiusEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResRadiusEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapextItems()
    :
    attribute{YType::str, "attribute"},
    basedn{YType::str, "basedn"},
    filter{YType::str, "filter"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    ldapprovidergroup_items(std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems>())
    , ldapprovider_items(std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems>())
    , rtfabricresldapep_items(std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems>())
{
    ldapprovidergroup_items->parent = this;
    ldapprovider_items->parent = this;
    rtfabricresldapep_items->parent = this;

    yang_name = "ldapext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::~LdapextItems()
{
}

bool System::UserextItems::LdapextItems::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| basedn.is_set
	|| filter.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (ldapprovidergroup_items !=  nullptr && ldapprovidergroup_items->has_data())
	|| (ldapprovider_items !=  nullptr && ldapprovider_items->has_data())
	|| (rtfabricresldapep_items !=  nullptr && rtfabricresldapep_items->has_data());
}

bool System::UserextItems::LdapextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(basedn.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (ldapprovidergroup_items !=  nullptr && ldapprovidergroup_items->has_operation())
	|| (ldapprovider_items !=  nullptr && ldapprovider_items->has_operation())
	|| (rtfabricresldapep_items !=  nullptr && rtfabricresldapep_items->has_operation());
}

std::string System::UserextItems::LdapextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (basedn.is_set || is_set(basedn.yfilter)) leaf_name_data.push_back(basedn.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldapprovidergroup-items")
    {
        if(ldapprovidergroup_items == nullptr)
        {
            ldapprovidergroup_items = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems>();
        }
        return ldapprovidergroup_items;
    }

    if(child_yang_name == "ldapprovider-items")
    {
        if(ldapprovider_items == nullptr)
        {
            ldapprovider_items = std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems>();
        }
        return ldapprovider_items;
    }

    if(child_yang_name == "rtfabricResLdapEp-items")
    {
        if(rtfabricresldapep_items == nullptr)
        {
            rtfabricresldapep_items = std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems>();
        }
        return rtfabricresldapep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldapprovidergroup_items != nullptr)
    {
        children["ldapprovidergroup-items"] = ldapprovidergroup_items;
    }

    if(ldapprovider_items != nullptr)
    {
        children["ldapprovider-items"] = ldapprovider_items;
    }

    if(rtfabricresldapep_items != nullptr)
    {
        children["rtfabricResLdapEp-items"] = rtfabricresldapep_items;
    }

    return children;
}

void System::UserextItems::LdapextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basedn")
    {
        basedn = value;
        basedn.value_namespace = name_space;
        basedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "basedn")
    {
        basedn.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
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
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldapprovidergroup-items" || name == "ldapprovider-items" || name == "rtfabricResLdapEp-items" || name == "attribute" || name == "basedn" || name == "filter" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapprovidergroupItems()
    :
    ldapprovidergroup_list(this, {"name"})
{

    yang_name = "ldapprovidergroup-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::~LdapprovidergroupItems()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapprovidergroup_list.len(); index++)
    {
        if(ldapprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<ldapprovidergroup_list.len(); index++)
    {
        if(ldapprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapProviderGroup-list")
    {
        auto c = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList>();
        c->parent = this;
        ldapprovidergroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ldapprovidergroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::LdapProviderGroupList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "LdapProviderGroup-list"; yang_parent_name = "ldapprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::~LdapProviderGroupList()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/ldapprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(providerref_items != nullptr)
    {
        children["providerref-items"] = providerref_items;
    }

    return children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "LdapProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto c = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList>();
        c->parent = this;
        providerref_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : providerref_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
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

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapproviderItems()
    :
    ldapprovider_list(this, {"name"})
{

    yang_name = "ldapprovider-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapproviderItems::~LdapproviderItems()
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapprovider_list.len(); index++)
    {
        if(ldapprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_operation() const
{
    for (std::size_t index=0; index<ldapprovider_list.len(); index++)
    {
        if(ldapprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapProvider-list")
    {
        auto c = std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList>();
        c->parent = this;
        ldapprovider_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ldapprovider_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LdapextItems::LdapproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapProvider-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::LdapProviderList()
    :
    name{YType::str, "name"},
    rootdn{YType::str, "rootdn"},
    port{YType::uint32, "port"},
    enablessl{YType::boolean, "enableSSL"},
    sslvalidationlevel{YType::enumeration, "SSLValidationLevel"},
    attribute{YType::str, "attribute"},
    basedn{YType::str, "basedn"},
    filter{YType::str, "filter"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyset{YType::boolean, "keySet"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    operstate{YType::enumeration, "operState"},
    monitorserver{YType::enumeration, "monitorServer"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "LdapProvider-list"; yang_parent_name = "ldapprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::~LdapProviderList()
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rootdn.is_set
	|| port.is_set
	|| enablessl.is_set
	|| sslvalidationlevel.is_set
	|| attribute.is_set
	|| basedn.is_set
	|| filter.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyset.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| operstate.is_set
	|| monitorserver.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rootdn.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(enablessl.yfilter)
	|| ydk::is_set(sslvalidationlevel.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(basedn.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyset.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(monitorserver.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/ldapprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rootdn.is_set || is_set(rootdn.yfilter)) leaf_name_data.push_back(rootdn.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (enablessl.is_set || is_set(enablessl.yfilter)) leaf_name_data.push_back(enablessl.get_name_leafdata());
    if (sslvalidationlevel.is_set || is_set(sslvalidationlevel.yfilter)) leaf_name_data.push_back(sslvalidationlevel.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (basedn.is_set || is_set(basedn.yfilter)) leaf_name_data.push_back(basedn.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyset.is_set || is_set(keyset.yfilter)) leaf_name_data.push_back(keyset.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (monitorserver.is_set || is_set(monitorserver.yfilter)) leaf_name_data.push_back(monitorserver.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootdn")
    {
        rootdn = value;
        rootdn.value_namespace = name_space;
        rootdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableSSL")
    {
        enablessl = value;
        enablessl.value_namespace = name_space;
        enablessl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SSLValidationLevel")
    {
        sslvalidationlevel = value;
        sslvalidationlevel.value_namespace = name_space;
        sslvalidationlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basedn")
    {
        basedn = value;
        basedn.value_namespace = name_space;
        basedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySet")
    {
        keyset = value;
        keyset.value_namespace = name_space;
        keyset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitorServer")
    {
        monitorserver = value;
        monitorserver.value_namespace = name_space;
        monitorserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rootdn")
    {
        rootdn.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "enableSSL")
    {
        enablessl.yfilter = yfilter;
    }
    if(value_path == "SSLValidationLevel")
    {
        sslvalidationlevel.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "basedn")
    {
        basedn.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
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
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySet")
    {
        keyset.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "monitorServer")
    {
        monitorserver.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rootdn" || name == "port" || name == "enableSSL" || name == "SSLValidationLevel" || name == "attribute" || name == "basedn" || name == "filter" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keySet" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "operState" || name == "monitorServer" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "vrfName" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtfabricResLdapEpItems()
    :
    rtfabricresldapep_list(this, {"tdn"})
{

    yang_name = "rtfabricResLdapEp-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::~RtfabricResLdapEpItems()
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresldapep_list.len(); index++)
    {
        if(rtfabricresldapep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresldapep_list.len(); index++)
    {
        if(rtfabricresldapep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResLdapEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResLdapEp-list")
    {
        auto c = std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList>();
        c->parent = this;
        rtfabricresldapep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricresldapep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResLdapEp-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::RtFabricResLdapEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResLdapEp-list"; yang_parent_name = "rtfabricResLdapEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::~RtFabricResLdapEpList()
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/rtfabricResLdapEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResLdapEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    tacacsplusprovider_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems>())
    , tacacsplusprovidergroup_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems>())
    , tacacsservermonitor_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsservermonitorItems>())
    , rtfabricrestacacsplusep_items(std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems>())
{
    tacacsplusprovider_items->parent = this;
    tacacsplusprovidergroup_items->parent = this;
    tacacsservermonitor_items->parent = this;
    rtfabricrestacacsplusep_items->parent = this;

    yang_name = "tacacsext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::~TacacsextItems()
{
}

bool System::UserextItems::TacacsextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| key.is_set
	|| keyenc.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (tacacsplusprovider_items !=  nullptr && tacacsplusprovider_items->has_data())
	|| (tacacsplusprovidergroup_items !=  nullptr && tacacsplusprovidergroup_items->has_data())
	|| (tacacsservermonitor_items !=  nullptr && tacacsservermonitor_items->has_data())
	|| (rtfabricrestacacsplusep_items !=  nullptr && rtfabricrestacacsplusep_items->has_data());
}

bool System::UserextItems::TacacsextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (tacacsplusprovider_items !=  nullptr && tacacsplusprovider_items->has_operation())
	|| (tacacsplusprovidergroup_items !=  nullptr && tacacsplusprovidergroup_items->has_operation())
	|| (tacacsservermonitor_items !=  nullptr && tacacsservermonitor_items->has_operation())
	|| (rtfabricrestacacsplusep_items !=  nullptr && rtfabricrestacacsplusep_items->has_operation());
}

std::string System::UserextItems::TacacsextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tacacsplusprovider-items")
    {
        if(tacacsplusprovider_items == nullptr)
        {
            tacacsplusprovider_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems>();
        }
        return tacacsplusprovider_items;
    }

    if(child_yang_name == "tacacsplusprovidergroup-items")
    {
        if(tacacsplusprovidergroup_items == nullptr)
        {
            tacacsplusprovidergroup_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems>();
        }
        return tacacsplusprovidergroup_items;
    }

    if(child_yang_name == "tacacsservermonitor-items")
    {
        if(tacacsservermonitor_items == nullptr)
        {
            tacacsservermonitor_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsservermonitorItems>();
        }
        return tacacsservermonitor_items;
    }

    if(child_yang_name == "rtfabricResTacacsPlusEp-items")
    {
        if(rtfabricrestacacsplusep_items == nullptr)
        {
            rtfabricrestacacsplusep_items = std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems>();
        }
        return rtfabricrestacacsplusep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tacacsplusprovider_items != nullptr)
    {
        children["tacacsplusprovider-items"] = tacacsplusprovider_items;
    }

    if(tacacsplusprovidergroup_items != nullptr)
    {
        children["tacacsplusprovidergroup-items"] = tacacsplusprovidergroup_items;
    }

    if(tacacsservermonitor_items != nullptr)
    {
        children["tacacsservermonitor-items"] = tacacsservermonitor_items;
    }

    if(rtfabricrestacacsplusep_items != nullptr)
    {
        children["rtfabricResTacacsPlusEp-items"] = rtfabricrestacacsplusep_items;
    }

    return children;
}

void System::UserextItems::TacacsextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tacacsplusprovider-items" || name == "tacacsplusprovidergroup-items" || name == "tacacsservermonitor-items" || name == "rtfabricResTacacsPlusEp-items" || name == "deadtime" || name == "key" || name == "keyEnc" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsplusproviderItems()
    :
    tacacsplusprovider_list(this, {"name"})
{

    yang_name = "tacacsplusprovider-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::~TacacsplusproviderItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tacacsplusprovider_list.len(); index++)
    {
        if(tacacsplusprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_operation() const
{
    for (std::size_t index=0; index<tacacsplusprovider_list.len(); index++)
    {
        if(tacacsplusprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplusprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TacacsPlusProvider-list")
    {
        auto c = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList>();
        c->parent = this;
        tacacsplusprovider_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tacacsplusprovider_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TacacsPlusProvider-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::TacacsPlusProviderList()
    :
    name{YType::str, "name"},
    port{YType::uint32, "port"},
    authprotocol{YType::enumeration, "authProtocol"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyset{YType::boolean, "keySet"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    operstate{YType::enumeration, "operState"},
    monitorserver{YType::enumeration, "monitorServer"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "TacacsPlusProvider-list"; yang_parent_name = "tacacsplusprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::~TacacsPlusProviderList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| port.is_set
	|| authprotocol.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyset.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| operstate.is_set
	|| monitorserver.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyset.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(monitorserver.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/tacacsplusprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TacacsPlusProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyset.is_set || is_set(keyset.yfilter)) leaf_name_data.push_back(keyset.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (monitorserver.is_set || is_set(monitorserver.yfilter)) leaf_name_data.push_back(monitorserver.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySet")
    {
        keyset = value;
        keyset.value_namespace = name_space;
        keyset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitorServer")
    {
        monitorserver = value;
        monitorserver.value_namespace = name_space;
        monitorserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
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
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySet")
    {
        keyset.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "monitorServer")
    {
        monitorserver.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "port" || name == "authProtocol" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keySet" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "operState" || name == "monitorServer" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "vrfName" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsplusprovidergroupItems()
    :
    tacacsplusprovidergroup_list(this, {"name"})
{

    yang_name = "tacacsplusprovidergroup-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::~TacacsplusprovidergroupItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tacacsplusprovidergroup_list.len(); index++)
    {
        if(tacacsplusprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<tacacsplusprovidergroup_list.len(); index++)
    {
        if(tacacsplusprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplusprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TacacsPlusProviderGroup-list")
    {
        auto c = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList>();
        c->parent = this;
        tacacsplusprovidergroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tacacsplusprovidergroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TacacsPlusProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::TacacsPlusProviderGroupList()
    :
    name{YType::str, "name"},
    deadtime{YType::uint32, "deadtime"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "TacacsPlusProviderGroup-list"; yang_parent_name = "tacacsplusprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::~TacacsPlusProviderGroupList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| deadtime.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/tacacsplusprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TacacsPlusProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(providerref_items != nullptr)
    {
        children["providerref-items"] = providerref_items;
    }

    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
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
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "deadtime" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "TacacsPlusProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto c = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList>();
        c->parent = this;
        providerref_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : providerref_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
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

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsservermonitorItems::TacacsservermonitorItems()
    :
    pwd{YType::str, "pwd"},
    idletime{YType::uint16, "idleTime"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "tacacsservermonitor-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsservermonitorItems::~TacacsservermonitorItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| idletime.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(idletime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsservermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (idletime.is_set || is_set(idletime.yfilter)) leaf_name_data.push_back(idletime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::TacacsextItems::TacacsservermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTime")
    {
        idletime = value;
        idletime.value_namespace = name_space;
        idletime.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::TacacsextItems::TacacsservermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "idleTime")
    {
        idletime.yfilter = yfilter;
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

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "idleTime" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtfabricResTacacsPlusEpItems()
    :
    rtfabricrestacacsplusep_list(this, {"tdn"})
{

    yang_name = "rtfabricResTacacsPlusEp-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::~RtfabricResTacacsPlusEpItems()
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricrestacacsplusep_list.len(); index++)
    {
        if(rtfabricrestacacsplusep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricrestacacsplusep_list.len(); index++)
    {
        if(rtfabricrestacacsplusep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResTacacsPlusEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResTacacsPlusEp-list")
    {
        auto c = std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList>();
        c->parent = this;
        rtfabricrestacacsplusep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricrestacacsplusep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResTacacsPlusEp-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::RtFabricResTacacsPlusEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResTacacsPlusEp-list"; yang_parent_name = "rtfabricResTacacsPlusEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::~RtFabricResTacacsPlusEpList()
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/rtfabricResTacacsPlusEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResTacacsPlusEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AuthrealmItems()
    :
    defrolepolicy{YType::enumeration, "defRolePolicy"},
    raddirectedreq{YType::enumeration, "radDirectedReq"},
    tacdirectedreq{YType::enumeration, "tacDirectedReq"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    aaagroup_items(std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems>())
    , defaultauth_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthItems>())
    , defaultauthor_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems>())
    , consoleauthor_items(std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems>())
    , defaultacc_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultaccItems>())
    , pkisshcert_items(std::make_shared<System::UserextItems::AuthrealmItems::PkisshcertItems>())
    , pkisshpubkey_items(std::make_shared<System::UserextItems::AuthrealmItems::PkisshpubkeyItems>())
    , consoleauth_items(std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthItems>())
    , rtfabricresauthrealm_items(std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems>())
{
    aaagroup_items->parent = this;
    defaultauth_items->parent = this;
    defaultauthor_items->parent = this;
    consoleauthor_items->parent = this;
    defaultacc_items->parent = this;
    pkisshcert_items->parent = this;
    pkisshpubkey_items->parent = this;
    consoleauth_items->parent = this;
    rtfabricresauthrealm_items->parent = this;

    yang_name = "authrealm-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::~AuthrealmItems()
{
}

bool System::UserextItems::AuthrealmItems::has_data() const
{
    if (is_presence_container) return true;
    return defrolepolicy.is_set
	|| raddirectedreq.is_set
	|| tacdirectedreq.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (aaagroup_items !=  nullptr && aaagroup_items->has_data())
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_data())
	|| (defaultauthor_items !=  nullptr && defaultauthor_items->has_data())
	|| (consoleauthor_items !=  nullptr && consoleauthor_items->has_data())
	|| (defaultacc_items !=  nullptr && defaultacc_items->has_data())
	|| (pkisshcert_items !=  nullptr && pkisshcert_items->has_data())
	|| (pkisshpubkey_items !=  nullptr && pkisshpubkey_items->has_data())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_data())
	|| (rtfabricresauthrealm_items !=  nullptr && rtfabricresauthrealm_items->has_data());
}

bool System::UserextItems::AuthrealmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defrolepolicy.yfilter)
	|| ydk::is_set(raddirectedreq.yfilter)
	|| ydk::is_set(tacdirectedreq.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (aaagroup_items !=  nullptr && aaagroup_items->has_operation())
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_operation())
	|| (defaultauthor_items !=  nullptr && defaultauthor_items->has_operation())
	|| (consoleauthor_items !=  nullptr && consoleauthor_items->has_operation())
	|| (defaultacc_items !=  nullptr && defaultacc_items->has_operation())
	|| (pkisshcert_items !=  nullptr && pkisshcert_items->has_operation())
	|| (pkisshpubkey_items !=  nullptr && pkisshpubkey_items->has_operation())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_operation())
	|| (rtfabricresauthrealm_items !=  nullptr && rtfabricresauthrealm_items->has_operation());
}

std::string System::UserextItems::AuthrealmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authrealm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defrolepolicy.is_set || is_set(defrolepolicy.yfilter)) leaf_name_data.push_back(defrolepolicy.get_name_leafdata());
    if (raddirectedreq.is_set || is_set(raddirectedreq.yfilter)) leaf_name_data.push_back(raddirectedreq.get_name_leafdata());
    if (tacdirectedreq.is_set || is_set(tacdirectedreq.yfilter)) leaf_name_data.push_back(tacdirectedreq.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaagroup-items")
    {
        if(aaagroup_items == nullptr)
        {
            aaagroup_items = std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems>();
        }
        return aaagroup_items;
    }

    if(child_yang_name == "defaultauth-items")
    {
        if(defaultauth_items == nullptr)
        {
            defaultauth_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthItems>();
        }
        return defaultauth_items;
    }

    if(child_yang_name == "defaultauthor-items")
    {
        if(defaultauthor_items == nullptr)
        {
            defaultauthor_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems>();
        }
        return defaultauthor_items;
    }

    if(child_yang_name == "consoleauthor-items")
    {
        if(consoleauthor_items == nullptr)
        {
            consoleauthor_items = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems>();
        }
        return consoleauthor_items;
    }

    if(child_yang_name == "defaultacc-items")
    {
        if(defaultacc_items == nullptr)
        {
            defaultacc_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultaccItems>();
        }
        return defaultacc_items;
    }

    if(child_yang_name == "pkisshcert-items")
    {
        if(pkisshcert_items == nullptr)
        {
            pkisshcert_items = std::make_shared<System::UserextItems::AuthrealmItems::PkisshcertItems>();
        }
        return pkisshcert_items;
    }

    if(child_yang_name == "pkisshpubkey-items")
    {
        if(pkisshpubkey_items == nullptr)
        {
            pkisshpubkey_items = std::make_shared<System::UserextItems::AuthrealmItems::PkisshpubkeyItems>();
        }
        return pkisshpubkey_items;
    }

    if(child_yang_name == "consoleauth-items")
    {
        if(consoleauth_items == nullptr)
        {
            consoleauth_items = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthItems>();
        }
        return consoleauth_items;
    }

    if(child_yang_name == "rtfabricResAuthRealm-items")
    {
        if(rtfabricresauthrealm_items == nullptr)
        {
            rtfabricresauthrealm_items = std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems>();
        }
        return rtfabricresauthrealm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aaagroup_items != nullptr)
    {
        children["aaagroup-items"] = aaagroup_items;
    }

    if(defaultauth_items != nullptr)
    {
        children["defaultauth-items"] = defaultauth_items;
    }

    if(defaultauthor_items != nullptr)
    {
        children["defaultauthor-items"] = defaultauthor_items;
    }

    if(consoleauthor_items != nullptr)
    {
        children["consoleauthor-items"] = consoleauthor_items;
    }

    if(defaultacc_items != nullptr)
    {
        children["defaultacc-items"] = defaultacc_items;
    }

    if(pkisshcert_items != nullptr)
    {
        children["pkisshcert-items"] = pkisshcert_items;
    }

    if(pkisshpubkey_items != nullptr)
    {
        children["pkisshpubkey-items"] = pkisshpubkey_items;
    }

    if(consoleauth_items != nullptr)
    {
        children["consoleauth-items"] = consoleauth_items;
    }

    if(rtfabricresauthrealm_items != nullptr)
    {
        children["rtfabricResAuthRealm-items"] = rtfabricresauthrealm_items;
    }

    return children;
}

void System::UserextItems::AuthrealmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defRolePolicy")
    {
        defrolepolicy = value;
        defrolepolicy.value_namespace = name_space;
        defrolepolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radDirectedReq")
    {
        raddirectedreq = value;
        raddirectedreq.value_namespace = name_space;
        raddirectedreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacDirectedReq")
    {
        tacdirectedreq = value;
        tacdirectedreq.value_namespace = name_space;
        tacdirectedreq.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::AuthrealmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defRolePolicy")
    {
        defrolepolicy.yfilter = yfilter;
    }
    if(value_path == "radDirectedReq")
    {
        raddirectedreq.yfilter = yfilter;
    }
    if(value_path == "tacDirectedReq")
    {
        tacdirectedreq.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
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

bool System::UserextItems::AuthrealmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaagroup-items" || name == "defaultauth-items" || name == "defaultauthor-items" || name == "consoleauthor-items" || name == "defaultacc-items" || name == "pkisshcert-items" || name == "pkisshpubkey-items" || name == "consoleauth-items" || name == "rtfabricResAuthRealm-items" || name == "defRolePolicy" || name == "radDirectedReq" || name == "tacDirectedReq" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaagroupItems()
    :
    aaaservergroup_list(this, {"name"})
{

    yang_name = "aaagroup-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::AaagroupItems::~AaagroupItems()
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aaaservergroup_list.len(); index++)
    {
        if(aaaservergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_operation() const
{
    for (std::size_t index=0; index<aaaservergroup_list.len(); index++)
    {
        if(aaaservergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaagroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::AaagroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::AaagroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AaaServerGroup-list")
    {
        auto c = std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList>();
        c->parent = this;
        aaaservergroup_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::AaagroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : aaaservergroup_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::AuthrealmItems::AaagroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::AaagroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AaaServerGroup-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::AaaServerGroupList()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "AaaServerGroup-list"; yang_parent_name = "aaagroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::~AaaServerGroupList()
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| protocol.is_set;
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/aaagroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AaaServerGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthItems::DefaultauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "defaultauth-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthItems::~DefaultauthItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::DefaultauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::DefaultauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::DefaultauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultauthItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultauthorItems()
    :
    defaultauthor_list(this, {"cmdtype"})
{

    yang_name = "defaultauthor-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::~DefaultauthorItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<defaultauthor_list.len(); index++)
    {
        if(defaultauthor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_operation() const
{
    for (std::size_t index=0; index<defaultauthor_list.len(); index++)
    {
        if(defaultauthor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauthor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::DefaultauthorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DefaultAuthor-list")
    {
        auto c = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList>();
        c->parent = this;
        defaultauthor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::DefaultauthorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : defaultauthor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DefaultAuthor-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::DefaultAuthorList()
    :
    cmdtype{YType::enumeration, "cmdType"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    authormethodnone{YType::boolean, "authorMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "DefaultAuthor-list"; yang_parent_name = "defaultauthor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::~DefaultAuthorList()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_data() const
{
    if (is_presence_container) return true;
    return cmdtype.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| authormethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmdtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(authormethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/defaultauthor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DefaultAuthor-list";
    ADD_KEY_TOKEN(cmdtype, "cmdType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmdtype.is_set || is_set(cmdtype.yfilter)) leaf_name_data.push_back(cmdtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (authormethodnone.is_set || is_set(authormethodnone.yfilter)) leaf_name_data.push_back(authormethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmdType")
    {
        cmdtype = value;
        cmdtype.value_namespace = name_space;
        cmdtype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone = value;
        authormethodnone.value_namespace = name_space;
        authormethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmdType")
    {
        cmdtype.yfilter = yfilter;
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdType" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "authorMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleauthorItems()
    :
    consoleauthor_list(this, {"cmdtype"})
{

    yang_name = "consoleauthor-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::~ConsoleauthorItems()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<consoleauthor_list.len(); index++)
    {
        if(consoleauthor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_operation() const
{
    for (std::size_t index=0; index<consoleauthor_list.len(); index++)
    {
        if(consoleauthor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauthor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConsoleAuthor-list")
    {
        auto c = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList>();
        c->parent = this;
        consoleauthor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : consoleauthor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConsoleAuthor-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::ConsoleAuthorList()
    :
    cmdtype{YType::enumeration, "cmdType"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    authormethodnone{YType::boolean, "authorMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "ConsoleAuthor-list"; yang_parent_name = "consoleauthor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::~ConsoleAuthorList()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_data() const
{
    if (is_presence_container) return true;
    return cmdtype.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| authormethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmdtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(authormethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/consoleauthor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConsoleAuthor-list";
    ADD_KEY_TOKEN(cmdtype, "cmdType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmdtype.is_set || is_set(cmdtype.yfilter)) leaf_name_data.push_back(cmdtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (authormethodnone.is_set || is_set(authormethodnone.yfilter)) leaf_name_data.push_back(authormethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmdType")
    {
        cmdtype = value;
        cmdtype.value_namespace = name_space;
        cmdtype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone = value;
        authormethodnone.value_namespace = name_space;
        authormethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmdType")
    {
        cmdtype.yfilter = yfilter;
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdType" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "authorMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultaccItems::DefaultaccItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    accmethodnone{YType::boolean, "accMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "defaultacc-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultaccItems::~DefaultaccItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| accmethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(accmethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultaccItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultaccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultacc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultaccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (accmethodnone.is_set || is_set(accmethodnone.yfilter)) leaf_name_data.push_back(accmethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::DefaultaccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::DefaultaccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::DefaultaccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accMethodNone")
    {
        accmethodnone = value;
        accmethodnone.value_namespace = name_space;
        accmethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultaccItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "accMethodNone")
    {
        accmethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "accMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::PkisshcertItems::PkisshcertItems()
    :
    local{YType::boolean, "local"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"}
{

    yang_name = "pkisshcert-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::PkisshcertItems::~PkisshcertItems()
{
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set;
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter);
}

std::string System::UserextItems::AuthrealmItems::PkisshcertItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::PkisshcertItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkisshcert-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::PkisshcertItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::PkisshcertItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::PkisshcertItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::PkisshcertItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::PkisshcertItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::PkisshpubkeyItems::PkisshpubkeyItems()
    :
    local{YType::boolean, "local"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"}
{

    yang_name = "pkisshpubkey-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::PkisshpubkeyItems::~PkisshpubkeyItems()
{
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set;
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter);
}

std::string System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkisshpubkey-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::PkisshpubkeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::PkisshpubkeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthItems::ConsoleauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "consoleauth-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthItems::~ConsoleauthItems()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::ConsoleauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::ConsoleauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::ConsoleauthItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtfabricResAuthRealmItems()
    :
    rtfabricresauthrealm_list(this, {"tdn"})
{

    yang_name = "rtfabricResAuthRealm-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::~RtfabricResAuthRealmItems()
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresauthrealm_list.len(); index++)
    {
        if(rtfabricresauthrealm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresauthrealm_list.len(); index++)
    {
        if(rtfabricresauthrealm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResAuthRealm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResAuthRealm-list")
    {
        auto c = std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList>();
        c->parent = this;
        rtfabricresauthrealm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricresauthrealm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResAuthRealm-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::RtFabricResAuthRealmList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResAuthRealm-list"; yang_parent_name = "rtfabricResAuthRealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::~RtFabricResAuthRealmList()
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/rtfabricResAuthRealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResAuthRealm-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LogindomainItems()
    :
    logindomain_list(this, {"name"})
{

    yang_name = "logindomain-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LogindomainItems::~LogindomainItems()
{
}

bool System::UserextItems::LogindomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logindomain_list.len(); index++)
    {
        if(logindomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LogindomainItems::has_operation() const
{
    for (std::size_t index=0; index<logindomain_list.len(); index++)
    {
        if(logindomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LogindomainItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LogindomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logindomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LoginDomain-list")
    {
        auto c = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList>();
        c->parent = this;
        logindomain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : logindomain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LogindomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LogindomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LogindomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LoginDomain-list")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::LoginDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    domainauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems>())
    , rtaaalogindomain_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems>())
{
    domainauth_items->parent = this;
    rtaaalogindomain_items->parent = this;

    yang_name = "LoginDomain-list"; yang_parent_name = "logindomain-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LogindomainItems::LoginDomainList::~LoginDomainList()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (domainauth_items !=  nullptr && domainauth_items->has_data())
	|| (rtaaalogindomain_items !=  nullptr && rtaaalogindomain_items->has_data());
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (domainauth_items !=  nullptr && domainauth_items->has_operation())
	|| (rtaaalogindomain_items !=  nullptr && rtaaalogindomain_items->has_operation());
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/logindomain-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LoginDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domainauth-items")
    {
        if(domainauth_items == nullptr)
        {
            domainauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems>();
        }
        return domainauth_items;
    }

    if(child_yang_name == "rtaaaLoginDomain-items")
    {
        if(rtaaalogindomain_items == nullptr)
        {
            rtaaalogindomain_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems>();
        }
        return rtaaalogindomain_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domainauth_items != nullptr)
    {
        children["domainauth-items"] = domainauth_items;
    }

    if(rtaaalogindomain_items != nullptr)
    {
        children["rtaaaLoginDomain-items"] = rtaaalogindomain_items;
    }

    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::UserextItems::LogindomainItems::LoginDomainList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domainauth-items" || name == "rtaaaLoginDomain-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DomainauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
        ,
    defaultauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems>())
    , consoleauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems>())
{
    defaultauth_items->parent = this;
    consoleauth_items->parent = this;

    yang_name = "domainauth-items"; yang_parent_name = "LoginDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::~DomainauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_data())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_data());
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_operation())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_operation());
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domainauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "defaultauth-items")
    {
        if(defaultauth_items == nullptr)
        {
            defaultauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems>();
        }
        return defaultauth_items;
    }

    if(child_yang_name == "consoleauth-items")
    {
        if(consoleauth_items == nullptr)
        {
            consoleauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems>();
        }
        return consoleauth_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(defaultauth_items != nullptr)
    {
        children["defaultauth-items"] = defaultauth_items;
    }

    if(consoleauth_items != nullptr)
    {
        children["consoleauth-items"] = consoleauth_items;
    }

    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaultauth-items" || name == "consoleauth-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::DefaultauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "defaultauth-items"; yang_parent_name = "domainauth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::~DefaultauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::ConsoleauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "consoleauth-items"; yang_parent_name = "domainauth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::~ConsoleauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtaaaLoginDomainItems()
    :
    rtaaalogindomain_list(this, {"tdn"})
{

    yang_name = "rtaaaLoginDomain-items"; yang_parent_name = "LoginDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::~RtaaaLoginDomainItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaalogindomain_list.len(); index++)
    {
        if(rtaaalogindomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaalogindomain_list.len(); index++)
    {
        if(rtaaalogindomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaLoginDomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaLoginDomain-list")
    {
        auto c = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList>();
        c->parent = this;
        rtaaalogindomain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtaaalogindomain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaLoginDomain-list")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::RtAaaLoginDomainList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtAaaLoginDomain-list"; yang_parent_name = "rtaaaLoginDomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::~RtAaaLoginDomainList()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaLoginDomain-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::PreloginbannerItems::PreloginbannerItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    message{YType::str, "message"},
    guimessage{YType::str, "guiMessage"},
    delimiter{YType::str, "delimiter"}
        ,
    rtpreloginbanner_items(std::make_shared<System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems>())
{
    rtpreloginbanner_items->parent = this;

    yang_name = "preloginbanner-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PreloginbannerItems::~PreloginbannerItems()
{
}

bool System::UserextItems::PreloginbannerItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| message.is_set
	|| guimessage.is_set
	|| delimiter.is_set
	|| (rtpreloginbanner_items !=  nullptr && rtpreloginbanner_items->has_data());
}

bool System::UserextItems::PreloginbannerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(guimessage.yfilter)
	|| ydk::is_set(delimiter.yfilter)
	|| (rtpreloginbanner_items !=  nullptr && rtpreloginbanner_items->has_operation());
}

std::string System::UserextItems::PreloginbannerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PreloginbannerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preloginbanner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PreloginbannerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (guimessage.is_set || is_set(guimessage.yfilter)) leaf_name_data.push_back(guimessage.get_name_leafdata());
    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PreloginbannerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpreLoginBanner-items")
    {
        if(rtpreloginbanner_items == nullptr)
        {
            rtpreloginbanner_items = std::make_shared<System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems>();
        }
        return rtpreloginbanner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PreloginbannerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtpreloginbanner_items != nullptr)
    {
        children["rtpreLoginBanner-items"] = rtpreloginbanner_items;
    }

    return children;
}

void System::UserextItems::PreloginbannerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guiMessage")
    {
        guimessage = value;
        guimessage.value_namespace = name_space;
        guimessage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PreloginbannerItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "guiMessage")
    {
        guimessage.yfilter = yfilter;
    }
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool System::UserextItems::PreloginbannerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpreLoginBanner-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "message" || name == "guiMessage" || name == "delimiter")
        return true;
    return false;
}

System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::RtpreLoginBannerItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpreLoginBanner-items"; yang_parent_name = "preloginbanner-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::~RtpreLoginBannerItems()
{
}

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/preloginbanner-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpreLoginBanner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteuserItems()
    :
    remoteuser_list(this, {"name"})
{

    yang_name = "remoteuser-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RemoteuserItems::~RemoteuserItems()
{
}

bool System::UserextItems::RemoteuserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RemoteuserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteuser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUser-list")
    {
        auto c = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList>();
        c->parent = this;
        remoteuser_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remoteuser_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RemoteuserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUser-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::RemoteUserList()
    :
    name{YType::str, "name"},
    logintime{YType::str, "loginTime"},
    unixuserid{YType::uint16, "unixUserId"},
    ciscoavpair{YType::str, "ciscoAvPair"},
    logindomain{YType::str, "loginDomain"},
    deleteflag{YType::enumeration, "deleteFlag"},
    sequencenumber{YType::uint64, "sequenceNumber"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    userdomain_items(std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems>())
{
    userdomain_items->parent = this;

    yang_name = "RemoteUser-list"; yang_parent_name = "remoteuser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::~RemoteUserList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| logintime.is_set
	|| unixuserid.is_set
	|| ciscoavpair.is_set
	|| logindomain.is_set
	|| deleteflag.is_set
	|| sequencenumber.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (userdomain_items !=  nullptr && userdomain_items->has_data());
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(logintime.yfilter)
	|| ydk::is_set(unixuserid.yfilter)
	|| ydk::is_set(ciscoavpair.yfilter)
	|| ydk::is_set(logindomain.yfilter)
	|| ydk::is_set(deleteflag.yfilter)
	|| ydk::is_set(sequencenumber.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (userdomain_items !=  nullptr && userdomain_items->has_operation());
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/remoteuser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUser-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (logintime.is_set || is_set(logintime.yfilter)) leaf_name_data.push_back(logintime.get_name_leafdata());
    if (unixuserid.is_set || is_set(unixuserid.yfilter)) leaf_name_data.push_back(unixuserid.get_name_leafdata());
    if (ciscoavpair.is_set || is_set(ciscoavpair.yfilter)) leaf_name_data.push_back(ciscoavpair.get_name_leafdata());
    if (logindomain.is_set || is_set(logindomain.yfilter)) leaf_name_data.push_back(logindomain.get_name_leafdata());
    if (deleteflag.is_set || is_set(deleteflag.yfilter)) leaf_name_data.push_back(deleteflag.get_name_leafdata());
    if (sequencenumber.is_set || is_set(sequencenumber.yfilter)) leaf_name_data.push_back(sequencenumber.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::RemoteUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "userdomain-items")
    {
        if(userdomain_items == nullptr)
        {
            userdomain_items = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems>();
        }
        return userdomain_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(userdomain_items != nullptr)
    {
        children["userdomain-items"] = userdomain_items;
    }

    return children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loginTime")
    {
        logintime = value;
        logintime.value_namespace = name_space;
        logintime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unixUserId")
    {
        unixuserid = value;
        unixuserid.value_namespace = name_space;
        unixuserid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoAvPair")
    {
        ciscoavpair = value;
        ciscoavpair.value_namespace = name_space;
        ciscoavpair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loginDomain")
    {
        logindomain = value;
        logindomain.value_namespace = name_space;
        logindomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleteFlag")
    {
        deleteflag = value;
        deleteflag.value_namespace = name_space;
        deleteflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequenceNumber")
    {
        sequencenumber = value;
        sequencenumber.value_namespace = name_space;
        sequencenumber.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::RemoteuserItems::RemoteUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "loginTime")
    {
        logintime.yfilter = yfilter;
    }
    if(value_path == "unixUserId")
    {
        unixuserid.yfilter = yfilter;
    }
    if(value_path == "ciscoAvPair")
    {
        ciscoavpair.yfilter = yfilter;
    }
    if(value_path == "loginDomain")
    {
        logindomain.yfilter = yfilter;
    }
    if(value_path == "deleteFlag")
    {
        deleteflag.yfilter = yfilter;
    }
    if(value_path == "sequenceNumber")
    {
        sequencenumber.yfilter = yfilter;
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

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "userdomain-items" || name == "name" || name == "loginTime" || name == "unixUserId" || name == "ciscoAvPair" || name == "loginDomain" || name == "deleteFlag" || name == "sequenceNumber" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::UserdomainItems()
    :
    remoteuserdomain_list(this, {"name"})
{

    yang_name = "userdomain-items"; yang_parent_name = "RemoteUser-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::~UserdomainItems()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuserdomain_list.len(); index++)
    {
        if(remoteuserdomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuserdomain_list.len(); index++)
    {
        if(remoteuserdomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUserDomain-list")
    {
        auto c = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList>();
        c->parent = this;
        remoteuserdomain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remoteuserdomain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUserDomain-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RemoteUserDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    role_items(std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems>())
{
    role_items->parent = this;

    yang_name = "RemoteUserDomain-list"; yang_parent_name = "userdomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::~RemoteUserDomainList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (role_items !=  nullptr && role_items->has_data());
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (role_items !=  nullptr && role_items->has_operation());
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUserDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems>();
        }
        return role_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(role_items != nullptr)
    {
        children["role-items"] = role_items;
    }

    return children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RoleItems()
    :
    remoteuserrole_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "RemoteUserDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::~RoleItems()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuserrole_list.len(); index++)
    {
        if(remoteuserrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuserrole_list.len(); index++)
    {
        if(remoteuserrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUserRole-list")
    {
        auto c = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList>();
        c->parent = this;
        remoteuserrole_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remoteuserrole_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUserRole-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::RemoteUserRoleList()
    :
    name{YType::str, "name"},
    privtype{YType::enumeration, "privType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "RemoteUserRole-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::~RemoteUserRoleList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| privtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUserRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
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

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "privType" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserItems()
    :
    user_list(this, {"name"})
{

    yang_name = "user-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::UserItems::~UserItems()
{
}

bool System::UserextItems::UserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_list.len(); index++)
    {
        if(user_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::has_operation() const
{
    for (std::size_t index=0; index<user_list.len(); index++)
    {
        if(user_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "User-list")
    {
        auto c = std::make_shared<System::UserextItems::UserItems::UserList>();
        c->parent = this;
        user_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : user_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "User-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserList()
    :
    name{YType::str, "name"},
    firstname{YType::str, "firstName"},
    lastname{YType::str, "lastName"},
    email{YType::str, "email"},
    phone{YType::str, "phone"},
    expiration{YType::str, "expiration"},
    expires{YType::enumeration, "expires"},
    allowexpired{YType::enumeration, "allowExpired"},
    accountstatus{YType::enumeration, "accountStatus"},
    pwd{YType::str, "pwd"},
    encpwd{YType::str, "encPwd"},
    pwdlen{YType::uint32, "pwdLen"},
    pwdset{YType::boolean, "pwdSet"},
    pwdencrypttype{YType::enumeration, "pwdEncryptType"},
    oldpwdencrypttype{YType::enumeration, "oldPwdEncryptType"},
    issnmpnotify{YType::enumeration, "isSnmpNotify"},
    pwdlifetime{YType::uint16, "pwdLifeTime"},
    clearpwdhistory{YType::enumeration, "clearPwdHistory"},
    unixuserid{YType::uint16, "unixUserId"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    sshauth_items(std::make_shared<System::UserextItems::UserItems::UserList::SshauthItems>())
    , usercert_items(std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems>())
    , userdomain_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems>())
    , userdata_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdataItems>())
{
    sshauth_items->parent = this;
    usercert_items->parent = this;
    userdomain_items->parent = this;
    userdata_items->parent = this;

    yang_name = "User-list"; yang_parent_name = "user-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::UserItems::UserList::~UserList()
{
}

bool System::UserextItems::UserItems::UserList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| firstname.is_set
	|| lastname.is_set
	|| email.is_set
	|| phone.is_set
	|| expiration.is_set
	|| expires.is_set
	|| allowexpired.is_set
	|| accountstatus.is_set
	|| pwd.is_set
	|| encpwd.is_set
	|| pwdlen.is_set
	|| pwdset.is_set
	|| pwdencrypttype.is_set
	|| oldpwdencrypttype.is_set
	|| issnmpnotify.is_set
	|| pwdlifetime.is_set
	|| clearpwdhistory.is_set
	|| unixuserid.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (sshauth_items !=  nullptr && sshauth_items->has_data())
	|| (usercert_items !=  nullptr && usercert_items->has_data())
	|| (userdomain_items !=  nullptr && userdomain_items->has_data())
	|| (userdata_items !=  nullptr && userdata_items->has_data());
}

bool System::UserextItems::UserItems::UserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(firstname.yfilter)
	|| ydk::is_set(lastname.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(phone.yfilter)
	|| ydk::is_set(expiration.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(allowexpired.yfilter)
	|| ydk::is_set(accountstatus.yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(encpwd.yfilter)
	|| ydk::is_set(pwdlen.yfilter)
	|| ydk::is_set(pwdset.yfilter)
	|| ydk::is_set(pwdencrypttype.yfilter)
	|| ydk::is_set(oldpwdencrypttype.yfilter)
	|| ydk::is_set(issnmpnotify.yfilter)
	|| ydk::is_set(pwdlifetime.yfilter)
	|| ydk::is_set(clearpwdhistory.yfilter)
	|| ydk::is_set(unixuserid.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (sshauth_items !=  nullptr && sshauth_items->has_operation())
	|| (usercert_items !=  nullptr && usercert_items->has_operation())
	|| (userdomain_items !=  nullptr && userdomain_items->has_operation())
	|| (userdata_items !=  nullptr && userdata_items->has_operation());
}

std::string System::UserextItems::UserItems::UserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/user-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::UserItems::UserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "User-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (firstname.is_set || is_set(firstname.yfilter)) leaf_name_data.push_back(firstname.get_name_leafdata());
    if (lastname.is_set || is_set(lastname.yfilter)) leaf_name_data.push_back(lastname.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (phone.is_set || is_set(phone.yfilter)) leaf_name_data.push_back(phone.get_name_leafdata());
    if (expiration.is_set || is_set(expiration.yfilter)) leaf_name_data.push_back(expiration.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (allowexpired.is_set || is_set(allowexpired.yfilter)) leaf_name_data.push_back(allowexpired.get_name_leafdata());
    if (accountstatus.is_set || is_set(accountstatus.yfilter)) leaf_name_data.push_back(accountstatus.get_name_leafdata());
    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (encpwd.is_set || is_set(encpwd.yfilter)) leaf_name_data.push_back(encpwd.get_name_leafdata());
    if (pwdlen.is_set || is_set(pwdlen.yfilter)) leaf_name_data.push_back(pwdlen.get_name_leafdata());
    if (pwdset.is_set || is_set(pwdset.yfilter)) leaf_name_data.push_back(pwdset.get_name_leafdata());
    if (pwdencrypttype.is_set || is_set(pwdencrypttype.yfilter)) leaf_name_data.push_back(pwdencrypttype.get_name_leafdata());
    if (oldpwdencrypttype.is_set || is_set(oldpwdencrypttype.yfilter)) leaf_name_data.push_back(oldpwdencrypttype.get_name_leafdata());
    if (issnmpnotify.is_set || is_set(issnmpnotify.yfilter)) leaf_name_data.push_back(issnmpnotify.get_name_leafdata());
    if (pwdlifetime.is_set || is_set(pwdlifetime.yfilter)) leaf_name_data.push_back(pwdlifetime.get_name_leafdata());
    if (clearpwdhistory.is_set || is_set(clearpwdhistory.yfilter)) leaf_name_data.push_back(clearpwdhistory.get_name_leafdata());
    if (unixuserid.is_set || is_set(unixuserid.yfilter)) leaf_name_data.push_back(unixuserid.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sshauth-items")
    {
        if(sshauth_items == nullptr)
        {
            sshauth_items = std::make_shared<System::UserextItems::UserItems::UserList::SshauthItems>();
        }
        return sshauth_items;
    }

    if(child_yang_name == "usercert-items")
    {
        if(usercert_items == nullptr)
        {
            usercert_items = std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems>();
        }
        return usercert_items;
    }

    if(child_yang_name == "userdomain-items")
    {
        if(userdomain_items == nullptr)
        {
            userdomain_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems>();
        }
        return userdomain_items;
    }

    if(child_yang_name == "userdata-items")
    {
        if(userdata_items == nullptr)
        {
            userdata_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdataItems>();
        }
        return userdata_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sshauth_items != nullptr)
    {
        children["sshauth-items"] = sshauth_items;
    }

    if(usercert_items != nullptr)
    {
        children["usercert-items"] = usercert_items;
    }

    if(userdomain_items != nullptr)
    {
        children["userdomain-items"] = userdomain_items;
    }

    if(userdata_items != nullptr)
    {
        children["userdata-items"] = userdata_items;
    }

    return children;
}

void System::UserextItems::UserItems::UserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstName")
    {
        firstname = value;
        firstname.value_namespace = name_space;
        firstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastName")
    {
        lastname = value;
        lastname.value_namespace = name_space;
        lastname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phone")
    {
        phone = value;
        phone.value_namespace = name_space;
        phone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiration")
    {
        expiration = value;
        expiration.value_namespace = name_space;
        expiration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowExpired")
    {
        allowexpired = value;
        allowexpired.value_namespace = name_space;
        allowexpired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accountStatus")
    {
        accountstatus = value;
        accountstatus.value_namespace = name_space;
        accountstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encPwd")
    {
        encpwd = value;
        encpwd.value_namespace = name_space;
        encpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdLen")
    {
        pwdlen = value;
        pwdlen.value_namespace = name_space;
        pwdlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdSet")
    {
        pwdset = value;
        pwdset.value_namespace = name_space;
        pwdset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype = value;
        pwdencrypttype.value_namespace = name_space;
        pwdencrypttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldPwdEncryptType")
    {
        oldpwdencrypttype = value;
        oldpwdencrypttype.value_namespace = name_space;
        oldpwdencrypttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isSnmpNotify")
    {
        issnmpnotify = value;
        issnmpnotify.value_namespace = name_space;
        issnmpnotify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdLifeTime")
    {
        pwdlifetime = value;
        pwdlifetime.value_namespace = name_space;
        pwdlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clearPwdHistory")
    {
        clearpwdhistory = value;
        clearpwdhistory.value_namespace = name_space;
        clearpwdhistory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unixUserId")
    {
        unixuserid = value;
        unixuserid.value_namespace = name_space;
        unixuserid.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::UserItems::UserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "firstName")
    {
        firstname.yfilter = yfilter;
    }
    if(value_path == "lastName")
    {
        lastname.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "phone")
    {
        phone.yfilter = yfilter;
    }
    if(value_path == "expiration")
    {
        expiration.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "allowExpired")
    {
        allowexpired.yfilter = yfilter;
    }
    if(value_path == "accountStatus")
    {
        accountstatus.yfilter = yfilter;
    }
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "encPwd")
    {
        encpwd.yfilter = yfilter;
    }
    if(value_path == "pwdLen")
    {
        pwdlen.yfilter = yfilter;
    }
    if(value_path == "pwdSet")
    {
        pwdset.yfilter = yfilter;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype.yfilter = yfilter;
    }
    if(value_path == "oldPwdEncryptType")
    {
        oldpwdencrypttype.yfilter = yfilter;
    }
    if(value_path == "isSnmpNotify")
    {
        issnmpnotify.yfilter = yfilter;
    }
    if(value_path == "pwdLifeTime")
    {
        pwdlifetime.yfilter = yfilter;
    }
    if(value_path == "clearPwdHistory")
    {
        clearpwdhistory.yfilter = yfilter;
    }
    if(value_path == "unixUserId")
    {
        unixuserid.yfilter = yfilter;
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

bool System::UserextItems::UserItems::UserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sshauth-items" || name == "usercert-items" || name == "userdomain-items" || name == "userdata-items" || name == "name" || name == "firstName" || name == "lastName" || name == "email" || name == "phone" || name == "expiration" || name == "expires" || name == "allowExpired" || name == "accountStatus" || name == "pwd" || name == "encPwd" || name == "pwdLen" || name == "pwdSet" || name == "pwdEncryptType" || name == "oldPwdEncryptType" || name == "isSnmpNotify" || name == "pwdLifeTime" || name == "clearPwdHistory" || name == "unixUserId" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::SshauthItems::SshauthItems()
    :
    data{YType::str, "data"},
    fingerprint{YType::str, "fingerprint"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "sshauth-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::SshauthItems::~SshauthItems()
{
}

bool System::UserextItems::UserItems::UserList::SshauthItems::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| fingerprint.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::SshauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(fingerprint.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::SshauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sshauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::SshauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (fingerprint.is_set || is_set(fingerprint.yfilter)) leaf_name_data.push_back(fingerprint.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::SshauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::SshauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::UserItems::UserList::SshauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fingerprint")
    {
        fingerprint = value;
        fingerprint.value_namespace = name_space;
        fingerprint.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::UserItems::UserList::SshauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "fingerprint")
    {
        fingerprint.yfilter = yfilter;
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

bool System::UserextItems::UserItems::UserList::SshauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "fingerprint" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UsercertItems::UsercertItems()
    :
    usercert_list(this, {"name"})
{

    yang_name = "usercert-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UsercertItems::~UsercertItems()
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usercert_list.len(); index++)
    {
        if(usercert_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_operation() const
{
    for (std::size_t index=0; index<usercert_list.len(); index++)
    {
        if(usercert_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UsercertItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usercert-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UsercertItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UsercertItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserCert-list")
    {
        auto c = std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems::UserCertList>();
        c->parent = this;
        usercert_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UsercertItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usercert_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::UserItems::UserList::UsercertItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UsercertItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserCert-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::UserCertList()
    :
    name{YType::str, "name"},
    data{YType::str, "data"},
    fingerprint{YType::str, "fingerprint"},
    certificatedecodeinformation{YType::str, "certificateDecodeInformation"},
    publickey{YType::str, "publicKey"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "UserCert-list"; yang_parent_name = "usercert-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::~UserCertList()
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| fingerprint.is_set
	|| certificatedecodeinformation.is_set
	|| publickey.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(fingerprint.yfilter)
	|| ydk::is_set(certificatedecodeinformation.yfilter)
	|| ydk::is_set(publickey.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserCert-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (fingerprint.is_set || is_set(fingerprint.yfilter)) leaf_name_data.push_back(fingerprint.get_name_leafdata());
    if (certificatedecodeinformation.is_set || is_set(certificatedecodeinformation.yfilter)) leaf_name_data.push_back(certificatedecodeinformation.get_name_leafdata());
    if (publickey.is_set || is_set(publickey.yfilter)) leaf_name_data.push_back(publickey.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fingerprint")
    {
        fingerprint = value;
        fingerprint.value_namespace = name_space;
        fingerprint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation = value;
        certificatedecodeinformation.value_namespace = name_space;
        certificatedecodeinformation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publicKey")
    {
        publickey = value;
        publickey.value_namespace = name_space;
        publickey.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "fingerprint")
    {
        fingerprint.yfilter = yfilter;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation.yfilter = yfilter;
    }
    if(value_path == "publicKey")
    {
        publickey.yfilter = yfilter;
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

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "fingerprint" || name == "certificateDecodeInformation" || name == "publicKey" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserdomainItems()
    :
    userdomain_list(this, {"name"})
{

    yang_name = "userdomain-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::~UserdomainItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<userdomain_list.len(); index++)
    {
        if(userdomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_operation() const
{
    for (std::size_t index=0; index<userdomain_list.len(); index++)
    {
        if(userdomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UserdomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserDomain-list")
    {
        auto c = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList>();
        c->parent = this;
        userdomain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : userdomain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UserdomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserDomain-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::UserDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    role_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems>())
{
    role_items->parent = this;

    yang_name = "UserDomain-list"; yang_parent_name = "userdomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::~UserDomainList()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (role_items !=  nullptr && role_items->has_data());
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (role_items !=  nullptr && role_items->has_operation());
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems>();
        }
        return role_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(role_items != nullptr)
    {
        children["role-items"] = role_items;
    }

    return children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::RoleItems()
    :
    userrole_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "UserDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::~RoleItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<userrole_list.len(); index++)
    {
        if(userrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<userrole_list.len(); index++)
    {
        if(userrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserRole-list")
    {
        auto c = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList>();
        c->parent = this;
        userrole_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : userrole_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserRole-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::UserRoleList()
    :
    name{YType::str, "name"},
    privtype{YType::enumeration, "privType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "UserRole-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::~UserRoleList()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| privtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
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

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "privType" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdataItems::UserdataItems()
    :
    pwdchangeddate{YType::str, "pwdChangedDate"},
    pwdhistory{YType::str, "pwdHistory"},
    pwdchangecount{YType::uint8, "pwdChangeCount"},
    pwdchangeintervalbegin{YType::str, "pwdChangeIntervalBegin"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "userdata-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdataItems::~UserdataItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdataItems::has_data() const
{
    if (is_presence_container) return true;
    return pwdchangeddate.is_set
	|| pwdhistory.is_set
	|| pwdchangecount.is_set
	|| pwdchangeintervalbegin.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UserdataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwdchangeddate.yfilter)
	|| ydk::is_set(pwdhistory.yfilter)
	|| ydk::is_set(pwdchangecount.yfilter)
	|| ydk::is_set(pwdchangeintervalbegin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwdchangeddate.is_set || is_set(pwdchangeddate.yfilter)) leaf_name_data.push_back(pwdchangeddate.get_name_leafdata());
    if (pwdhistory.is_set || is_set(pwdhistory.yfilter)) leaf_name_data.push_back(pwdhistory.get_name_leafdata());
    if (pwdchangecount.is_set || is_set(pwdchangecount.yfilter)) leaf_name_data.push_back(pwdchangecount.get_name_leafdata());
    if (pwdchangeintervalbegin.is_set || is_set(pwdchangeintervalbegin.yfilter)) leaf_name_data.push_back(pwdchangeintervalbegin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::UserItems::UserList::UserdataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::UserItems::UserList::UserdataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::UserItems::UserList::UserdataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwdChangedDate")
    {
        pwdchangeddate = value;
        pwdchangeddate.value_namespace = name_space;
        pwdchangeddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdHistory")
    {
        pwdhistory = value;
        pwdhistory.value_namespace = name_space;
        pwdhistory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdChangeCount")
    {
        pwdchangecount = value;
        pwdchangecount.value_namespace = name_space;
        pwdchangecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdChangeIntervalBegin")
    {
        pwdchangeintervalbegin = value;
        pwdchangeintervalbegin.value_namespace = name_space;
        pwdchangeintervalbegin.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::UserItems::UserList::UserdataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwdChangedDate")
    {
        pwdchangeddate.yfilter = yfilter;
    }
    if(value_path == "pwdHistory")
    {
        pwdhistory.yfilter = yfilter;
    }
    if(value_path == "pwdChangeCount")
    {
        pwdchangecount.yfilter = yfilter;
    }
    if(value_path == "pwdChangeIntervalBegin")
    {
        pwdchangeintervalbegin.yfilter = yfilter;
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

bool System::UserextItems::UserItems::UserList::UserdataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwdChangedDate" || name == "pwdHistory" || name == "pwdChangeCount" || name == "pwdChangeIntervalBegin" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleItems()
    :
    role_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RoleItems::~RoleItems()
{
}

bool System::UserextItems::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<role_list.len(); index++)
    {
        if(role_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<role_list.len(); index++)
    {
        if(role_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Role-list")
    {
        auto c = std::make_shared<System::UserextItems::RoleItems::RoleList>();
        c->parent = this;
        role_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : role_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Role-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RoleList()
    :
    name{YType::str, "name"},
    denyvrf{YType::enumeration, "denyVRF"},
    allowedvrf{YType::str, "allowedVRF"},
    denyvlan{YType::enumeration, "denyVLAN"},
    allowedvlan{YType::str, "allowedVLAN"},
    denyintf{YType::enumeration, "denyIntf"},
    priv{YType::str, "priv"},
    roleprivtype{YType::enumeration, "rolePrivType"},
    roleisbuiltin{YType::enumeration, "roleIsBuiltin"},
    resettofactory{YType::enumeration, "resetToFactory"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    rule_items(std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems>())
    , intf_items(std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems>())
{
    rule_items->parent = this;
    intf_items->parent = this;

    yang_name = "Role-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RoleItems::RoleList::~RoleList()
{
}

bool System::UserextItems::RoleItems::RoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| denyvrf.is_set
	|| allowedvrf.is_set
	|| denyvlan.is_set
	|| allowedvlan.is_set
	|| denyintf.is_set
	|| priv.is_set
	|| roleprivtype.is_set
	|| roleisbuiltin.is_set
	|| resettofactory.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (rule_items !=  nullptr && rule_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data());
}

bool System::UserextItems::RoleItems::RoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(denyvrf.yfilter)
	|| ydk::is_set(allowedvrf.yfilter)
	|| ydk::is_set(denyvlan.yfilter)
	|| ydk::is_set(allowedvlan.yfilter)
	|| ydk::is_set(denyintf.yfilter)
	|| ydk::is_set(priv.yfilter)
	|| ydk::is_set(roleprivtype.yfilter)
	|| ydk::is_set(roleisbuiltin.yfilter)
	|| ydk::is_set(resettofactory.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rule_items !=  nullptr && rule_items->has_operation())
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::UserextItems::RoleItems::RoleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/role-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RoleItems::RoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Role-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (denyvrf.is_set || is_set(denyvrf.yfilter)) leaf_name_data.push_back(denyvrf.get_name_leafdata());
    if (allowedvrf.is_set || is_set(allowedvrf.yfilter)) leaf_name_data.push_back(allowedvrf.get_name_leafdata());
    if (denyvlan.is_set || is_set(denyvlan.yfilter)) leaf_name_data.push_back(denyvlan.get_name_leafdata());
    if (allowedvlan.is_set || is_set(allowedvlan.yfilter)) leaf_name_data.push_back(allowedvlan.get_name_leafdata());
    if (denyintf.is_set || is_set(denyintf.yfilter)) leaf_name_data.push_back(denyintf.get_name_leafdata());
    if (priv.is_set || is_set(priv.yfilter)) leaf_name_data.push_back(priv.get_name_leafdata());
    if (roleprivtype.is_set || is_set(roleprivtype.yfilter)) leaf_name_data.push_back(roleprivtype.get_name_leafdata());
    if (roleisbuiltin.is_set || is_set(roleisbuiltin.yfilter)) leaf_name_data.push_back(roleisbuiltin.get_name_leafdata());
    if (resettofactory.is_set || is_set(resettofactory.yfilter)) leaf_name_data.push_back(resettofactory.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::RoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-items")
    {
        if(rule_items == nullptr)
        {
            rule_items = std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems>();
        }
        return rule_items;
    }

    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::RoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rule_items != nullptr)
    {
        children["rule-items"] = rule_items;
    }

    if(intf_items != nullptr)
    {
        children["intf-items"] = intf_items;
    }

    return children;
}

void System::UserextItems::RoleItems::RoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyVRF")
    {
        denyvrf = value;
        denyvrf.value_namespace = name_space;
        denyvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVRF")
    {
        allowedvrf = value;
        allowedvrf.value_namespace = name_space;
        allowedvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyVLAN")
    {
        denyvlan = value;
        denyvlan.value_namespace = name_space;
        denyvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVLAN")
    {
        allowedvlan = value;
        allowedvlan.value_namespace = name_space;
        allowedvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyIntf")
    {
        denyintf = value;
        denyintf.value_namespace = name_space;
        denyintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv")
    {
        priv = value;
        priv.value_namespace = name_space;
        priv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rolePrivType")
    {
        roleprivtype = value;
        roleprivtype.value_namespace = name_space;
        roleprivtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roleIsBuiltin")
    {
        roleisbuiltin = value;
        roleisbuiltin.value_namespace = name_space;
        roleisbuiltin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory = value;
        resettofactory.value_namespace = name_space;
        resettofactory.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::RoleItems::RoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "denyVRF")
    {
        denyvrf.yfilter = yfilter;
    }
    if(value_path == "allowedVRF")
    {
        allowedvrf.yfilter = yfilter;
    }
    if(value_path == "denyVLAN")
    {
        denyvlan.yfilter = yfilter;
    }
    if(value_path == "allowedVLAN")
    {
        allowedvlan.yfilter = yfilter;
    }
    if(value_path == "denyIntf")
    {
        denyintf.yfilter = yfilter;
    }
    if(value_path == "priv")
    {
        priv.yfilter = yfilter;
    }
    if(value_path == "rolePrivType")
    {
        roleprivtype.yfilter = yfilter;
    }
    if(value_path == "roleIsBuiltin")
    {
        roleisbuiltin.yfilter = yfilter;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory.yfilter = yfilter;
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

bool System::UserextItems::RoleItems::RoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-items" || name == "intf-items" || name == "name" || name == "denyVRF" || name == "allowedVRF" || name == "denyVLAN" || name == "allowedVLAN" || name == "denyIntf" || name == "priv" || name == "rolePrivType" || name == "roleIsBuiltin" || name == "resetToFactory" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RuleItems::RuleItems()
    :
    rolerule_list(this, {"rulenumber"})
{

    yang_name = "rule-items"; yang_parent_name = "Role-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::RuleItems::~RuleItems()
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rolerule_list.len(); index++)
    {
        if(rolerule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_operation() const
{
    for (std::size_t index=0; index<rolerule_list.len(); index++)
    {
        if(rolerule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::RuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::RuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::RoleList::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RoleRule-list")
    {
        auto c = std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList>();
        c->parent = this;
        rolerule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::RoleList::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rolerule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RoleItems::RoleList::RuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::RoleList::RuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RoleRule-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::RoleRuleList()
    :
    rulenumber{YType::uint32, "ruleNumber"},
    permission{YType::enumeration, "permission"},
    ruleaccess{YType::enumeration, "ruleAccess"},
    rulescope{YType::enumeration, "ruleScope"},
    cmdstr{YType::str, "cmdStr"},
    scopeentity{YType::str, "scopeEntity"}
{

    yang_name = "RoleRule-list"; yang_parent_name = "rule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::~RoleRuleList()
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_data() const
{
    if (is_presence_container) return true;
    return rulenumber.is_set
	|| permission.is_set
	|| ruleaccess.is_set
	|| rulescope.is_set
	|| cmdstr.is_set
	|| scopeentity.is_set;
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rulenumber.yfilter)
	|| ydk::is_set(permission.yfilter)
	|| ydk::is_set(ruleaccess.yfilter)
	|| ydk::is_set(rulescope.yfilter)
	|| ydk::is_set(cmdstr.yfilter)
	|| ydk::is_set(scopeentity.yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RoleRule-list";
    ADD_KEY_TOKEN(rulenumber, "ruleNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulenumber.is_set || is_set(rulenumber.yfilter)) leaf_name_data.push_back(rulenumber.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());
    if (ruleaccess.is_set || is_set(ruleaccess.yfilter)) leaf_name_data.push_back(ruleaccess.get_name_leafdata());
    if (rulescope.is_set || is_set(rulescope.yfilter)) leaf_name_data.push_back(rulescope.get_name_leafdata());
    if (cmdstr.is_set || is_set(cmdstr.yfilter)) leaf_name_data.push_back(cmdstr.get_name_leafdata());
    if (scopeentity.is_set || is_set(scopeentity.yfilter)) leaf_name_data.push_back(scopeentity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ruleNumber")
    {
        rulenumber = value;
        rulenumber.value_namespace = name_space;
        rulenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permission")
    {
        permission = value;
        permission.value_namespace = name_space;
        permission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleAccess")
    {
        ruleaccess = value;
        ruleaccess.value_namespace = name_space;
        ruleaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleScope")
    {
        rulescope = value;
        rulescope.value_namespace = name_space;
        rulescope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdStr")
    {
        cmdstr = value;
        cmdstr.value_namespace = name_space;
        cmdstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scopeEntity")
    {
        scopeentity = value;
        scopeentity.value_namespace = name_space;
        scopeentity.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ruleNumber")
    {
        rulenumber.yfilter = yfilter;
    }
    if(value_path == "permission")
    {
        permission.yfilter = yfilter;
    }
    if(value_path == "ruleAccess")
    {
        ruleaccess.yfilter = yfilter;
    }
    if(value_path == "ruleScope")
    {
        rulescope.yfilter = yfilter;
    }
    if(value_path == "cmdStr")
    {
        cmdstr.yfilter = yfilter;
    }
    if(value_path == "scopeEntity")
    {
        scopeentity.yfilter = yfilter;
    }
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ruleNumber" || name == "permission" || name == "ruleAccess" || name == "ruleScope" || name == "cmdStr" || name == "scopeEntity")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::IntfItems::IntfItems()
    :
    roleintf_list(this, {"intfname"})
{

    yang_name = "intf-items"; yang_parent_name = "Role-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::IntfItems::~IntfItems()
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<roleintf_list.len(); index++)
    {
        if(roleintf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<roleintf_list.len(); index++)
    {
        if(roleintf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::RoleList::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RoleIntf-list")
    {
        auto c = std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList>();
        c->parent = this;
        roleintf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::RoleList::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : roleintf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RoleItems::RoleList::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::RoleList::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RoleIntf-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::RoleIntfList()
    :
    intfname{YType::str, "intfName"},
    allowinst{YType::str, "allowInst"}
{

    yang_name = "RoleIntf-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::~RoleIntfList()
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_data() const
{
    if (is_presence_container) return true;
    return intfname.is_set
	|| allowinst.is_set;
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intfname.yfilter)
	|| ydk::is_set(allowinst.yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RoleIntf-list";
    ADD_KEY_TOKEN(intfname, "intfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfname.is_set || is_set(intfname.yfilter)) leaf_name_data.push_back(intfname.get_name_leafdata());
    if (allowinst.is_set || is_set(allowinst.yfilter)) leaf_name_data.push_back(allowinst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intfName")
    {
        intfname = value;
        intfname.value_namespace = name_space;
        intfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowInst")
    {
        allowinst = value;
        allowinst.value_namespace = name_space;
        allowinst.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intfName")
    {
        intfname.yfilter = yfilter;
    }
    if(value_path == "allowInst")
    {
        allowinst.yfilter = yfilter;
    }
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intfName" || name == "allowInst")
        return true;
    return false;
}

System::UserextItems::FactoryroleItems::FactoryroleItems()
    :
    factoryrole_list(this, {"name"})
{

    yang_name = "factoryrole-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::FactoryroleItems::~FactoryroleItems()
{
}

bool System::UserextItems::FactoryroleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<factoryrole_list.len(); index++)
    {
        if(factoryrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::FactoryroleItems::has_operation() const
{
    for (std::size_t index=0; index<factoryrole_list.len(); index++)
    {
        if(factoryrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::FactoryroleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::FactoryroleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "factoryrole-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::FactoryroleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::FactoryroleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FactoryRole-list")
    {
        auto c = std::make_shared<System::UserextItems::FactoryroleItems::FactoryRoleList>();
        c->parent = this;
        factoryrole_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::FactoryroleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : factoryrole_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::FactoryroleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::FactoryroleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::FactoryroleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FactoryRole-list")
        return true;
    return false;
}

System::UserextItems::FactoryroleItems::FactoryRoleList::FactoryRoleList()
    :
    name{YType::str, "name"},
    priv{YType::str, "priv"},
    resettofactory{YType::enumeration, "resetToFactory"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "FactoryRole-list"; yang_parent_name = "factoryrole-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::FactoryroleItems::FactoryRoleList::~FactoryRoleList()
{
}

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| priv.is_set
	|| resettofactory.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priv.yfilter)
	|| ydk::is_set(resettofactory.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::FactoryroleItems::FactoryRoleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/factoryrole-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::FactoryroleItems::FactoryRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FactoryRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::FactoryroleItems::FactoryRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priv.is_set || is_set(priv.yfilter)) leaf_name_data.push_back(priv.get_name_leafdata());
    if (resettofactory.is_set || is_set(resettofactory.yfilter)) leaf_name_data.push_back(resettofactory.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::FactoryroleItems::FactoryRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::FactoryroleItems::FactoryRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::FactoryroleItems::FactoryRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv")
    {
        priv = value;
        priv.value_namespace = name_space;
        priv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory = value;
        resettofactory.value_namespace = name_space;
        resettofactory.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::FactoryroleItems::FactoryRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priv")
    {
        priv.yfilter = yfilter;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory.yfilter = yfilter;
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

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "priv" || name == "resetToFactory" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::DomainItems::DomainItems()
    :
    domain_list(this, {"name"})
{

    yang_name = "domain-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::DomainItems::~DomainItems()
{
}

bool System::UserextItems::DomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain_list.len(); index++)
    {
        if(domain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::DomainItems::has_operation() const
{
    for (std::size_t index=0; index<domain_list.len(); index++)
    {
        if(domain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::DomainItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::DomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::DomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::DomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Domain-list")
    {
        auto c = std::make_shared<System::UserextItems::DomainItems::DomainList>();
        c->parent = this;
        domain_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::DomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domain_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::DomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::DomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::DomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Domain-list")
        return true;
    return false;
}

System::UserextItems::DomainItems::DomainList::DomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "Domain-list"; yang_parent_name = "domain-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::DomainItems::DomainList::~DomainList()
{
}

bool System::UserextItems::DomainItems::DomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::DomainItems::DomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::DomainItems::DomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/domain-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::DomainItems::DomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Domain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::DomainItems::DomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::DomainItems::DomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::DomainItems::DomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::DomainItems::DomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::UserextItems::DomainItems::DomainList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::UserextItems::DomainItems::DomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PwdprofileItems::PwdprofileItems()
    :
    expirationwarntime{YType::uint8, "expirationWarnTime"},
    historycount{YType::uint8, "historyCount"},
    nochangeinterval{YType::uint16, "noChangeInterval"},
    changeinterval{YType::uint16, "changeInterval"},
    changeduringinterval{YType::enumeration, "changeDuringInterval"},
    changecount{YType::uint8, "changeCount"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "pwdprofile-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PwdprofileItems::~PwdprofileItems()
{
}

bool System::UserextItems::PwdprofileItems::has_data() const
{
    if (is_presence_container) return true;
    return expirationwarntime.is_set
	|| historycount.is_set
	|| nochangeinterval.is_set
	|| changeinterval.is_set
	|| changeduringinterval.is_set
	|| changecount.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PwdprofileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expirationwarntime.yfilter)
	|| ydk::is_set(historycount.yfilter)
	|| ydk::is_set(nochangeinterval.yfilter)
	|| ydk::is_set(changeinterval.yfilter)
	|| ydk::is_set(changeduringinterval.yfilter)
	|| ydk::is_set(changecount.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PwdprofileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PwdprofileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwdprofile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PwdprofileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expirationwarntime.is_set || is_set(expirationwarntime.yfilter)) leaf_name_data.push_back(expirationwarntime.get_name_leafdata());
    if (historycount.is_set || is_set(historycount.yfilter)) leaf_name_data.push_back(historycount.get_name_leafdata());
    if (nochangeinterval.is_set || is_set(nochangeinterval.yfilter)) leaf_name_data.push_back(nochangeinterval.get_name_leafdata());
    if (changeinterval.is_set || is_set(changeinterval.yfilter)) leaf_name_data.push_back(changeinterval.get_name_leafdata());
    if (changeduringinterval.is_set || is_set(changeduringinterval.yfilter)) leaf_name_data.push_back(changeduringinterval.get_name_leafdata());
    if (changecount.is_set || is_set(changecount.yfilter)) leaf_name_data.push_back(changecount.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PwdprofileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PwdprofileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PwdprofileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expirationWarnTime")
    {
        expirationwarntime = value;
        expirationwarntime.value_namespace = name_space;
        expirationwarntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyCount")
    {
        historycount = value;
        historycount.value_namespace = name_space;
        historycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noChangeInterval")
    {
        nochangeinterval = value;
        nochangeinterval.value_namespace = name_space;
        nochangeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeInterval")
    {
        changeinterval = value;
        changeinterval.value_namespace = name_space;
        changeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeDuringInterval")
    {
        changeduringinterval = value;
        changeduringinterval.value_namespace = name_space;
        changeduringinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeCount")
    {
        changecount = value;
        changecount.value_namespace = name_space;
        changecount.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PwdprofileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expirationWarnTime")
    {
        expirationwarntime.yfilter = yfilter;
    }
    if(value_path == "historyCount")
    {
        historycount.yfilter = yfilter;
    }
    if(value_path == "noChangeInterval")
    {
        nochangeinterval.yfilter = yfilter;
    }
    if(value_path == "changeInterval")
    {
        changeinterval.yfilter = yfilter;
    }
    if(value_path == "changeDuringInterval")
    {
        changeduringinterval.yfilter = yfilter;
    }
    if(value_path == "changeCount")
    {
        changecount.yfilter = yfilter;
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

bool System::UserextItems::PwdprofileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expirationWarnTime" || name == "historyCount" || name == "noChangeInterval" || name == "changeInterval" || name == "changeDuringInterval" || name == "changeCount" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::PkiextItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    webtokendata_items(std::make_shared<System::UserextItems::PkiextItems::WebtokendataItems>())
    , csyncsharedkey_items(std::make_shared<System::UserextItems::PkiextItems::CsyncsharedkeyItems>())
    , csyncpolicy_items(std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems>())
    , dbgplgch_items(std::make_shared<System::UserextItems::PkiextItems::DbgplgchItems>())
    , keyring_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems>())
    , tp_items(std::make_shared<System::UserextItems::PkiextItems::TpItems>())
    , rtfabricrespkiep_items(std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems>())
{
    webtokendata_items->parent = this;
    csyncsharedkey_items->parent = this;
    csyncpolicy_items->parent = this;
    dbgplgch_items->parent = this;
    keyring_items->parent = this;
    tp_items->parent = this;
    rtfabricrespkiep_items->parent = this;

    yang_name = "pkiext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::~PkiextItems()
{
}

bool System::UserextItems::PkiextItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (webtokendata_items !=  nullptr && webtokendata_items->has_data())
	|| (csyncsharedkey_items !=  nullptr && csyncsharedkey_items->has_data())
	|| (csyncpolicy_items !=  nullptr && csyncpolicy_items->has_data())
	|| (dbgplgch_items !=  nullptr && dbgplgch_items->has_data())
	|| (keyring_items !=  nullptr && keyring_items->has_data())
	|| (tp_items !=  nullptr && tp_items->has_data())
	|| (rtfabricrespkiep_items !=  nullptr && rtfabricrespkiep_items->has_data());
}

bool System::UserextItems::PkiextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (webtokendata_items !=  nullptr && webtokendata_items->has_operation())
	|| (csyncsharedkey_items !=  nullptr && csyncsharedkey_items->has_operation())
	|| (csyncpolicy_items !=  nullptr && csyncpolicy_items->has_operation())
	|| (dbgplgch_items !=  nullptr && dbgplgch_items->has_operation())
	|| (keyring_items !=  nullptr && keyring_items->has_operation())
	|| (tp_items !=  nullptr && tp_items->has_operation())
	|| (rtfabricrespkiep_items !=  nullptr && rtfabricrespkiep_items->has_operation());
}

std::string System::UserextItems::PkiextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkiext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webtokendata-items")
    {
        if(webtokendata_items == nullptr)
        {
            webtokendata_items = std::make_shared<System::UserextItems::PkiextItems::WebtokendataItems>();
        }
        return webtokendata_items;
    }

    if(child_yang_name == "csyncsharedkey-items")
    {
        if(csyncsharedkey_items == nullptr)
        {
            csyncsharedkey_items = std::make_shared<System::UserextItems::PkiextItems::CsyncsharedkeyItems>();
        }
        return csyncsharedkey_items;
    }

    if(child_yang_name == "csyncpolicy-items")
    {
        if(csyncpolicy_items == nullptr)
        {
            csyncpolicy_items = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems>();
        }
        return csyncpolicy_items;
    }

    if(child_yang_name == "dbgplgch-items")
    {
        if(dbgplgch_items == nullptr)
        {
            dbgplgch_items = std::make_shared<System::UserextItems::PkiextItems::DbgplgchItems>();
        }
        return dbgplgch_items;
    }

    if(child_yang_name == "keyring-items")
    {
        if(keyring_items == nullptr)
        {
            keyring_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems>();
        }
        return keyring_items;
    }

    if(child_yang_name == "tp-items")
    {
        if(tp_items == nullptr)
        {
            tp_items = std::make_shared<System::UserextItems::PkiextItems::TpItems>();
        }
        return tp_items;
    }

    if(child_yang_name == "rtfabricResPkiEp-items")
    {
        if(rtfabricrespkiep_items == nullptr)
        {
            rtfabricrespkiep_items = std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems>();
        }
        return rtfabricrespkiep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(webtokendata_items != nullptr)
    {
        children["webtokendata-items"] = webtokendata_items;
    }

    if(csyncsharedkey_items != nullptr)
    {
        children["csyncsharedkey-items"] = csyncsharedkey_items;
    }

    if(csyncpolicy_items != nullptr)
    {
        children["csyncpolicy-items"] = csyncpolicy_items;
    }

    if(dbgplgch_items != nullptr)
    {
        children["dbgplgch-items"] = dbgplgch_items;
    }

    if(keyring_items != nullptr)
    {
        children["keyring-items"] = keyring_items;
    }

    if(tp_items != nullptr)
    {
        children["tp-items"] = tp_items;
    }

    if(rtfabricrespkiep_items != nullptr)
    {
        children["rtfabricResPkiEp-items"] = rtfabricrespkiep_items;
    }

    return children;
}

void System::UserextItems::PkiextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::UserextItems::PkiextItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::UserextItems::PkiextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webtokendata-items" || name == "csyncsharedkey-items" || name == "csyncpolicy-items" || name == "dbgplgch-items" || name == "keyring-items" || name == "tp-items" || name == "rtfabricResPkiEp-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::WebtokendataItems::WebtokendataItems()
    :
    key{YType::str, "key"},
    initializationvector{YType::str, "initializationVector"},
    hashsecret{YType::str, "hashSecret"},
    webtokentimeoutseconds{YType::uint16, "webtokenTimeoutSeconds"},
    maximumvalidityperiod{YType::uint16, "maximumValidityPeriod"},
    uiidletimeoutseconds{YType::uint16, "uiIdleTimeoutSeconds"},
    sessionrecordflags{YType::str, "sessionRecordFlags"},
    sitefingerprint{YType::str, "siteFingerprint"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "webtokendata-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::WebtokendataItems::~WebtokendataItems()
{
}

bool System::UserextItems::PkiextItems::WebtokendataItems::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| initializationvector.is_set
	|| hashsecret.is_set
	|| webtokentimeoutseconds.is_set
	|| maximumvalidityperiod.is_set
	|| uiidletimeoutseconds.is_set
	|| sessionrecordflags.is_set
	|| sitefingerprint.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::WebtokendataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(initializationvector.yfilter)
	|| ydk::is_set(hashsecret.yfilter)
	|| ydk::is_set(webtokentimeoutseconds.yfilter)
	|| ydk::is_set(maximumvalidityperiod.yfilter)
	|| ydk::is_set(uiidletimeoutseconds.yfilter)
	|| ydk::is_set(sessionrecordflags.yfilter)
	|| ydk::is_set(sitefingerprint.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::WebtokendataItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::WebtokendataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webtokendata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::WebtokendataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (initializationvector.is_set || is_set(initializationvector.yfilter)) leaf_name_data.push_back(initializationvector.get_name_leafdata());
    if (hashsecret.is_set || is_set(hashsecret.yfilter)) leaf_name_data.push_back(hashsecret.get_name_leafdata());
    if (webtokentimeoutseconds.is_set || is_set(webtokentimeoutseconds.yfilter)) leaf_name_data.push_back(webtokentimeoutseconds.get_name_leafdata());
    if (maximumvalidityperiod.is_set || is_set(maximumvalidityperiod.yfilter)) leaf_name_data.push_back(maximumvalidityperiod.get_name_leafdata());
    if (uiidletimeoutseconds.is_set || is_set(uiidletimeoutseconds.yfilter)) leaf_name_data.push_back(uiidletimeoutseconds.get_name_leafdata());
    if (sessionrecordflags.is_set || is_set(sessionrecordflags.yfilter)) leaf_name_data.push_back(sessionrecordflags.get_name_leafdata());
    if (sitefingerprint.is_set || is_set(sitefingerprint.yfilter)) leaf_name_data.push_back(sitefingerprint.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::WebtokendataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::WebtokendataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::WebtokendataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializationVector")
    {
        initializationvector = value;
        initializationvector.value_namespace = name_space;
        initializationvector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashSecret")
    {
        hashsecret = value;
        hashsecret.value_namespace = name_space;
        hashsecret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webtokenTimeoutSeconds")
    {
        webtokentimeoutseconds = value;
        webtokentimeoutseconds.value_namespace = name_space;
        webtokentimeoutseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximumValidityPeriod")
    {
        maximumvalidityperiod = value;
        maximumvalidityperiod.value_namespace = name_space;
        maximumvalidityperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uiIdleTimeoutSeconds")
    {
        uiidletimeoutseconds = value;
        uiidletimeoutseconds.value_namespace = name_space;
        uiidletimeoutseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionRecordFlags")
    {
        sessionrecordflags = value;
        sessionrecordflags.value_namespace = name_space;
        sessionrecordflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siteFingerprint")
    {
        sitefingerprint = value;
        sitefingerprint.value_namespace = name_space;
        sitefingerprint.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::WebtokendataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "initializationVector")
    {
        initializationvector.yfilter = yfilter;
    }
    if(value_path == "hashSecret")
    {
        hashsecret.yfilter = yfilter;
    }
    if(value_path == "webtokenTimeoutSeconds")
    {
        webtokentimeoutseconds.yfilter = yfilter;
    }
    if(value_path == "maximumValidityPeriod")
    {
        maximumvalidityperiod.yfilter = yfilter;
    }
    if(value_path == "uiIdleTimeoutSeconds")
    {
        uiidletimeoutseconds.yfilter = yfilter;
    }
    if(value_path == "sessionRecordFlags")
    {
        sessionrecordflags.yfilter = yfilter;
    }
    if(value_path == "siteFingerprint")
    {
        sitefingerprint.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::WebtokendataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "initializationVector" || name == "hashSecret" || name == "webtokenTimeoutSeconds" || name == "maximumValidityPeriod" || name == "uiIdleTimeoutSeconds" || name == "sessionRecordFlags" || name == "siteFingerprint" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncsharedkeyItems::CsyncsharedkeyItems()
    :
    key{YType::str, "key"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "csyncsharedkey-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncsharedkeyItems::~CsyncsharedkeyItems()
{
}

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncsharedkey-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::CsyncsharedkeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::UserextItems::PkiextItems::CsyncsharedkeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncpolicyItems()
    :
    state{YType::enumeration, "state"},
    interval{YType::uint16, "interval"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    csyncelem_items(std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems>())
{
    csyncelem_items->parent = this;

    yang_name = "csyncpolicy-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::~CsyncpolicyItems()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| interval.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (csyncelem_items !=  nullptr && csyncelem_items->has_data());
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (csyncelem_items !=  nullptr && csyncelem_items->has_operation());
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncpolicy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csyncelem-items")
    {
        if(csyncelem_items == nullptr)
        {
            csyncelem_items = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems>();
        }
        return csyncelem_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(csyncelem_items != nullptr)
    {
        children["csyncelem-items"] = csyncelem_items;
    }

    return children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::CsyncpolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csyncelem-items" || name == "state" || name == "interval" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncelemItems()
    :
    csyncelement_list(this, {"name"})
{

    yang_name = "csyncelem-items"; yang_parent_name = "csyncpolicy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::~CsyncelemItems()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csyncelement_list.len(); index++)
    {
        if(csyncelement_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_operation() const
{
    for (std::size_t index=0; index<csyncelement_list.len(); index++)
    {
        if(csyncelement_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/csyncpolicy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncelem-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CsyncElement-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList>();
        c->parent = this;
        csyncelement_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : csyncelement_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CsyncElement-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::CsyncElementList()
    :
    name{YType::str, "name"},
    pattern{YType::str, "pattern"},
    type{YType::enumeration, "type"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "CsyncElement-list"; yang_parent_name = "csyncelem-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::~CsyncElementList()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| pattern.is_set
	|| type.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/csyncpolicy-items/csyncelem-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CsyncElement-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "pattern" || name == "type" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::DbgplgchItems::DbgplgchItems()
    :
    challenge{YType::str, "challenge"},
    oldchallenge{YType::str, "oldChallenge"},
    timegenerated{YType::str, "timeGenerated"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "dbgplgch-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::DbgplgchItems::~DbgplgchItems()
{
}

bool System::UserextItems::PkiextItems::DbgplgchItems::has_data() const
{
    if (is_presence_container) return true;
    return challenge.is_set
	|| oldchallenge.is_set
	|| timegenerated.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::DbgplgchItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(oldchallenge.yfilter)
	|| ydk::is_set(timegenerated.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::DbgplgchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::DbgplgchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgplgch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::DbgplgchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (oldchallenge.is_set || is_set(oldchallenge.yfilter)) leaf_name_data.push_back(oldchallenge.get_name_leafdata());
    if (timegenerated.is_set || is_set(timegenerated.yfilter)) leaf_name_data.push_back(timegenerated.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::DbgplgchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::DbgplgchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::DbgplgchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldChallenge")
    {
        oldchallenge = value;
        oldchallenge.value_namespace = name_space;
        oldchallenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeGenerated")
    {
        timegenerated = value;
        timegenerated.value_namespace = name_space;
        timegenerated.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::DbgplgchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "oldChallenge")
    {
        oldchallenge.yfilter = yfilter;
    }
    if(value_path == "timeGenerated")
    {
        timegenerated.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::DbgplgchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "challenge" || name == "oldChallenge" || name == "timeGenerated" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyringItems()
    :
    keyring_list(this, {"name"})
{

    yang_name = "keyring-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::KeyringItems::~KeyringItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<keyring_list.len(); index++)
    {
        if(keyring_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::has_operation() const
{
    for (std::size_t index=0; index<keyring_list.len(); index++)
    {
        if(keyring_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::KeyringItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "KeyRing-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList>();
        c->parent = this;
        keyring_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : keyring_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "KeyRing-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::KeyRingList()
    :
    name{YType::str, "name"},
    adminstate{YType::enumeration, "adminState"},
    regen{YType::boolean, "regen"},
    key{YType::str, "key"},
    modulus{YType::enumeration, "modulus"},
    cert{YType::str, "cert"},
    certvaliduntil{YType::str, "certValidUntil"},
    certificatedecodeinformation{YType::str, "certificateDecodeInformation"},
    tp{YType::str, "tp"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    certreq_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems>())
    , rtcommkeyring_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems>())
    , rtaaakeyringref_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems>())
{
    certreq_items->parent = this;
    rtcommkeyring_items->parent = this;
    rtaaakeyringref_items->parent = this;

    yang_name = "KeyRing-list"; yang_parent_name = "keyring-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::~KeyRingList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminstate.is_set
	|| regen.is_set
	|| key.is_set
	|| modulus.is_set
	|| cert.is_set
	|| certvaliduntil.is_set
	|| certificatedecodeinformation.is_set
	|| tp.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (certreq_items !=  nullptr && certreq_items->has_data())
	|| (rtcommkeyring_items !=  nullptr && rtcommkeyring_items->has_data())
	|| (rtaaakeyringref_items !=  nullptr && rtaaakeyringref_items->has_data());
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(regen.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(modulus.yfilter)
	|| ydk::is_set(cert.yfilter)
	|| ydk::is_set(certvaliduntil.yfilter)
	|| ydk::is_set(certificatedecodeinformation.yfilter)
	|| ydk::is_set(tp.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (certreq_items !=  nullptr && certreq_items->has_operation())
	|| (rtcommkeyring_items !=  nullptr && rtcommkeyring_items->has_operation())
	|| (rtaaakeyringref_items !=  nullptr && rtaaakeyringref_items->has_operation());
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/keyring-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "KeyRing-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (regen.is_set || is_set(regen.yfilter)) leaf_name_data.push_back(regen.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (modulus.is_set || is_set(modulus.yfilter)) leaf_name_data.push_back(modulus.get_name_leafdata());
    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());
    if (certvaliduntil.is_set || is_set(certvaliduntil.yfilter)) leaf_name_data.push_back(certvaliduntil.get_name_leafdata());
    if (certificatedecodeinformation.is_set || is_set(certificatedecodeinformation.yfilter)) leaf_name_data.push_back(certificatedecodeinformation.get_name_leafdata());
    if (tp.is_set || is_set(tp.yfilter)) leaf_name_data.push_back(tp.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certreq-items")
    {
        if(certreq_items == nullptr)
        {
            certreq_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems>();
        }
        return certreq_items;
    }

    if(child_yang_name == "rtcommKeyRing-items")
    {
        if(rtcommkeyring_items == nullptr)
        {
            rtcommkeyring_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems>();
        }
        return rtcommkeyring_items;
    }

    if(child_yang_name == "rtaaaKeyringRef-items")
    {
        if(rtaaakeyringref_items == nullptr)
        {
            rtaaakeyringref_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems>();
        }
        return rtaaakeyringref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(certreq_items != nullptr)
    {
        children["certreq-items"] = certreq_items;
    }

    if(rtcommkeyring_items != nullptr)
    {
        children["rtcommKeyRing-items"] = rtcommkeyring_items;
    }

    if(rtaaakeyringref_items != nullptr)
    {
        children["rtaaaKeyringRef-items"] = rtaaakeyringref_items;
    }

    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regen")
    {
        regen = value;
        regen.value_namespace = name_space;
        regen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulus")
    {
        modulus = value;
        modulus.value_namespace = name_space;
        modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certValidUntil")
    {
        certvaliduntil = value;
        certvaliduntil.value_namespace = name_space;
        certvaliduntil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation = value;
        certificatedecodeinformation.value_namespace = name_space;
        certificatedecodeinformation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp")
    {
        tp = value;
        tp.value_namespace = name_space;
        tp.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "regen")
    {
        regen.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "modulus")
    {
        modulus.yfilter = yfilter;
    }
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
    if(value_path == "certValidUntil")
    {
        certvaliduntil.yfilter = yfilter;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation.yfilter = yfilter;
    }
    if(value_path == "tp")
    {
        tp.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certreq-items" || name == "rtcommKeyRing-items" || name == "rtaaaKeyringRef-items" || name == "name" || name == "adminState" || name == "regen" || name == "key" || name == "modulus" || name == "cert" || name == "certValidUntil" || name == "certificateDecodeInformation" || name == "tp" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::CertreqItems()
    :
    pwd{YType::str, "pwd"},
    subjname{YType::str, "subjName"},
    email{YType::str, "email"},
    country{YType::str, "country"},
    state{YType::str, "state"},
    locality{YType::str, "locality"},
    orgunitname{YType::str, "orgUnitName"},
    orgname{YType::str, "orgName"},
    req{YType::str, "req"}
{

    yang_name = "certreq-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::~CertreqItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| subjname.is_set
	|| email.is_set
	|| country.is_set
	|| state.is_set
	|| locality.is_set
	|| orgunitname.is_set
	|| orgname.is_set
	|| req.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(subjname.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(locality.yfilter)
	|| ydk::is_set(orgunitname.yfilter)
	|| ydk::is_set(orgname.yfilter)
	|| ydk::is_set(req.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certreq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (subjname.is_set || is_set(subjname.yfilter)) leaf_name_data.push_back(subjname.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (locality.is_set || is_set(locality.yfilter)) leaf_name_data.push_back(locality.get_name_leafdata());
    if (orgunitname.is_set || is_set(orgunitname.yfilter)) leaf_name_data.push_back(orgunitname.get_name_leafdata());
    if (orgname.is_set || is_set(orgname.yfilter)) leaf_name_data.push_back(orgname.get_name_leafdata());
    if (req.is_set || is_set(req.yfilter)) leaf_name_data.push_back(req.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subjName")
    {
        subjname = value;
        subjname.value_namespace = name_space;
        subjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locality")
    {
        locality = value;
        locality.value_namespace = name_space;
        locality.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgUnitName")
    {
        orgunitname = value;
        orgunitname.value_namespace = name_space;
        orgunitname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgName")
    {
        orgname = value;
        orgname.value_namespace = name_space;
        orgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req")
    {
        req = value;
        req.value_namespace = name_space;
        req.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "subjName")
    {
        subjname.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "locality")
    {
        locality.yfilter = yfilter;
    }
    if(value_path == "orgUnitName")
    {
        orgunitname.yfilter = yfilter;
    }
    if(value_path == "orgName")
    {
        orgname.yfilter = yfilter;
    }
    if(value_path == "req")
    {
        req.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "subjName" || name == "email" || name == "country" || name == "state" || name == "locality" || name == "orgUnitName" || name == "orgName" || name == "req")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtcommKeyRingItems()
    :
    rtcommkeyring_list(this, {"tdn"})
{

    yang_name = "rtcommKeyRing-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::~RtcommKeyRingItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtcommkeyring_list.len(); index++)
    {
        if(rtcommkeyring_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_operation() const
{
    for (std::size_t index=0; index<rtcommkeyring_list.len(); index++)
    {
        if(rtcommkeyring_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtcommKeyRing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtCommKeyRing-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList>();
        c->parent = this;
        rtcommkeyring_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtcommkeyring_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtCommKeyRing-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::RtCommKeyRingList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtCommKeyRing-list"; yang_parent_name = "rtcommKeyRing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::~RtCommKeyRingList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtCommKeyRing-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtaaaKeyringRefItems()
    :
    rtaaakeyringref_list(this, {"tdn"})
{

    yang_name = "rtaaaKeyringRef-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::~RtaaaKeyringRefItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaakeyringref_list.len(); index++)
    {
        if(rtaaakeyringref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaakeyringref_list.len(); index++)
    {
        if(rtaaakeyringref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaKeyringRef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaKeyringRef-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList>();
        c->parent = this;
        rtaaakeyringref_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtaaakeyringref_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaKeyringRef-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::RtAaaKeyringRefList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtAaaKeyringRef-list"; yang_parent_name = "rtaaaKeyringRef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::~RtAaaKeyringRefList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaKeyringRef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::PkiextItems::TpItems::TpItems()
    :
    tp_list(this, {"name"})
{

    yang_name = "tp-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::TpItems::~TpItems()
{
}

bool System::UserextItems::PkiextItems::TpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_list.len(); index++)
    {
        if(tp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::TpItems::has_operation() const
{
    for (std::size_t index=0; index<tp_list.len(); index++)
    {
        if(tp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::TpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::TpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::TpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::TpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TP-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::TpItems::TPList>();
        c->parent = this;
        tp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::TpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::TpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::TpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::TpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TP-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::TpItems::TPList::TPList()
    :
    name{YType::str, "name"},
    certchain{YType::str, "certChain"},
    fp{YType::str, "fp"},
    numcerts{YType::uint32, "numCerts"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "TP-list"; yang_parent_name = "tp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::TpItems::TPList::~TPList()
{
}

bool System::UserextItems::PkiextItems::TpItems::TPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| certchain.is_set
	|| fp.is_set
	|| numcerts.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::TpItems::TPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(certchain.yfilter)
	|| ydk::is_set(fp.yfilter)
	|| ydk::is_set(numcerts.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::TpItems::TPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/tp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::TpItems::TPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::TpItems::TPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (certchain.is_set || is_set(certchain.yfilter)) leaf_name_data.push_back(certchain.get_name_leafdata());
    if (fp.is_set || is_set(fp.yfilter)) leaf_name_data.push_back(fp.get_name_leafdata());
    if (numcerts.is_set || is_set(numcerts.yfilter)) leaf_name_data.push_back(numcerts.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::TpItems::TPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::TpItems::TPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::TpItems::TPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certChain")
    {
        certchain = value;
        certchain.value_namespace = name_space;
        certchain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fp")
    {
        fp = value;
        fp.value_namespace = name_space;
        fp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numCerts")
    {
        numcerts = value;
        numcerts.value_namespace = name_space;
        numcerts.value_namespace_prefix = name_space_prefix;
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

void System::UserextItems::PkiextItems::TpItems::TPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "certChain")
    {
        certchain.yfilter = yfilter;
    }
    if(value_path == "fp")
    {
        fp.yfilter = yfilter;
    }
    if(value_path == "numCerts")
    {
        numcerts.yfilter = yfilter;
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

bool System::UserextItems::PkiextItems::TpItems::TPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "certChain" || name == "fp" || name == "numCerts" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtfabricResPkiEpItems()
    :
    rtfabricrespkiep_list(this, {"tdn"})
{

    yang_name = "rtfabricResPkiEp-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::~RtfabricResPkiEpItems()
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricrespkiep_list.len(); index++)
    {
        if(rtfabricrespkiep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricrespkiep_list.len(); index++)
    {
        if(rtfabricrespkiep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResPkiEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResPkiEp-list")
    {
        auto c = std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList>();
        c->parent = this;
        rtfabricrespkiep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricrespkiep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResPkiEp-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::RtFabricResPkiEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResPkiEp-list"; yang_parent_name = "rtfabricResPkiEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::~RtFabricResPkiEpList()
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/rtfabricResPkiEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResPkiEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::RtfabricResUserEpItems::RtfabricResUserEpItems()
    :
    rtfabricresuserep_list(this, {"tdn"})
{

    yang_name = "rtfabricResUserEp-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtfabricResUserEpItems::~RtfabricResUserEpItems()
{
}

bool System::UserextItems::RtfabricResUserEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresuserep_list.len(); index++)
    {
        if(rtfabricresuserep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RtfabricResUserEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresuserep_list.len(); index++)
    {
        if(rtfabricresuserep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RtfabricResUserEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtfabricResUserEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResUserEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtfabricResUserEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RtfabricResUserEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResUserEp-list")
    {
        auto c = std::make_shared<System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList>();
        c->parent = this;
        rtfabricresuserep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RtfabricResUserEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfabricresuserep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RtfabricResUserEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RtfabricResUserEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RtfabricResUserEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResUserEp-list")
        return true;
    return false;
}

System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::RtFabricResUserEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFabricResUserEp-list"; yang_parent_name = "rtfabricResUserEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::~RtFabricResUserEpList()
{
}

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/rtfabricResUserEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResUserEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::UserextItems::RtaaaUserEpItems::RtaaaUserEpItems()
    :
    rtaaauserep_list(this, {"tdn"})
{

    yang_name = "rtaaaUserEp-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtaaaUserEpItems::~RtaaaUserEpItems()
{
}

bool System::UserextItems::RtaaaUserEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaauserep_list.len(); index++)
    {
        if(rtaaauserep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RtaaaUserEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaauserep_list.len(); index++)
    {
        if(rtaaauserep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RtaaaUserEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtaaaUserEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaUserEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtaaaUserEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RtaaaUserEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaUserEp-list")
    {
        auto c = std::make_shared<System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList>();
        c->parent = this;
        rtaaauserep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RtaaaUserEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtaaauserep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::UserextItems::RtaaaUserEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RtaaaUserEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RtaaaUserEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaUserEp-list")
        return true;
    return false;
}

System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::RtAaaUserEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtAaaUserEp-list"; yang_parent_name = "rtaaaUserEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::~RtAaaUserEpList()
{
}

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/rtaaaUserEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaUserEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MockrootItems::MockrootItems()
    :
    disable{YType::boolean, "disable"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    session_items(std::make_shared<System::MockrootItems::SessionItems>())
{
    session_items->parent = this;

    yang_name = "mockroot-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::~MockrootItems()
{
}

bool System::MockrootItems::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (session_items !=  nullptr && session_items->has_data());
}

bool System::MockrootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (session_items !=  nullptr && session_items->has_operation());
}

std::string System::MockrootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mockroot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-items")
    {
        if(session_items == nullptr)
        {
            session_items = std::make_shared<System::MockrootItems::SessionItems>();
        }
        return session_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session_items != nullptr)
    {
        children["session-items"] = session_items;
    }

    return children;
}

void System::MockrootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
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

void System::MockrootItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
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

bool System::MockrootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-items" || name == "disable" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::SessionItems()
    :
    mocksession_list(this, {"name"})
{

    yang_name = "session-items"; yang_parent_name = "mockroot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::SessionItems::~SessionItems()
{
}

bool System::MockrootItems::SessionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mocksession_list.len(); index++)
    {
        if(mocksession_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::has_operation() const
{
    for (std::size_t index=0; index<mocksession_list.len(); index++)
    {
        if(mocksession_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mockroot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::SessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MockSession-list")
    {
        auto c = std::make_shared<System::MockrootItems::SessionItems::MockSessionList>();
        c->parent = this;
        mocksession_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mocksession_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MockrootItems::SessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MockSession-list")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::MockSessionList()
    :
    name{YType::str, "name"},
    observable{YType::str, "observable"},
    duration{YType::uint32, "duration"},
    mode{YType::enumeration, "mode"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    stat_items(std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems>())
{
    stat_items->parent = this;

    yang_name = "MockSession-list"; yang_parent_name = "session-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::SessionItems::MockSessionList::~MockSessionList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| observable.is_set
	|| duration.is_set
	|| mode.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (stat_items !=  nullptr && stat_items->has_data());
}

bool System::MockrootItems::SessionItems::MockSessionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(observable.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (stat_items !=  nullptr && stat_items->has_operation());
}

std::string System::MockrootItems::SessionItems::MockSessionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mockroot-items/session-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::SessionItems::MockSessionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MockSession-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (observable.is_set || is_set(observable.yfilter)) leaf_name_data.push_back(observable.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::MockSessionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stat-items")
    {
        if(stat_items == nullptr)
        {
            stat_items = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems>();
        }
        return stat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::MockSessionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stat_items != nullptr)
    {
        children["stat-items"] = stat_items;
    }

    return children;
}

void System::MockrootItems::SessionItems::MockSessionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observable")
    {
        observable = value;
        observable.value_namespace = name_space;
        observable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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

void System::MockrootItems::SessionItems::MockSessionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "observable")
    {
        observable.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
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

bool System::MockrootItems::SessionItems::MockSessionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stat-items" || name == "name" || name == "observable" || name == "duration" || name == "mode" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatItems()
    :
    stats_list(this, {"namespace_", "statname"})
{

    yang_name = "stat-items"; yang_parent_name = "MockSession-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::~StatItems()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto c = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList>();
        c->parent = this;
        stats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::get_children() const
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

void System::MockrootItems::SessionItems::MockSessionList::StatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::StatsList()
    :
    namespace_{YType::str, "nameSpace"},
    statname{YType::str, "statName"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    counter_items(std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems>())
{
    counter_items->parent = this;

    yang_name = "Stats-list"; yang_parent_name = "stat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::~StatsList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return namespace_.is_set
	|| statname.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (counter_items !=  nullptr && counter_items->has_data());
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(statname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (counter_items !=  nullptr && counter_items->has_operation());
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(namespace_, "nameSpace");
    ADD_KEY_TOKEN(statname, "statName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (statname.is_set || is_set(statname.yfilter)) leaf_name_data.push_back(statname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-items")
    {
        if(counter_items == nullptr)
        {
            counter_items = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems>();
        }
        return counter_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter_items != nullptr)
    {
        children["counter-items"] = counter_items;
    }

    return children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nameSpace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statName")
    {
        statname = value;
        statname.value_namespace = name_space;
        statname.value_namespace_prefix = name_space_prefix;
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

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nameSpace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "statName")
    {
        statname.yfilter = yfilter;
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

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-items" || name == "nameSpace" || name == "statName" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterItems()
    :
    counter_list(this, {"name"})
{

    yang_name = "counter-items"; yang_parent_name = "Stats-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::~CounterItems()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<counter_list.len(); index++)
    {
        if(counter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_operation() const
{
    for (std::size_t index=0; index<counter_list.len(); index++)
    {
        if(counter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Counter-list")
    {
        auto c = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList>();
        c->parent = this;
        counter_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : counter_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Counter-list")
        return true;
    return false;
}


}
}

