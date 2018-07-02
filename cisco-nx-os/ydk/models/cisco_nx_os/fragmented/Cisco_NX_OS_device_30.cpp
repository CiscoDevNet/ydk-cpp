
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_30.hpp"
#include "Cisco_NX_OS_device_31.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtfvEpDefRefToL2MacEpItems()
    :
    rtfvepdefreftol2macep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToL2MacEp-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::~RtfvEpDefRefToL2MacEpItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToL2MacEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToL2MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList>();
        c->parent = this;
        rtfvepdefreftol2macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvepdefreftol2macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToL2MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::RtFvEpDefRefToL2MacEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToL2MacEp-list"; yang_parent_name = "rtfvEpDefRefToL2MacEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::~RtFvEpDefRefToL2MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToL2MacEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
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

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        c->parent = this;
        rtspanspansrctol2cktepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtspanspansrctol2cktepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        c->parent = this;
        rtfvdomifconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdomifconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::RsvlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::~RsvlanEppAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::VxlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vxlan-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::~VxlanItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList>();
        c->parent = this;
        cktep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    mcastencap{YType::str, "mcastEncap"},
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
    db_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvxlaneppatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems>())
{
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvxlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vxlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mcastencap.is_set
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
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
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
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());
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

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvxlanEppAtt-items")
    {
        if(rsvxlaneppatt_items == nullptr)
        {
            rsvxlaneppatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems>();
        }
        return rsvxlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(rsvxlaneppatt_items != nullptr)
    {
        children["rsvxlanEppAtt-items"] = rsvxlaneppatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvxlanEppAtt-items" || name == "encap" || name == "mcastEncap" || name == "name" || name == "type" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
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

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        c->parent = this;
        rtspanspansrctol2cktepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtspanspansrctol2cktepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        c->parent = this;
        rtfvdomifconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdomifconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::RsvxlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvxlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::~RsvxlanEppAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvxlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsextBDItems()
    :
    rsextbd_list(this, {"tdn"})
{

    yang_name = "rsextBD-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsextBDItems::~RsextBDItems()
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsextbd_list.len(); index++)
    {
        if(rsextbd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_operation() const
{
    for (std::size_t index=0; index<rsextbd_list.len(); index++)
    {
        if(rsextbd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsextBDItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsextBD-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsextBDItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RsextBDItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsExtBD-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList>();
        c->parent = this;
        rsextbd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RsextBDItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsextbd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::RsextBDItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RsextBDItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsExtBD-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::RsExtBDList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsExtBD-list"; yang_parent_name = "rsextBD-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::~RsExtBDList()
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsExtBD-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsbdVsanMapItems()
    :
    rsbdvsanmap_list(this, {"tdn"})
{

    yang_name = "rsbdVsanMap-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::~RsbdVsanMapItems()
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsbdvsanmap_list.len(); index++)
    {
        if(rsbdvsanmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsbdvsanmap_list.len(); index++)
    {
        if(rsbdvsanmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsbdVsanMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsBdVsanMap-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList>();
        c->parent = this;
        rsbdvsanmap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsbdvsanmap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsBdVsanMap-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::RsBdVsanMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    assocoperst{YType::enumeration, "assocOperSt"}
{

    yang_name = "RsBdVsanMap-list"; yang_parent_name = "rsbdVsanMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::~RsBdVsanMapList()
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| assocoperst.is_set;
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(assocoperst.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsBdVsanMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (assocoperst.is_set || is_set(assocoperst.yfilter)) leaf_name_data.push_back(assocoperst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assocOperSt")
    {
        assocoperst = value;
        assocoperst.value_namespace = name_space;
        assocoperst.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
    if(value_path == "assocOperSt")
    {
        assocoperst.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "assocOperSt")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto c = std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        c->parent = this;
        rtfvdomifconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdomifconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbgVlanStatsItems::DbgVlanStatsItems()
    :
    inucastoctets{YType::uint64, "inUcastOctets"},
    inucastpkts{YType::uint64, "inUcastPkts"},
    inmcastoctets{YType::uint64, "inMcastOctets"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    inbcastoctets{YType::uint64, "inBcastOctets"},
    inbcastpkts{YType::uint64, "inBcastPkts"},
    inl3ucastoctets{YType::uint64, "inL3UcastOctets"},
    inl3ucastpkts{YType::uint64, "inL3UcastPkts"},
    outucastoctets{YType::uint64, "outUcastOctets"},
    outucastpkts{YType::uint64, "outUcastPkts"}
{

    yang_name = "dbgVlanStats-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbgVlanStatsItems::~DbgVlanStatsItems()
{
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inucastoctets.is_set
	|| inucastpkts.is_set
	|| inmcastoctets.is_set
	|| inmcastpkts.is_set
	|| inbcastoctets.is_set
	|| inbcastpkts.is_set
	|| inl3ucastoctets.is_set
	|| inl3ucastpkts.is_set
	|| outucastoctets.is_set
	|| outucastpkts.is_set;
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inucastoctets.yfilter)
	|| ydk::is_set(inucastpkts.yfilter)
	|| ydk::is_set(inmcastoctets.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(inbcastoctets.yfilter)
	|| ydk::is_set(inbcastpkts.yfilter)
	|| ydk::is_set(inl3ucastoctets.yfilter)
	|| ydk::is_set(inl3ucastpkts.yfilter)
	|| ydk::is_set(outucastoctets.yfilter)
	|| ydk::is_set(outucastpkts.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgVlanStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inucastoctets.is_set || is_set(inucastoctets.yfilter)) leaf_name_data.push_back(inucastoctets.get_name_leafdata());
    if (inucastpkts.is_set || is_set(inucastpkts.yfilter)) leaf_name_data.push_back(inucastpkts.get_name_leafdata());
    if (inmcastoctets.is_set || is_set(inmcastoctets.yfilter)) leaf_name_data.push_back(inmcastoctets.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (inbcastoctets.is_set || is_set(inbcastoctets.yfilter)) leaf_name_data.push_back(inbcastoctets.get_name_leafdata());
    if (inbcastpkts.is_set || is_set(inbcastpkts.yfilter)) leaf_name_data.push_back(inbcastpkts.get_name_leafdata());
    if (inl3ucastoctets.is_set || is_set(inl3ucastoctets.yfilter)) leaf_name_data.push_back(inl3ucastoctets.get_name_leafdata());
    if (inl3ucastpkts.is_set || is_set(inl3ucastpkts.yfilter)) leaf_name_data.push_back(inl3ucastpkts.get_name_leafdata());
    if (outucastoctets.is_set || is_set(outucastoctets.yfilter)) leaf_name_data.push_back(outucastoctets.get_name_leafdata());
    if (outucastpkts.is_set || is_set(outucastpkts.yfilter)) leaf_name_data.push_back(outucastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::BdItems_::BDList::DbgVlanStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inUcastOctets")
    {
        inucastoctets = value;
        inucastoctets.value_namespace = name_space;
        inucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inUcastPkts")
    {
        inucastpkts = value;
        inucastpkts.value_namespace = name_space;
        inucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastOctets")
    {
        inmcastoctets = value;
        inmcastoctets.value_namespace = name_space;
        inmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inBcastOctets")
    {
        inbcastoctets = value;
        inbcastoctets.value_namespace = name_space;
        inbcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts = value;
        inbcastpkts.value_namespace = name_space;
        inbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inL3UcastOctets")
    {
        inl3ucastoctets = value;
        inl3ucastoctets.value_namespace = name_space;
        inl3ucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inL3UcastPkts")
    {
        inl3ucastpkts = value;
        inl3ucastpkts.value_namespace = name_space;
        inl3ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outUcastOctets")
    {
        outucastoctets = value;
        outucastoctets.value_namespace = name_space;
        outucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outUcastPkts")
    {
        outucastpkts = value;
        outucastpkts.value_namespace = name_space;
        outucastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbgVlanStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inUcastOctets")
    {
        inucastoctets.yfilter = yfilter;
    }
    if(value_path == "inUcastPkts")
    {
        inucastpkts.yfilter = yfilter;
    }
    if(value_path == "inMcastOctets")
    {
        inmcastoctets.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "inBcastOctets")
    {
        inbcastoctets.yfilter = yfilter;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts.yfilter = yfilter;
    }
    if(value_path == "inL3UcastOctets")
    {
        inl3ucastoctets.yfilter = yfilter;
    }
    if(value_path == "inL3UcastPkts")
    {
        inl3ucastpkts.yfilter = yfilter;
    }
    if(value_path == "outUcastOctets")
    {
        outucastoctets.yfilter = yfilter;
    }
    if(value_path == "outUcastPkts")
    {
        outucastpkts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inUcastOctets" || name == "inUcastPkts" || name == "inMcastOctets" || name == "inMcastPkts" || name == "inBcastOctets" || name == "inBcastPkts" || name == "inL3UcastOctets" || name == "inL3UcastPkts" || name == "outUcastOctets" || name == "outUcastPkts")
        return true;
    return false;
}

System::BdItems::VlanItems::VlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanItems::~VlanItems()
{
}

bool System::BdItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList>();
        c->parent = this;
        cktep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::get_children() const
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

void System::BdItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::CktEpList()
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
    mac_items(std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems>())
    , db_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvlaneppatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems>())
{
    mac_items->parent = this;
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::has_data() const
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

bool System::BdItems::VlanItems::CktEpList::has_operation() const
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

std::string System::BdItems::VlanItems::CktEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvlanEppAtt-items")
    {
        if(rsvlaneppatt_items == nullptr)
        {
            rsvlaneppatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems>();
        }
        return rsvlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::get_children() const
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

void System::BdItems::VlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items" || name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvlanEppAtt-items" || name == "encap" || name == "fabEncap" || name == "operState" || name == "operStQual" || name == "name" || name == "type" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacItems()
    :
    macep_list(this, {"mac"})
{

    yang_name = "mac-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::~MacItems()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::MacItems::get_children() const
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

void System::BdItems::VlanItems::CktEpList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::MacEpList()
    :
    mac{YType::str, "mac"},
    if_{YType::str, "if"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"}
        ,
    rtfvepdefreftol2macep_items(std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>())
{
    rtfvepdefreftol2macep_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| if_.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefRefToL2MacEp-items")
    {
        if(rtfvepdefreftol2macep_items == nullptr)
        {
            rtfvepdefreftol2macep_items = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>();
        }
        return rtfvepdefreftol2macep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvepdefreftol2macep_items != nullptr)
    {
        children["rtfvEpDefRefToL2MacEp-items"] = rtfvepdefreftol2macep_items;
    }

    return children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefRefToL2MacEp-items" || name == "mac" || name == "if" || name == "operSt" || name == "operStQual" || name == "name")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtfvEpDefRefToL2MacEpItems()
    :
    rtfvepdefreftol2macep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToL2MacEp-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::~RtfvEpDefRefToL2MacEpItems()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToL2MacEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToL2MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList>();
        c->parent = this;
        rtfvepdefreftol2macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvepdefreftol2macep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToL2MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::RtFvEpDefRefToL2MacEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToL2MacEp-list"; yang_parent_name = "rtfvEpDefRefToL2MacEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::~RtFvEpDefRefToL2MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToL2MacEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
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

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        c->parent = this;
        rtspanspansrctol2cktepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtspanspansrctol2cktepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto c = std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        c->parent = this;
        rtfvdomifconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdomifconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::RsvlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::~RsvlanEppAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::VxlanItems::VxlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vxlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::~VxlanItems()
{
}

bool System::BdItems::VxlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList>();
        c->parent = this;
        cktep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::get_children() const
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

void System::BdItems::VxlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    mcastencap{YType::str, "mcastEncap"},
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
    db_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvxlaneppatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>())
{
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvxlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vxlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mcastencap.is_set
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
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
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
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vxlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());
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

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvxlanEppAtt-items")
    {
        if(rsvxlaneppatt_items == nullptr)
        {
            rsvxlaneppatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>();
        }
        return rsvxlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(rsvxlaneppatt_items != nullptr)
    {
        children["rsvxlanEppAtt-items"] = rsvxlaneppatt_items;
    }

    return children;
}

void System::BdItems::VxlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
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

void System::BdItems::VxlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
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

bool System::BdItems::VxlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvxlanEppAtt-items" || name == "encap" || name == "mcastEncap" || name == "name" || name == "type" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        c->parent = this;
        ipep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
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

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        c->parent = this;
        macep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        c->parent = this;
        rsmaceptoipepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        c->parent = this;
        rtspanspansrctol2cktepatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtspanspansrctol2cktepatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto c = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        c->parent = this;
        rtfvdomifconn_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvdomifconn_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::RsvxlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvxlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::~RsvxlanEppAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvxlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::TemplateTableItems::TemplateTableItems()
    :
    templateentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems>())
{
    templateentry_items->parent = this;

    yang_name = "templateTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::~TemplateTableItems()
{
}

bool System::TemplateTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (templateentry_items !=  nullptr && templateentry_items->has_data());
}

bool System::TemplateTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (templateentry_items !=  nullptr && templateentry_items->has_operation());
}

std::string System::TemplateTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templateEntry-items")
    {
        if(templateentry_items == nullptr)
        {
            templateentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems>();
        }
        return templateentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(templateentry_items != nullptr)
    {
        children["templateEntry-items"] = templateentry_items;
    }

    return children;
}

void System::TemplateTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templateEntry-items")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryItems()
    :
    templateentry_list(this, {"name"})
{

    yang_name = "templateEntry-items"; yang_parent_name = "templateTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::~TemplateEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::has_operation() const
{
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::TemplateEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TemplateEntry-list")
    {
        auto c = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList>();
        c->parent = this;
        templateentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::TemplateEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : templateentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TemplateTableItems::TemplateEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TemplateEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::TemplateEntryList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    refcount{YType::uint32, "refCount"}
        ,
    optable_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>())
{
    optable_items->parent = this;

    yang_name = "TemplateEntry-list"; yang_parent_name = "templateEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::~TemplateEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| refcount.is_set
	|| (optable_items !=  nullptr && optable_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| (optable_items !=  nullptr && optable_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/templateEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TemplateEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opTable-items")
    {
        if(optable_items == nullptr)
        {
            optable_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>();
        }
        return optable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optable_items != nullptr)
    {
        children["opTable-items"] = optable_items;
    }

    return children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opTable-items" || name == "name" || name == "description" || name == "refCount")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpTableItems()
    :
    description{YType::str, "description"}
        ,
    opentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>())
{
    opentry_items->parent = this;

    yang_name = "opTable-items"; yang_parent_name = "TemplateEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::~OpTableItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (opentry_items !=  nullptr && opentry_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (opentry_items !=  nullptr && opentry_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opEntry-items")
    {
        if(opentry_items == nullptr)
        {
            opentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>();
        }
        return opentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(opentry_items != nullptr)
    {
        children["opEntry-items"] = opentry_items;
    }

    return children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opEntry-items" || name == "description")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryItems()
    :
    opentry_list(this, {"operationtype"})
{

    yang_name = "opEntry-items"; yang_parent_name = "opTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::~OpEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_operation() const
{
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OpEntry-list")
    {
        auto c = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList>();
        c->parent = this;
        opentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : opentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OpEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::OpEntryList()
    :
    operationtype{YType::enumeration, "operationType"},
    templatetype{YType::enumeration, "templateType"},
    substitutestring{YType::str, "substituteString"},
    configstring{YType::str, "configString"},
    description{YType::str, "description"}
{

    yang_name = "OpEntry-list"; yang_parent_name = "opEntry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::~OpEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_data() const
{
    if (is_presence_container) return true;
    return operationtype.is_set
	|| templatetype.is_set
	|| substitutestring.is_set
	|| configstring.is_set
	|| description.is_set;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operationtype.yfilter)
	|| ydk::is_set(templatetype.yfilter)
	|| ydk::is_set(substitutestring.yfilter)
	|| ydk::is_set(configstring.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OpEntry-list";
    ADD_KEY_TOKEN(operationtype, "operationType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operationtype.is_set || is_set(operationtype.yfilter)) leaf_name_data.push_back(operationtype.get_name_leafdata());
    if (templatetype.is_set || is_set(templatetype.yfilter)) leaf_name_data.push_back(templatetype.get_name_leafdata());
    if (substitutestring.is_set || is_set(substitutestring.yfilter)) leaf_name_data.push_back(substitutestring.get_name_leafdata());
    if (configstring.is_set || is_set(configstring.yfilter)) leaf_name_data.push_back(configstring.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operationType")
    {
        operationtype = value;
        operationtype.value_namespace = name_space;
        operationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateType")
    {
        templatetype = value;
        templatetype.value_namespace = name_space;
        templatetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "substituteString")
    {
        substitutestring = value;
        substitutestring.value_namespace = name_space;
        substitutestring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configString")
    {
        configstring = value;
        configstring.value_namespace = name_space;
        configstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operationType")
    {
        operationtype.yfilter = yfilter;
    }
    if(value_path == "templateType")
    {
        templatetype.yfilter = yfilter;
    }
    if(value_path == "substituteString")
    {
        substitutestring.yfilter = yfilter;
    }
    if(value_path == "configString")
    {
        configstring.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operationType" || name == "templateType" || name == "substituteString" || name == "configString" || name == "description")
        return true;
    return false;
}

System::FcItems::FcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    vfc_items(std::make_shared<System::FcItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "fc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::~FcItems()
{
}

bool System::FcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vfc_items != nullptr)
    {
        children["vfc-items"] = vfc_items;
    }

    return children;
}

void System::FcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::~VfcItems()
{
}

bool System::FcItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto c = std::make_shared<System::FcItems::VfcItems::VfcIfList>();
        c->parent = this;
        vfcif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vfcif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FcItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    boundif{YType::str, "boundIf"},
    boundmac{YType::str, "boundMac"},
    disablefka{YType::enumeration, "disableFka"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    mode{YType::enumeration, "mode"},
    trunkmode{YType::enumeration, "trunkMode"},
    trunkvsans{YType::str, "trunkVsans"},
    operportvsan{YType::uint32, "operPortVsan"},
    opermode{YType::enumeration, "operMode"},
    operst{YType::str, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    opertrunkmode{YType::enumeration, "operTrunkMode"},
    trunkportupvsanbmp{YType::str, "trunkPortUpVsanBmp"},
    trunkisolatedvsanbmp{YType::str, "trunkIsolatedVsanBmp"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    portwwn{YType::str, "portWwn"},
    lastlinkstchg{YType::str, "lastLinkStChg"}
        ,
    rssrvextifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>())
    , rtvsanifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>())
    , rtvrfmbr_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>())
{
    rssrvextifmap_items->parent = this;
    rtvsanifmap_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| boundif.is_set
	|| boundmac.is_set
	|| disablefka.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| mode.is_set
	|| trunkmode.is_set
	|| trunkvsans.is_set
	|| operportvsan.is_set
	|| opermode.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| opertrunkmode.is_set
	|| trunkportupvsanbmp.is_set
	|| trunkisolatedvsanbmp.is_set
	|| allowedvsanbmp.is_set
	|| portwwn.is_set
	|| lastlinkstchg.is_set
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_data())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::FcItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(boundif.yfilter)
	|| ydk::is_set(boundmac.yfilter)
	|| ydk::is_set(disablefka.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(trunkmode.yfilter)
	|| ydk::is_set(trunkvsans.yfilter)
	|| ydk::is_set(operportvsan.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(opertrunkmode.yfilter)
	|| ydk::is_set(trunkportupvsanbmp.yfilter)
	|| ydk::is_set(trunkisolatedvsanbmp.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(portwwn.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_operation())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::FcItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (boundif.is_set || is_set(boundif.yfilter)) leaf_name_data.push_back(boundif.get_name_leafdata());
    if (boundmac.is_set || is_set(boundmac.yfilter)) leaf_name_data.push_back(boundmac.get_name_leafdata());
    if (disablefka.is_set || is_set(disablefka.yfilter)) leaf_name_data.push_back(disablefka.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (trunkmode.is_set || is_set(trunkmode.yfilter)) leaf_name_data.push_back(trunkmode.get_name_leafdata());
    if (trunkvsans.is_set || is_set(trunkvsans.yfilter)) leaf_name_data.push_back(trunkvsans.get_name_leafdata());
    if (operportvsan.is_set || is_set(operportvsan.yfilter)) leaf_name_data.push_back(operportvsan.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (opertrunkmode.is_set || is_set(opertrunkmode.yfilter)) leaf_name_data.push_back(opertrunkmode.get_name_leafdata());
    if (trunkportupvsanbmp.is_set || is_set(trunkportupvsanbmp.yfilter)) leaf_name_data.push_back(trunkportupvsanbmp.get_name_leafdata());
    if (trunkisolatedvsanbmp.is_set || is_set(trunkisolatedvsanbmp.yfilter)) leaf_name_data.push_back(trunkisolatedvsanbmp.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (portwwn.is_set || is_set(portwwn.yfilter)) leaf_name_data.push_back(portwwn.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssrvExtIfMap-items")
    {
        if(rssrvextifmap_items == nullptr)
        {
            rssrvextifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>();
        }
        return rssrvextifmap_items;
    }

    if(child_yang_name == "rtVsanIfMap-items")
    {
        if(rtvsanifmap_items == nullptr)
        {
            rtvsanifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>();
        }
        return rtvsanifmap_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rssrvextifmap_items != nullptr)
    {
        children["rssrvExtIfMap-items"] = rssrvextifmap_items;
    }

    if(rtvsanifmap_items != nullptr)
    {
        children["rtVsanIfMap-items"] = rtvsanifmap_items;
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

void System::FcItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundIf")
    {
        boundif = value;
        boundif.value_namespace = name_space;
        boundif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundMac")
    {
        boundmac = value;
        boundmac.value_namespace = name_space;
        boundmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableFka")
    {
        disablefka = value;
        disablefka.value_namespace = name_space;
        disablefka.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkMode")
    {
        trunkmode = value;
        trunkmode.value_namespace = name_space;
        trunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans = value;
        trunkvsans.value_namespace = name_space;
        trunkvsans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan = value;
        operportvsan.value_namespace = name_space;
        operportvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operTrunkMode")
    {
        opertrunkmode = value;
        opertrunkmode.value_namespace = name_space;
        opertrunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp = value;
        trunkportupvsanbmp.value_namespace = name_space;
        trunkportupvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp = value;
        trunkisolatedvsanbmp.value_namespace = name_space;
        trunkisolatedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portWwn")
    {
        portwwn = value;
        portwwn.value_namespace = name_space;
        portwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "boundIf")
    {
        boundif.yfilter = yfilter;
    }
    if(value_path == "boundMac")
    {
        boundmac.yfilter = yfilter;
    }
    if(value_path == "disableFka")
    {
        disablefka.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "trunkMode")
    {
        trunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans.yfilter = yfilter;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operTrunkMode")
    {
        opertrunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp.yfilter = yfilter;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "portWwn")
    {
        portwwn.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssrvExtIfMap-items" || name == "rtVsanIfMap-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "boundIf" || name == "boundMac" || name == "disableFka" || name == "name" || name == "descr" || name == "adminSt" || name == "mode" || name == "trunkMode" || name == "trunkVsans" || name == "operPortVsan" || name == "operMode" || name == "operSt" || name == "operStQual" || name == "operTrunkMode" || name == "trunkPortUpVsanBmp" || name == "trunkIsolatedVsanBmp" || name == "allowedVsanBmp" || name == "portWwn" || name == "lastLinkStChg")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RssrvExtIfMapItems()
    :
    rssrvextifmap_list(this, {"tdn"})
{

    yang_name = "rssrvExtIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::~RssrvExtIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssrvExtIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSrvExtIfMap-list")
    {
        auto c = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList>();
        c->parent = this;
        rssrvextifmap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rssrvextifmap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSrvExtIfMap-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::RsSrvExtIfMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    configstatus{YType::enumeration, "configStatus"}
{

    yang_name = "RsSrvExtIfMap-list"; yang_parent_name = "rssrvExtIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::~RsSrvExtIfMapList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| configstatus.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSrvExtIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "configStatus")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::RtVsanIfMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtVsanIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::~RtVsanIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtVsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_children() const
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

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcoeItems::FcoeItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::FcoeItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "fcoe-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::~FcoeItems()
{
}

bool System::FcoeItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::FcoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::FcoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcoe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::FcoeItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::FcoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcoeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::FcoeItems::InstItems::InstItems()
    :
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    enablefex{YType::enumeration, "enableFex"},
    veloopback{YType::enumeration, "veLoopback"},
    fcmap{YType::uint32, "fcMap"},
    fcfprio{YType::uint32, "fcfPrio"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    vfc_items(std::make_shared<System::FcoeItems::InstItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "fcoe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::~InstItems()
{
}

bool System::FcoeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return fipkaintvl.is_set
	|| enablefex.is_set
	|| veloopback.is_set
	|| fcmap.is_set
	|| fcfprio.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcoeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(enablefex.yfilter)
	|| ydk::is_set(veloopback.yfilter)
	|| ydk::is_set(fcmap.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcoeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (enablefex.is_set || is_set(enablefex.yfilter)) leaf_name_data.push_back(enablefex.get_name_leafdata());
    if (veloopback.is_set || is_set(veloopback.yfilter)) leaf_name_data.push_back(veloopback.get_name_leafdata());
    if (fcmap.is_set || is_set(fcmap.yfilter)) leaf_name_data.push_back(fcmap.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcoeItems::InstItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vfc_items != nullptr)
    {
        children["vfc-items"] = vfc_items;
    }

    return children;
}

void System::FcoeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableFex")
    {
        enablefex = value;
        enablefex.value_namespace = name_space;
        enablefex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "veLoopback")
    {
        veloopback = value;
        veloopback.value_namespace = name_space;
        veloopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcMap")
    {
        fcmap = value;
        fcmap.value_namespace = name_space;
        fcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
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

void System::FcoeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "enableFex")
    {
        enablefex.yfilter = yfilter;
    }
    if(value_path == "veLoopback")
    {
        veloopback.yfilter = yfilter;
    }
    if(value_path == "fcMap")
    {
        fcmap.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
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

bool System::FcoeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "fipKaIntvl" || name == "enableFex" || name == "veLoopback" || name == "fcMap" || name == "fcfPrio" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::~VfcItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::InstItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto c = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList>();
        c->parent = this;
        vfcif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::InstItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vfcif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FcoeItems::InstItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    peermac{YType::str, "peerMac"},
    peerwwn{YType::str, "peerWwn"},
    fcid{YType::uint32, "fcId"},
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    fcmap{YType::uint32, "fcMap"},
    fcfprio{YType::uint32, "fcfPrio"},
    mode{YType::str, "mode"}
        ,
    fcid_items(std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>())
{
    fcid_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| peermac.is_set
	|| peerwwn.is_set
	|| fcid.is_set
	|| fipkaintvl.is_set
	|| fcmap.is_set
	|| fcfprio.is_set
	|| mode.is_set
	|| (fcid_items !=  nullptr && fcid_items->has_data());
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peermac.yfilter)
	|| ydk::is_set(peerwwn.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(fcmap.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (fcid_items !=  nullptr && fcid_items->has_operation());
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peermac.is_set || is_set(peermac.yfilter)) leaf_name_data.push_back(peermac.get_name_leafdata());
    if (peerwwn.is_set || is_set(peerwwn.yfilter)) leaf_name_data.push_back(peerwwn.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (fcmap.is_set || is_set(fcmap.yfilter)) leaf_name_data.push_back(fcmap.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fcid-items")
    {
        if(fcid_items == nullptr)
        {
            fcid_items = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>();
        }
        return fcid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fcid_items != nullptr)
    {
        children["fcid-items"] = fcid_items;
    }

    return children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerMac")
    {
        peermac = value;
        peermac.value_namespace = name_space;
        peermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerWwn")
    {
        peerwwn = value;
        peerwwn.value_namespace = name_space;
        peerwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcId")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcMap")
    {
        fcmap = value;
        fcmap.value_namespace = name_space;
        fcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peerMac")
    {
        peermac.yfilter = yfilter;
    }
    if(value_path == "peerWwn")
    {
        peerwwn.yfilter = yfilter;
    }
    if(value_path == "fcId")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "fcMap")
    {
        fcmap.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid-items" || name == "id" || name == "peerMac" || name == "peerWwn" || name == "fcId" || name == "fipKaIntvl" || name == "fcMap" || name == "fcfPrio" || name == "mode")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::FcidItems()
    :
    vfclogin_list(this, {"fcid"})
{

    yang_name = "fcid-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::~FcidItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_operation() const
{
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcLogin-list")
    {
        auto c = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList>();
        c->parent = this;
        vfclogin_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vfclogin_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcLogin-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::VfcLoginList()
    :
    fcid{YType::uint32, "fcId"},
    wwn{YType::str, "wwn"}
{

    yang_name = "VfcLogin-list"; yang_parent_name = "fcid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::~VfcLoginList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwn.is_set;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwn.yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcLogin-list";
    ADD_KEY_TOKEN(fcid, "fcId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwn.is_set || is_set(wwn.yfilter)) leaf_name_data.push_back(wwn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcId")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwn")
    {
        wwn = value;
        wwn.value_namespace = name_space;
        wwn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcId")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwn")
    {
        wwn.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcId" || name == "wwn")
        return true;
    return false;
}

System::NpvItems::NpvItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::NpvItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "npv-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::~NpvItems()
{
}

bool System::NpvItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NpvItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NpvItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NpvItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::NpvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NpvItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NpvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::NpvItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems>())
    , extif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems>())
{
    srvif_items->parent = this;
    extif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "npv-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::~InstItems()
{
}

bool System::NpvItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (srvif_items !=  nullptr && srvif_items->has_data())
	|| (extif_items !=  nullptr && extif_items->has_data());
}

bool System::NpvItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (srvif_items !=  nullptr && srvif_items->has_operation())
	|| (extif_items !=  nullptr && extif_items->has_operation());
}

std::string System::NpvItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems>();
        }
        return srvif_items;
    }

    if(child_yang_name == "extif-items")
    {
        if(extif_items == nullptr)
        {
            extif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems>();
        }
        return extif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srvif_items != nullptr)
    {
        children["srvif-items"] = srvif_items;
    }

    if(extif_items != nullptr)
    {
        children["extif-items"] = extif_items;
    }

    return children;
}

void System::NpvItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NpvItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NpvItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srvif-items" || name == "extif-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvifItems()
    :
    srvif_list(this, {"id"})
{

    yang_name = "srvif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::~SrvifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::has_operation() const
{
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIf-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList>();
        c->parent = this;
        srvif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srvif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::SrvifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvIfList()
    :
    id{YType::str, "id"},
    flags{YType::str, "flags"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"},
    fcid{YType::uint32, "fcid"},
    fsmst{YType::enumeration, "fsmSt"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>())
    , srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;
    srvif_items->parent = this;

    yang_name = "SrvIf-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::~SrvIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| flags.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set
	|| fcid.is_set
	|| fsmst.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (srvif_items !=  nullptr && srvif_items->has_data());
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (srvif_items !=  nullptr && srvif_items->has_operation());
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/srvif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_>();
        }
        return srvif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(targetif_items != nullptr)
    {
        children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        children["vsan-items"] = vsan_items;
    }

    if(srvif_items != nullptr)
    {
        children["srvif-items"] = srvif_items;
    }

    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "srvif-items" || name == "id" || name == "flags" || name == "defaultVsan" || name == "defaultExtIf" || name == "fcid" || name == "fsmSt" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList>();
        c->parent = this;
        targetif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : targetif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::VsanItems()
    :
    srvvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<srvvsan_list.len(); index++)
    {
        if(srvvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvVsan-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList>();
        c->parent = this;
        srvvsan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srvvsan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::SrvVsanList()
    :
    id{YType::uint32, "id"},
    fsmst{YType::enumeration, "fsmSt"}
{

    yang_name = "SrvVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::~SrvVsanList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fsmSt")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvifItems_()
    :
    srvifflogi_list(this, {"fcid"})
{

    yang_name = "srvif-items"; yang_parent_name = "SrvIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::~SrvifItems_()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_operation() const
{
    for (std::size_t index=0; index<srvifflogi_list.len(); index++)
    {
        if(srvifflogi_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIfFlogi-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList>();
        c->parent = this;
        srvifflogi_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srvifflogi_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIfFlogi-list")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::SrvIfFlogiList()
    :
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"},
    defaultvsan{YType::uint32, "defaultVsan"},
    defaultextif{YType::str, "defaultExtIf"}
{

    yang_name = "SrvIfFlogi-list"; yang_parent_name = "srvif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::~SrvIfFlogiList()
{
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| defaultvsan.is_set
	|| defaultextif.is_set;
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(defaultextif.yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SrvIfFlogi-list";
    ADD_KEY_TOKEN(fcid, "fcid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (defaultextif.is_set || is_set(defaultextif.yfilter)) leaf_name_data.push_back(defaultextif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif = value;
        defaultextif.value_namespace = name_space;
        defaultextif.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "defaultExtIf")
    {
        defaultextif.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid" || name == "wwpn" || name == "wwnn" || name == "defaultVsan" || name == "defaultExtIf")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtifItems()
    :
    extif_list(this, {"id"})
{

    yang_name = "extif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::~ExtifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::has_operation() const
{
    for (std::size_t index=0; index<extif_list.len(); index++)
    {
        if(extif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtIf-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList>();
        c->parent = this;
        extif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::ExtifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::ExtIfList()
    :
    id{YType::str, "id"},
    fsmst{YType::enumeration, "fsmSt"},
    numvsan{YType::uint32, "numVsan"},
    defaultvsan{YType::uint32, "defaultVsan"},
    flogivsan{YType::uint32, "flogiVsan"},
    operportmode{YType::str, "operPortMode"},
    logifindex{YType::str, "logIfIndex"},
    flags{YType::str, "flags"},
    fcid{YType::uint32, "fcid"},
    wwpn{YType::str, "wwpn"},
    wwnn{YType::str, "wwnn"}
        ,
    targetif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>())
    , vsan_items(std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>())
{
    targetif_items->parent = this;
    vsan_items->parent = this;

    yang_name = "ExtIf-list"; yang_parent_name = "extif-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::~ExtIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set
	|| numvsan.is_set
	|| defaultvsan.is_set
	|| flogivsan.is_set
	|| operportmode.is_set
	|| logifindex.is_set
	|| flags.is_set
	|| fcid.is_set
	|| wwpn.is_set
	|| wwnn.is_set
	|| (targetif_items !=  nullptr && targetif_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data());
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(numvsan.yfilter)
	|| ydk::is_set(defaultvsan.yfilter)
	|| ydk::is_set(flogivsan.yfilter)
	|| ydk::is_set(operportmode.yfilter)
	|| ydk::is_set(logifindex.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwpn.yfilter)
	|| ydk::is_set(wwnn.yfilter)
	|| (targetif_items !=  nullptr && targetif_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation());
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/extif-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (numvsan.is_set || is_set(numvsan.yfilter)) leaf_name_data.push_back(numvsan.get_name_leafdata());
    if (defaultvsan.is_set || is_set(defaultvsan.yfilter)) leaf_name_data.push_back(defaultvsan.get_name_leafdata());
    if (flogivsan.is_set || is_set(flogivsan.yfilter)) leaf_name_data.push_back(flogivsan.get_name_leafdata());
    if (operportmode.is_set || is_set(operportmode.yfilter)) leaf_name_data.push_back(operportmode.get_name_leafdata());
    if (logifindex.is_set || is_set(logifindex.yfilter)) leaf_name_data.push_back(logifindex.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwpn.is_set || is_set(wwpn.yfilter)) leaf_name_data.push_back(wwpn.get_name_leafdata());
    if (wwnn.is_set || is_set(wwnn.yfilter)) leaf_name_data.push_back(wwnn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "targetif-items")
    {
        if(targetif_items == nullptr)
        {
            targetif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems>();
        }
        return targetif_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems>();
        }
        return vsan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(targetif_items != nullptr)
    {
        children["targetif-items"] = targetif_items;
    }

    if(vsan_items != nullptr)
    {
        children["vsan-items"] = vsan_items;
    }

    return children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVsan")
    {
        numvsan = value;
        numvsan.value_namespace = name_space;
        numvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan = value;
        defaultvsan.value_namespace = name_space;
        defaultvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan = value;
        flogivsan.value_namespace = name_space;
        flogivsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortMode")
    {
        operportmode = value;
        operportmode.value_namespace = name_space;
        operportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logIfIndex")
    {
        logifindex = value;
        logifindex.value_namespace = name_space;
        logifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcid")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwpn")
    {
        wwpn = value;
        wwpn.value_namespace = name_space;
        wwpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwnn")
    {
        wwnn = value;
        wwnn.value_namespace = name_space;
        wwnn.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "numVsan")
    {
        numvsan.yfilter = yfilter;
    }
    if(value_path == "defaultVsan")
    {
        defaultvsan.yfilter = yfilter;
    }
    if(value_path == "flogiVsan")
    {
        flogivsan.yfilter = yfilter;
    }
    if(value_path == "operPortMode")
    {
        operportmode.yfilter = yfilter;
    }
    if(value_path == "logIfIndex")
    {
        logifindex.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "fcid")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwpn")
    {
        wwpn.yfilter = yfilter;
    }
    if(value_path == "wwnn")
    {
        wwnn.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "targetif-items" || name == "vsan-items" || name == "id" || name == "fsmSt" || name == "numVsan" || name == "defaultVsan" || name == "flogiVsan" || name == "operPortMode" || name == "logIfIndex" || name == "flags" || name == "fcid" || name == "wwpn" || name == "wwnn")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetifItems()
    :
    targetif_list(this, {"id"})
{

    yang_name = "targetif-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::~TargetifItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_operation() const
{
    for (std::size_t index=0; index<targetif_list.len(); index++)
    {
        if(targetif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targetif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TargetIf-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList>();
        c->parent = this;
        targetif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : targetif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TargetIf-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::TargetIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "TargetIf-list"; yang_parent_name = "targetif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::~TargetIfList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TargetIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::VsanItems()
    :
    extvsan_list(this, {"id"})
{

    yang_name = "vsan-items"; yang_parent_name = "ExtIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::~VsanItems()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<extvsan_list.len(); index++)
    {
        if(extvsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtVsan-list")
    {
        auto c = std::make_shared<System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList>();
        c->parent = this;
        extvsan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extvsan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtVsan-list")
        return true;
    return false;
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::ExtVsanList()
    :
    id{YType::uint32, "id"},
    fsmst{YType::enumeration, "fsmSt"}
{

    yang_name = "ExtVsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::~ExtVsanList()
{
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| fsmst.is_set;
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(fsmst.yfilter);
}

std::string System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtVsan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
}

bool System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "fsmSt")
        return true;
    return false;
}

System::VsanmgrItems::VsanmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    vsan_items(std::make_shared<System::VsanmgrItems::VsanItems>())
    , bdvsancfg_items(std::make_shared<System::VsanmgrItems::BdvsancfgItems>())
    , inst_items(std::make_shared<System::VsanmgrItems::InstItems>())
{
    vsan_items->parent = this;
    bdvsancfg_items->parent = this;
    inst_items->parent = this;

    yang_name = "vsanmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::~VsanmgrItems()
{
}

bool System::VsanmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VsanmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (bdvsancfg_items !=  nullptr && bdvsancfg_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VsanmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::VsanmgrItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "bdvsancfg-items")
    {
        if(bdvsancfg_items == nullptr)
        {
            bdvsancfg_items = std::make_shared<System::VsanmgrItems::BdvsancfgItems>();
        }
        return bdvsancfg_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VsanmgrItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vsan_items != nullptr)
    {
        children["vsan-items"] = vsan_items;
    }

    if(bdvsancfg_items != nullptr)
    {
        children["bdvsancfg-items"] = bdvsancfg_items;
    }

    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::VsanmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsan-items" || name == "bdvsancfg-items" || name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanItems()
    :
    vsan_list(this, {"encap"})
{

    yang_name = "vsan-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::~VsanItems()
{
}

bool System::VsanmgrItems::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::has_operation() const
{
    for (std::size_t index=0; index<vsan_list.len(); index++)
    {
        if(vsan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vsan-list")
    {
        auto c = std::make_shared<System::VsanmgrItems::VsanItems::VsanList>();
        c->parent = this;
        vsan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vsan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VsanmgrItems::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vsan-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::VsanList()
    :
    encap{YType::str, "encap"},
    id{YType::uint32, "id"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    lbtype{YType::enumeration, "lbType"},
    vsanname{YType::str, "vsanName"},
    interop{YType::uint16, "interop"},
    name{YType::str, "name"}
        ,
    rtbdvsanmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>())
    , rsvsanifmap_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>())
    , rsvsanpathatt_items(std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>())
{
    rtbdvsanmap_items->parent = this;
    rsvsanifmap_items->parent = this;
    rsvsanpathatt_items->parent = this;

    yang_name = "Vsan-list"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::VsanItems::VsanList::~VsanList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| id.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| lbtype.is_set
	|| vsanname.is_set
	|| interop.is_set
	|| name.is_set
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_data())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_data())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_data());
}

bool System::VsanmgrItems::VsanItems::VsanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(lbtype.yfilter)
	|| ydk::is_set(vsanname.yfilter)
	|| ydk::is_set(interop.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtbdvsanmap_items !=  nullptr && rtbdvsanmap_items->has_operation())
	|| (rsvsanifmap_items !=  nullptr && rsvsanifmap_items->has_operation())
	|| (rsvsanpathatt_items !=  nullptr && rsvsanpathatt_items->has_operation());
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::VsanItems::VsanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vsan-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (lbtype.is_set || is_set(lbtype.yfilter)) leaf_name_data.push_back(lbtype.get_name_leafdata());
    if (vsanname.is_set || is_set(vsanname.yfilter)) leaf_name_data.push_back(vsanname.get_name_leafdata());
    if (interop.is_set || is_set(interop.yfilter)) leaf_name_data.push_back(interop.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtBdVsanMap-items")
    {
        if(rtbdvsanmap_items == nullptr)
        {
            rtbdvsanmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems>();
        }
        return rtbdvsanmap_items;
    }

    if(child_yang_name == "rsvsanIfMap-items")
    {
        if(rsvsanifmap_items == nullptr)
        {
            rsvsanifmap_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems>();
        }
        return rsvsanifmap_items;
    }

    if(child_yang_name == "rsvsanPathAtt-items")
    {
        if(rsvsanpathatt_items == nullptr)
        {
            rsvsanpathatt_items = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems>();
        }
        return rsvsanpathatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtbdvsanmap_items != nullptr)
    {
        children["rtBdVsanMap-items"] = rtbdvsanmap_items;
    }

    if(rsvsanifmap_items != nullptr)
    {
        children["rsvsanIfMap-items"] = rsvsanifmap_items;
    }

    if(rsvsanpathatt_items != nullptr)
    {
        children["rsvsanPathAtt-items"] = rsvsanpathatt_items;
    }

    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lbType")
    {
        lbtype = value;
        lbtype.value_namespace = name_space;
        lbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsanName")
    {
        vsanname = value;
        vsanname.value_namespace = name_space;
        vsanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interop")
    {
        interop = value;
        interop.value_namespace = name_space;
        interop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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
    if(value_path == "lbType")
    {
        lbtype.yfilter = yfilter;
    }
    if(value_path == "vsanName")
    {
        vsanname.yfilter = yfilter;
    }
    if(value_path == "interop")
    {
        interop.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtBdVsanMap-items" || name == "rsvsanIfMap-items" || name == "rsvsanPathAtt-items" || name == "encap" || name == "id" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "lbType" || name == "vsanName" || name == "interop" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::RtBdVsanMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtBdVsanMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::~RtBdVsanMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtBdVsanMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsvsanIfMapItems()
    :
    rsvsanifmap_list(this, {"tdn"})
{

    yang_name = "rsvsanIfMap-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::~RsvsanIfMapItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanifmap_list.len(); index++)
    {
        if(rsvsanifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanIfMap-list")
    {
        auto c = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList>();
        c->parent = this;
        rsvsanifmap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvsanifmap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanIfMap-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::RsVsanIfMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsVsanIfMap-list"; yang_parent_name = "rsvsanIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::~RsVsanIfMapList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsvsanPathAttItems()
    :
    rsvsanpathatt_list(this, {"tdn"})
{

    yang_name = "rsvsanPathAtt-items"; yang_parent_name = "Vsan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::~RsvsanPathAttItems()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsvsanpathatt_list.len(); index++)
    {
        if(rsvsanpathatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvsanPathAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVsanPathAtt-list")
    {
        auto c = std::make_shared<System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList>();
        c->parent = this;
        rsvsanpathatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvsanpathatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVsanPathAtt-list")
        return true;
    return false;
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::RsVsanPathAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    type{YType::enumeration, "type"}
{

    yang_name = "RsVsanPathAtt-list"; yang_parent_name = "rsvsanPathAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::~RsVsanPathAttList()
{
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| type.is_set;
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVsanPathAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "type")
        return true;
    return false;
}

System::VsanmgrItems::BdvsancfgItems::BdvsancfgItems()
    :
    vlanid{YType::uint32, "vlanId"},
    createflag{YType::enumeration, "createFlag"},
    name{YType::str, "name"}
{

    yang_name = "bdvsancfg-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::BdvsancfgItems::~BdvsancfgItems()
{
}

bool System::VsanmgrItems::BdvsancfgItems::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| createflag.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::BdvsancfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(createflag.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::BdvsancfgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::BdvsancfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdvsancfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::BdvsancfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (createflag.is_set || is_set(createflag.yfilter)) leaf_name_data.push_back(createflag.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::BdvsancfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::BdvsancfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VsanmgrItems::BdvsancfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createFlag")
    {
        createflag = value;
        createflag.value_namespace = name_space;
        createflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::BdvsancfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "createFlag")
    {
        createflag.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::BdvsancfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "createFlag" || name == "name")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::InstItems()
    :
    numconfiguredvsan{YType::uint32, "numConfiguredVsan"},
    numcreatedvsan{YType::uint32, "numCreatedVsan"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    vsanmbr_items(std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>())
{
    vsanmbr_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "vsanmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::~InstItems()
{
}

bool System::VsanmgrItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return numconfiguredvsan.is_set
	|| numcreatedvsan.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_data());
}

bool System::VsanmgrItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numconfiguredvsan.yfilter)
	|| ydk::is_set(numcreatedvsan.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (vsanmbr_items !=  nullptr && vsanmbr_items->has_operation());
}

std::string System::VsanmgrItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numconfiguredvsan.is_set || is_set(numconfiguredvsan.yfilter)) leaf_name_data.push_back(numconfiguredvsan.get_name_leafdata());
    if (numcreatedvsan.is_set || is_set(numcreatedvsan.yfilter)) leaf_name_data.push_back(numcreatedvsan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsanmbr-items")
    {
        if(vsanmbr_items == nullptr)
        {
            vsanmbr_items = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems>();
        }
        return vsanmbr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vsanmbr_items != nullptr)
    {
        children["vsanmbr-items"] = vsanmbr_items;
    }

    return children;
}

void System::VsanmgrItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan = value;
        numconfiguredvsan.value_namespace = name_space;
        numconfiguredvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan = value;
        numcreatedvsan.value_namespace = name_space;
        numcreatedvsan.value_namespace_prefix = name_space_prefix;
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

void System::VsanmgrItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numConfiguredVsan")
    {
        numconfiguredvsan.yfilter = yfilter;
    }
    if(value_path == "numCreatedVsan")
    {
        numcreatedvsan.yfilter = yfilter;
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

bool System::VsanmgrItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsanmbr-items" || name == "numConfiguredVsan" || name == "numCreatedVsan" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanmbrItems()
    :
    vsanmbrif_list(this, {"id"})
{

    yang_name = "vsanmbr-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::~VsanmbrItems()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_operation() const
{
    for (std::size_t index=0; index<vsanmbrif_list.len(); index++)
    {
        if(vsanmbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanmbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::InstItems::VsanmbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VsanMbrIf-list")
    {
        auto c = std::make_shared<System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList>();
        c->parent = this;
        vsanmbrif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vsanmbrif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::VsanmgrItems::InstItems::VsanmbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VsanMbrIf-list")
        return true;
    return false;
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::VsanMbrIfList()
    :
    id{YType::str, "id"},
    staticvsan{YType::uint32, "staticVsan"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    name{YType::str, "name"}
{

    yang_name = "VsanMbrIf-list"; yang_parent_name = "vsanmbr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::~VsanMbrIfList()
{
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| staticvsan.is_set
	|| allowedvsanbmp.is_set
	|| name.is_set;
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(staticvsan.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vsanmgr-items/inst-items/vsanmbr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VsanMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (staticvsan.is_set || is_set(staticvsan.yfilter)) leaf_name_data.push_back(staticvsan.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staticVsan")
    {
        staticvsan = value;
        staticvsan.value_namespace = name_space;
        staticvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "staticVsan")
    {
        staticvsan.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "staticVsan" || name == "allowedVsanBmp" || name == "name")
        return true;
    return false;
}

System::FmItems::FmItems()
    :
    mplsstatic_items(std::make_shared<System::FmItems::MplsstaticItems>())
    , mplsoam_items(std::make_shared<System::FmItems::MplsoamItems>())
    , mplssgmntrtg_items(std::make_shared<System::FmItems::MplssgmntrtgItems>())
    , mplsevpn_items(std::make_shared<System::FmItems::MplsevpnItems>())
    , bgp_items(std::make_shared<System::FmItems::BgpItems>())
    , hmm_items(std::make_shared<System::FmItems::HmmItems>())
    , evpn_items(std::make_shared<System::FmItems::EvpnItems>())
    , ngoam_items(std::make_shared<System::FmItems::NgoamItems>())
    , poe_items(std::make_shared<System::FmItems::PoeItems>())
    , msdp_items(std::make_shared<System::FmItems::MsdpItems>())
    , dhcp_items(std::make_shared<System::FmItems::DhcpItems>())
    , ifvlan_items(std::make_shared<System::FmItems::IfvlanItems>())
    , bashshell_items(std::make_shared<System::FmItems::BashshellItems>())
    , scpserver_items(std::make_shared<System::FmItems::ScpserverItems>())
    , lldp_items(std::make_shared<System::FmItems::LldpItems>())
    , lacp_items(std::make_shared<System::FmItems::LacpItems>())
    , nxapi_items(std::make_shared<System::FmItems::NxapiItems>())
    , telnet_items(std::make_shared<System::FmItems::TelnetItems>())
    , nxdb_items(std::make_shared<System::FmItems::NxdbItems>())
    , vnsegment_items(std::make_shared<System::FmItems::VnsegmentItems>())
    , tacacsplus_items(std::make_shared<System::FmItems::TacacsplusItems>())
    , udld_items(std::make_shared<System::FmItems::UdldItems>())
    , nat_items(std::make_shared<System::FmItems::NatItems>())
    , vrrpv3_items(std::make_shared<System::FmItems::Vrrpv3Items>())
    , vrrp_items(std::make_shared<System::FmItems::VrrpItems>())
    , hsrp_items(std::make_shared<System::FmItems::HsrpItems>())
    , netflow_items(std::make_shared<System::FmItems::NetflowItems>())
    , analytics_items(std::make_shared<System::FmItems::AnalyticsItems>())
    , bfd_items(std::make_shared<System::FmItems::BfdItems>())
    , tunnelif_items(std::make_shared<System::FmItems::TunnelifItems>())
    , nvo_items(std::make_shared<System::FmItems::NvoItems>())
    , pbr_items(std::make_shared<System::FmItems::PbrItems>())
    , pim_items(std::make_shared<System::FmItems::PimItems>())
    , ngmvpn_items(std::make_shared<System::FmItems::NgmvpnItems>())
    , vpc_items(std::make_shared<System::FmItems::VpcItems>())
    , vtp_items(std::make_shared<System::FmItems::VtpItems>())
    , pvlan_items(std::make_shared<System::FmItems::PvlanItems>())
    , ntpd_items(std::make_shared<System::FmItems::NtpdItems>())
    , telemetry_items(std::make_shared<System::FmItems::TelemetryItems>())
    , ospf_items(std::make_shared<System::FmItems::OspfItems>())
    , vctrl_items(std::make_shared<System::FmItems::VctrlItems>())
    , macsec_items(std::make_shared<System::FmItems::MacsecItems>())
    , npiv_items(std::make_shared<System::FmItems::NpivItems>())
    , isis_items(std::make_shared<System::FmItems::IsisItems>())
    , hwtelemetry_items(std::make_shared<System::FmItems::HwtelemetryItems>())
    , portsec_items(std::make_shared<System::FmItems::PortsecItems>())
{
    mplsstatic_items->parent = this;
    mplsoam_items->parent = this;
    mplssgmntrtg_items->parent = this;
    mplsevpn_items->parent = this;
    bgp_items->parent = this;
    hmm_items->parent = this;
    evpn_items->parent = this;
    ngoam_items->parent = this;
    poe_items->parent = this;
    msdp_items->parent = this;
    dhcp_items->parent = this;
    ifvlan_items->parent = this;
    bashshell_items->parent = this;
    scpserver_items->parent = this;
    lldp_items->parent = this;
    lacp_items->parent = this;
    nxapi_items->parent = this;
    telnet_items->parent = this;
    nxdb_items->parent = this;
    vnsegment_items->parent = this;
    tacacsplus_items->parent = this;
    udld_items->parent = this;
    nat_items->parent = this;
    vrrpv3_items->parent = this;
    vrrp_items->parent = this;
    hsrp_items->parent = this;
    netflow_items->parent = this;
    analytics_items->parent = this;
    bfd_items->parent = this;
    tunnelif_items->parent = this;
    nvo_items->parent = this;
    pbr_items->parent = this;
    pim_items->parent = this;
    ngmvpn_items->parent = this;
    vpc_items->parent = this;
    vtp_items->parent = this;
    pvlan_items->parent = this;
    ntpd_items->parent = this;
    telemetry_items->parent = this;
    ospf_items->parent = this;
    vctrl_items->parent = this;
    macsec_items->parent = this;
    npiv_items->parent = this;
    isis_items->parent = this;
    hwtelemetry_items->parent = this;
    portsec_items->parent = this;

    yang_name = "fm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::~FmItems()
{
}

bool System::FmItems::has_data() const
{
    if (is_presence_container) return true;
    return (mplsstatic_items !=  nullptr && mplsstatic_items->has_data())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_data())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_data())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_data())
	|| (bgp_items !=  nullptr && bgp_items->has_data())
	|| (hmm_items !=  nullptr && hmm_items->has_data())
	|| (evpn_items !=  nullptr && evpn_items->has_data())
	|| (ngoam_items !=  nullptr && ngoam_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (dhcp_items !=  nullptr && dhcp_items->has_data())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_data())
	|| (bashshell_items !=  nullptr && bashshell_items->has_data())
	|| (scpserver_items !=  nullptr && scpserver_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (lacp_items !=  nullptr && lacp_items->has_data())
	|| (nxapi_items !=  nullptr && nxapi_items->has_data())
	|| (telnet_items !=  nullptr && telnet_items->has_data())
	|| (nxdb_items !=  nullptr && nxdb_items->has_data())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_data())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_data())
	|| (udld_items !=  nullptr && udld_items->has_data())
	|| (nat_items !=  nullptr && nat_items->has_data())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_data())
	|| (vrrp_items !=  nullptr && vrrp_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (netflow_items !=  nullptr && netflow_items->has_data())
	|| (analytics_items !=  nullptr && analytics_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_data())
	|| (nvo_items !=  nullptr && nvo_items->has_data())
	|| (pbr_items !=  nullptr && pbr_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (pvlan_items !=  nullptr && pvlan_items->has_data())
	|| (ntpd_items !=  nullptr && ntpd_items->has_data())
	|| (telemetry_items !=  nullptr && telemetry_items->has_data())
	|| (ospf_items !=  nullptr && ospf_items->has_data())
	|| (vctrl_items !=  nullptr && vctrl_items->has_data())
	|| (macsec_items !=  nullptr && macsec_items->has_data())
	|| (npiv_items !=  nullptr && npiv_items->has_data())
	|| (isis_items !=  nullptr && isis_items->has_data())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_data())
	|| (portsec_items !=  nullptr && portsec_items->has_data());
}

bool System::FmItems::has_operation() const
{
    return is_set(yfilter)
	|| (mplsstatic_items !=  nullptr && mplsstatic_items->has_operation())
	|| (mplsoam_items !=  nullptr && mplsoam_items->has_operation())
	|| (mplssgmntrtg_items !=  nullptr && mplssgmntrtg_items->has_operation())
	|| (mplsevpn_items !=  nullptr && mplsevpn_items->has_operation())
	|| (bgp_items !=  nullptr && bgp_items->has_operation())
	|| (hmm_items !=  nullptr && hmm_items->has_operation())
	|| (evpn_items !=  nullptr && evpn_items->has_operation())
	|| (ngoam_items !=  nullptr && ngoam_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (dhcp_items !=  nullptr && dhcp_items->has_operation())
	|| (ifvlan_items !=  nullptr && ifvlan_items->has_operation())
	|| (bashshell_items !=  nullptr && bashshell_items->has_operation())
	|| (scpserver_items !=  nullptr && scpserver_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (lacp_items !=  nullptr && lacp_items->has_operation())
	|| (nxapi_items !=  nullptr && nxapi_items->has_operation())
	|| (telnet_items !=  nullptr && telnet_items->has_operation())
	|| (nxdb_items !=  nullptr && nxdb_items->has_operation())
	|| (vnsegment_items !=  nullptr && vnsegment_items->has_operation())
	|| (tacacsplus_items !=  nullptr && tacacsplus_items->has_operation())
	|| (udld_items !=  nullptr && udld_items->has_operation())
	|| (nat_items !=  nullptr && nat_items->has_operation())
	|| (vrrpv3_items !=  nullptr && vrrpv3_items->has_operation())
	|| (vrrp_items !=  nullptr && vrrp_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (netflow_items !=  nullptr && netflow_items->has_operation())
	|| (analytics_items !=  nullptr && analytics_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_operation())
	|| (nvo_items !=  nullptr && nvo_items->has_operation())
	|| (pbr_items !=  nullptr && pbr_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (ngmvpn_items !=  nullptr && ngmvpn_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (pvlan_items !=  nullptr && pvlan_items->has_operation())
	|| (ntpd_items !=  nullptr && ntpd_items->has_operation())
	|| (telemetry_items !=  nullptr && telemetry_items->has_operation())
	|| (ospf_items !=  nullptr && ospf_items->has_operation())
	|| (vctrl_items !=  nullptr && vctrl_items->has_operation())
	|| (macsec_items !=  nullptr && macsec_items->has_operation())
	|| (npiv_items !=  nullptr && npiv_items->has_operation())
	|| (isis_items !=  nullptr && isis_items->has_operation())
	|| (hwtelemetry_items !=  nullptr && hwtelemetry_items->has_operation())
	|| (portsec_items !=  nullptr && portsec_items->has_operation());
}

std::string System::FmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsstatic-items")
    {
        if(mplsstatic_items == nullptr)
        {
            mplsstatic_items = std::make_shared<System::FmItems::MplsstaticItems>();
        }
        return mplsstatic_items;
    }

    if(child_yang_name == "mplsoam-items")
    {
        if(mplsoam_items == nullptr)
        {
            mplsoam_items = std::make_shared<System::FmItems::MplsoamItems>();
        }
        return mplsoam_items;
    }

    if(child_yang_name == "mplssgmntrtg-items")
    {
        if(mplssgmntrtg_items == nullptr)
        {
            mplssgmntrtg_items = std::make_shared<System::FmItems::MplssgmntrtgItems>();
        }
        return mplssgmntrtg_items;
    }

    if(child_yang_name == "mplsevpn-items")
    {
        if(mplsevpn_items == nullptr)
        {
            mplsevpn_items = std::make_shared<System::FmItems::MplsevpnItems>();
        }
        return mplsevpn_items;
    }

    if(child_yang_name == "bgp-items")
    {
        if(bgp_items == nullptr)
        {
            bgp_items = std::make_shared<System::FmItems::BgpItems>();
        }
        return bgp_items;
    }

    if(child_yang_name == "hmm-items")
    {
        if(hmm_items == nullptr)
        {
            hmm_items = std::make_shared<System::FmItems::HmmItems>();
        }
        return hmm_items;
    }

    if(child_yang_name == "evpn-items")
    {
        if(evpn_items == nullptr)
        {
            evpn_items = std::make_shared<System::FmItems::EvpnItems>();
        }
        return evpn_items;
    }

    if(child_yang_name == "ngoam-items")
    {
        if(ngoam_items == nullptr)
        {
            ngoam_items = std::make_shared<System::FmItems::NgoamItems>();
        }
        return ngoam_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::FmItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::FmItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "dhcp-items")
    {
        if(dhcp_items == nullptr)
        {
            dhcp_items = std::make_shared<System::FmItems::DhcpItems>();
        }
        return dhcp_items;
    }

    if(child_yang_name == "ifvlan-items")
    {
        if(ifvlan_items == nullptr)
        {
            ifvlan_items = std::make_shared<System::FmItems::IfvlanItems>();
        }
        return ifvlan_items;
    }

    if(child_yang_name == "bashshell-items")
    {
        if(bashshell_items == nullptr)
        {
            bashshell_items = std::make_shared<System::FmItems::BashshellItems>();
        }
        return bashshell_items;
    }

    if(child_yang_name == "scpserver-items")
    {
        if(scpserver_items == nullptr)
        {
            scpserver_items = std::make_shared<System::FmItems::ScpserverItems>();
        }
        return scpserver_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::FmItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "lacp-items")
    {
        if(lacp_items == nullptr)
        {
            lacp_items = std::make_shared<System::FmItems::LacpItems>();
        }
        return lacp_items;
    }

    if(child_yang_name == "nxapi-items")
    {
        if(nxapi_items == nullptr)
        {
            nxapi_items = std::make_shared<System::FmItems::NxapiItems>();
        }
        return nxapi_items;
    }

    if(child_yang_name == "telnet-items")
    {
        if(telnet_items == nullptr)
        {
            telnet_items = std::make_shared<System::FmItems::TelnetItems>();
        }
        return telnet_items;
    }

    if(child_yang_name == "nxdb-items")
    {
        if(nxdb_items == nullptr)
        {
            nxdb_items = std::make_shared<System::FmItems::NxdbItems>();
        }
        return nxdb_items;
    }

    if(child_yang_name == "vnsegment-items")
    {
        if(vnsegment_items == nullptr)
        {
            vnsegment_items = std::make_shared<System::FmItems::VnsegmentItems>();
        }
        return vnsegment_items;
    }

    if(child_yang_name == "tacacsplus-items")
    {
        if(tacacsplus_items == nullptr)
        {
            tacacsplus_items = std::make_shared<System::FmItems::TacacsplusItems>();
        }
        return tacacsplus_items;
    }

    if(child_yang_name == "udld-items")
    {
        if(udld_items == nullptr)
        {
            udld_items = std::make_shared<System::FmItems::UdldItems>();
        }
        return udld_items;
    }

    if(child_yang_name == "nat-items")
    {
        if(nat_items == nullptr)
        {
            nat_items = std::make_shared<System::FmItems::NatItems>();
        }
        return nat_items;
    }

    if(child_yang_name == "vrrpv3-items")
    {
        if(vrrpv3_items == nullptr)
        {
            vrrpv3_items = std::make_shared<System::FmItems::Vrrpv3Items>();
        }
        return vrrpv3_items;
    }

    if(child_yang_name == "vrrp-items")
    {
        if(vrrp_items == nullptr)
        {
            vrrp_items = std::make_shared<System::FmItems::VrrpItems>();
        }
        return vrrp_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::FmItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "netflow-items")
    {
        if(netflow_items == nullptr)
        {
            netflow_items = std::make_shared<System::FmItems::NetflowItems>();
        }
        return netflow_items;
    }

    if(child_yang_name == "analytics-items")
    {
        if(analytics_items == nullptr)
        {
            analytics_items = std::make_shared<System::FmItems::AnalyticsItems>();
        }
        return analytics_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::FmItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "tunnelif-items")
    {
        if(tunnelif_items == nullptr)
        {
            tunnelif_items = std::make_shared<System::FmItems::TunnelifItems>();
        }
        return tunnelif_items;
    }

    if(child_yang_name == "nvo-items")
    {
        if(nvo_items == nullptr)
        {
            nvo_items = std::make_shared<System::FmItems::NvoItems>();
        }
        return nvo_items;
    }

    if(child_yang_name == "pbr-items")
    {
        if(pbr_items == nullptr)
        {
            pbr_items = std::make_shared<System::FmItems::PbrItems>();
        }
        return pbr_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::FmItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "ngmvpn-items")
    {
        if(ngmvpn_items == nullptr)
        {
            ngmvpn_items = std::make_shared<System::FmItems::NgmvpnItems>();
        }
        return ngmvpn_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::FmItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::FmItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "pvlan-items")
    {
        if(pvlan_items == nullptr)
        {
            pvlan_items = std::make_shared<System::FmItems::PvlanItems>();
        }
        return pvlan_items;
    }

    if(child_yang_name == "ntpd-items")
    {
        if(ntpd_items == nullptr)
        {
            ntpd_items = std::make_shared<System::FmItems::NtpdItems>();
        }
        return ntpd_items;
    }

    if(child_yang_name == "telemetry-items")
    {
        if(telemetry_items == nullptr)
        {
            telemetry_items = std::make_shared<System::FmItems::TelemetryItems>();
        }
        return telemetry_items;
    }

    if(child_yang_name == "ospf-items")
    {
        if(ospf_items == nullptr)
        {
            ospf_items = std::make_shared<System::FmItems::OspfItems>();
        }
        return ospf_items;
    }

    if(child_yang_name == "vctrl-items")
    {
        if(vctrl_items == nullptr)
        {
            vctrl_items = std::make_shared<System::FmItems::VctrlItems>();
        }
        return vctrl_items;
    }

    if(child_yang_name == "macsec-items")
    {
        if(macsec_items == nullptr)
        {
            macsec_items = std::make_shared<System::FmItems::MacsecItems>();
        }
        return macsec_items;
    }

    if(child_yang_name == "npiv-items")
    {
        if(npiv_items == nullptr)
        {
            npiv_items = std::make_shared<System::FmItems::NpivItems>();
        }
        return npiv_items;
    }

    if(child_yang_name == "isis-items")
    {
        if(isis_items == nullptr)
        {
            isis_items = std::make_shared<System::FmItems::IsisItems>();
        }
        return isis_items;
    }

    if(child_yang_name == "hwtelemetry-items")
    {
        if(hwtelemetry_items == nullptr)
        {
            hwtelemetry_items = std::make_shared<System::FmItems::HwtelemetryItems>();
        }
        return hwtelemetry_items;
    }

    if(child_yang_name == "portsec-items")
    {
        if(portsec_items == nullptr)
        {
            portsec_items = std::make_shared<System::FmItems::PortsecItems>();
        }
        return portsec_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplsstatic_items != nullptr)
    {
        children["mplsstatic-items"] = mplsstatic_items;
    }

    if(mplsoam_items != nullptr)
    {
        children["mplsoam-items"] = mplsoam_items;
    }

    if(mplssgmntrtg_items != nullptr)
    {
        children["mplssgmntrtg-items"] = mplssgmntrtg_items;
    }

    if(mplsevpn_items != nullptr)
    {
        children["mplsevpn-items"] = mplsevpn_items;
    }

    if(bgp_items != nullptr)
    {
        children["bgp-items"] = bgp_items;
    }

    if(hmm_items != nullptr)
    {
        children["hmm-items"] = hmm_items;
    }

    if(evpn_items != nullptr)
    {
        children["evpn-items"] = evpn_items;
    }

    if(ngoam_items != nullptr)
    {
        children["ngoam-items"] = ngoam_items;
    }

    if(poe_items != nullptr)
    {
        children["poe-items"] = poe_items;
    }

    if(msdp_items != nullptr)
    {
        children["msdp-items"] = msdp_items;
    }

    if(dhcp_items != nullptr)
    {
        children["dhcp-items"] = dhcp_items;
    }

    if(ifvlan_items != nullptr)
    {
        children["ifvlan-items"] = ifvlan_items;
    }

    if(bashshell_items != nullptr)
    {
        children["bashshell-items"] = bashshell_items;
    }

    if(scpserver_items != nullptr)
    {
        children["scpserver-items"] = scpserver_items;
    }

    if(lldp_items != nullptr)
    {
        children["lldp-items"] = lldp_items;
    }

    if(lacp_items != nullptr)
    {
        children["lacp-items"] = lacp_items;
    }

    if(nxapi_items != nullptr)
    {
        children["nxapi-items"] = nxapi_items;
    }

    if(telnet_items != nullptr)
    {
        children["telnet-items"] = telnet_items;
    }

    if(nxdb_items != nullptr)
    {
        children["nxdb-items"] = nxdb_items;
    }

    if(vnsegment_items != nullptr)
    {
        children["vnsegment-items"] = vnsegment_items;
    }

    if(tacacsplus_items != nullptr)
    {
        children["tacacsplus-items"] = tacacsplus_items;
    }

    if(udld_items != nullptr)
    {
        children["udld-items"] = udld_items;
    }

    if(nat_items != nullptr)
    {
        children["nat-items"] = nat_items;
    }

    if(vrrpv3_items != nullptr)
    {
        children["vrrpv3-items"] = vrrpv3_items;
    }

    if(vrrp_items != nullptr)
    {
        children["vrrp-items"] = vrrp_items;
    }

    if(hsrp_items != nullptr)
    {
        children["hsrp-items"] = hsrp_items;
    }

    if(netflow_items != nullptr)
    {
        children["netflow-items"] = netflow_items;
    }

    if(analytics_items != nullptr)
    {
        children["analytics-items"] = analytics_items;
    }

    if(bfd_items != nullptr)
    {
        children["bfd-items"] = bfd_items;
    }

    if(tunnelif_items != nullptr)
    {
        children["tunnelif-items"] = tunnelif_items;
    }

    if(nvo_items != nullptr)
    {
        children["nvo-items"] = nvo_items;
    }

    if(pbr_items != nullptr)
    {
        children["pbr-items"] = pbr_items;
    }

    if(pim_items != nullptr)
    {
        children["pim-items"] = pim_items;
    }

    if(ngmvpn_items != nullptr)
    {
        children["ngmvpn-items"] = ngmvpn_items;
    }

    if(vpc_items != nullptr)
    {
        children["vpc-items"] = vpc_items;
    }

    if(vtp_items != nullptr)
    {
        children["vtp-items"] = vtp_items;
    }

    if(pvlan_items != nullptr)
    {
        children["pvlan-items"] = pvlan_items;
    }

    if(ntpd_items != nullptr)
    {
        children["ntpd-items"] = ntpd_items;
    }

    if(telemetry_items != nullptr)
    {
        children["telemetry-items"] = telemetry_items;
    }

    if(ospf_items != nullptr)
    {
        children["ospf-items"] = ospf_items;
    }

    if(vctrl_items != nullptr)
    {
        children["vctrl-items"] = vctrl_items;
    }

    if(macsec_items != nullptr)
    {
        children["macsec-items"] = macsec_items;
    }

    if(npiv_items != nullptr)
    {
        children["npiv-items"] = npiv_items;
    }

    if(isis_items != nullptr)
    {
        children["isis-items"] = isis_items;
    }

    if(hwtelemetry_items != nullptr)
    {
        children["hwtelemetry-items"] = hwtelemetry_items;
    }

    if(portsec_items != nullptr)
    {
        children["portsec-items"] = portsec_items;
    }

    return children;
}

void System::FmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsstatic-items" || name == "mplsoam-items" || name == "mplssgmntrtg-items" || name == "mplsevpn-items" || name == "bgp-items" || name == "hmm-items" || name == "evpn-items" || name == "ngoam-items" || name == "poe-items" || name == "msdp-items" || name == "dhcp-items" || name == "ifvlan-items" || name == "bashshell-items" || name == "scpserver-items" || name == "lldp-items" || name == "lacp-items" || name == "nxapi-items" || name == "telnet-items" || name == "nxdb-items" || name == "vnsegment-items" || name == "tacacsplus-items" || name == "udld-items" || name == "nat-items" || name == "vrrpv3-items" || name == "vrrp-items" || name == "hsrp-items" || name == "netflow-items" || name == "analytics-items" || name == "bfd-items" || name == "tunnelif-items" || name == "nvo-items" || name == "pbr-items" || name == "pim-items" || name == "ngmvpn-items" || name == "vpc-items" || name == "vtp-items" || name == "pvlan-items" || name == "ntpd-items" || name == "telemetry-items" || name == "ospf-items" || name == "vctrl-items" || name == "macsec-items" || name == "npiv-items" || name == "isis-items" || name == "hwtelemetry-items" || name == "portsec-items")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::MplsstaticItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsstatic-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::~MplsstaticItems()
{
}

bool System::FmItems::MplsstaticItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsstaticItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsstaticItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsstatic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsstaticItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsstaticItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::MplsstaticItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsstaticItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsstatic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsstaticItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsstaticItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::MplsstaticItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsstaticItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsstatic-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsoamItems::MplsoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplsoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplsoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::~MplsoamItems()
{
}

bool System::FmItems::MplsoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplsoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplsoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplsoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::MplsoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplsoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplsoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::MplsoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplsoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplsoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplsoam-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::MplssgmntrtgItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
        ,
    service_items(std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "mplssgmntrtg-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::~MplssgmntrtgItems()
{
}

bool System::FmItems::MplssgmntrtgItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MplssgmntrtgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MplssgmntrtgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplssgmntrtg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplssgmntrtgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplssgmntrtgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::MplssgmntrtgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplssgmntrtgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "mplssgmntrtg-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/mplssgmntrtg-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::MplsevpnItems::MplsevpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"},
    conflictingfeature{YType::str, "conflictingFeature"}
{

    yang_name = "mplsevpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MplsevpnItems::~MplsevpnItems()
{
}

bool System::FmItems::MplsevpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| conflictingfeature.is_set;
}

bool System::FmItems::MplsevpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| ydk::is_set(conflictingfeature.yfilter);
}

std::string System::FmItems::MplsevpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MplsevpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsevpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MplsevpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());
    if (conflictingfeature.is_set || is_set(conflictingfeature.yfilter)) leaf_name_data.push_back(conflictingfeature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::MplsevpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::MplsevpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::MplsevpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature = value;
        conflictingfeature.value_namespace = name_space;
        conflictingfeature.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MplsevpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
    if(value_path == "conflictingFeature")
    {
        conflictingfeature.yfilter = yfilter;
    }
}

bool System::FmItems::MplsevpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "operSt" || name == "maxInstance" || name == "conflictingFeature")
        return true;
    return false;
}

System::FmItems::BgpItems::BgpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::BgpItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "bgp-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::~BgpItems()
{
}

bool System::FmItems::BgpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::BgpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::BgpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::BgpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::BgpItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::BgpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::BgpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::BgpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "bgp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::BgpItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::BgpItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::BgpItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::BgpItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::BgpItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::BgpItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::BgpItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::BgpItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/bgp-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::BgpItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HmmItems::HmmItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HmmItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hmm-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::~HmmItems()
{
}

bool System::FmItems::HmmItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HmmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HmmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::HmmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HmmItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::HmmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::HmmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HmmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hmm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HmmItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HmmItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::HmmItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::HmmItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::HmmItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::HmmItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HmmItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HmmItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hmm-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HmmItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::EvpnItems::EvpnItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::EvpnItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "evpn-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::~EvpnItems()
{
}

bool System::FmItems::EvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::EvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::EvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::EvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::EvpnItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::EvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::EvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::EvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "evpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::EvpnItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::EvpnItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::EvpnItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::EvpnItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::EvpnItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::EvpnItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/evpn-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NgoamItems::NgoamItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::NgoamItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "ngoam-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::~NgoamItems()
{
}

bool System::FmItems::NgoamItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NgoamItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NgoamItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngoam-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::NgoamItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NgoamItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::NgoamItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_items != nullptr)
    {
        children["service-items"] = service_items;
    }

    return children;
}

void System::FmItems::NgoamItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::NgoamItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::NgoamItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::NgoamItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "ngoam-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NgoamItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NgoamItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NgoamItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/ngoam-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NgoamItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NgoamItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::FmItems::NgoamItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto c = std::make_shared<System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList>();
        c->parent = this;
        serviceinstance_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::FmItems::NgoamItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serviceinstance_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::FmItems::NgoamItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NgoamItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NgoamItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}


}
}

