
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_41.hpp"
#include "Cisco_NX_OS_device_42.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList>();
        c->parent = this;
        reportrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reportrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        c->parent = this;
        oifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(host_items != nullptr)
    {
        children["host-items"] = host_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        c->parent = this;
        hostrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hostrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QuerierRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList>();
        c->parent = this;
        querierrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : querierrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRtrIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList>();
        c->parent = this;
        strtrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : strtrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtrIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList>();
        c->parent = this;
        rtrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vlan-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList>();
        c->parent = this;
        vlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cktep_items != nullptr)
    {
        children["cktep-items"] = cktep_items;
    }

    if(mcgrp_items != nullptr)
    {
        children["mcgrp-items"] = mcgrp_items;
    }

    if(igmpsnbase_items != nullptr)
    {
        children["igmpsnbase-items"] = igmpsnbase_items;
    }

    if(gtimers_items != nullptr)
    {
        children["gTimers-items"] = gtimers_items;
    }

    if(mrouter_items != nullptr)
    {
        children["mrouter-items"] = mrouter_items;
    }

    if(proxy_items != nullptr)
    {
        children["proxy-items"] = proxy_items;
    }

    if(querierp_items != nullptr)
    {
        children["querierp-items"] = querierp_items;
    }

    if(querierst_items != nullptr)
    {
        children["querierst-items"] = querierst_items;
    }

    if(actrl_items != nullptr)
    {
        children["actrl-items"] = actrl_items;
    }

    if(rpolicy_items != nullptr)
    {
        children["rpolicy-items"] = rpolicy_items;
    }

    return children;
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
    if(name == "cktep-items" || name == "mcgrp-items" || name == "igmpsnbase-items" || name == "gTimers-items" || name == "mrouter-items" || name == "proxy-items" || name == "querierp-items" || name == "querierst-items" || name == "actrl-items" || name == "rpolicy-items" || name == "vlanid")
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList>();
        c->parent = this;
        cktep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StMcGrp-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList>();
        c->parent = this;
        stmcgrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stmcgrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(src_items != nullptr)
    {
        children["src-items"] = src_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McSrc-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList>();
        c->parent = this;
        mcsrc_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcsrc_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    return llgrpsuppr.is_set
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

    if (llgrpsuppr.is_set || is_set(llgrpsuppr.yfilter)) leaf_name_data.push_back(llgrpsuppr.get_name_leafdata());
    if (reportsuppr.is_set || is_set(reportsuppr.yfilter)) leaf_name_data.push_back(reportsuppr.get_name_leafdata());
    if (v3reportsuppr.is_set || is_set(v3reportsuppr.yfilter)) leaf_name_data.push_back(v3reportsuppr.get_name_leafdata());
    if (exptracking.is_set || is_set(exptracking.yfilter)) leaf_name_data.push_back(exptracking.get_name_leafdata());
    if (igmpsnoop.is_set || is_set(igmpsnoop.yfilter)) leaf_name_data.push_back(igmpsnoop.get_name_leafdata());
    if (minver.is_set || is_set(minver.yfilter)) leaf_name_data.push_back(minver.get_name_leafdata());
    if (maxgrp.is_set || is_set(maxgrp.yfilter)) leaf_name_data.push_back(maxgrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(name == "llGrpSuppr" || name == "reportSuppr" || name == "v3ReportSuppr" || name == "expTracking" || name == "igmpSnoop" || name == "minVer" || name == "maxGrp")
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(mif_items != nullptr)
    {
        children["mif-items"] = mif_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    intf{YType::str, "intf"},
    vsi{YType::boolean, "vsi"}
{

    yang_name = "mif-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::~MifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| vsi.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(vsi.yfilter);
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

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPolicy-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList>();
        c->parent = this;
        rpolicy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpolicy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BD-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList>();
        c->parent = this;
        bd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::BdItems::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eventhist_items != nullptr)
    {
        children["eventHist-items"] = eventhist_items;
    }

    if(igmpsnbase_items != nullptr)
    {
        children["igmpsnbase-items"] = igmpsnbase_items;
    }

    if(mctraf_items != nullptr)
    {
        children["mctraf-items"] = mctraf_items;
    }

    if(gtimers_items != nullptr)
    {
        children["gTimers-items"] = gtimers_items;
    }

    if(gvlan_items != nullptr)
    {
        children["gvlan-items"] = gvlan_items;
    }

    if(gdebug_items != nullptr)
    {
        children["gdebug-items"] = gdebug_items;
    }

    if(mrouter_items != nullptr)
    {
        children["mrouter-items"] = mrouter_items;
    }

    if(proxy_items != nullptr)
    {
        children["proxy-items"] = proxy_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList>();
        c->parent = this;
        eventhistory_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::get_children() const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    return llgrpsuppr.is_set
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

    if (llgrpsuppr.is_set || is_set(llgrpsuppr.yfilter)) leaf_name_data.push_back(llgrpsuppr.get_name_leafdata());
    if (reportsuppr.is_set || is_set(reportsuppr.yfilter)) leaf_name_data.push_back(reportsuppr.get_name_leafdata());
    if (v3reportsuppr.is_set || is_set(v3reportsuppr.yfilter)) leaf_name_data.push_back(v3reportsuppr.get_name_leafdata());
    if (exptracking.is_set || is_set(exptracking.yfilter)) leaf_name_data.push_back(exptracking.get_name_leafdata());
    if (igmpsnoop.is_set || is_set(igmpsnoop.yfilter)) leaf_name_data.push_back(igmpsnoop.get_name_leafdata());
    if (minver.is_set || is_set(minver.yfilter)) leaf_name_data.push_back(minver.get_name_leafdata());
    if (maxgrp.is_set || is_set(maxgrp.yfilter)) leaf_name_data.push_back(maxgrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(name == "llGrpSuppr" || name == "reportSuppr" || name == "v3ReportSuppr" || name == "expTracking" || name == "igmpSnoop" || name == "minVer" || name == "maxGrp")
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(mif_items != nullptr)
    {
        children["mif-items"] = mif_items;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TgtIf-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList>();
        c->parent = this;
        tgtif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tgtif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    intf{YType::str, "intf"},
    vsi{YType::boolean, "vsi"}
{

    yang_name = "mif-items"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::~MifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set
	|| vsi.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(vsi.yfilter);
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

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (vsi.is_set || is_set(vsi.yfilter)) leaf_name_data.push_back(vsi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::has_leaf_or_child_of_name(const std::string & name) const
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

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    pktsrcvd{YType::uint32, "pktsRcvd"},
    invpktsrcvd{YType::uint32, "invPktsRcvd"},
    lpbkpktsrcvd{YType::uint32, "lpbkPktsRcvd"},
    pktsflooded{YType::uint32, "pktsFlooded"},
    mrdlpbkpktsrcvd{YType::uint32, "mrdLpbkPktsRcvd"},
    novlandbpktsrcvd{YType::uint32, "noVlanDbPktsRcvd"},
    vpczmqpktssent{YType::uint32, "vpcZmqPktsSent"},
    vpczmqpktsrcvd{YType::uint32, "vpcZmqPktsRcvd"},
    vpczmqpktssentfail{YType::uint32, "vpcZmqPktsSentFail"},
    vpczmqpktsrcvdfail{YType::uint32, "vpcZmqPktsRcvdFail"},
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
	|| pktsrcvd.is_set
	|| invpktsrcvd.is_set
	|| lpbkpktsrcvd.is_set
	|| pktsflooded.is_set
	|| mrdlpbkpktsrcvd.is_set
	|| novlandbpktsrcvd.is_set
	|| vpczmqpktssent.is_set
	|| vpczmqpktsrcvd.is_set
	|| vpczmqpktssentfail.is_set
	|| vpczmqpktsrcvdfail.is_set
	|| vpcpeerpktssent.is_set
	|| vpcpeerpktsrcvd.is_set
	|| vpcpeerpktssentfail.is_set
	|| vpcpeerpktsrcvdfail.is_set;
}

bool System::IgmpsnoopItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totnummcgrp.yfilter)
	|| ydk::is_set(pktsrcvd.yfilter)
	|| ydk::is_set(invpktsrcvd.yfilter)
	|| ydk::is_set(lpbkpktsrcvd.yfilter)
	|| ydk::is_set(pktsflooded.yfilter)
	|| ydk::is_set(mrdlpbkpktsrcvd.yfilter)
	|| ydk::is_set(novlandbpktsrcvd.yfilter)
	|| ydk::is_set(vpczmqpktssent.yfilter)
	|| ydk::is_set(vpczmqpktsrcvd.yfilter)
	|| ydk::is_set(vpczmqpktssentfail.yfilter)
	|| ydk::is_set(vpczmqpktsrcvdfail.yfilter)
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
    if (pktsrcvd.is_set || is_set(pktsrcvd.yfilter)) leaf_name_data.push_back(pktsrcvd.get_name_leafdata());
    if (invpktsrcvd.is_set || is_set(invpktsrcvd.yfilter)) leaf_name_data.push_back(invpktsrcvd.get_name_leafdata());
    if (lpbkpktsrcvd.is_set || is_set(lpbkpktsrcvd.yfilter)) leaf_name_data.push_back(lpbkpktsrcvd.get_name_leafdata());
    if (pktsflooded.is_set || is_set(pktsflooded.yfilter)) leaf_name_data.push_back(pktsflooded.get_name_leafdata());
    if (mrdlpbkpktsrcvd.is_set || is_set(mrdlpbkpktsrcvd.yfilter)) leaf_name_data.push_back(mrdlpbkpktsrcvd.get_name_leafdata());
    if (novlandbpktsrcvd.is_set || is_set(novlandbpktsrcvd.yfilter)) leaf_name_data.push_back(novlandbpktsrcvd.get_name_leafdata());
    if (vpczmqpktssent.is_set || is_set(vpczmqpktssent.yfilter)) leaf_name_data.push_back(vpczmqpktssent.get_name_leafdata());
    if (vpczmqpktsrcvd.is_set || is_set(vpczmqpktsrcvd.yfilter)) leaf_name_data.push_back(vpczmqpktsrcvd.get_name_leafdata());
    if (vpczmqpktssentfail.is_set || is_set(vpczmqpktssentfail.yfilter)) leaf_name_data.push_back(vpczmqpktssentfail.get_name_leafdata());
    if (vpczmqpktsrcvdfail.is_set || is_set(vpczmqpktsrcvdfail.yfilter)) leaf_name_data.push_back(vpczmqpktsrcvdfail.get_name_leafdata());
    if (vpcpeerpktssent.is_set || is_set(vpcpeerpktssent.yfilter)) leaf_name_data.push_back(vpcpeerpktssent.get_name_leafdata());
    if (vpcpeerpktsrcvd.is_set || is_set(vpcpeerpktsrcvd.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvd.get_name_leafdata());
    if (vpcpeerpktssentfail.is_set || is_set(vpcpeerpktssentfail.yfilter)) leaf_name_data.push_back(vpcpeerpktssentfail.get_name_leafdata());
    if (vpcpeerpktsrcvdfail.is_set || is_set(vpcpeerpktsrcvdfail.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvdfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totNumMcGrp")
    {
        totnummcgrp = value;
        totnummcgrp.value_namespace = name_space;
        totnummcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsRcvd")
    {
        pktsrcvd = value;
        pktsrcvd.value_namespace = name_space;
        pktsrcvd.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcZmqPktsSent")
    {
        vpczmqpktssent = value;
        vpczmqpktssent.value_namespace = name_space;
        vpczmqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsRcvd")
    {
        vpczmqpktsrcvd = value;
        vpczmqpktsrcvd.value_namespace = name_space;
        vpczmqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsSentFail")
    {
        vpczmqpktssentfail = value;
        vpczmqpktssentfail.value_namespace = name_space;
        vpczmqpktssentfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsRcvdFail")
    {
        vpczmqpktsrcvdfail = value;
        vpczmqpktsrcvdfail.value_namespace = name_space;
        vpczmqpktsrcvdfail.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pktsRcvd")
    {
        pktsrcvd.yfilter = yfilter;
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
    if(value_path == "vpcZmqPktsSent")
    {
        vpczmqpktssent.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsRcvd")
    {
        vpczmqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsSentFail")
    {
        vpczmqpktssentfail.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsRcvdFail")
    {
        vpczmqpktsrcvdfail.yfilter = yfilter;
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
    if(name == "totNumMcGrp" || name == "pktsRcvd" || name == "invPktsRcvd" || name == "lpbkPktsRcvd" || name == "pktsFlooded" || name == "mrdLpbkPktsRcvd" || name == "noVlanDbPktsRcvd" || name == "vpcZmqPktsSent" || name == "vpcZmqPktsRcvd" || name == "vpcZmqPktsSentFail" || name == "vpcZmqPktsRcvdFail" || name == "vpcPeerPktsSent" || name == "vpcPeerPktsRcvd" || name == "vpcPeerPktsSentFail" || name == "vpcPeerPktsRcvdFail")
        return true;
    return false;
}

System::MacsecItems::MacsecItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::MacsecItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "macsec-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::~MacsecItems()
{
}

bool System::MacsecItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MacsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MacsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MacsecItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::MacsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::MacsecItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::MacsecItems::InstItems::IfItems>())
    , policies_items(std::make_shared<System::MacsecItems::InstItems::PoliciesItems>())
    , globalstats_items(std::make_shared<System::MacsecItems::InstItems::GlobalstatsItems>())
{
    if_items->parent = this;
    policies_items->parent = this;
    globalstats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "macsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::~InstItems()
{
}

bool System::MacsecItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (policies_items !=  nullptr && policies_items->has_data())
	|| (globalstats_items !=  nullptr && globalstats_items->has_data());
}

bool System::MacsecItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (policies_items !=  nullptr && policies_items->has_operation())
	|| (globalstats_items !=  nullptr && globalstats_items->has_operation());
}

std::string System::MacsecItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::MacsecItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "policies-items")
    {
        if(policies_items == nullptr)
        {
            policies_items = std::make_shared<System::MacsecItems::InstItems::PoliciesItems>();
        }
        return policies_items;
    }

    if(child_yang_name == "globalstats-items")
    {
        if(globalstats_items == nullptr)
        {
            globalstats_items = std::make_shared<System::MacsecItems::InstItems::GlobalstatsItems>();
        }
        return globalstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(policies_items != nullptr)
    {
        children["policies-items"] = policies_items;
    }

    if(globalstats_items != nullptr)
    {
        children["globalstats-items"] = globalstats_items;
    }

    return children;
}

void System::MacsecItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "policies-items" || name == "globalstats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::IfItems::~IfItems()
{
}

bool System::MacsecItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacsecItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::get_children() const
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

void System::MacsecItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacsecItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacsecItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    keychainname{YType::str, "keychainName"},
    policyname{YType::str, "policyName"},
    fallbackkeychainname{YType::str, "fallbackKeychainName"},
    sessionst{YType::enumeration, "sessionSt"},
    iskeyserver{YType::enumeration, "isKeyServer"},
    keysvrprio{YType::uint8, "keySvrPrio"},
    ciphersuiteoper{YType::enumeration, "cipherSuiteOper"},
    confoffsetoper{YType::enumeration, "confOffsetOper"},
    txsci{YType::uint64, "txSCI"}
        ,
    castats_items(std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::CastatsItems>())
    , ifstats_items(std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    castats_items->parent = this;
    ifstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| keychainname.is_set
	|| policyname.is_set
	|| fallbackkeychainname.is_set
	|| sessionst.is_set
	|| iskeyserver.is_set
	|| keysvrprio.is_set
	|| ciphersuiteoper.is_set
	|| confoffsetoper.is_set
	|| txsci.is_set
	|| (castats_items !=  nullptr && castats_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MacsecItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(keychainname.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(fallbackkeychainname.yfilter)
	|| ydk::is_set(sessionst.yfilter)
	|| ydk::is_set(iskeyserver.yfilter)
	|| ydk::is_set(keysvrprio.yfilter)
	|| ydk::is_set(ciphersuiteoper.yfilter)
	|| ydk::is_set(confoffsetoper.yfilter)
	|| ydk::is_set(txsci.yfilter)
	|| (castats_items !=  nullptr && castats_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MacsecItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (keychainname.is_set || is_set(keychainname.yfilter)) leaf_name_data.push_back(keychainname.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (fallbackkeychainname.is_set || is_set(fallbackkeychainname.yfilter)) leaf_name_data.push_back(fallbackkeychainname.get_name_leafdata());
    if (sessionst.is_set || is_set(sessionst.yfilter)) leaf_name_data.push_back(sessionst.get_name_leafdata());
    if (iskeyserver.is_set || is_set(iskeyserver.yfilter)) leaf_name_data.push_back(iskeyserver.get_name_leafdata());
    if (keysvrprio.is_set || is_set(keysvrprio.yfilter)) leaf_name_data.push_back(keysvrprio.get_name_leafdata());
    if (ciphersuiteoper.is_set || is_set(ciphersuiteoper.yfilter)) leaf_name_data.push_back(ciphersuiteoper.get_name_leafdata());
    if (confoffsetoper.is_set || is_set(confoffsetoper.yfilter)) leaf_name_data.push_back(confoffsetoper.get_name_leafdata());
    if (txsci.is_set || is_set(txsci.yfilter)) leaf_name_data.push_back(txsci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "castats-items")
    {
        if(castats_items == nullptr)
        {
            castats_items = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::CastatsItems>();
        }
        return castats_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(castats_items != nullptr)
    {
        children["castats-items"] = castats_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
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

void System::MacsecItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "keychainName")
    {
        keychainname = value;
        keychainname.value_namespace = name_space;
        keychainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallbackKeychainName")
    {
        fallbackkeychainname = value;
        fallbackkeychainname.value_namespace = name_space;
        fallbackkeychainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionSt")
    {
        sessionst = value;
        sessionst.value_namespace = name_space;
        sessionst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isKeyServer")
    {
        iskeyserver = value;
        iskeyserver.value_namespace = name_space;
        iskeyserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySvrPrio")
    {
        keysvrprio = value;
        keysvrprio.value_namespace = name_space;
        keysvrprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipherSuiteOper")
    {
        ciphersuiteoper = value;
        ciphersuiteoper.value_namespace = name_space;
        ciphersuiteoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confOffsetOper")
    {
        confoffsetoper = value;
        confoffsetoper.value_namespace = name_space;
        confoffsetoper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txSCI")
    {
        txsci = value;
        txsci.value_namespace = name_space;
        txsci.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacsecItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "keychainName")
    {
        keychainname.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "fallbackKeychainName")
    {
        fallbackkeychainname.yfilter = yfilter;
    }
    if(value_path == "sessionSt")
    {
        sessionst.yfilter = yfilter;
    }
    if(value_path == "isKeyServer")
    {
        iskeyserver.yfilter = yfilter;
    }
    if(value_path == "keySvrPrio")
    {
        keysvrprio.yfilter = yfilter;
    }
    if(value_path == "cipherSuiteOper")
    {
        ciphersuiteoper.yfilter = yfilter;
    }
    if(value_path == "confOffsetOper")
    {
        confoffsetoper.yfilter = yfilter;
    }
    if(value_path == "txSCI")
    {
        txsci.yfilter = yfilter;
    }
}

bool System::MacsecItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "castats-items" || name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "keychainName" || name == "policyName" || name == "fallbackKeychainName" || name == "sessionSt" || name == "isKeyServer" || name == "keySvrPrio" || name == "cipherSuiteOper" || name == "confOffsetOper" || name == "txSCI")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::CastatsItems()
    :
    krekeys{YType::uint64, "kRekeys"},
    saksgen{YType::uint64, "saksGen"},
    saksrekeyed{YType::uint64, "saksRekeyed"},
    saksrx{YType::uint64, "saksRx"},
    sakresprx{YType::uint64, "sakRespRx"},
    mkpdutx{YType::uint64, "mkpduTx"},
    mkpdutxdistsak{YType::uint64, "mkpduTxDistSak"},
    mkpdurx{YType::uint64, "mkpduRx"},
    mkpdurxdistsak{YType::uint64, "mkpduRxDistSak"},
    ickdervfail{YType::uint64, "ickDervFail"},
    kekdervfail{YType::uint64, "kekDervFail"},
    invalidpeercpbl{YType::uint64, "invalidPeerCpbl"}
{

    yang_name = "castats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::~CastatsItems()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return krekeys.is_set
	|| saksgen.is_set
	|| saksrekeyed.is_set
	|| saksrx.is_set
	|| sakresprx.is_set
	|| mkpdutx.is_set
	|| mkpdutxdistsak.is_set
	|| mkpdurx.is_set
	|| mkpdurxdistsak.is_set
	|| ickdervfail.is_set
	|| kekdervfail.is_set
	|| invalidpeercpbl.is_set;
}

bool System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(krekeys.yfilter)
	|| ydk::is_set(saksgen.yfilter)
	|| ydk::is_set(saksrekeyed.yfilter)
	|| ydk::is_set(saksrx.yfilter)
	|| ydk::is_set(sakresprx.yfilter)
	|| ydk::is_set(mkpdutx.yfilter)
	|| ydk::is_set(mkpdutxdistsak.yfilter)
	|| ydk::is_set(mkpdurx.yfilter)
	|| ydk::is_set(mkpdurxdistsak.yfilter)
	|| ydk::is_set(ickdervfail.yfilter)
	|| ydk::is_set(kekdervfail.yfilter)
	|| ydk::is_set(invalidpeercpbl.yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "castats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (krekeys.is_set || is_set(krekeys.yfilter)) leaf_name_data.push_back(krekeys.get_name_leafdata());
    if (saksgen.is_set || is_set(saksgen.yfilter)) leaf_name_data.push_back(saksgen.get_name_leafdata());
    if (saksrekeyed.is_set || is_set(saksrekeyed.yfilter)) leaf_name_data.push_back(saksrekeyed.get_name_leafdata());
    if (saksrx.is_set || is_set(saksrx.yfilter)) leaf_name_data.push_back(saksrx.get_name_leafdata());
    if (sakresprx.is_set || is_set(sakresprx.yfilter)) leaf_name_data.push_back(sakresprx.get_name_leafdata());
    if (mkpdutx.is_set || is_set(mkpdutx.yfilter)) leaf_name_data.push_back(mkpdutx.get_name_leafdata());
    if (mkpdutxdistsak.is_set || is_set(mkpdutxdistsak.yfilter)) leaf_name_data.push_back(mkpdutxdistsak.get_name_leafdata());
    if (mkpdurx.is_set || is_set(mkpdurx.yfilter)) leaf_name_data.push_back(mkpdurx.get_name_leafdata());
    if (mkpdurxdistsak.is_set || is_set(mkpdurxdistsak.yfilter)) leaf_name_data.push_back(mkpdurxdistsak.get_name_leafdata());
    if (ickdervfail.is_set || is_set(ickdervfail.yfilter)) leaf_name_data.push_back(ickdervfail.get_name_leafdata());
    if (kekdervfail.is_set || is_set(kekdervfail.yfilter)) leaf_name_data.push_back(kekdervfail.get_name_leafdata());
    if (invalidpeercpbl.is_set || is_set(invalidpeercpbl.yfilter)) leaf_name_data.push_back(invalidpeercpbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kRekeys")
    {
        krekeys = value;
        krekeys.value_namespace = name_space;
        krekeys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saksGen")
    {
        saksgen = value;
        saksgen.value_namespace = name_space;
        saksgen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saksRekeyed")
    {
        saksrekeyed = value;
        saksrekeyed.value_namespace = name_space;
        saksrekeyed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saksRx")
    {
        saksrx = value;
        saksrx.value_namespace = name_space;
        saksrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakRespRx")
    {
        sakresprx = value;
        sakresprx.value_namespace = name_space;
        sakresprx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduTx")
    {
        mkpdutx = value;
        mkpdutx.value_namespace = name_space;
        mkpdutx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduTxDistSak")
    {
        mkpdutxdistsak = value;
        mkpdutxdistsak.value_namespace = name_space;
        mkpdutxdistsak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRx")
    {
        mkpdurx = value;
        mkpdurx.value_namespace = name_space;
        mkpdurx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxDistSak")
    {
        mkpdurxdistsak = value;
        mkpdurxdistsak.value_namespace = name_space;
        mkpdurxdistsak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ickDervFail")
    {
        ickdervfail = value;
        ickdervfail.value_namespace = name_space;
        ickdervfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kekDervFail")
    {
        kekdervfail = value;
        kekdervfail.value_namespace = name_space;
        kekdervfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPeerCpbl")
    {
        invalidpeercpbl = value;
        invalidpeercpbl.value_namespace = name_space;
        invalidpeercpbl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kRekeys")
    {
        krekeys.yfilter = yfilter;
    }
    if(value_path == "saksGen")
    {
        saksgen.yfilter = yfilter;
    }
    if(value_path == "saksRekeyed")
    {
        saksrekeyed.yfilter = yfilter;
    }
    if(value_path == "saksRx")
    {
        saksrx.yfilter = yfilter;
    }
    if(value_path == "sakRespRx")
    {
        sakresprx.yfilter = yfilter;
    }
    if(value_path == "mkpduTx")
    {
        mkpdutx.yfilter = yfilter;
    }
    if(value_path == "mkpduTxDistSak")
    {
        mkpdutxdistsak.yfilter = yfilter;
    }
    if(value_path == "mkpduRx")
    {
        mkpdurx.yfilter = yfilter;
    }
    if(value_path == "mkpduRxDistSak")
    {
        mkpdurxdistsak.yfilter = yfilter;
    }
    if(value_path == "ickDervFail")
    {
        ickdervfail.yfilter = yfilter;
    }
    if(value_path == "kekDervFail")
    {
        kekdervfail.yfilter = yfilter;
    }
    if(value_path == "invalidPeerCpbl")
    {
        invalidpeercpbl.yfilter = yfilter;
    }
}

bool System::MacsecItems::InstItems::IfItems::IfList::CastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kRekeys" || name == "saksGen" || name == "saksRekeyed" || name == "saksRx" || name == "sakRespRx" || name == "mkpduTx" || name == "mkpduTxDistSak" || name == "mkpduRx" || name == "mkpduRxDistSak" || name == "ickDervFail" || name == "kekDervFail" || name == "invalidPeerCpbl")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    mkpdutxsucc{YType::uint64, "mkpduTxSucc"},
    mkpdutxpktbldfail{YType::uint64, "mkpduTxPktBldFail"},
    mkpdunotxifdn{YType::uint64, "mkpduNoTxIfDn"},
    mkpdunorxifdn{YType::uint64, "mkpduNoRxIfDn"},
    mkpdurxcanotfnd{YType::uint64, "mkpduRxCANotFnd"},
    mkpdurxerr{YType::uint64, "mkpduRxErr"},
    mkpdurxsucc{YType::uint64, "mkpduRxSucc"},
    mkpduethermismatch{YType::uint64, "mkpduEtherMismatch"},
    mkpdutxfail{YType::uint64, "mkpduTxFail"},
    invalidmkpdurx{YType::uint64, "invalidMkpduRx"},
    mkpdurxbadpeermn{YType::uint64, "mkpduRxBadPeerMN"},
    mkpdurxnrplistmn{YType::uint64, "mkpduRxNRPListMN"},
    rxsakknmismatch{YType::uint64, "rxSakKNMismatch"},
    rxsakrxnotset{YType::uint64, "rxSakRxNotSet"},
    rxsakkeymimismatch{YType::uint64, "rxSakKeyMIMismatch"},
    rxsakannotinuse{YType::uint64, "rxSakANNotInUse"},
    rxsakksrxtxnotset{YType::uint64, "rxSakKsRxTxNotSet"},
    sakgenfail{YType::uint64, "sakGenFail"},
    sakhashkeygenfail{YType::uint64, "sakHashKeyGenFail"},
    sakencryptfail{YType::uint64, "sakEncryptFail"},
    sakdecryptfail{YType::uint64, "sakDecryptFail"},
    macsecrxsainstallfail{YType::uint64, "macsecRxSaInstallFail"},
    macsectxsainstallfail{YType::uint64, "macsecTxSaInstallFail"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return mkpdutxsucc.is_set
	|| mkpdutxpktbldfail.is_set
	|| mkpdunotxifdn.is_set
	|| mkpdunorxifdn.is_set
	|| mkpdurxcanotfnd.is_set
	|| mkpdurxerr.is_set
	|| mkpdurxsucc.is_set
	|| mkpduethermismatch.is_set
	|| mkpdutxfail.is_set
	|| invalidmkpdurx.is_set
	|| mkpdurxbadpeermn.is_set
	|| mkpdurxnrplistmn.is_set
	|| rxsakknmismatch.is_set
	|| rxsakrxnotset.is_set
	|| rxsakkeymimismatch.is_set
	|| rxsakannotinuse.is_set
	|| rxsakksrxtxnotset.is_set
	|| sakgenfail.is_set
	|| sakhashkeygenfail.is_set
	|| sakencryptfail.is_set
	|| sakdecryptfail.is_set
	|| macsecrxsainstallfail.is_set
	|| macsectxsainstallfail.is_set;
}

bool System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mkpdutxsucc.yfilter)
	|| ydk::is_set(mkpdutxpktbldfail.yfilter)
	|| ydk::is_set(mkpdunotxifdn.yfilter)
	|| ydk::is_set(mkpdunorxifdn.yfilter)
	|| ydk::is_set(mkpdurxcanotfnd.yfilter)
	|| ydk::is_set(mkpdurxerr.yfilter)
	|| ydk::is_set(mkpdurxsucc.yfilter)
	|| ydk::is_set(mkpduethermismatch.yfilter)
	|| ydk::is_set(mkpdutxfail.yfilter)
	|| ydk::is_set(invalidmkpdurx.yfilter)
	|| ydk::is_set(mkpdurxbadpeermn.yfilter)
	|| ydk::is_set(mkpdurxnrplistmn.yfilter)
	|| ydk::is_set(rxsakknmismatch.yfilter)
	|| ydk::is_set(rxsakrxnotset.yfilter)
	|| ydk::is_set(rxsakkeymimismatch.yfilter)
	|| ydk::is_set(rxsakannotinuse.yfilter)
	|| ydk::is_set(rxsakksrxtxnotset.yfilter)
	|| ydk::is_set(sakgenfail.yfilter)
	|| ydk::is_set(sakhashkeygenfail.yfilter)
	|| ydk::is_set(sakencryptfail.yfilter)
	|| ydk::is_set(sakdecryptfail.yfilter)
	|| ydk::is_set(macsecrxsainstallfail.yfilter)
	|| ydk::is_set(macsectxsainstallfail.yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mkpdutxsucc.is_set || is_set(mkpdutxsucc.yfilter)) leaf_name_data.push_back(mkpdutxsucc.get_name_leafdata());
    if (mkpdutxpktbldfail.is_set || is_set(mkpdutxpktbldfail.yfilter)) leaf_name_data.push_back(mkpdutxpktbldfail.get_name_leafdata());
    if (mkpdunotxifdn.is_set || is_set(mkpdunotxifdn.yfilter)) leaf_name_data.push_back(mkpdunotxifdn.get_name_leafdata());
    if (mkpdunorxifdn.is_set || is_set(mkpdunorxifdn.yfilter)) leaf_name_data.push_back(mkpdunorxifdn.get_name_leafdata());
    if (mkpdurxcanotfnd.is_set || is_set(mkpdurxcanotfnd.yfilter)) leaf_name_data.push_back(mkpdurxcanotfnd.get_name_leafdata());
    if (mkpdurxerr.is_set || is_set(mkpdurxerr.yfilter)) leaf_name_data.push_back(mkpdurxerr.get_name_leafdata());
    if (mkpdurxsucc.is_set || is_set(mkpdurxsucc.yfilter)) leaf_name_data.push_back(mkpdurxsucc.get_name_leafdata());
    if (mkpduethermismatch.is_set || is_set(mkpduethermismatch.yfilter)) leaf_name_data.push_back(mkpduethermismatch.get_name_leafdata());
    if (mkpdutxfail.is_set || is_set(mkpdutxfail.yfilter)) leaf_name_data.push_back(mkpdutxfail.get_name_leafdata());
    if (invalidmkpdurx.is_set || is_set(invalidmkpdurx.yfilter)) leaf_name_data.push_back(invalidmkpdurx.get_name_leafdata());
    if (mkpdurxbadpeermn.is_set || is_set(mkpdurxbadpeermn.yfilter)) leaf_name_data.push_back(mkpdurxbadpeermn.get_name_leafdata());
    if (mkpdurxnrplistmn.is_set || is_set(mkpdurxnrplistmn.yfilter)) leaf_name_data.push_back(mkpdurxnrplistmn.get_name_leafdata());
    if (rxsakknmismatch.is_set || is_set(rxsakknmismatch.yfilter)) leaf_name_data.push_back(rxsakknmismatch.get_name_leafdata());
    if (rxsakrxnotset.is_set || is_set(rxsakrxnotset.yfilter)) leaf_name_data.push_back(rxsakrxnotset.get_name_leafdata());
    if (rxsakkeymimismatch.is_set || is_set(rxsakkeymimismatch.yfilter)) leaf_name_data.push_back(rxsakkeymimismatch.get_name_leafdata());
    if (rxsakannotinuse.is_set || is_set(rxsakannotinuse.yfilter)) leaf_name_data.push_back(rxsakannotinuse.get_name_leafdata());
    if (rxsakksrxtxnotset.is_set || is_set(rxsakksrxtxnotset.yfilter)) leaf_name_data.push_back(rxsakksrxtxnotset.get_name_leafdata());
    if (sakgenfail.is_set || is_set(sakgenfail.yfilter)) leaf_name_data.push_back(sakgenfail.get_name_leafdata());
    if (sakhashkeygenfail.is_set || is_set(sakhashkeygenfail.yfilter)) leaf_name_data.push_back(sakhashkeygenfail.get_name_leafdata());
    if (sakencryptfail.is_set || is_set(sakencryptfail.yfilter)) leaf_name_data.push_back(sakencryptfail.get_name_leafdata());
    if (sakdecryptfail.is_set || is_set(sakdecryptfail.yfilter)) leaf_name_data.push_back(sakdecryptfail.get_name_leafdata());
    if (macsecrxsainstallfail.is_set || is_set(macsecrxsainstallfail.yfilter)) leaf_name_data.push_back(macsecrxsainstallfail.get_name_leafdata());
    if (macsectxsainstallfail.is_set || is_set(macsectxsainstallfail.yfilter)) leaf_name_data.push_back(macsectxsainstallfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mkpduTxSucc")
    {
        mkpdutxsucc = value;
        mkpdutxsucc.value_namespace = name_space;
        mkpdutxsucc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduTxPktBldFail")
    {
        mkpdutxpktbldfail = value;
        mkpdutxpktbldfail.value_namespace = name_space;
        mkpdutxpktbldfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduNoTxIfDn")
    {
        mkpdunotxifdn = value;
        mkpdunotxifdn.value_namespace = name_space;
        mkpdunotxifdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduNoRxIfDn")
    {
        mkpdunorxifdn = value;
        mkpdunorxifdn.value_namespace = name_space;
        mkpdunorxifdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxCANotFnd")
    {
        mkpdurxcanotfnd = value;
        mkpdurxcanotfnd.value_namespace = name_space;
        mkpdurxcanotfnd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxErr")
    {
        mkpdurxerr = value;
        mkpdurxerr.value_namespace = name_space;
        mkpdurxerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxSucc")
    {
        mkpdurxsucc = value;
        mkpdurxsucc.value_namespace = name_space;
        mkpdurxsucc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduEtherMismatch")
    {
        mkpduethermismatch = value;
        mkpduethermismatch.value_namespace = name_space;
        mkpduethermismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduTxFail")
    {
        mkpdutxfail = value;
        mkpdutxfail.value_namespace = name_space;
        mkpdutxfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidMkpduRx")
    {
        invalidmkpdurx = value;
        invalidmkpdurx.value_namespace = name_space;
        invalidmkpdurx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxBadPeerMN")
    {
        mkpdurxbadpeermn = value;
        mkpdurxbadpeermn.value_namespace = name_space;
        mkpdurxbadpeermn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mkpduRxNRPListMN")
    {
        mkpdurxnrplistmn = value;
        mkpdurxnrplistmn.value_namespace = name_space;
        mkpdurxnrplistmn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSakKNMismatch")
    {
        rxsakknmismatch = value;
        rxsakknmismatch.value_namespace = name_space;
        rxsakknmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSakRxNotSet")
    {
        rxsakrxnotset = value;
        rxsakrxnotset.value_namespace = name_space;
        rxsakrxnotset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSakKeyMIMismatch")
    {
        rxsakkeymimismatch = value;
        rxsakkeymimismatch.value_namespace = name_space;
        rxsakkeymimismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSakANNotInUse")
    {
        rxsakannotinuse = value;
        rxsakannotinuse.value_namespace = name_space;
        rxsakannotinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxSakKsRxTxNotSet")
    {
        rxsakksrxtxnotset = value;
        rxsakksrxtxnotset.value_namespace = name_space;
        rxsakksrxtxnotset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakGenFail")
    {
        sakgenfail = value;
        sakgenfail.value_namespace = name_space;
        sakgenfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakHashKeyGenFail")
    {
        sakhashkeygenfail = value;
        sakhashkeygenfail.value_namespace = name_space;
        sakhashkeygenfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakEncryptFail")
    {
        sakencryptfail = value;
        sakencryptfail.value_namespace = name_space;
        sakencryptfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakDecryptFail")
    {
        sakdecryptfail = value;
        sakdecryptfail.value_namespace = name_space;
        sakdecryptfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsecRxSaInstallFail")
    {
        macsecrxsainstallfail = value;
        macsecrxsainstallfail.value_namespace = name_space;
        macsecrxsainstallfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsecTxSaInstallFail")
    {
        macsectxsainstallfail = value;
        macsectxsainstallfail.value_namespace = name_space;
        macsectxsainstallfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mkpduTxSucc")
    {
        mkpdutxsucc.yfilter = yfilter;
    }
    if(value_path == "mkpduTxPktBldFail")
    {
        mkpdutxpktbldfail.yfilter = yfilter;
    }
    if(value_path == "mkpduNoTxIfDn")
    {
        mkpdunotxifdn.yfilter = yfilter;
    }
    if(value_path == "mkpduNoRxIfDn")
    {
        mkpdunorxifdn.yfilter = yfilter;
    }
    if(value_path == "mkpduRxCANotFnd")
    {
        mkpdurxcanotfnd.yfilter = yfilter;
    }
    if(value_path == "mkpduRxErr")
    {
        mkpdurxerr.yfilter = yfilter;
    }
    if(value_path == "mkpduRxSucc")
    {
        mkpdurxsucc.yfilter = yfilter;
    }
    if(value_path == "mkpduEtherMismatch")
    {
        mkpduethermismatch.yfilter = yfilter;
    }
    if(value_path == "mkpduTxFail")
    {
        mkpdutxfail.yfilter = yfilter;
    }
    if(value_path == "invalidMkpduRx")
    {
        invalidmkpdurx.yfilter = yfilter;
    }
    if(value_path == "mkpduRxBadPeerMN")
    {
        mkpdurxbadpeermn.yfilter = yfilter;
    }
    if(value_path == "mkpduRxNRPListMN")
    {
        mkpdurxnrplistmn.yfilter = yfilter;
    }
    if(value_path == "rxSakKNMismatch")
    {
        rxsakknmismatch.yfilter = yfilter;
    }
    if(value_path == "rxSakRxNotSet")
    {
        rxsakrxnotset.yfilter = yfilter;
    }
    if(value_path == "rxSakKeyMIMismatch")
    {
        rxsakkeymimismatch.yfilter = yfilter;
    }
    if(value_path == "rxSakANNotInUse")
    {
        rxsakannotinuse.yfilter = yfilter;
    }
    if(value_path == "rxSakKsRxTxNotSet")
    {
        rxsakksrxtxnotset.yfilter = yfilter;
    }
    if(value_path == "sakGenFail")
    {
        sakgenfail.yfilter = yfilter;
    }
    if(value_path == "sakHashKeyGenFail")
    {
        sakhashkeygenfail.yfilter = yfilter;
    }
    if(value_path == "sakEncryptFail")
    {
        sakencryptfail.yfilter = yfilter;
    }
    if(value_path == "sakDecryptFail")
    {
        sakdecryptfail.yfilter = yfilter;
    }
    if(value_path == "macsecRxSaInstallFail")
    {
        macsecrxsainstallfail.yfilter = yfilter;
    }
    if(value_path == "macsecTxSaInstallFail")
    {
        macsectxsainstallfail.yfilter = yfilter;
    }
}

bool System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mkpduTxSucc" || name == "mkpduTxPktBldFail" || name == "mkpduNoTxIfDn" || name == "mkpduNoRxIfDn" || name == "mkpduRxCANotFnd" || name == "mkpduRxErr" || name == "mkpduRxSucc" || name == "mkpduEtherMismatch" || name == "mkpduTxFail" || name == "invalidMkpduRx" || name == "mkpduRxBadPeerMN" || name == "mkpduRxNRPListMN" || name == "rxSakKNMismatch" || name == "rxSakRxNotSet" || name == "rxSakKeyMIMismatch" || name == "rxSakANNotInUse" || name == "rxSakKsRxTxNotSet" || name == "sakGenFail" || name == "sakHashKeyGenFail" || name == "sakEncryptFail" || name == "sakDecryptFail" || name == "macsecRxSaInstallFail" || name == "macsecTxSaInstallFail")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MacsecItems::InstItems::PoliciesItems::PoliciesItems()
    :
    policy_items(std::make_shared<System::MacsecItems::InstItems::PoliciesItems::PolicyItems>())
{
    policy_items->parent = this;

    yang_name = "policies-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::PoliciesItems::~PoliciesItems()
{
}

bool System::MacsecItems::InstItems::PoliciesItems::has_data() const
{
    if (is_presence_container) return true;
    return (policy_items !=  nullptr && policy_items->has_data());
}

bool System::MacsecItems::InstItems::PoliciesItems::has_operation() const
{
    return is_set(yfilter)
	|| (policy_items !=  nullptr && policy_items->has_operation());
}

std::string System::MacsecItems::InstItems::PoliciesItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::PoliciesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::PoliciesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::PoliciesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::MacsecItems::InstItems::PoliciesItems::PolicyItems>();
        }
        return policy_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::PoliciesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    return children;
}

void System::MacsecItems::InstItems::PoliciesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacsecItems::InstItems::PoliciesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacsecItems::InstItems::PoliciesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-items")
        return true;
    return false;
}

System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyItems()
    :
    policy_list(this, {"policyname"})
{

    yang_name = "policy-items"; yang_parent_name = "policies-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::PoliciesItems::PolicyItems::~PolicyItems()
{
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<policy_list.len(); index++)
    {
        if(policy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MacsecItems::InstItems::PoliciesItems::PolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/policies-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::PoliciesItems::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::PoliciesItems::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::PoliciesItems::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Policy-list")
    {
        auto c = std::make_shared<System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList>();
        c->parent = this;
        policy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::PoliciesItems::PolicyItems::get_children() const
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

void System::MacsecItems::InstItems::PoliciesItems::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MacsecItems::InstItems::PoliciesItems::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Policy-list")
        return true;
    return false;
}

System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::PolicyList()
    :
    policyname{YType::str, "policyName"},
    keysvrprio{YType::uint8, "keySvrPrio"},
    confoffset{YType::enumeration, "confOffset"},
    secpolicy{YType::enumeration, "secPolicy"},
    replaywindow{YType::uint32, "replayWindow"},
    ciphersuite{YType::enumeration, "cipherSuite"},
    sakexpirytime{YType::uint32, "sakExpiryTime"}
{

    yang_name = "Policy-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::~PolicyList()
{
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    return policyname.is_set
	|| keysvrprio.is_set
	|| confoffset.is_set
	|| secpolicy.is_set
	|| replaywindow.is_set
	|| ciphersuite.is_set
	|| sakexpirytime.is_set;
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(keysvrprio.yfilter)
	|| ydk::is_set(confoffset.yfilter)
	|| ydk::is_set(secpolicy.yfilter)
	|| ydk::is_set(replaywindow.yfilter)
	|| ydk::is_set(ciphersuite.yfilter)
	|| ydk::is_set(sakexpirytime.yfilter);
}

std::string System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/policies-items/policy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Policy-list";
    ADD_KEY_TOKEN(policyname, "policyName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (keysvrprio.is_set || is_set(keysvrprio.yfilter)) leaf_name_data.push_back(keysvrprio.get_name_leafdata());
    if (confoffset.is_set || is_set(confoffset.yfilter)) leaf_name_data.push_back(confoffset.get_name_leafdata());
    if (secpolicy.is_set || is_set(secpolicy.yfilter)) leaf_name_data.push_back(secpolicy.get_name_leafdata());
    if (replaywindow.is_set || is_set(replaywindow.yfilter)) leaf_name_data.push_back(replaywindow.get_name_leafdata());
    if (ciphersuite.is_set || is_set(ciphersuite.yfilter)) leaf_name_data.push_back(ciphersuite.get_name_leafdata());
    if (sakexpirytime.is_set || is_set(sakexpirytime.yfilter)) leaf_name_data.push_back(sakexpirytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySvrPrio")
    {
        keysvrprio = value;
        keysvrprio.value_namespace = name_space;
        keysvrprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confOffset")
    {
        confoffset = value;
        confoffset.value_namespace = name_space;
        confoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secPolicy")
    {
        secpolicy = value;
        secpolicy.value_namespace = name_space;
        secpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replayWindow")
    {
        replaywindow = value;
        replaywindow.value_namespace = name_space;
        replaywindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipherSuite")
    {
        ciphersuite = value;
        ciphersuite.value_namespace = name_space;
        ciphersuite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakExpiryTime")
    {
        sakexpirytime = value;
        sakexpirytime.value_namespace = name_space;
        sakexpirytime.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "keySvrPrio")
    {
        keysvrprio.yfilter = yfilter;
    }
    if(value_path == "confOffset")
    {
        confoffset.yfilter = yfilter;
    }
    if(value_path == "secPolicy")
    {
        secpolicy.yfilter = yfilter;
    }
    if(value_path == "replayWindow")
    {
        replaywindow.yfilter = yfilter;
    }
    if(value_path == "cipherSuite")
    {
        ciphersuite.yfilter = yfilter;
    }
    if(value_path == "sakExpiryTime")
    {
        sakexpirytime.yfilter = yfilter;
    }
}

bool System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyName" || name == "keySvrPrio" || name == "confOffset" || name == "secPolicy" || name == "replayWindow" || name == "cipherSuite" || name == "sakExpiryTime")
        return true;
    return false;
}

System::MacsecItems::InstItems::GlobalstatsItems::GlobalstatsItems()
    :
    securedsess{YType::uint64, "securedSess"},
    deletedsess{YType::uint64, "deletedSess"},
    katimeouts{YType::uint64, "kaTimeouts"},
    sakciphermismatchfail{YType::uint64, "sakCipherMismatchFail"},
    macsecrxinvalidckn{YType::uint64, "macsecRxInvalidCKN"},
    macsectxpktbldfail{YType::uint64, "macsecTxPktBldFail"}
{

    yang_name = "globalstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MacsecItems::InstItems::GlobalstatsItems::~GlobalstatsItems()
{
}

bool System::MacsecItems::InstItems::GlobalstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return securedsess.is_set
	|| deletedsess.is_set
	|| katimeouts.is_set
	|| sakciphermismatchfail.is_set
	|| macsecrxinvalidckn.is_set
	|| macsectxpktbldfail.is_set;
}

bool System::MacsecItems::InstItems::GlobalstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(securedsess.yfilter)
	|| ydk::is_set(deletedsess.yfilter)
	|| ydk::is_set(katimeouts.yfilter)
	|| ydk::is_set(sakciphermismatchfail.yfilter)
	|| ydk::is_set(macsecrxinvalidckn.yfilter)
	|| ydk::is_set(macsectxpktbldfail.yfilter);
}

std::string System::MacsecItems::InstItems::GlobalstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/macsec-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MacsecItems::InstItems::GlobalstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MacsecItems::InstItems::GlobalstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (securedsess.is_set || is_set(securedsess.yfilter)) leaf_name_data.push_back(securedsess.get_name_leafdata());
    if (deletedsess.is_set || is_set(deletedsess.yfilter)) leaf_name_data.push_back(deletedsess.get_name_leafdata());
    if (katimeouts.is_set || is_set(katimeouts.yfilter)) leaf_name_data.push_back(katimeouts.get_name_leafdata());
    if (sakciphermismatchfail.is_set || is_set(sakciphermismatchfail.yfilter)) leaf_name_data.push_back(sakciphermismatchfail.get_name_leafdata());
    if (macsecrxinvalidckn.is_set || is_set(macsecrxinvalidckn.yfilter)) leaf_name_data.push_back(macsecrxinvalidckn.get_name_leafdata());
    if (macsectxpktbldfail.is_set || is_set(macsectxpktbldfail.yfilter)) leaf_name_data.push_back(macsectxpktbldfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MacsecItems::InstItems::GlobalstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MacsecItems::InstItems::GlobalstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MacsecItems::InstItems::GlobalstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "securedSess")
    {
        securedsess = value;
        securedsess.value_namespace = name_space;
        securedsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedSess")
    {
        deletedsess = value;
        deletedsess.value_namespace = name_space;
        deletedsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaTimeouts")
    {
        katimeouts = value;
        katimeouts.value_namespace = name_space;
        katimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sakCipherMismatchFail")
    {
        sakciphermismatchfail = value;
        sakciphermismatchfail.value_namespace = name_space;
        sakciphermismatchfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsecRxInvalidCKN")
    {
        macsecrxinvalidckn = value;
        macsecrxinvalidckn.value_namespace = name_space;
        macsecrxinvalidckn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsecTxPktBldFail")
    {
        macsectxpktbldfail = value;
        macsectxpktbldfail.value_namespace = name_space;
        macsectxpktbldfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::MacsecItems::InstItems::GlobalstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "securedSess")
    {
        securedsess.yfilter = yfilter;
    }
    if(value_path == "deletedSess")
    {
        deletedsess.yfilter = yfilter;
    }
    if(value_path == "kaTimeouts")
    {
        katimeouts.yfilter = yfilter;
    }
    if(value_path == "sakCipherMismatchFail")
    {
        sakciphermismatchfail.yfilter = yfilter;
    }
    if(value_path == "macsecRxInvalidCKN")
    {
        macsecrxinvalidckn.yfilter = yfilter;
    }
    if(value_path == "macsecTxPktBldFail")
    {
        macsectxpktbldfail.yfilter = yfilter;
    }
}

bool System::MacsecItems::InstItems::GlobalstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "securedSess" || name == "deletedSess" || name == "kaTimeouts" || name == "sakCipherMismatchFail" || name == "macsecRxInvalidCKN" || name == "macsecTxPktBldFail")
        return true;
    return false;
}

System::MldsnoopItems::MldsnoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::MldsnoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mldsnoop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::~MldsnoopItems()
{
}

bool System::MldsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MldsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MldsnoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MldsnoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::MldsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    allrtrmcastencap{YType::str, "allRtrMcastEncap"},
    flags{YType::str, "flags"}
        ,
    dom_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems>())
    , inststats_items(std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>())
{
    dom_items->parent = this;
    inststats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mldsnoop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::~InstItems()
{
}

bool System::MldsnoopItems::InstItems::has_data() const
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

bool System::MldsnoopItems::InstItems::has_operation() const
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

std::string System::MldsnoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::MldsnoopItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(inststats_items != nullptr)
    {
        children["inststats-items"] = inststats_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "inststats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "allRtrMcastEncap" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"encap"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomList()
    :
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
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
    db_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>())
    , domstats_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>())
    , strtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>())
    , rtrif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>())
    , querierp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>())
    , querierst_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>())
{
    db_items->parent = this;
    domstats_items->parent = this;
    strtrif_items->parent = this;
    rtrif_items->parent = this;
    querierp_items->parent = this;
    querierst_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| name.is_set
	|| id.is_set
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
	|| (querierp_items !=  nullptr && querierp_items->has_data())
	|| (querierst_items !=  nullptr && querierst_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
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
	|| (querierp_items !=  nullptr && querierp_items->has_operation())
	|| (querierst_items !=  nullptr && querierst_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "strtrif-items")
    {
        if(strtrif_items == nullptr)
        {
            strtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems>();
        }
        return strtrif_items;
    }

    if(child_yang_name == "rtrif-items")
    {
        if(rtrif_items == nullptr)
        {
            rtrif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems>();
        }
        return rtrif_items;
    }

    if(child_yang_name == "querierp-items")
    {
        if(querierp_items == nullptr)
        {
            querierp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems>();
        }
        return querierp_items;
    }

    if(child_yang_name == "querierst-items")
    {
        if(querierst_items == nullptr)
        {
            querierst_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems>();
        }
        return querierst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(domstats_items != nullptr)
    {
        children["domstats-items"] = domstats_items;
    }

    if(strtrif_items != nullptr)
    {
        children["strtrif-items"] = strtrif_items;
    }

    if(rtrif_items != nullptr)
    {
        children["rtrif-items"] = rtrif_items;
    }

    if(querierp_items != nullptr)
    {
        children["querierp-items"] = querierp_items;
    }

    if(querierst_items != nullptr)
    {
        children["querierst-items"] = querierst_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void System::MldsnoopItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "domstats-items" || name == "strtrif-items" || name == "rtrif-items" || name == "querierp-items" || name == "querierst-items" || name == "encap" || name == "name" || name == "id" || name == "adminSt" || name == "ctrl" || name == "flags" || name == "fwdMode" || name == "numRtrIf" || name == "numMcGrp" || name == "numSrcGrp" || name == "grpFlushTs" || name == "nextQueryTs" || name == "nextQueryExpTs" || name == "mrtrEpgId")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    mcgrp_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>())
{
    mcgrp_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems>();
        }
        return mcgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mcgrp_items != nullptr)
    {
        children["mcgrp-items"] = mcgrp_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcgrp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McgrpItems()
    :
    mcgrprec_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::~McgrpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList>();
        c->parent = this;
        mcgrprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcgrprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::McGrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"},
    latreporter{YType::str, "latReporter"},
    oldhostts{YType::str, "oldHostTs"},
    reportts{YType::str, "reportTs"},
    numsrc{YType::uint32, "numSrc"}
        ,
    epg_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>())
    , rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>())
{
    epg_items->parent = this;
    rep_items->parent = this;

    yang_name = "McGrpRec-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::~McGrpRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_data() const
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_operation() const
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

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epg-items")
    {
        if(epg_items == nullptr)
        {
            epg_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>();
        }
        return epg_items;
    }

    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epg_items != nullptr)
    {
        children["epg-items"] = epg_items;
    }

    if(rep_items != nullptr)
    {
        children["rep-items"] = rep_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epg-items" || name == "rep-items" || name == "addr" || name == "name" || name == "ver" || name == "latReporter" || name == "oldHostTs" || name == "reportTs" || name == "numSrc")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgItems()
    :
    epgrec_list(this, {"fabencap"})
{

    yang_name = "epg-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::~EpgItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_operation() const
{
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpgRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList>();
        c->parent = this;
        epgrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epgrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpgRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::EpgRecList()
    :
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    mcastencap{YType::str, "mcastEncap"}
        ,
    rep_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>())
{
    rep_items->parent = this;

    yang_name = "EpgRec-list"; yang_parent_name = "epg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::~EpgRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| mcastencap.is_set
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpgRec-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rep_items != nullptr)
    {
        children["rep-items"] = rep_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rep-items" || name == "fabEncap" || name == "name" || name == "id" || name == "mcastEncap")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "EpgRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList>();
        c->parent = this;
        reportrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reportrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        c->parent = this;
        oifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    numgqmiss{YType::uint16, "numGqMiss"},
    expirets{YType::str, "expireTs"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| numgqmiss.is_set
	|| expirets.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(numgqmiss.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (numgqmiss.is_set || is_set(numgqmiss.yfilter)) leaf_name_data.push_back(numgqmiss.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(host_items != nullptr)
    {
        children["host-items"] = host_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name" || name == "numGqMiss" || name == "expireTs")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        c->parent = this;
        hostrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hostrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    upts{YType::str, "upTs"},
    lastjoints{YType::str, "lastJoinTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| upts.is_set
	|| lastjoints.is_set
	|| nextexpiryts.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(lastjoints.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (lastjoints.is_set || is_set(lastjoints.yfilter)) leaf_name_data.push_back(lastjoints.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "upTs" || name == "lastJoinTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::~RepItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList>();
        c->parent = this;
        reportrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reportrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        c->parent = this;
        oifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    numgqmiss{YType::uint16, "numGqMiss"},
    expirets{YType::str, "expireTs"}
        ,
    host_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| numgqmiss.is_set
	|| expirets.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(numgqmiss.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (numgqmiss.is_set || is_set(numgqmiss.yfilter)) leaf_name_data.push_back(numgqmiss.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(host_items != nullptr)
    {
        children["host-items"] = host_items;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name" || name == "numGqMiss" || name == "expireTs")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        c->parent = this;
        hostrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hostrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::HostRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    upts{YType::str, "upTs"},
    lastjoints{YType::str, "lastJoinTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "HostRec-list"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::~HostRecList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| upts.is_set
	|| lastjoints.is_set
	|| nextexpiryts.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(lastjoints.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (lastjoints.is_set || is_set(lastjoints.yfilter)) leaf_name_data.push_back(lastjoints.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "upTs" || name == "lastJoinTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::DomstatsItems()
    :
    v1reprcvd{YType::uint32, "v1RepRcvd"},
    v1leavercvd{YType::uint32, "v1LeaveRcvd"},
    v1queryrcvd{YType::uint32, "v1QueryRcvd"},
    v1repsupr{YType::uint32, "v1RepSupr"},
    v1leavesupr{YType::uint32, "v1LeaveSupr"},
    v1reporig{YType::uint32, "v1RepOrig"},
    v1leaveorig{YType::uint32, "v1LeaveOrig"},
    v2reprcvd{YType::uint32, "v2RepRcvd"},
    v2queryrcvd{YType::uint32, "v2QueryRcvd"},
    v2grprecsupr{YType::uint32, "v2GrpRecSupr"},
    v2reporig{YType::uint32, "v2RepOrig"},
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

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return v1reprcvd.is_set
	|| v1leavercvd.is_set
	|| v1queryrcvd.is_set
	|| v1repsupr.is_set
	|| v1leavesupr.is_set
	|| v1reporig.is_set
	|| v1leaveorig.is_set
	|| v2reprcvd.is_set
	|| v2queryrcvd.is_set
	|| v2grprecsupr.is_set
	|| v2reporig.is_set
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(v1reprcvd.yfilter)
	|| ydk::is_set(v1leavercvd.yfilter)
	|| ydk::is_set(v1queryrcvd.yfilter)
	|| ydk::is_set(v1repsupr.yfilter)
	|| ydk::is_set(v1leavesupr.yfilter)
	|| ydk::is_set(v1reporig.yfilter)
	|| ydk::is_set(v1leaveorig.yfilter)
	|| ydk::is_set(v2reprcvd.yfilter)
	|| ydk::is_set(v2queryrcvd.yfilter)
	|| ydk::is_set(v2grprecsupr.yfilter)
	|| ydk::is_set(v2reporig.yfilter)
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

std::string System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v1reprcvd.is_set || is_set(v1reprcvd.yfilter)) leaf_name_data.push_back(v1reprcvd.get_name_leafdata());
    if (v1leavercvd.is_set || is_set(v1leavercvd.yfilter)) leaf_name_data.push_back(v1leavercvd.get_name_leafdata());
    if (v1queryrcvd.is_set || is_set(v1queryrcvd.yfilter)) leaf_name_data.push_back(v1queryrcvd.get_name_leafdata());
    if (v1repsupr.is_set || is_set(v1repsupr.yfilter)) leaf_name_data.push_back(v1repsupr.get_name_leafdata());
    if (v1leavesupr.is_set || is_set(v1leavesupr.yfilter)) leaf_name_data.push_back(v1leavesupr.get_name_leafdata());
    if (v1reporig.is_set || is_set(v1reporig.yfilter)) leaf_name_data.push_back(v1reporig.get_name_leafdata());
    if (v1leaveorig.is_set || is_set(v1leaveorig.yfilter)) leaf_name_data.push_back(v1leaveorig.get_name_leafdata());
    if (v2reprcvd.is_set || is_set(v2reprcvd.yfilter)) leaf_name_data.push_back(v2reprcvd.get_name_leafdata());
    if (v2queryrcvd.is_set || is_set(v2queryrcvd.yfilter)) leaf_name_data.push_back(v2queryrcvd.get_name_leafdata());
    if (v2grprecsupr.is_set || is_set(v2grprecsupr.yfilter)) leaf_name_data.push_back(v2grprecsupr.get_name_leafdata());
    if (v2reporig.is_set || is_set(v2reporig.yfilter)) leaf_name_data.push_back(v2reporig.get_name_leafdata());
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "v1RepRcvd")
    {
        v1reprcvd = value;
        v1reprcvd.value_namespace = name_space;
        v1reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1LeaveRcvd")
    {
        v1leavercvd = value;
        v1leavercvd.value_namespace = name_space;
        v1leavercvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1QueryRcvd")
    {
        v1queryrcvd = value;
        v1queryrcvd.value_namespace = name_space;
        v1queryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1RepSupr")
    {
        v1repsupr = value;
        v1repsupr.value_namespace = name_space;
        v1repsupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1LeaveSupr")
    {
        v1leavesupr = value;
        v1leavesupr.value_namespace = name_space;
        v1leavesupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1RepOrig")
    {
        v1reporig = value;
        v1reporig.value_namespace = name_space;
        v1reporig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1LeaveOrig")
    {
        v1leaveorig = value;
        v1leaveorig.value_namespace = name_space;
        v1leaveorig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2RepRcvd")
    {
        v2reprcvd = value;
        v2reprcvd.value_namespace = name_space;
        v2reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2QueryRcvd")
    {
        v2queryrcvd = value;
        v2queryrcvd.value_namespace = name_space;
        v2queryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2GrpRecSupr")
    {
        v2grprecsupr = value;
        v2grprecsupr.value_namespace = name_space;
        v2grprecsupr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2RepOrig")
    {
        v2reporig = value;
        v2reporig.value_namespace = name_space;
        v2reporig.value_namespace_prefix = name_space_prefix;
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

void System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "v1RepRcvd")
    {
        v1reprcvd.yfilter = yfilter;
    }
    if(value_path == "v1LeaveRcvd")
    {
        v1leavercvd.yfilter = yfilter;
    }
    if(value_path == "v1QueryRcvd")
    {
        v1queryrcvd.yfilter = yfilter;
    }
    if(value_path == "v1RepSupr")
    {
        v1repsupr.yfilter = yfilter;
    }
    if(value_path == "v1LeaveSupr")
    {
        v1leavesupr.yfilter = yfilter;
    }
    if(value_path == "v1RepOrig")
    {
        v1reporig.yfilter = yfilter;
    }
    if(value_path == "v1LeaveOrig")
    {
        v1leaveorig.yfilter = yfilter;
    }
    if(value_path == "v2RepRcvd")
    {
        v2reprcvd.yfilter = yfilter;
    }
    if(value_path == "v2QueryRcvd")
    {
        v2queryrcvd.yfilter = yfilter;
    }
    if(value_path == "v2GrpRecSupr")
    {
        v2grprecsupr.yfilter = yfilter;
    }
    if(value_path == "v2RepOrig")
    {
        v2reporig.yfilter = yfilter;
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1RepRcvd" || name == "v1LeaveRcvd" || name == "v1QueryRcvd" || name == "v1RepSupr" || name == "v1LeaveSupr" || name == "v1RepOrig" || name == "v1LeaveOrig" || name == "v2RepRcvd" || name == "v2QueryRcvd" || name == "v2GrpRecSupr" || name == "v2RepOrig" || name == "lastClearTs" || name == "pktsRcvd" || name == "pimHelloRcvd" || name == "invQueryRcvd" || name == "invRepRcvd" || name == "verMisMatchRcvd" || name == "unknPktRcvd" || name == "queryPktsOrig" || name == "pktsToRport" || name == "vpcSyncSent" || name == "vpcSyncRcvd" || name == "vpcSyncFail" || name == "mrdSyncSent" || name == "mrdSyncRcvd" || name == "mrdSyncFail")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StrtrifItems()
    :
    strtrif_list(this, {"id"})
{

    yang_name = "strtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::~StrtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_operation() const
{
    for (std::size_t index=0; index<strtrif_list.len(); index++)
    {
        if(strtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StRtrIf-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList>();
        c->parent = this;
        strtrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : strtrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StRtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::StRtrIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    encap{YType::str, "encap"}
        ,
    rtvrfmbr_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "StRtrIf-list"; yang_parent_name = "strtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::~StRtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_data() const
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_operation() const
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

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StRtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "encap")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "StRtrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::get_children() const
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrifItems()
    :
    rtrif_list(this, {"id"})
{

    yang_name = "rtrif-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::~RtrifItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_operation() const
{
    for (std::size_t index=0; index<rtrif_list.len(); index++)
    {
        if(rtrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtrIf-list")
    {
        auto c = std::make_shared<System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList>();
        c->parent = this;
        rtrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtrIf-list")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::RtrIfList()
    :
    id{YType::str, "id"},
    lcc{YType::str, "lcC"},
    upts{YType::str, "upTs"},
    nextexpiryts{YType::str, "nextExpiryTs"}
{

    yang_name = "RtrIf-list"; yang_parent_name = "rtrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::~RtrIfList()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| lcc.is_set
	|| upts.is_set
	|| nextexpiryts.is_set;
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lcc.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(nextexpiryts.yfilter);
}

std::string System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lcc.is_set || is_set(lcc.yfilter)) leaf_name_data.push_back(lcc.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (nextexpiryts.is_set || is_set(nextexpiryts.yfilter)) leaf_name_data.push_back(nextexpiryts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "lcC" || name == "upTs" || name == "nextExpiryTs")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::QuerierpItems()
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

    yang_name = "querierp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::~QuerierpItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_data() const
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_operation() const
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

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::QuerierstItems()
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

    yang_name = "querierst-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::~QuerierstItems()
{
}

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_data() const
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_operation() const
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

std::string System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querierst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "rspIntvl" || name == "robustFac" || name == "startQueryIntvl" || name == "startQueryCnt" || name == "lastMbrIntvl" || name == "timeout" || name == "if" || name == "flags")
        return true;
    return false;
}

System::MldsnoopItems::InstItems::InststatsItems::InststatsItems()
    :
    totnummcgrp{YType::uint32, "totNumMcGrp"},
    pktsrcvd{YType::uint32, "pktsRcvd"},
    invpktsrcvd{YType::uint32, "invPktsRcvd"},
    lpbkpktsrcvd{YType::uint32, "lpbkPktsRcvd"},
    pktsflooded{YType::uint32, "pktsFlooded"},
    mrdlpbkpktsrcvd{YType::uint32, "mrdLpbkPktsRcvd"},
    novlandbpktsrcvd{YType::uint32, "noVlanDbPktsRcvd"},
    vpczmqpktssent{YType::uint32, "vpcZmqPktsSent"},
    vpczmqpktsrcvd{YType::uint32, "vpcZmqPktsRcvd"},
    vpczmqpktssentfail{YType::uint32, "vpcZmqPktsSentFail"},
    vpczmqpktsrcvdfail{YType::uint32, "vpcZmqPktsRcvdFail"},
    vpcpeerpktssent{YType::uint32, "vpcPeerPktsSent"},
    vpcpeerpktsrcvd{YType::uint32, "vpcPeerPktsRcvd"},
    vpcpeerpktssentfail{YType::uint32, "vpcPeerPktsSentFail"},
    vpcpeerpktsrcvdfail{YType::uint32, "vpcPeerPktsRcvdFail"}
{

    yang_name = "inststats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MldsnoopItems::InstItems::InststatsItems::~InststatsItems()
{
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totnummcgrp.is_set
	|| pktsrcvd.is_set
	|| invpktsrcvd.is_set
	|| lpbkpktsrcvd.is_set
	|| pktsflooded.is_set
	|| mrdlpbkpktsrcvd.is_set
	|| novlandbpktsrcvd.is_set
	|| vpczmqpktssent.is_set
	|| vpczmqpktsrcvd.is_set
	|| vpczmqpktssentfail.is_set
	|| vpczmqpktsrcvdfail.is_set
	|| vpcpeerpktssent.is_set
	|| vpcpeerpktsrcvd.is_set
	|| vpcpeerpktssentfail.is_set
	|| vpcpeerpktsrcvdfail.is_set;
}

bool System::MldsnoopItems::InstItems::InststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totnummcgrp.yfilter)
	|| ydk::is_set(pktsrcvd.yfilter)
	|| ydk::is_set(invpktsrcvd.yfilter)
	|| ydk::is_set(lpbkpktsrcvd.yfilter)
	|| ydk::is_set(pktsflooded.yfilter)
	|| ydk::is_set(mrdlpbkpktsrcvd.yfilter)
	|| ydk::is_set(novlandbpktsrcvd.yfilter)
	|| ydk::is_set(vpczmqpktssent.yfilter)
	|| ydk::is_set(vpczmqpktsrcvd.yfilter)
	|| ydk::is_set(vpczmqpktssentfail.yfilter)
	|| ydk::is_set(vpczmqpktsrcvdfail.yfilter)
	|| ydk::is_set(vpcpeerpktssent.yfilter)
	|| ydk::is_set(vpcpeerpktsrcvd.yfilter)
	|| ydk::is_set(vpcpeerpktssentfail.yfilter)
	|| ydk::is_set(vpcpeerpktsrcvdfail.yfilter);
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mldsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MldsnoopItems::InstItems::InststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MldsnoopItems::InstItems::InststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totnummcgrp.is_set || is_set(totnummcgrp.yfilter)) leaf_name_data.push_back(totnummcgrp.get_name_leafdata());
    if (pktsrcvd.is_set || is_set(pktsrcvd.yfilter)) leaf_name_data.push_back(pktsrcvd.get_name_leafdata());
    if (invpktsrcvd.is_set || is_set(invpktsrcvd.yfilter)) leaf_name_data.push_back(invpktsrcvd.get_name_leafdata());
    if (lpbkpktsrcvd.is_set || is_set(lpbkpktsrcvd.yfilter)) leaf_name_data.push_back(lpbkpktsrcvd.get_name_leafdata());
    if (pktsflooded.is_set || is_set(pktsflooded.yfilter)) leaf_name_data.push_back(pktsflooded.get_name_leafdata());
    if (mrdlpbkpktsrcvd.is_set || is_set(mrdlpbkpktsrcvd.yfilter)) leaf_name_data.push_back(mrdlpbkpktsrcvd.get_name_leafdata());
    if (novlandbpktsrcvd.is_set || is_set(novlandbpktsrcvd.yfilter)) leaf_name_data.push_back(novlandbpktsrcvd.get_name_leafdata());
    if (vpczmqpktssent.is_set || is_set(vpczmqpktssent.yfilter)) leaf_name_data.push_back(vpczmqpktssent.get_name_leafdata());
    if (vpczmqpktsrcvd.is_set || is_set(vpczmqpktsrcvd.yfilter)) leaf_name_data.push_back(vpczmqpktsrcvd.get_name_leafdata());
    if (vpczmqpktssentfail.is_set || is_set(vpczmqpktssentfail.yfilter)) leaf_name_data.push_back(vpczmqpktssentfail.get_name_leafdata());
    if (vpczmqpktsrcvdfail.is_set || is_set(vpczmqpktsrcvdfail.yfilter)) leaf_name_data.push_back(vpczmqpktsrcvdfail.get_name_leafdata());
    if (vpcpeerpktssent.is_set || is_set(vpcpeerpktssent.yfilter)) leaf_name_data.push_back(vpcpeerpktssent.get_name_leafdata());
    if (vpcpeerpktsrcvd.is_set || is_set(vpcpeerpktsrcvd.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvd.get_name_leafdata());
    if (vpcpeerpktssentfail.is_set || is_set(vpcpeerpktssentfail.yfilter)) leaf_name_data.push_back(vpcpeerpktssentfail.get_name_leafdata());
    if (vpcpeerpktsrcvdfail.is_set || is_set(vpcpeerpktsrcvdfail.yfilter)) leaf_name_data.push_back(vpcpeerpktsrcvdfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MldsnoopItems::InstItems::InststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MldsnoopItems::InstItems::InststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MldsnoopItems::InstItems::InststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totNumMcGrp")
    {
        totnummcgrp = value;
        totnummcgrp.value_namespace = name_space;
        totnummcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsRcvd")
    {
        pktsrcvd = value;
        pktsrcvd.value_namespace = name_space;
        pktsrcvd.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vpcZmqPktsSent")
    {
        vpczmqpktssent = value;
        vpczmqpktssent.value_namespace = name_space;
        vpczmqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsRcvd")
    {
        vpczmqpktsrcvd = value;
        vpczmqpktsrcvd.value_namespace = name_space;
        vpczmqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsSentFail")
    {
        vpczmqpktssentfail = value;
        vpczmqpktssentfail.value_namespace = name_space;
        vpczmqpktssentfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcZmqPktsRcvdFail")
    {
        vpczmqpktsrcvdfail = value;
        vpczmqpktsrcvdfail.value_namespace = name_space;
        vpczmqpktsrcvdfail.value_namespace_prefix = name_space_prefix;
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

void System::MldsnoopItems::InstItems::InststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totNumMcGrp")
    {
        totnummcgrp.yfilter = yfilter;
    }
    if(value_path == "pktsRcvd")
    {
        pktsrcvd.yfilter = yfilter;
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
    if(value_path == "vpcZmqPktsSent")
    {
        vpczmqpktssent.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsRcvd")
    {
        vpczmqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsSentFail")
    {
        vpczmqpktssentfail.yfilter = yfilter;
    }
    if(value_path == "vpcZmqPktsRcvdFail")
    {
        vpczmqpktsrcvdfail.yfilter = yfilter;
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

bool System::MldsnoopItems::InstItems::InststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totNumMcGrp" || name == "pktsRcvd" || name == "invPktsRcvd" || name == "lpbkPktsRcvd" || name == "pktsFlooded" || name == "mrdLpbkPktsRcvd" || name == "noVlanDbPktsRcvd" || name == "vpcZmqPktsSent" || name == "vpcZmqPktsRcvd" || name == "vpcZmqPktsSentFail" || name == "vpcZmqPktsRcvdFail" || name == "vpcPeerPktsSent" || name == "vpcPeerPktsRcvd" || name == "vpcPeerPktsSentFail" || name == "vpcPeerPktsRcvdFail")
        return true;
    return false;
}

System::MplsItems::MplsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::MplsItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "mpls-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::~MplsItems()
{
}

bool System::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::MplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::MplsItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["If-items"] = if_items;
    }

    return children;
}

void System::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::MplsItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "If-items"; yang_parent_name = "mpls-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::~IfItems()
{
}

bool System::MplsItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::MplsItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::IfItems::get_children() const
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

void System::MplsItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    deleted{YType::boolean, "deleted"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtvrfmbr_items(std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "If-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsItems::IfItems::IfList::~IfList()
{
}

bool System::MplsItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| deleted.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::MplsItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(deleted.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::MplsItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mpls-items/If-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (deleted.is_set || is_set(deleted.yfilter)) leaf_name_data.push_back(deleted.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::MplsItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::IfItems::IfList::get_children() const
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

void System::MplsItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
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

bool System::MplsItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "operSt" || name == "deleted" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::MplsstaticItems::MplsstaticItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    af_items(std::make_shared<System::MplsstaticItems::AfItems>())
{
    af_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::~MplsstaticItems()
{
}

bool System::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::MplsstaticItems::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfItems()
    :
    af_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::~AfItems()
{
}

bool System::MplsstaticItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Af-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList>();
        c->parent = this;
        af_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : af_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Af-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::AfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    pfxlabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>())
    , lsp_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>())
{
    pfxlabel_items->parent = this;
    lsp_items->parent = this;

    yang_name = "Af-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MplsstaticItems::AfItems::AfList::~AfList()
{
}

bool System::MplsstaticItems::AfItems::AfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_data())
	|| (lsp_items !=  nullptr && lsp_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pfxlabel_items !=  nullptr && pfxlabel_items->has_operation())
	|| (lsp_items !=  nullptr && lsp_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mplsstatic-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MplsstaticItems::AfItems::AfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Af-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxlabel-items")
    {
        if(pfxlabel_items == nullptr)
        {
            pfxlabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems>();
        }
        return pfxlabel_items;
    }

    if(child_yang_name == "lsp-items")
    {
        if(lsp_items == nullptr)
        {
            lsp_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems>();
        }
        return lsp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pfxlabel_items != nullptr)
    {
        children["pfxlabel-items"] = pfxlabel_items;
    }

    if(lsp_items != nullptr)
    {
        children["lsp-items"] = lsp_items;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::MplsstaticItems::AfItems::AfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::MplsstaticItems::AfItems::AfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxlabel-items" || name == "lsp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxlabelItems()
    :
    pfxlcllbl_list(this, {"label"})
{

    yang_name = "pfxlabel-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::~PfxlabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_operation() const
{
    for (std::size_t index=0; index<pfxlcllbl_list.len(); index++)
    {
        if(pfxlcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxlabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PfxLclLbl-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList>();
        c->parent = this;
        pfxlcllbl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfxlcllbl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PfxLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::PfxLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>())
    , autoresolvenh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>())
    , backupnh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>())
{
    nh_items->parent = this;
    autoresolvenh_items->parent = this;
    backupnh_items->parent = this;

    yang_name = "PfxLclLbl-list"; yang_parent_name = "pfxlabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::~PfxLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| (nh_items !=  nullptr && nh_items->has_data())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_data())
	|| (backupnh_items !=  nullptr && backupnh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation())
	|| (autoresolvenh_items !=  nullptr && autoresolvenh_items->has_operation())
	|| (backupnh_items !=  nullptr && backupnh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PfxLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems>();
        }
        return nh_items;
    }

    if(child_yang_name == "autoresolvenh-items")
    {
        if(autoresolvenh_items == nullptr)
        {
            autoresolvenh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems>();
        }
        return autoresolvenh_items;
    }

    if(child_yang_name == "backupnh-items")
    {
        if(backupnh_items == nullptr)
        {
            backupnh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems>();
        }
        return backupnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    if(autoresolvenh_items != nullptr)
    {
        children["autoresolvenh-items"] = autoresolvenh_items;
    }

    if(backupnh_items != nullptr)
    {
        children["backupnh-items"] = backupnh_items;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "autoresolvenh-items" || name == "backupnh-items" || name == "label" || name == "pfx")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::NhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "nh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::AutoresolvenhItems()
    :
    outlbl{YType::uint32, "outLbl"}
{

    yang_name = "autoresolvenh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::~AutoresolvenhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoresolvenh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::BackupnhItems()
    :
    outlbl{YType::uint32, "outLbl"},
    nhaddr{YType::str, "nhAddr"},
    if_{YType::str, "if"}
{

    yang_name = "backupnh-items"; yang_parent_name = "PfxLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::~BackupnhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_data() const
{
    if (is_presence_container) return true;
    return outlbl.is_set
	|| nhaddr.is_set
	|| if_.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outlbl.yfilter)
	|| ydk::is_set(nhaddr.yfilter)
	|| ydk::is_set(if_.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backupnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outlbl.is_set || is_set(outlbl.yfilter)) leaf_name_data.push_back(outlbl.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outLbl")
    {
        outlbl = value;
        outlbl.value_namespace = name_space;
        outlbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outLbl")
    {
        outlbl.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outLbl" || name == "nhAddr" || name == "if")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::LspItems()
    :
    namedlsp_list(this, {"name"})
{

    yang_name = "lsp-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::~LspItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_operation() const
{
    for (std::size_t index=0; index<namedlsp_list.len(); index++)
    {
        if(namedlsp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NamedLSP-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList>();
        c->parent = this;
        namedlsp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : namedlsp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NamedLSP-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::NamedLSPList()
    :
    name{YType::str, "name"}
        ,
    xclabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>())
    , pollabel_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>())
{
    xclabel_items->parent = this;
    pollabel_items->parent = this;

    yang_name = "NamedLSP-list"; yang_parent_name = "lsp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::~NamedLSPList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (xclabel_items !=  nullptr && xclabel_items->has_data())
	|| (pollabel_items !=  nullptr && pollabel_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (xclabel_items !=  nullptr && xclabel_items->has_operation())
	|| (pollabel_items !=  nullptr && pollabel_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NamedLSP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xclabel-items")
    {
        if(xclabel_items == nullptr)
        {
            xclabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems>();
        }
        return xclabel_items;
    }

    if(child_yang_name == "pollabel-items")
    {
        if(pollabel_items == nullptr)
        {
            pollabel_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems>();
        }
        return pollabel_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(xclabel_items != nullptr)
    {
        children["xclabel-items"] = xclabel_items;
    }

    if(pollabel_items != nullptr)
    {
        children["pollabel-items"] = pollabel_items;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xclabel-items" || name == "pollabel-items" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XclabelItems()
    :
    xclcllbl_list(this, {"label"})
{

    yang_name = "xclabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::~XclabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_operation() const
{
    for (std::size_t index=0; index<xclcllbl_list.len(); index++)
    {
        if(xclcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xclabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcLclLbl-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList>();
        c->parent = this;
        xclcllbl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : xclcllbl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::XcLclLblList()
    :
    label{YType::uint32, "label"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "XcLclLbl-list"; yang_parent_name = "xclabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::~XcLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::NhItems()
    :
    xcnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "XcLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<xcnh_list.len(); index++)
    {
        if(xcnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "XcNh-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList>();
        c->parent = this;
        xcnh_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : xcnh_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "XcNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::XcNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "XcNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::~XcNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "XcNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PollabelItems()
    :
    policylcllbl_list(this, {"label"})
{

    yang_name = "pollabel-items"; yang_parent_name = "NamedLSP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::~PollabelItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_operation() const
{
    for (std::size_t index=0; index<policylcllbl_list.len(); index++)
    {
        if(policylcllbl_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pollabel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyLclLbl-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList>();
        c->parent = this;
        policylcllbl_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policylcllbl_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyLclLbl-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::PolicyLclLblList()
    :
    label{YType::uint32, "label"},
    pfx{YType::str, "pfx"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "PolicyLclLbl-list"; yang_parent_name = "pollabel-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::~PolicyLclLblList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| pfx.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyLclLbl-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
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

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "label" || name == "pfx" || name == "name")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::NhItems()
    :
    polnh_list(this, {"pathid"})
{

    yang_name = "nh-items"; yang_parent_name = "PolicyLclLbl-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::~NhItems()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<polnh_list.len(); index++)
    {
        if(polnh_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolNh-list")
    {
        auto c = std::make_shared<System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList>();
        c->parent = this;
        polnh_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : polnh_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolNh-list")
        return true;
    return false;
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::PolNhList()
    :
    pathid{YType::uint16, "pathId"},
    outlblstack{YType::str, "outLblStack"},
    nhaddr{YType::str, "nhAddr"}
{

    yang_name = "PolNh-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::~PolNhList()
{
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_data() const
{
    if (is_presence_container) return true;
    return pathid.is_set
	|| outlblstack.is_set
	|| nhaddr.is_set;
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pathid.yfilter)
	|| ydk::is_set(outlblstack.yfilter)
	|| ydk::is_set(nhaddr.yfilter);
}

std::string System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolNh-list";
    ADD_KEY_TOKEN(pathid, "pathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pathid.is_set || is_set(pathid.yfilter)) leaf_name_data.push_back(pathid.get_name_leafdata());
    if (outlblstack.is_set || is_set(outlblstack.yfilter)) leaf_name_data.push_back(outlblstack.get_name_leafdata());
    if (nhaddr.is_set || is_set(nhaddr.yfilter)) leaf_name_data.push_back(nhaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pathId")
    {
        pathid = value;
        pathid.value_namespace = name_space;
        pathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLblStack")
    {
        outlblstack = value;
        outlblstack.value_namespace = name_space;
        outlblstack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhAddr")
    {
        nhaddr = value;
        nhaddr.value_namespace = name_space;
        nhaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pathId")
    {
        pathid.yfilter = yfilter;
    }
    if(value_path == "outLblStack")
    {
        outlblstack.yfilter = yfilter;
    }
    if(value_path == "nhAddr")
    {
        nhaddr.yfilter = yfilter;
    }
}

bool System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathId" || name == "outLblStack" || name == "nhAddr")
        return true;
    return false;
}

System::LabeltableItems::LabeltableItems()
    :
    operlabels{YType::uint32, "operLabels"},
    operipv4prefixes{YType::uint32, "operIPv4Prefixes"},
    operipv6prefixes{YType::uint32, "operIPv6Prefixes"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    client_items(std::make_shared<System::LabeltableItems::ClientItems>())
    , lblrange_items(std::make_shared<System::LabeltableItems::LblrangeItems>())
    , lbl_items(std::make_shared<System::LabeltableItems::LblItems>())
{
    client_items->parent = this;
    lblrange_items->parent = this;
    lbl_items->parent = this;

    yang_name = "labeltable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::~LabeltableItems()
{
}

bool System::LabeltableItems::has_data() const
{
    if (is_presence_container) return true;
    return operlabels.is_set
	|| operipv4prefixes.is_set
	|| operipv6prefixes.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (client_items !=  nullptr && client_items->has_data())
	|| (lblrange_items !=  nullptr && lblrange_items->has_data())
	|| (lbl_items !=  nullptr && lbl_items->has_data());
}

bool System::LabeltableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operlabels.yfilter)
	|| ydk::is_set(operipv4prefixes.yfilter)
	|| ydk::is_set(operipv6prefixes.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (client_items !=  nullptr && client_items->has_operation())
	|| (lblrange_items !=  nullptr && lblrange_items->has_operation())
	|| (lbl_items !=  nullptr && lbl_items->has_operation());
}

std::string System::LabeltableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeltable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operlabels.is_set || is_set(operlabels.yfilter)) leaf_name_data.push_back(operlabels.get_name_leafdata());
    if (operipv4prefixes.is_set || is_set(operipv4prefixes.yfilter)) leaf_name_data.push_back(operipv4prefixes.get_name_leafdata());
    if (operipv6prefixes.is_set || is_set(operipv6prefixes.yfilter)) leaf_name_data.push_back(operipv6prefixes.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-items")
    {
        if(client_items == nullptr)
        {
            client_items = std::make_shared<System::LabeltableItems::ClientItems>();
        }
        return client_items;
    }

    if(child_yang_name == "lblrange-items")
    {
        if(lblrange_items == nullptr)
        {
            lblrange_items = std::make_shared<System::LabeltableItems::LblrangeItems>();
        }
        return lblrange_items;
    }

    if(child_yang_name == "lbl-items")
    {
        if(lbl_items == nullptr)
        {
            lbl_items = std::make_shared<System::LabeltableItems::LblItems>();
        }
        return lbl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client_items != nullptr)
    {
        children["client-items"] = client_items;
    }

    if(lblrange_items != nullptr)
    {
        children["lblrange-items"] = lblrange_items;
    }

    if(lbl_items != nullptr)
    {
        children["lbl-items"] = lbl_items;
    }

    return children;
}

void System::LabeltableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operLabels")
    {
        operlabels = value;
        operlabels.value_namespace = name_space;
        operlabels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes = value;
        operipv4prefixes.value_namespace = name_space;
        operipv4prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes = value;
        operipv6prefixes.value_namespace = name_space;
        operipv6prefixes.value_namespace_prefix = name_space_prefix;
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

void System::LabeltableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operLabels")
    {
        operlabels.yfilter = yfilter;
    }
    if(value_path == "operIPv4Prefixes")
    {
        operipv4prefixes.yfilter = yfilter;
    }
    if(value_path == "operIPv6Prefixes")
    {
        operipv6prefixes.yfilter = yfilter;
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

bool System::LabeltableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-items" || name == "lblrange-items" || name == "lbl-items" || name == "operLabels" || name == "operIPv4Prefixes" || name == "operIPv6Prefixes" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientItems()
    :
    clients_list(this, {"name"})
{

    yang_name = "client-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::~ClientItems()
{
}

bool System::LabeltableItems::ClientItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::ClientItems::has_operation() const
{
    for (std::size_t index=0; index<clients_list.len(); index++)
    {
        if(clients_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::ClientItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::ClientItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clients-list")
    {
        auto c = std::make_shared<System::LabeltableItems::ClientItems::ClientsList>();
        c->parent = this;
        clients_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::ClientItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : clients_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LabeltableItems::ClientItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::ClientItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::ClientItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clients-list")
        return true;
    return false;
}

System::LabeltableItems::ClientItems::ClientsList::ClientsList()
    :
    name{YType::str, "name"},
    index_{YType::uint32, "index"},
    uuid{YType::uint32, "uuid"},
    mtssap{YType::uint32, "mtsSap"},
    staletime{YType::str, "staleTime"},
    flag{YType::str, "flag"},
    regmsg{YType::uint32, "regMsg"},
    convmsg{YType::uint32, "convMsg"},
    fecmsg{YType::uint32, "fecMsg"},
    fecadd{YType::uint32, "fecAdd"},
    ileadd{YType::uint32, "ileAdd"},
    fecdel{YType::uint32, "fecDel"},
    iledel{YType::uint32, "ileDel"},
    lastxid{YType::uint32, "lastXid"},
    fecack{YType::uint32, "fecAck"}
{

    yang_name = "Clients-list"; yang_parent_name = "client-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::ClientItems::ClientsList::~ClientsList()
{
}

bool System::LabeltableItems::ClientItems::ClientsList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| index_.is_set
	|| uuid.is_set
	|| mtssap.is_set
	|| staletime.is_set
	|| flag.is_set
	|| regmsg.is_set
	|| convmsg.is_set
	|| fecmsg.is_set
	|| fecadd.is_set
	|| ileadd.is_set
	|| fecdel.is_set
	|| iledel.is_set
	|| lastxid.is_set
	|| fecack.is_set;
}

bool System::LabeltableItems::ClientItems::ClientsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| ydk::is_set(mtssap.yfilter)
	|| ydk::is_set(staletime.yfilter)
	|| ydk::is_set(flag.yfilter)
	|| ydk::is_set(regmsg.yfilter)
	|| ydk::is_set(convmsg.yfilter)
	|| ydk::is_set(fecmsg.yfilter)
	|| ydk::is_set(fecadd.yfilter)
	|| ydk::is_set(ileadd.yfilter)
	|| ydk::is_set(fecdel.yfilter)
	|| ydk::is_set(iledel.yfilter)
	|| ydk::is_set(lastxid.yfilter)
	|| ydk::is_set(fecack.yfilter);
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/client-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::ClientItems::ClientsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clients-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::ClientItems::ClientsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());
    if (mtssap.is_set || is_set(mtssap.yfilter)) leaf_name_data.push_back(mtssap.get_name_leafdata());
    if (staletime.is_set || is_set(staletime.yfilter)) leaf_name_data.push_back(staletime.get_name_leafdata());
    if (flag.is_set || is_set(flag.yfilter)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (regmsg.is_set || is_set(regmsg.yfilter)) leaf_name_data.push_back(regmsg.get_name_leafdata());
    if (convmsg.is_set || is_set(convmsg.yfilter)) leaf_name_data.push_back(convmsg.get_name_leafdata());
    if (fecmsg.is_set || is_set(fecmsg.yfilter)) leaf_name_data.push_back(fecmsg.get_name_leafdata());
    if (fecadd.is_set || is_set(fecadd.yfilter)) leaf_name_data.push_back(fecadd.get_name_leafdata());
    if (ileadd.is_set || is_set(ileadd.yfilter)) leaf_name_data.push_back(ileadd.get_name_leafdata());
    if (fecdel.is_set || is_set(fecdel.yfilter)) leaf_name_data.push_back(fecdel.get_name_leafdata());
    if (iledel.is_set || is_set(iledel.yfilter)) leaf_name_data.push_back(iledel.get_name_leafdata());
    if (lastxid.is_set || is_set(lastxid.yfilter)) leaf_name_data.push_back(lastxid.get_name_leafdata());
    if (fecack.is_set || is_set(fecack.yfilter)) leaf_name_data.push_back(fecack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::ClientItems::ClientsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::ClientItems::ClientsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::ClientItems::ClientsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtsSap")
    {
        mtssap = value;
        mtssap.value_namespace = name_space;
        mtssap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleTime")
    {
        staletime = value;
        staletime.value_namespace = name_space;
        staletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag")
    {
        flag = value;
        flag.value_namespace = name_space;
        flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regMsg")
    {
        regmsg = value;
        regmsg.value_namespace = name_space;
        regmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "convMsg")
    {
        convmsg = value;
        convmsg.value_namespace = name_space;
        convmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecMsg")
    {
        fecmsg = value;
        fecmsg.value_namespace = name_space;
        fecmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAdd")
    {
        fecadd = value;
        fecadd.value_namespace = name_space;
        fecadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileAdd")
    {
        ileadd = value;
        ileadd.value_namespace = name_space;
        ileadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecDel")
    {
        fecdel = value;
        fecdel.value_namespace = name_space;
        fecdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ileDel")
    {
        iledel = value;
        iledel.value_namespace = name_space;
        iledel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastXid")
    {
        lastxid = value;
        lastxid.value_namespace = name_space;
        lastxid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecAck")
    {
        fecack = value;
        fecack.value_namespace = name_space;
        fecack.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::ClientItems::ClientsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
    if(value_path == "mtsSap")
    {
        mtssap.yfilter = yfilter;
    }
    if(value_path == "staleTime")
    {
        staletime.yfilter = yfilter;
    }
    if(value_path == "flag")
    {
        flag.yfilter = yfilter;
    }
    if(value_path == "regMsg")
    {
        regmsg.yfilter = yfilter;
    }
    if(value_path == "convMsg")
    {
        convmsg.yfilter = yfilter;
    }
    if(value_path == "fecMsg")
    {
        fecmsg.yfilter = yfilter;
    }
    if(value_path == "fecAdd")
    {
        fecadd.yfilter = yfilter;
    }
    if(value_path == "ileAdd")
    {
        ileadd.yfilter = yfilter;
    }
    if(value_path == "fecDel")
    {
        fecdel.yfilter = yfilter;
    }
    if(value_path == "ileDel")
    {
        iledel.yfilter = yfilter;
    }
    if(value_path == "lastXid")
    {
        lastxid.yfilter = yfilter;
    }
    if(value_path == "fecAck")
    {
        fecack.yfilter = yfilter;
    }
}

bool System::LabeltableItems::ClientItems::ClientsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "index" || name == "uuid" || name == "mtsSap" || name == "staleTime" || name == "flag" || name == "regMsg" || name == "convMsg" || name == "fecMsg" || name == "fecAdd" || name == "ileAdd" || name == "fecDel" || name == "ileDel" || name == "lastXid" || name == "fecAck")
        return true;
    return false;
}

System::LabeltableItems::LblrangeItems::LblrangeItems()
    :
    dynlblmin{YType::uint32, "dynLblMin"},
    dynlblmax{YType::uint32, "dynLblMax"},
    staticlblmin{YType::uint32, "staticLblMin"},
    staticlblmax{YType::uint32, "staticLblMax"},
    operdynlblmin{YType::uint32, "operDynLblMin"},
    operdynlblmax{YType::uint32, "operDynLblMax"},
    operstaticlblmin{YType::uint32, "operStaticLblMin"},
    operstaticlblmax{YType::uint32, "operStaticLblMax"},
    operstaticlblsoutofrange{YType::uint32, "operStaticLblsOutOfRange"}
{

    yang_name = "lblrange-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblrangeItems::~LblrangeItems()
{
}

bool System::LabeltableItems::LblrangeItems::has_data() const
{
    if (is_presence_container) return true;
    return dynlblmin.is_set
	|| dynlblmax.is_set
	|| staticlblmin.is_set
	|| staticlblmax.is_set
	|| operdynlblmin.is_set
	|| operdynlblmax.is_set
	|| operstaticlblmin.is_set
	|| operstaticlblmax.is_set
	|| operstaticlblsoutofrange.is_set;
}

bool System::LabeltableItems::LblrangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynlblmin.yfilter)
	|| ydk::is_set(dynlblmax.yfilter)
	|| ydk::is_set(staticlblmin.yfilter)
	|| ydk::is_set(staticlblmax.yfilter)
	|| ydk::is_set(operdynlblmin.yfilter)
	|| ydk::is_set(operdynlblmax.yfilter)
	|| ydk::is_set(operstaticlblmin.yfilter)
	|| ydk::is_set(operstaticlblmax.yfilter)
	|| ydk::is_set(operstaticlblsoutofrange.yfilter);
}

std::string System::LabeltableItems::LblrangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lblrange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynlblmin.is_set || is_set(dynlblmin.yfilter)) leaf_name_data.push_back(dynlblmin.get_name_leafdata());
    if (dynlblmax.is_set || is_set(dynlblmax.yfilter)) leaf_name_data.push_back(dynlblmax.get_name_leafdata());
    if (staticlblmin.is_set || is_set(staticlblmin.yfilter)) leaf_name_data.push_back(staticlblmin.get_name_leafdata());
    if (staticlblmax.is_set || is_set(staticlblmax.yfilter)) leaf_name_data.push_back(staticlblmax.get_name_leafdata());
    if (operdynlblmin.is_set || is_set(operdynlblmin.yfilter)) leaf_name_data.push_back(operdynlblmin.get_name_leafdata());
    if (operdynlblmax.is_set || is_set(operdynlblmax.yfilter)) leaf_name_data.push_back(operdynlblmax.get_name_leafdata());
    if (operstaticlblmin.is_set || is_set(operstaticlblmin.yfilter)) leaf_name_data.push_back(operstaticlblmin.get_name_leafdata());
    if (operstaticlblmax.is_set || is_set(operstaticlblmax.yfilter)) leaf_name_data.push_back(operstaticlblmax.get_name_leafdata());
    if (operstaticlblsoutofrange.is_set || is_set(operstaticlblsoutofrange.yfilter)) leaf_name_data.push_back(operstaticlblsoutofrange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin = value;
        dynlblmin.value_namespace = name_space;
        dynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax = value;
        dynlblmax.value_namespace = name_space;
        dynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin = value;
        staticlblmin.value_namespace = name_space;
        staticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax = value;
        staticlblmax.value_namespace = name_space;
        staticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin = value;
        operdynlblmin.value_namespace = name_space;
        operdynlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax = value;
        operdynlblmax.value_namespace = name_space;
        operdynlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin = value;
        operstaticlblmin.value_namespace = name_space;
        operstaticlblmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax = value;
        operstaticlblmax.value_namespace = name_space;
        operstaticlblmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange = value;
        operstaticlblsoutofrange.value_namespace = name_space;
        operstaticlblsoutofrange.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynLblMin")
    {
        dynlblmin.yfilter = yfilter;
    }
    if(value_path == "dynLblMax")
    {
        dynlblmax.yfilter = yfilter;
    }
    if(value_path == "staticLblMin")
    {
        staticlblmin.yfilter = yfilter;
    }
    if(value_path == "staticLblMax")
    {
        staticlblmax.yfilter = yfilter;
    }
    if(value_path == "operDynLblMin")
    {
        operdynlblmin.yfilter = yfilter;
    }
    if(value_path == "operDynLblMax")
    {
        operdynlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMin")
    {
        operstaticlblmin.yfilter = yfilter;
    }
    if(value_path == "operStaticLblMax")
    {
        operstaticlblmax.yfilter = yfilter;
    }
    if(value_path == "operStaticLblsOutOfRange")
    {
        operstaticlblsoutofrange.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynLblMin" || name == "dynLblMax" || name == "staticLblMin" || name == "staticLblMax" || name == "operDynLblMin" || name == "operDynLblMax" || name == "operStaticLblMin" || name == "operStaticLblMax" || name == "operStaticLblsOutOfRange")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LblItems()
    :
    labels_list(this, {"label"})
{

    yang_name = "lbl-items"; yang_parent_name = "labeltable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::~LblItems()
{
}

bool System::LabeltableItems::LblItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::LblItems::has_operation() const
{
    for (std::size_t index=0; index<labels_list.len(); index++)
    {
        if(labels_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::LblItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Labels-list")
    {
        auto c = std::make_shared<System::LabeltableItems::LblItems::LabelsList>();
        c->parent = this;
        labels_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : labels_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LabeltableItems::LblItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::LblItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::LblItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Labels-list")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::LabelsList()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    labelbytestats{YType::uint64, "labelByteStats"},
    labelpacketstats{YType::uint64, "labelPacketStats"}
        ,
    fecipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>())
    , fecipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>())
    , fecpolicyipv4_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>())
    , fecpolicyipv6_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>())
    , fecnone_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>())
    , fecperce_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>())
    , fecreserved_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>())
    , fecdeagg_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>())
    , fecadjsid_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>())
    , nhlfe_items(std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>())
{
    fecipv4_items->parent = this;
    fecipv6_items->parent = this;
    fecpolicyipv4_items->parent = this;
    fecpolicyipv6_items->parent = this;
    fecnone_items->parent = this;
    fecperce_items->parent = this;
    fecreserved_items->parent = this;
    fecdeagg_items->parent = this;
    fecadjsid_items->parent = this;
    nhlfe_items->parent = this;

    yang_name = "Labels-list"; yang_parent_name = "lbl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LabeltableItems::LblItems::LabelsList::~LabelsList()
{
}

bool System::LabeltableItems::LblItems::LabelsList::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| labelbytestats.is_set
	|| labelpacketstats.is_set
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_data())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_data())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_data())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_data())
	|| (fecnone_items !=  nullptr && fecnone_items->has_data())
	|| (fecperce_items !=  nullptr && fecperce_items->has_data())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_data())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_data())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_data())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_data());
}

bool System::LabeltableItems::LblItems::LabelsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(labelbytestats.yfilter)
	|| ydk::is_set(labelpacketstats.yfilter)
	|| (fecipv4_items !=  nullptr && fecipv4_items->has_operation())
	|| (fecipv6_items !=  nullptr && fecipv6_items->has_operation())
	|| (fecpolicyipv4_items !=  nullptr && fecpolicyipv4_items->has_operation())
	|| (fecpolicyipv6_items !=  nullptr && fecpolicyipv6_items->has_operation())
	|| (fecnone_items !=  nullptr && fecnone_items->has_operation())
	|| (fecperce_items !=  nullptr && fecperce_items->has_operation())
	|| (fecreserved_items !=  nullptr && fecreserved_items->has_operation())
	|| (fecdeagg_items !=  nullptr && fecdeagg_items->has_operation())
	|| (fecadjsid_items !=  nullptr && fecadjsid_items->has_operation())
	|| (nhlfe_items !=  nullptr && nhlfe_items->has_operation());
}

std::string System::LabeltableItems::LblItems::LabelsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/labeltable-items/lbl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LabeltableItems::LblItems::LabelsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Labels-list";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (labelbytestats.is_set || is_set(labelbytestats.yfilter)) leaf_name_data.push_back(labelbytestats.get_name_leafdata());
    if (labelpacketstats.is_set || is_set(labelpacketstats.yfilter)) leaf_name_data.push_back(labelpacketstats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FecIPv4-items")
    {
        if(fecipv4_items == nullptr)
        {
            fecipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv4Items>();
        }
        return fecipv4_items;
    }

    if(child_yang_name == "FecIPv6-items")
    {
        if(fecipv6_items == nullptr)
        {
            fecipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecIPv6Items>();
        }
        return fecipv6_items;
    }

    if(child_yang_name == "FecPolicyIPv4-items")
    {
        if(fecpolicyipv4_items == nullptr)
        {
            fecpolicyipv4_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items>();
        }
        return fecpolicyipv4_items;
    }

    if(child_yang_name == "FecPolicyIPv6-items")
    {
        if(fecpolicyipv6_items == nullptr)
        {
            fecpolicyipv6_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items>();
        }
        return fecpolicyipv6_items;
    }

    if(child_yang_name == "FecNone-items")
    {
        if(fecnone_items == nullptr)
        {
            fecnone_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecNoneItems>();
        }
        return fecnone_items;
    }

    if(child_yang_name == "FecPerCE-items")
    {
        if(fecperce_items == nullptr)
        {
            fecperce_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecPerCEItems>();
        }
        return fecperce_items;
    }

    if(child_yang_name == "FecReserved-items")
    {
        if(fecreserved_items == nullptr)
        {
            fecreserved_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecReservedItems>();
        }
        return fecreserved_items;
    }

    if(child_yang_name == "FecDeagg-items")
    {
        if(fecdeagg_items == nullptr)
        {
            fecdeagg_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecDeaggItems>();
        }
        return fecdeagg_items;
    }

    if(child_yang_name == "FecAdjSID-items")
    {
        if(fecadjsid_items == nullptr)
        {
            fecadjsid_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems>();
        }
        return fecadjsid_items;
    }

    if(child_yang_name == "Nhlfe-items")
    {
        if(nhlfe_items == nullptr)
        {
            nhlfe_items = std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems>();
        }
        return nhlfe_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fecipv4_items != nullptr)
    {
        children["FecIPv4-items"] = fecipv4_items;
    }

    if(fecipv6_items != nullptr)
    {
        children["FecIPv6-items"] = fecipv6_items;
    }

    if(fecpolicyipv4_items != nullptr)
    {
        children["FecPolicyIPv4-items"] = fecpolicyipv4_items;
    }

    if(fecpolicyipv6_items != nullptr)
    {
        children["FecPolicyIPv6-items"] = fecpolicyipv6_items;
    }

    if(fecnone_items != nullptr)
    {
        children["FecNone-items"] = fecnone_items;
    }

    if(fecperce_items != nullptr)
    {
        children["FecPerCE-items"] = fecperce_items;
    }

    if(fecreserved_items != nullptr)
    {
        children["FecReserved-items"] = fecreserved_items;
    }

    if(fecdeagg_items != nullptr)
    {
        children["FecDeagg-items"] = fecdeagg_items;
    }

    if(fecadjsid_items != nullptr)
    {
        children["FecAdjSID-items"] = fecadjsid_items;
    }

    if(nhlfe_items != nullptr)
    {
        children["Nhlfe-items"] = nhlfe_items;
    }

    return children;
}

void System::LabeltableItems::LblItems::LabelsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats = value;
        labelbytestats.value_namespace = name_space;
        labelbytestats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats = value;
        labelpacketstats.value_namespace = name_space;
        labelpacketstats.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "labelByteStats")
    {
        labelbytestats.yfilter = yfilter;
    }
    if(value_path == "labelPacketStats")
    {
        labelpacketstats.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FecIPv4-items" || name == "FecIPv6-items" || name == "FecPolicyIPv4-items" || name == "FecPolicyIPv6-items" || name == "FecNone-items" || name == "FecPerCE-items" || name == "FecReserved-items" || name == "FecDeagg-items" || name == "FecAdjSID-items" || name == "Nhlfe-items" || name == "label" || name == "fecType" || name == "labelByteStats" || name == "labelPacketStats")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::FecIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::~FecIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::FecIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::~FecIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::FecPolicyIPv4Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv4-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::~FecPolicyIPv4Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::FecPolicyIPv6Items()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"},
    prefix{YType::str, "prefix"},
    masklength{YType::uint8, "maskLength"}
{

    yang_name = "FecPolicyIPv6-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::~FecPolicyIPv6Items()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set
	|| prefix.is_set
	|| masklength.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(masklength.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPolicyIPv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (masklength.is_set || is_set(masklength.yfilter)) leaf_name_data.push_back(masklength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLength")
    {
        masklength = value;
        masklength.value_namespace = name_space;
        masklength.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "maskLength")
    {
        masklength.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId" || name == "prefix" || name == "maskLength")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::FecNoneItems()
    :
    label{YType::uint32, "label"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"}
{

    yang_name = "FecNone-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecNoneItems::~FecNoneItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| fectype.is_set
	|| state.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecNone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecNoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecNoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecNoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "fecType" || name == "state")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::FecPerCEItems()
    :
    nexthopset{YType::uint32, "nextHopSet"},
    addressfamily{YType::str, "addressFamily"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecPerCE-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::~FecPerCEItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_data() const
{
    if (is_presence_container) return true;
    return nexthopset.is_set
	|| addressfamily.is_set
	|| fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthopset.yfilter)
	|| ydk::is_set(addressfamily.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecPerCE-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthopset.is_set || is_set(nexthopset.yfilter)) leaf_name_data.push_back(nexthopset.get_name_leafdata());
    if (addressfamily.is_set || is_set(addressfamily.yfilter)) leaf_name_data.push_back(addressfamily.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nextHopSet")
    {
        nexthopset = value;
        nexthopset.value_namespace = name_space;
        nexthopset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressFamily")
    {
        addressfamily = value;
        addressfamily.value_namespace = name_space;
        addressfamily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nextHopSet")
    {
        nexthopset.yfilter = yfilter;
    }
    if(value_path == "addressFamily")
    {
        addressfamily.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecPerCEItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nextHopSet" || name == "addressFamily" || name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecReservedItems::FecReservedItems()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecReserved-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecReservedItems::~FecReservedItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecReserved-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecReservedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecReservedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecReservedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecReservedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::FecDeaggItems()
    :
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecDeagg-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::~FecDeaggItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_data() const
{
    if (is_presence_container) return true;
    return fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecDeagg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecDeaggItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::FecAdjSIDItems()
    :
    ifindex{YType::uint32, "ifIndex"},
    appid{YType::uint32, "appId"},
    nexthop{YType::str, "nextHop"},
    fectype{YType::str, "fecType"},
    state{YType::str, "state"},
    tableid{YType::str, "tableId"}
{

    yang_name = "FecAdjSID-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::~FecAdjSIDItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| appid.is_set
	|| nexthop.is_set
	|| fectype.is_set
	|| state.is_set
	|| tableid.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(appid.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(fectype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tableid.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FecAdjSID-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (fectype.is_set || is_set(fectype.yfilter)) leaf_name_data.push_back(fectype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.yfilter)) leaf_name_data.push_back(tableid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appId")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextHop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecType")
    {
        fectype = value;
        fectype.value_namespace = name_space;
        fectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tableId")
    {
        tableid = value;
        tableid.value_namespace = name_space;
        tableid.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "appId")
    {
        appid.yfilter = yfilter;
    }
    if(value_path == "nextHop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "fecType")
    {
        fectype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tableId")
    {
        tableid.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "appId" || name == "nextHop" || name == "fecType" || name == "state" || name == "tableId")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeItems()
    :
    nhlfe_list(this, {"idx"})
{

    yang_name = "Nhlfe-items"; yang_parent_name = "Labels-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::~NhlfeItems()
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nhlfe_list.len(); index++)
    {
        if(nhlfe_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_operation() const
{
    for (std::size_t index=0; index<nhlfe_list.len(); index++)
    {
        if(nhlfe_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nhlfe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nhlfe-list")
    {
        auto c = std::make_shared<System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList>();
        c->parent = this;
        nhlfe_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nhlfe_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nhlfe-list")
        return true;
    return false;
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::NhlfeList()
    :
    idx{YType::uint32, "idx"},
    ip{YType::str, "ip"},
    outlabel{YType::str, "outLabel"},
    interface{YType::str, "interface"},
    outlabelbytestats{YType::uint64, "outLabelByteStats"},
    outlabelpacketstats{YType::uint64, "outLabelPacketStats"}
{

    yang_name = "Nhlfe-list"; yang_parent_name = "Nhlfe-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::~NhlfeList()
{
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| ip.is_set
	|| outlabel.is_set
	|| interface.is_set
	|| outlabelbytestats.is_set
	|| outlabelpacketstats.is_set;
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(outlabel.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(outlabelbytestats.yfilter)
	|| ydk::is_set(outlabelpacketstats.yfilter);
}

std::string System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nhlfe-list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (outlabel.is_set || is_set(outlabel.yfilter)) leaf_name_data.push_back(outlabel.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (outlabelbytestats.is_set || is_set(outlabelbytestats.yfilter)) leaf_name_data.push_back(outlabelbytestats.get_name_leafdata());
    if (outlabelpacketstats.is_set || is_set(outlabelpacketstats.yfilter)) leaf_name_data.push_back(outlabelpacketstats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabel")
    {
        outlabel = value;
        outlabel.value_namespace = name_space;
        outlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabelByteStats")
    {
        outlabelbytestats = value;
        outlabelbytestats.value_namespace = name_space;
        outlabelbytestats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outLabelPacketStats")
    {
        outlabelpacketstats = value;
        outlabelpacketstats.value_namespace = name_space;
        outlabelpacketstats.value_namespace_prefix = name_space_prefix;
    }
}

void System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "outLabel")
    {
        outlabel.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "outLabelByteStats")
    {
        outlabelbytestats.yfilter = yfilter;
    }
    if(value_path == "outLabelPacketStats")
    {
        outlabelpacketstats.yfilter = yfilter;
    }
}

bool System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "ip" || name == "outLabel" || name == "interface" || name == "outLabelByteStats" || name == "outLabelPacketStats")
        return true;
    return false;
}

System::MribItems::MribItems()
    :
    inst_items(std::make_shared<System::MribItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "mrib-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::~MribItems()
{
}

bool System::MribItems::has_data() const
{
    if (is_presence_container) return true;
    return (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MribItems::has_operation() const
{
    return is_set(yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MribItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MribItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::MribItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items")
        return true;
    return false;
}

System::MribItems::InstItems::InstItems()
    :
    dom_items(std::make_shared<System::MribItems::InstItems::DomItems>())
    , routedb_items(std::make_shared<System::MribItems::InstItems::RouteDbItems>())
{
    dom_items->parent = this;
    routedb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "mrib-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::~InstItems()
{
}

bool System::MribItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data())
	|| (routedb_items !=  nullptr && routedb_items->has_data());
}

bool System::MribItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (routedb_items !=  nullptr && routedb_items->has_operation());
}

std::string System::MribItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MribItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "routeDb-items")
    {
        if(routedb_items == nullptr)
        {
            routedb_items = std::make_shared<System::MribItems::InstItems::RouteDbItems>();
        }
        return routedb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(routedb_items != nullptr)
    {
        children["routeDb-items"] = routedb_items;
    }

    return children;
}

void System::MribItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "routeDb-items")
        return true;
    return false;
}


}
}

