
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_36.hpp"
#include "Cisco_NX_OS_device_37.hpp"
#include "Cisco_NX_OS_device_38.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::RtRtmapRtDstV6AttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtDstV6Att-list"; yang_parent_name = "rtrtmapRtDstV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::~RtRtmapRtDstV6AttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtDstV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtrtmapRtNhAttItems()
    :
    rtrtmaprtnhatt_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtNhAtt-items"; yang_parent_name = "RuleV6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::~RtrtmapRtNhAttItems()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtnhatt_list.len(); index++)
    {
        if(rtrtmaprtnhatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtnhatt_list.len(); index++)
    {
        if(rtrtmaprtnhatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtNhAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtNhAtt-list")
    {
        auto c = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList>();
        c->parent = this;
        rtrtmaprtnhatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrtmaprtnhatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtNhAtt-list")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::RtRtmapRtNhAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtNhAtt-list"; yang_parent_name = "rtrtmapRtNhAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::~RtRtmapRtNhAttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtNhAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtrtmapRtNhV6AttItems()
    :
    rtrtmaprtnhv6att_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtNhV6Att-items"; yang_parent_name = "RuleV6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::~RtrtmapRtNhV6AttItems()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtnhv6att_list.len(); index++)
    {
        if(rtrtmaprtnhv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtnhv6att_list.len(); index++)
    {
        if(rtrtmaprtnhv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtNhV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtNhV6Att-list")
    {
        auto c = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList>();
        c->parent = this;
        rtrtmaprtnhv6att_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrtmaprtnhv6att_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtNhV6Att-list")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::RtRtmapRtNhV6AttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtNhV6Att-list"; yang_parent_name = "rtrtmapRtNhV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::~RtRtmapRtNhV6AttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtNhV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtrtmapRtSrcAttItems()
    :
    rtrtmaprtsrcatt_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtSrcAtt-items"; yang_parent_name = "RuleV6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::~RtrtmapRtSrcAttItems()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtsrcatt_list.len(); index++)
    {
        if(rtrtmaprtsrcatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtsrcatt_list.len(); index++)
    {
        if(rtrtmaprtsrcatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtSrcAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtSrcAtt-list")
    {
        auto c = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList>();
        c->parent = this;
        rtrtmaprtsrcatt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrtmaprtsrcatt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtSrcAtt-list")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::RtRtmapRtSrcAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtSrcAtt-list"; yang_parent_name = "rtrtmapRtSrcAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::~RtRtmapRtSrcAttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtSrcAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtrtmapRtSrcV6AttItems()
    :
    rtrtmaprtsrcv6att_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtSrcV6Att-items"; yang_parent_name = "RuleV6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::~RtrtmapRtSrcV6AttItems()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtsrcv6att_list.len(); index++)
    {
        if(rtrtmaprtsrcv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtsrcv6att_list.len(); index++)
    {
        if(rtrtmaprtsrcv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtSrcV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtSrcV6Att-list")
    {
        auto c = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList>();
        c->parent = this;
        rtrtmaprtsrcv6att_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtrtmaprtsrcv6att_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtSrcV6Att-list")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::RtRtmapRtSrcV6AttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtSrcV6Att-list"; yang_parent_name = "rtrtmapRtSrcV6Att-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::~RtRtmapRtSrcV6AttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtSrcV6Att-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RtregcomItems()
    :
    rule_list(this, {"name"})
{

    yang_name = "rtregcom-items"; yang_parent_name = "rpm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtregcomItems::~RtregcomItems()
{
}

bool System::RpmItems::RtregcomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtregcomItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtregcomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtregcomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtregcom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto c = std::make_shared<System::RpmItems::RtregcomItems::RuleList>();
        c->parent = this;
        rule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::get_children() const
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

void System::RpmItems::RtregcomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtregcomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtregcomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::RuleList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"}
        ,
    ent_items(std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems>())
    , rtregcommatt_items(std::make_shared<System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems>())
{
    ent_items->parent = this;
    rtregcommatt_items->parent = this;

    yang_name = "Rule-list"; yang_parent_name = "rtregcom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::RpmItems::RtregcomItems::RuleList::~RuleList()
{
}

bool System::RpmItems::RtregcomItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| mode.is_set
	|| (ent_items !=  nullptr && ent_items->has_data())
	|| (rtregcommatt_items !=  nullptr && rtregcommatt_items->has_data());
}

bool System::RpmItems::RtregcomItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (ent_items !=  nullptr && ent_items->has_operation())
	|| (rtregcommatt_items !=  nullptr && rtregcommatt_items->has_operation());
}

std::string System::RpmItems::RtregcomItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/rpm-items/rtregcom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::RpmItems::RtregcomItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ent-items")
    {
        if(ent_items == nullptr)
        {
            ent_items = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems>();
        }
        return ent_items;
    }

    if(child_yang_name == "rtRegCommAtt-items")
    {
        if(rtregcommatt_items == nullptr)
        {
            rtregcommatt_items = std::make_shared<System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems>();
        }
        return rtregcommatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ent_items != nullptr)
    {
        children["ent-items"] = ent_items;
    }

    if(rtregcommatt_items != nullptr)
    {
        children["rtRegCommAtt-items"] = rtregcommatt_items;
    }

    return children;
}

void System::RpmItems::RtregcomItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtregcomItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::RpmItems::RtregcomItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ent-items" || name == "rtRegCommAtt-items" || name == "name" || name == "descr" || name == "type" || name == "mode")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntItems()
    :
    entry_list(this, {"order"})
{

    yang_name = "ent-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtregcomItems::RuleList::EntItems::~EntItems()
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::has_operation() const
{
    for (std::size_t index=0; index<entry_list.len(); index++)
    {
        if(entry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtregcomItems::RuleList::EntItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::EntItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto c = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList>();
        c->parent = this;
        entry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : entry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Entry-list")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::EntryList()
    :
    order{YType::uint32, "order"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
        ,
    item_items(std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems>())
{
    item_items->parent = this;

    yang_name = "Entry-list"; yang_parent_name = "ent-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::~EntryList()
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| name.is_set
	|| descr.is_set
	|| action.is_set
	|| regex.is_set
	|| (item_items !=  nullptr && item_items->has_data());
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter)
	|| (item_items !=  nullptr && item_items->has_operation());
}

std::string System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Entry-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "item-items")
    {
        if(item_items == nullptr)
        {
            item_items = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems>();
        }
        return item_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(item_items != nullptr)
    {
        children["item-items"] = item_items;
    }

    return children;
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-items" || name == "order" || name == "name" || name == "descr" || name == "action" || name == "regex")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemItems()
    :
    item_list(this, {"community"})
{

    yang_name = "item-items"; yang_parent_name = "Entry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::~ItemItems()
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::has_operation() const
{
    for (std::size_t index=0; index<item_list.len(); index++)
    {
        if(item_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "item-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto c = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList>();
        c->parent = this;
        item_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : item_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Item-list")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::ItemList()
    :
    community{YType::str, "community"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Item-list"; yang_parent_name = "item-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::~ItemList()
{
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Item-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
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

void System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
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

bool System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "name" || name == "descr")
        return true;
    return false;
}

System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::RtRegCommAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtRegCommAtt-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::~RtRegCommAttItems()
{
}

bool System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtRegCommAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IpSrcIfItems::IpSrcIfItems()
    :
    dns_items(std::make_shared<System::IpSrcIfItems::DnsItems>())
    , tftp_items(std::make_shared<System::IpSrcIfItems::TftpItems>())
{
    dns_items->parent = this;
    tftp_items->parent = this;

    yang_name = "ipSrcIf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpSrcIfItems::~IpSrcIfItems()
{
}

bool System::IpSrcIfItems::has_data() const
{
    if (is_presence_container) return true;
    return (dns_items !=  nullptr && dns_items->has_data())
	|| (tftp_items !=  nullptr && tftp_items->has_data());
}

bool System::IpSrcIfItems::has_operation() const
{
    return is_set(yfilter)
	|| (dns_items !=  nullptr && dns_items->has_operation())
	|| (tftp_items !=  nullptr && tftp_items->has_operation());
}

std::string System::IpSrcIfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpSrcIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipSrcIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpSrcIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpSrcIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-items")
    {
        if(dns_items == nullptr)
        {
            dns_items = std::make_shared<System::IpSrcIfItems::DnsItems>();
        }
        return dns_items;
    }

    if(child_yang_name == "tftp-items")
    {
        if(tftp_items == nullptr)
        {
            tftp_items = std::make_shared<System::IpSrcIfItems::TftpItems>();
        }
        return tftp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpSrcIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dns_items != nullptr)
    {
        children["dns-items"] = dns_items;
    }

    if(tftp_items != nullptr)
    {
        children["tftp-items"] = tftp_items;
    }

    return children;
}

void System::IpSrcIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpSrcIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpSrcIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-items" || name == "tftp-items")
        return true;
    return false;
}

System::IpSrcIfItems::DnsItems::DnsItems()
    :
    dnssrcif_list(this, {"vrf"})
{

    yang_name = "dns-items"; yang_parent_name = "ipSrcIf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpSrcIfItems::DnsItems::~DnsItems()
{
}

bool System::IpSrcIfItems::DnsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnssrcif_list.len(); index++)
    {
        if(dnssrcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpSrcIfItems::DnsItems::has_operation() const
{
    for (std::size_t index=0; index<dnssrcif_list.len(); index++)
    {
        if(dnssrcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpSrcIfItems::DnsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipSrcIf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpSrcIfItems::DnsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpSrcIfItems::DnsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpSrcIfItems::DnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DnsSrcIf-list")
    {
        auto c = std::make_shared<System::IpSrcIfItems::DnsItems::DnsSrcIfList>();
        c->parent = this;
        dnssrcif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpSrcIfItems::DnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnssrcif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IpSrcIfItems::DnsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpSrcIfItems::DnsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpSrcIfItems::DnsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DnsSrcIf-list")
        return true;
    return false;
}

System::IpSrcIfItems::DnsItems::DnsSrcIfList::DnsSrcIfList()
    :
    vrf{YType::str, "vrf"},
    srcif{YType::str, "srcIf"}
{

    yang_name = "DnsSrcIf-list"; yang_parent_name = "dns-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpSrcIfItems::DnsItems::DnsSrcIfList::~DnsSrcIfList()
{
}

bool System::IpSrcIfItems::DnsItems::DnsSrcIfList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| srcif.is_set;
}

bool System::IpSrcIfItems::DnsItems::DnsSrcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcif.yfilter);
}

std::string System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipSrcIf-items/dns-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DnsSrcIf-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpSrcIfItems::DnsItems::DnsSrcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpSrcIfItems::DnsItems::DnsSrcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::IpSrcIfItems::DnsItems::DnsSrcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "srcIf")
        return true;
    return false;
}

System::IpSrcIfItems::TftpItems::TftpItems()
    :
    tftp_list(this, {"vrf"})
{

    yang_name = "tftp-items"; yang_parent_name = "ipSrcIf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpSrcIfItems::TftpItems::~TftpItems()
{
}

bool System::IpSrcIfItems::TftpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tftp_list.len(); index++)
    {
        if(tftp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IpSrcIfItems::TftpItems::has_operation() const
{
    for (std::size_t index=0; index<tftp_list.len(); index++)
    {
        if(tftp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IpSrcIfItems::TftpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipSrcIf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpSrcIfItems::TftpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpSrcIfItems::TftpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpSrcIfItems::TftpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tftp-list")
    {
        auto c = std::make_shared<System::IpSrcIfItems::TftpItems::TftpList>();
        c->parent = this;
        tftp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpSrcIfItems::TftpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tftp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IpSrcIfItems::TftpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IpSrcIfItems::TftpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IpSrcIfItems::TftpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tftp-list")
        return true;
    return false;
}

System::IpSrcIfItems::TftpItems::TftpList::TftpList()
    :
    vrf{YType::str, "vrf"},
    srcif{YType::str, "srcIf"}
{

    yang_name = "Tftp-list"; yang_parent_name = "tftp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IpSrcIfItems::TftpItems::TftpList::~TftpList()
{
}

bool System::IpSrcIfItems::TftpItems::TftpList::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| srcif.is_set;
}

bool System::IpSrcIfItems::TftpItems::TftpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcif.yfilter);
}

std::string System::IpSrcIfItems::TftpItems::TftpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ipSrcIf-items/tftp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IpSrcIfItems::TftpItems::TftpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Tftp-list";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IpSrcIfItems::TftpItems::TftpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IpSrcIfItems::TftpItems::TftpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IpSrcIfItems::TftpItems::TftpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IpSrcIfItems::TftpItems::TftpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IpSrcIfItems::TftpItems::TftpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::IpSrcIfItems::TftpItems::TftpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "srcIf")
        return true;
    return false;
}

System::SysmgrItems::SysmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    sys_items(std::make_shared<System::SysmgrItems::SysItems>())
    , syscfg_items(std::make_shared<System::SysmgrItems::SysCfgItems>())
    , core_items(std::make_shared<System::SysmgrItems::CoreItems>())
{
    sys_items->parent = this;
    syscfg_items->parent = this;
    core_items->parent = this;

    yang_name = "sysmgr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::~SysmgrItems()
{
}

bool System::SysmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (sys_items !=  nullptr && sys_items->has_data())
	|| (syscfg_items !=  nullptr && syscfg_items->has_data())
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::SysmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (sys_items !=  nullptr && sys_items->has_operation())
	|| (syscfg_items !=  nullptr && syscfg_items->has_operation())
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::SysmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys-items")
    {
        if(sys_items == nullptr)
        {
            sys_items = std::make_shared<System::SysmgrItems::SysItems>();
        }
        return sys_items;
    }

    if(child_yang_name == "sysCfg-items")
    {
        if(syscfg_items == nullptr)
        {
            syscfg_items = std::make_shared<System::SysmgrItems::SysCfgItems>();
        }
        return syscfg_items;
    }

    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::SysmgrItems::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sys_items != nullptr)
    {
        children["sys-items"] = sys_items;
    }

    if(syscfg_items != nullptr)
    {
        children["sysCfg-items"] = syscfg_items;
    }

    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::SysmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SysmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SysmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-items" || name == "sysCfg-items" || name == "core-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SysmgrItems::SysItems::SysItems()
    :
    rdmode{YType::enumeration, "rdMode"},
    name{YType::str, "name"}
        ,
    sup_items(std::make_shared<System::SysmgrItems::SysItems::SupItems>())
    , image_items(std::make_shared<System::SysmgrItems::SysItems::ImageItems>())
{
    sup_items->parent = this;
    image_items->parent = this;

    yang_name = "sys-items"; yang_parent_name = "sysmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysItems::~SysItems()
{
}

bool System::SysmgrItems::SysItems::has_data() const
{
    if (is_presence_container) return true;
    return rdmode.is_set
	|| name.is_set
	|| (sup_items !=  nullptr && sup_items->has_data())
	|| (image_items !=  nullptr && image_items->has_data());
}

bool System::SysmgrItems::SysItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdmode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sup_items !=  nullptr && sup_items->has_operation())
	|| (image_items !=  nullptr && image_items->has_operation());
}

std::string System::SysmgrItems::SysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdmode.is_set || is_set(rdmode.yfilter)) leaf_name_data.push_back(rdmode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sup-items")
    {
        if(sup_items == nullptr)
        {
            sup_items = std::make_shared<System::SysmgrItems::SysItems::SupItems>();
        }
        return sup_items;
    }

    if(child_yang_name == "image-items")
    {
        if(image_items == nullptr)
        {
            image_items = std::make_shared<System::SysmgrItems::SysItems::ImageItems>();
        }
        return image_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sup_items != nullptr)
    {
        children["sup-items"] = sup_items;
    }

    if(image_items != nullptr)
    {
        children["image-items"] = image_items;
    }

    return children;
}

void System::SysmgrItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdMode")
    {
        rdmode = value;
        rdmode.value_namespace = name_space;
        rdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SysmgrItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdMode")
    {
        rdmode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup-items" || name == "image-items" || name == "rdMode" || name == "name")
        return true;
    return false;
}

System::SysmgrItems::SysItems::SupItems::SupItems()
    :
    supst_list(this, {"type"})
{

    yang_name = "sup-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysItems::SupItems::~SupItems()
{
}

bool System::SysmgrItems::SysItems::SupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supst_list.len(); index++)
    {
        if(supst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SysmgrItems::SysItems::SupItems::has_operation() const
{
    for (std::size_t index=0; index<supst_list.len(); index++)
    {
        if(supst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SysmgrItems::SysItems::SupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysItems::SupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysItems::SupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysItems::SupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupSt-list")
    {
        auto c = std::make_shared<System::SysmgrItems::SysItems::SupItems::SupStList>();
        c->parent = this;
        supst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysItems::SupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : supst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SysmgrItems::SysItems::SupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SysmgrItems::SysItems::SupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SysmgrItems::SysItems::SupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupSt-list")
        return true;
    return false;
}

System::SysmgrItems::SysItems::SupItems::SupStList::SupStList()
    :
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    rdst{YType::enumeration, "rdSt"},
    name{YType::str, "name"}
{

    yang_name = "SupSt-list"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysItems::SupItems::SupStList::~SupStList()
{
}

bool System::SysmgrItems::SysItems::SupItems::SupStList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| operst.is_set
	|| rdst.is_set
	|| name.is_set;
}

bool System::SysmgrItems::SysItems::SupItems::SupStList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(rdst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::SysmgrItems::SysItems::SupItems::SupStList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/sys-items/sup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysItems::SupItems::SupStList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupSt-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysItems::SupItems::SupStList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (rdst.is_set || is_set(rdst.yfilter)) leaf_name_data.push_back(rdst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysItems::SupItems::SupStList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysItems::SupItems::SupStList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SysmgrItems::SysItems::SupItems::SupStList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SysmgrItems::SysItems::SupItems::SupStList::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysItems::SupItems::SupStList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "operSt" || name == "rdSt" || name == "name")
        return true;
    return false;
}

System::SysmgrItems::SysItems::ImageItems::ImageItems()
    :
    fwst_list(this, {"type"})
{

    yang_name = "image-items"; yang_parent_name = "sys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysItems::ImageItems::~ImageItems()
{
}

bool System::SysmgrItems::SysItems::ImageItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fwst_list.len(); index++)
    {
        if(fwst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SysmgrItems::SysItems::ImageItems::has_operation() const
{
    for (std::size_t index=0; index<fwst_list.len(); index++)
    {
        if(fwst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SysmgrItems::SysItems::ImageItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/sys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysItems::ImageItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "image-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysItems::ImageItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysItems::ImageItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwSt-list")
    {
        auto c = std::make_shared<System::SysmgrItems::SysItems::ImageItems::FwStList>();
        c->parent = this;
        fwst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysItems::ImageItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fwst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SysmgrItems::SysItems::ImageItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SysmgrItems::SysItems::ImageItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SysmgrItems::SysItems::ImageItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FwSt-list")
        return true;
    return false;
}

System::SysmgrItems::SysItems::ImageItems::FwStList::FwStList()
    :
    type{YType::enumeration, "type"},
    ver{YType::str, "ver"},
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"}
{

    yang_name = "FwSt-list"; yang_parent_name = "image-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysItems::ImageItems::FwStList::~FwStList()
{
}

bool System::SysmgrItems::SysItems::ImageItems::FwStList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ver.is_set
	|| mode.is_set
	|| name.is_set;
}

bool System::SysmgrItems::SysItems::ImageItems::FwStList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::SysmgrItems::SysItems::ImageItems::FwStList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/sys-items/image-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysItems::ImageItems::FwStList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FwSt-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysItems::ImageItems::FwStList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysItems::ImageItems::FwStList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysItems::ImageItems::FwStList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SysmgrItems::SysItems::ImageItems::FwStList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
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
}

void System::SysmgrItems::SysItems::ImageItems::FwStList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysItems::ImageItems::FwStList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ver" || name == "mode" || name == "name")
        return true;
    return false;
}

System::SysmgrItems::SysCfgItems::SysCfgItems()
    :
    cfgmode{YType::enumeration, "cfgMode"},
    operdatamode{YType::enumeration, "operDataMode"}
{

    yang_name = "sysCfg-items"; yang_parent_name = "sysmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::SysCfgItems::~SysCfgItems()
{
}

bool System::SysmgrItems::SysCfgItems::has_data() const
{
    if (is_presence_container) return true;
    return cfgmode.is_set
	|| operdatamode.is_set;
}

bool System::SysmgrItems::SysCfgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfgmode.yfilter)
	|| ydk::is_set(operdatamode.yfilter);
}

std::string System::SysmgrItems::SysCfgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::SysCfgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysCfg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::SysCfgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfgmode.is_set || is_set(cfgmode.yfilter)) leaf_name_data.push_back(cfgmode.get_name_leafdata());
    if (operdatamode.is_set || is_set(operdatamode.yfilter)) leaf_name_data.push_back(operdatamode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::SysCfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::SysCfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SysmgrItems::SysCfgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfgMode")
    {
        cfgmode = value;
        cfgmode.value_namespace = name_space;
        cfgmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDataMode")
    {
        operdatamode = value;
        operdatamode.value_namespace = name_space;
        operdatamode.value_namespace_prefix = name_space_prefix;
    }
}

void System::SysmgrItems::SysCfgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfgMode")
    {
        cfgmode.yfilter = yfilter;
    }
    if(value_path == "operDataMode")
    {
        operdatamode.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysCfgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfgMode" || name == "operDataMode")
        return true;
    return false;
}

System::SysmgrItems::CoreItems::CoreItems()
    :
    cores_list(this, {"dest"})
{

    yang_name = "core-items"; yang_parent_name = "sysmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::CoreItems::~CoreItems()
{
}

bool System::SysmgrItems::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cores_list.len(); index++)
    {
        if(cores_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SysmgrItems::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<cores_list.len(); index++)
    {
        if(cores_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SysmgrItems::CoreItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cores-list")
    {
        auto c = std::make_shared<System::SysmgrItems::CoreItems::CoresList>();
        c->parent = this;
        cores_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cores_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SysmgrItems::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SysmgrItems::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SysmgrItems::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cores-list")
        return true;
    return false;
}

System::SysmgrItems::CoreItems::CoresList::CoresList()
    :
    dest{YType::str, "dest"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "Cores-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SysmgrItems::CoreItems::CoresList::~CoresList()
{
}

bool System::SysmgrItems::CoreItems::CoresList::has_data() const
{
    if (is_presence_container) return true;
    return dest.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::SysmgrItems::CoreItems::CoresList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SysmgrItems::CoreItems::CoresList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sysmgr-items/core-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SysmgrItems::CoreItems::CoresList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cores-list";
    ADD_KEY_TOKEN(dest, "dest");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SysmgrItems::CoreItems::CoresList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest.is_set || is_set(dest.yfilter)) leaf_name_data.push_back(dest.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SysmgrItems::CoreItems::CoresList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SysmgrItems::CoreItems::CoresList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SysmgrItems::CoreItems::CoresList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest")
    {
        dest = value;
        dest.value_namespace = name_space;
        dest.value_namespace_prefix = name_space_prefix;
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

void System::SysmgrItems::CoreItems::CoresList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest")
    {
        dest.yfilter = yfilter;
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

bool System::SysmgrItems::CoreItems::CoresList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::TcpudpItems::TcpudpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::TcpudpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "tcpudp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TcpudpItems::~TcpudpItems()
{
}

bool System::TcpudpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::TcpudpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::TcpudpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TcpudpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpudp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TcpudpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TcpudpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::TcpudpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TcpudpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::TcpudpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TcpudpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TcpudpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::TcpudpItems::InstItems::InstItems()
    :
    synwaittime{YType::uint16, "synWaitTime"},
    pathmtudiscovery{YType::enumeration, "pathMtuDiscovery"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "inst-items"; yang_parent_name = "tcpudp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TcpudpItems::InstItems::~InstItems()
{
}

bool System::TcpudpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return synwaittime.is_set
	|| pathmtudiscovery.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::TcpudpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synwaittime.yfilter)
	|| ydk::is_set(pathmtudiscovery.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::TcpudpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tcpudp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TcpudpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TcpudpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synwaittime.is_set || is_set(synwaittime.yfilter)) leaf_name_data.push_back(synwaittime.get_name_leafdata());
    if (pathmtudiscovery.is_set || is_set(pathmtudiscovery.yfilter)) leaf_name_data.push_back(pathmtudiscovery.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TcpudpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TcpudpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TcpudpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synWaitTime")
    {
        synwaittime = value;
        synwaittime.value_namespace = name_space;
        synwaittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathMtuDiscovery")
    {
        pathmtudiscovery = value;
        pathmtudiscovery.value_namespace = name_space;
        pathmtudiscovery.value_namespace_prefix = name_space_prefix;
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

void System::TcpudpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synWaitTime")
    {
        synwaittime.yfilter = yfilter;
    }
    if(value_path == "pathMtuDiscovery")
    {
        pathmtudiscovery.yfilter = yfilter;
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

bool System::TcpudpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synWaitTime" || name == "pathMtuDiscovery" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::TermlItems::TermlItems()
    :
    ln_items(std::make_shared<System::TermlItems::LnItems>())
{
    ln_items->parent = this;

    yang_name = "terml-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::~TermlItems()
{
}

bool System::TermlItems::has_data() const
{
    if (is_presence_container) return true;
    return (ln_items !=  nullptr && ln_items->has_data());
}

bool System::TermlItems::has_operation() const
{
    return is_set(yfilter)
	|| (ln_items !=  nullptr && ln_items->has_operation());
}

std::string System::TermlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terml-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ln-items")
    {
        if(ln_items == nullptr)
        {
            ln_items = std::make_shared<System::TermlItems::LnItems>();
        }
        return ln_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ln_items != nullptr)
    {
        children["ln-items"] = ln_items;
    }

    return children;
}

void System::TermlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TermlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TermlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ln-items")
        return true;
    return false;
}

System::TermlItems::LnItems::LnItems()
    :
    cons_items(std::make_shared<System::TermlItems::LnItems::ConsItems>())
    , vty_items(std::make_shared<System::TermlItems::LnItems::VtyItems>())
{
    cons_items->parent = this;
    vty_items->parent = this;

    yang_name = "ln-items"; yang_parent_name = "terml-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::~LnItems()
{
}

bool System::TermlItems::LnItems::has_data() const
{
    if (is_presence_container) return true;
    return (cons_items !=  nullptr && cons_items->has_data())
	|| (vty_items !=  nullptr && vty_items->has_data());
}

bool System::TermlItems::LnItems::has_operation() const
{
    return is_set(yfilter)
	|| (cons_items !=  nullptr && cons_items->has_operation())
	|| (vty_items !=  nullptr && vty_items->has_operation());
}

std::string System::TermlItems::LnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ln-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cons-items")
    {
        if(cons_items == nullptr)
        {
            cons_items = std::make_shared<System::TermlItems::LnItems::ConsItems>();
        }
        return cons_items;
    }

    if(child_yang_name == "vty-items")
    {
        if(vty_items == nullptr)
        {
            vty_items = std::make_shared<System::TermlItems::LnItems::VtyItems>();
        }
        return vty_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cons_items != nullptr)
    {
        children["cons-items"] = cons_items;
    }

    if(vty_items != nullptr)
    {
        children["vty-items"] = vty_items;
    }

    return children;
}

void System::TermlItems::LnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TermlItems::LnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TermlItems::LnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cons-items" || name == "vty-items")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::ConsItems()
    :
    exectmeout_items(std::make_shared<System::TermlItems::LnItems::ConsItems::ExecTmeoutItems>())
    , wdth_items(std::make_shared<System::TermlItems::LnItems::ConsItems::WdthItems>())
    , lgth_items(std::make_shared<System::TermlItems::LnItems::ConsItems::LgthItems>())
    , speed_items(std::make_shared<System::TermlItems::LnItems::ConsItems::SpeedItems>())
    , databits_items(std::make_shared<System::TermlItems::LnItems::ConsItems::DatabitsItems>())
    , stopbits_items(std::make_shared<System::TermlItems::LnItems::ConsItems::StopbitsItems>())
    , parity_items(std::make_shared<System::TermlItems::LnItems::ConsItems::ParityItems>())
{
    exectmeout_items->parent = this;
    wdth_items->parent = this;
    lgth_items->parent = this;
    speed_items->parent = this;
    databits_items->parent = this;
    stopbits_items->parent = this;
    parity_items->parent = this;

    yang_name = "cons-items"; yang_parent_name = "ln-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::~ConsItems()
{
}

bool System::TermlItems::LnItems::ConsItems::has_data() const
{
    if (is_presence_container) return true;
    return (exectmeout_items !=  nullptr && exectmeout_items->has_data())
	|| (wdth_items !=  nullptr && wdth_items->has_data())
	|| (lgth_items !=  nullptr && lgth_items->has_data())
	|| (speed_items !=  nullptr && speed_items->has_data())
	|| (databits_items !=  nullptr && databits_items->has_data())
	|| (stopbits_items !=  nullptr && stopbits_items->has_data())
	|| (parity_items !=  nullptr && parity_items->has_data());
}

bool System::TermlItems::LnItems::ConsItems::has_operation() const
{
    return is_set(yfilter)
	|| (exectmeout_items !=  nullptr && exectmeout_items->has_operation())
	|| (wdth_items !=  nullptr && wdth_items->has_operation())
	|| (lgth_items !=  nullptr && lgth_items->has_operation())
	|| (speed_items !=  nullptr && speed_items->has_operation())
	|| (databits_items !=  nullptr && databits_items->has_operation())
	|| (stopbits_items !=  nullptr && stopbits_items->has_operation())
	|| (parity_items !=  nullptr && parity_items->has_operation());
}

std::string System::TermlItems::LnItems::ConsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "execTmeout-items")
    {
        if(exectmeout_items == nullptr)
        {
            exectmeout_items = std::make_shared<System::TermlItems::LnItems::ConsItems::ExecTmeoutItems>();
        }
        return exectmeout_items;
    }

    if(child_yang_name == "wdth-items")
    {
        if(wdth_items == nullptr)
        {
            wdth_items = std::make_shared<System::TermlItems::LnItems::ConsItems::WdthItems>();
        }
        return wdth_items;
    }

    if(child_yang_name == "lgth-items")
    {
        if(lgth_items == nullptr)
        {
            lgth_items = std::make_shared<System::TermlItems::LnItems::ConsItems::LgthItems>();
        }
        return lgth_items;
    }

    if(child_yang_name == "speed-items")
    {
        if(speed_items == nullptr)
        {
            speed_items = std::make_shared<System::TermlItems::LnItems::ConsItems::SpeedItems>();
        }
        return speed_items;
    }

    if(child_yang_name == "databits-items")
    {
        if(databits_items == nullptr)
        {
            databits_items = std::make_shared<System::TermlItems::LnItems::ConsItems::DatabitsItems>();
        }
        return databits_items;
    }

    if(child_yang_name == "stopbits-items")
    {
        if(stopbits_items == nullptr)
        {
            stopbits_items = std::make_shared<System::TermlItems::LnItems::ConsItems::StopbitsItems>();
        }
        return stopbits_items;
    }

    if(child_yang_name == "parity-items")
    {
        if(parity_items == nullptr)
        {
            parity_items = std::make_shared<System::TermlItems::LnItems::ConsItems::ParityItems>();
        }
        return parity_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exectmeout_items != nullptr)
    {
        children["execTmeout-items"] = exectmeout_items;
    }

    if(wdth_items != nullptr)
    {
        children["wdth-items"] = wdth_items;
    }

    if(lgth_items != nullptr)
    {
        children["lgth-items"] = lgth_items;
    }

    if(speed_items != nullptr)
    {
        children["speed-items"] = speed_items;
    }

    if(databits_items != nullptr)
    {
        children["databits-items"] = databits_items;
    }

    if(stopbits_items != nullptr)
    {
        children["stopbits-items"] = stopbits_items;
    }

    if(parity_items != nullptr)
    {
        children["parity-items"] = parity_items;
    }

    return children;
}

void System::TermlItems::LnItems::ConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TermlItems::LnItems::ConsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TermlItems::LnItems::ConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "execTmeout-items" || name == "wdth-items" || name == "lgth-items" || name == "speed-items" || name == "databits-items" || name == "stopbits-items" || name == "parity-items")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::ExecTmeoutItems()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "execTmeout-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::~ExecTmeoutItems()
{
}

bool System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "execTmeout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::WdthItems::WdthItems()
    :
    termwidth{YType::uint32, "termwidth"}
{

    yang_name = "wdth-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::WdthItems::~WdthItems()
{
}

bool System::TermlItems::LnItems::ConsItems::WdthItems::has_data() const
{
    if (is_presence_container) return true;
    return termwidth.is_set;
}

bool System::TermlItems::LnItems::ConsItems::WdthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(termwidth.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::WdthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::WdthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::WdthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (termwidth.is_set || is_set(termwidth.yfilter)) leaf_name_data.push_back(termwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::WdthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::WdthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::WdthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "termwidth")
    {
        termwidth = value;
        termwidth.value_namespace = name_space;
        termwidth.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::WdthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "termwidth")
    {
        termwidth.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::WdthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "termwidth")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::LgthItems::LgthItems()
    :
    termlength{YType::uint32, "termlength"}
{

    yang_name = "lgth-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::LgthItems::~LgthItems()
{
}

bool System::TermlItems::LnItems::ConsItems::LgthItems::has_data() const
{
    if (is_presence_container) return true;
    return termlength.is_set;
}

bool System::TermlItems::LnItems::ConsItems::LgthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(termlength.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::LgthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::LgthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lgth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::LgthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (termlength.is_set || is_set(termlength.yfilter)) leaf_name_data.push_back(termlength.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::LgthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::LgthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::LgthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "termlength")
    {
        termlength = value;
        termlength.value_namespace = name_space;
        termlength.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::LgthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "termlength")
    {
        termlength.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::LgthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "termlength")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::SpeedItems::SpeedItems()
    :
    speed{YType::uint32, "speed"}
{

    yang_name = "speed-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::SpeedItems::~SpeedItems()
{
}

bool System::TermlItems::LnItems::ConsItems::SpeedItems::has_data() const
{
    if (is_presence_container) return true;
    return speed.is_set;
}

bool System::TermlItems::LnItems::ConsItems::SpeedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::SpeedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::SpeedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "speed-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::SpeedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::SpeedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::SpeedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::SpeedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::SpeedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::SpeedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "speed")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::DatabitsItems::DatabitsItems()
    :
    databits{YType::uint32, "dataBits"}
{

    yang_name = "databits-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::DatabitsItems::~DatabitsItems()
{
}

bool System::TermlItems::LnItems::ConsItems::DatabitsItems::has_data() const
{
    if (is_presence_container) return true;
    return databits.is_set;
}

bool System::TermlItems::LnItems::ConsItems::DatabitsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(databits.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::DatabitsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::DatabitsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::DatabitsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (databits.is_set || is_set(databits.yfilter)) leaf_name_data.push_back(databits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::DatabitsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::DatabitsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::DatabitsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dataBits")
    {
        databits = value;
        databits.value_namespace = name_space;
        databits.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::DatabitsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dataBits")
    {
        databits.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::DatabitsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dataBits")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::StopbitsItems::StopbitsItems()
    :
    stopbits{YType::uint32, "stopBits"}
{

    yang_name = "stopbits-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::StopbitsItems::~StopbitsItems()
{
}

bool System::TermlItems::LnItems::ConsItems::StopbitsItems::has_data() const
{
    if (is_presence_container) return true;
    return stopbits.is_set;
}

bool System::TermlItems::LnItems::ConsItems::StopbitsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stopbits.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::StopbitsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::StopbitsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stopbits-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::StopbitsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::StopbitsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::StopbitsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::StopbitsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stopBits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::StopbitsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stopBits")
    {
        stopbits.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::StopbitsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stopBits")
        return true;
    return false;
}

System::TermlItems::LnItems::ConsItems::ParityItems::ParityItems()
    :
    parity{YType::enumeration, "parity"}
{

    yang_name = "parity-items"; yang_parent_name = "cons-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::ConsItems::ParityItems::~ParityItems()
{
}

bool System::TermlItems::LnItems::ConsItems::ParityItems::has_data() const
{
    if (is_presence_container) return true;
    return parity.is_set;
}

bool System::TermlItems::LnItems::ConsItems::ParityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parity.yfilter);
}

std::string System::TermlItems::LnItems::ConsItems::ParityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/cons-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::ConsItems::ParityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::ConsItems::ParityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parity.is_set || is_set(parity.yfilter)) leaf_name_data.push_back(parity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::ConsItems::ParityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::ConsItems::ParityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::ConsItems::ParityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parity")
    {
        parity = value;
        parity.value_namespace = name_space;
        parity.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::ConsItems::ParityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parity")
    {
        parity.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::ConsItems::ParityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parity")
        return true;
    return false;
}

System::TermlItems::LnItems::VtyItems::VtyItems()
    :
    exectmeout_items(std::make_shared<System::TermlItems::LnItems::VtyItems::ExecTmeoutItems>())
    , abstmeout_items(std::make_shared<System::TermlItems::LnItems::VtyItems::AbsTmeoutItems>())
    , sslmt_items(std::make_shared<System::TermlItems::LnItems::VtyItems::SsLmtItems>())
    , lgoutwarning_items(std::make_shared<System::TermlItems::LnItems::VtyItems::LgoutWarningItems>())
{
    exectmeout_items->parent = this;
    abstmeout_items->parent = this;
    sslmt_items->parent = this;
    lgoutwarning_items->parent = this;

    yang_name = "vty-items"; yang_parent_name = "ln-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::VtyItems::~VtyItems()
{
}

bool System::TermlItems::LnItems::VtyItems::has_data() const
{
    if (is_presence_container) return true;
    return (exectmeout_items !=  nullptr && exectmeout_items->has_data())
	|| (abstmeout_items !=  nullptr && abstmeout_items->has_data())
	|| (sslmt_items !=  nullptr && sslmt_items->has_data())
	|| (lgoutwarning_items !=  nullptr && lgoutwarning_items->has_data());
}

bool System::TermlItems::LnItems::VtyItems::has_operation() const
{
    return is_set(yfilter)
	|| (exectmeout_items !=  nullptr && exectmeout_items->has_operation())
	|| (abstmeout_items !=  nullptr && abstmeout_items->has_operation())
	|| (sslmt_items !=  nullptr && sslmt_items->has_operation())
	|| (lgoutwarning_items !=  nullptr && lgoutwarning_items->has_operation());
}

std::string System::TermlItems::LnItems::VtyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::VtyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::VtyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "execTmeout-items")
    {
        if(exectmeout_items == nullptr)
        {
            exectmeout_items = std::make_shared<System::TermlItems::LnItems::VtyItems::ExecTmeoutItems>();
        }
        return exectmeout_items;
    }

    if(child_yang_name == "absTmeout-items")
    {
        if(abstmeout_items == nullptr)
        {
            abstmeout_items = std::make_shared<System::TermlItems::LnItems::VtyItems::AbsTmeoutItems>();
        }
        return abstmeout_items;
    }

    if(child_yang_name == "ssLmt-items")
    {
        if(sslmt_items == nullptr)
        {
            sslmt_items = std::make_shared<System::TermlItems::LnItems::VtyItems::SsLmtItems>();
        }
        return sslmt_items;
    }

    if(child_yang_name == "lgoutWarning-items")
    {
        if(lgoutwarning_items == nullptr)
        {
            lgoutwarning_items = std::make_shared<System::TermlItems::LnItems::VtyItems::LgoutWarningItems>();
        }
        return lgoutwarning_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(exectmeout_items != nullptr)
    {
        children["execTmeout-items"] = exectmeout_items;
    }

    if(abstmeout_items != nullptr)
    {
        children["absTmeout-items"] = abstmeout_items;
    }

    if(sslmt_items != nullptr)
    {
        children["ssLmt-items"] = sslmt_items;
    }

    if(lgoutwarning_items != nullptr)
    {
        children["lgoutWarning-items"] = lgoutwarning_items;
    }

    return children;
}

void System::TermlItems::LnItems::VtyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TermlItems::LnItems::VtyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TermlItems::LnItems::VtyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "execTmeout-items" || name == "absTmeout-items" || name == "ssLmt-items" || name == "lgoutWarning-items")
        return true;
    return false;
}

System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::ExecTmeoutItems()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "execTmeout-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::~ExecTmeoutItems()
{
}

bool System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "execTmeout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::AbsTmeoutItems()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "absTmeout-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::~AbsTmeoutItems()
{
}

bool System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absTmeout-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

System::TermlItems::LnItems::VtyItems::SsLmtItems::SsLmtItems()
    :
    seslmt{YType::uint32, "sesLmt"}
{

    yang_name = "ssLmt-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::VtyItems::SsLmtItems::~SsLmtItems()
{
}

bool System::TermlItems::LnItems::VtyItems::SsLmtItems::has_data() const
{
    if (is_presence_container) return true;
    return seslmt.is_set;
}

bool System::TermlItems::LnItems::VtyItems::SsLmtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seslmt.yfilter);
}

std::string System::TermlItems::LnItems::VtyItems::SsLmtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::VtyItems::SsLmtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssLmt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::VtyItems::SsLmtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seslmt.is_set || is_set(seslmt.yfilter)) leaf_name_data.push_back(seslmt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::VtyItems::SsLmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::VtyItems::SsLmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::VtyItems::SsLmtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sesLmt")
    {
        seslmt = value;
        seslmt.value_namespace = name_space;
        seslmt.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::VtyItems::SsLmtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sesLmt")
    {
        seslmt.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::VtyItems::SsLmtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sesLmt")
        return true;
    return false;
}

System::TermlItems::LnItems::VtyItems::LgoutWarningItems::LgoutWarningItems()
    :
    lgtwarn{YType::uint32, "lgtWarn"}
{

    yang_name = "lgoutWarning-items"; yang_parent_name = "vty-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlItems::LnItems::VtyItems::LgoutWarningItems::~LgoutWarningItems()
{
}

bool System::TermlItems::LnItems::VtyItems::LgoutWarningItems::has_data() const
{
    if (is_presence_container) return true;
    return lgtwarn.is_set;
}

bool System::TermlItems::LnItems::VtyItems::LgoutWarningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lgtwarn.yfilter);
}

std::string System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/terml-items/ln-items/vty-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lgoutWarning-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lgtwarn.is_set || is_set(lgtwarn.yfilter)) leaf_name_data.push_back(lgtwarn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlItems::LnItems::VtyItems::LgoutWarningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lgtWarn")
    {
        lgtwarn = value;
        lgtwarn.value_namespace = name_space;
        lgtwarn.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlItems::LnItems::VtyItems::LgoutWarningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lgtWarn")
    {
        lgtwarn.yfilter = yfilter;
    }
}

bool System::TermlItems::LnItems::VtyItems::LgoutWarningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lgtWarn")
        return true;
    return false;
}

System::TermlogItems::TermlogItems()
    :
    logshowcommand{YType::boolean, "logShowCommand"}
{

    yang_name = "termlog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TermlogItems::~TermlogItems()
{
}

bool System::TermlogItems::has_data() const
{
    if (is_presence_container) return true;
    return logshowcommand.is_set;
}

bool System::TermlogItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logshowcommand.yfilter);
}

std::string System::TermlogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TermlogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "termlog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TermlogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logshowcommand.is_set || is_set(logshowcommand.yfilter)) leaf_name_data.push_back(logshowcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TermlogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TermlogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TermlogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logShowCommand")
    {
        logshowcommand = value;
        logshowcommand.value_namespace = name_space;
        logshowcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::TermlogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logShowCommand")
    {
        logshowcommand.yfilter = yfilter;
    }
}

bool System::TermlogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logShowCommand")
        return true;
    return false;
}

System::TestRuleItems::TestRuleItems()
    :
    crule_list(this, {"name"})
{

    yang_name = "test_rule-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TestRuleItems::~TestRuleItems()
{
}

bool System::TestRuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crule_list.len(); index++)
    {
        if(crule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TestRuleItems::has_operation() const
{
    for (std::size_t index=0; index<crule_list.len(); index++)
    {
        if(crule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TestRuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TestRuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test_rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TestRuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TestRuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CRule-list")
    {
        auto c = std::make_shared<System::TestRuleItems::CRuleList>();
        c->parent = this;
        crule_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TestRuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : crule_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TestRuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TestRuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TestRuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CRule-list")
        return true;
    return false;
}

System::TestRuleItems::CRuleList::CRuleList()
    :
    name{YType::str, "name"},
    pechunkname{YType::str, "peChunkName"},
    testclientchunkname{YType::str, "testclientChunkName"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    trig{YType::enumeration, "trig"},
    freq{YType::str, "freq"}
{

    yang_name = "CRule-list"; yang_parent_name = "test_rule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TestRuleItems::CRuleList::~CRuleList()
{
}

bool System::TestRuleItems::CRuleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| pechunkname.is_set
	|| testclientchunkname.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| trig.is_set
	|| freq.is_set;
}

bool System::TestRuleItems::CRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pechunkname.yfilter)
	|| ydk::is_set(testclientchunkname.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(freq.yfilter);
}

std::string System::TestRuleItems::CRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/test_rule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TestRuleItems::CRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CRule-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TestRuleItems::CRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pechunkname.is_set || is_set(pechunkname.yfilter)) leaf_name_data.push_back(pechunkname.get_name_leafdata());
    if (testclientchunkname.is_set || is_set(testclientchunkname.yfilter)) leaf_name_data.push_back(testclientchunkname.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TestRuleItems::CRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TestRuleItems::CRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TestRuleItems::CRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peChunkName")
    {
        pechunkname = value;
        pechunkname.value_namespace = name_space;
        pechunkname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "testclientChunkName")
    {
        testclientchunkname = value;
        testclientchunkname.value_namespace = name_space;
        testclientchunkname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::TestRuleItems::CRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "peChunkName")
    {
        pechunkname.yfilter = yfilter;
    }
    if(value_path == "testclientChunkName")
    {
        testclientchunkname.yfilter = yfilter;
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
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::TestRuleItems::CRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "peChunkName" || name == "testclientChunkName" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "trig" || name == "freq")
        return true;
    return false;
}

System::TestRsltItems::TestRsltItems()
    :
    crslt_list(this, {"name", "ts"})
{

    yang_name = "test_rslt_-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TestRsltItems::~TestRsltItems()
{
}

bool System::TestRsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crslt_list.len(); index++)
    {
        if(crslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TestRsltItems::has_operation() const
{
    for (std::size_t index=0; index<crslt_list.len(); index++)
    {
        if(crslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TestRsltItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TestRsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test_rslt_-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TestRsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TestRsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CRslt-list")
    {
        auto c = std::make_shared<System::TestRsltItems::CRsltList>();
        c->parent = this;
        crslt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TestRsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : crslt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TestRsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TestRsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TestRsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CRslt-list")
        return true;
    return false;
}

System::TestRsltItems::CRsltList::CRsltList()
    :
    name{YType::str, "name"},
    ts{YType::str, "ts"},
    trig{YType::enumeration, "trig"},
    operst{YType::enumeration, "operSt"},
    qual{YType::str, "qual"},
    operstqual{YType::str, "operStqual"}
{

    yang_name = "CRslt-list"; yang_parent_name = "test_rslt_-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TestRsltItems::CRsltList::~CRsltList()
{
}

bool System::TestRsltItems::CRsltList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ts.is_set
	|| trig.is_set
	|| operst.is_set
	|| qual.is_set
	|| operstqual.is_set;
}

bool System::TestRsltItems::CRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::TestRsltItems::CRsltList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/test_rslt_-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TestRsltItems::CRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CRslt-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TestRsltItems::CRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TestRsltItems::CRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TestRsltItems::CRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TestRsltItems::CRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStqual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::TestRsltItems::CRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "operStqual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::TestRsltItems::CRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ts" || name == "trig" || name == "operSt" || name == "qual" || name == "operStqual")
        return true;
    return false;
}

System::TunnelItems::TunnelItems()
    :
    if_list(this, {"id"})
{

    yang_name = "tunnel-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelItems::~TunnelItems()
{
}

bool System::TunnelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::get_children() const
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

void System::TunnelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::TunnelItems::IfList::IfList()
    :
    id{YType::str, "id"},
    src{YType::str, "src"},
    dest{YType::str, "dest"},
    ttype{YType::enumeration, "tType"},
    vrfname{YType::str, "vrfName"},
    cfgdmtu{YType::uint32, "cfgdMtu"},
    keepalvintvl{YType::uint32, "keepAlvIntvl"},
    keepalvretries{YType::uint32, "keepAlvRetries"},
    adminst{YType::enumeration, "adminSt"},
    type{YType::str, "type"},
    tlayer{YType::enumeration, "tLayer"},
    mac{YType::str, "mac"},
    iod{YType::uint32, "iod"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    delinprog{YType::boolean, "delInProg"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    dep_items(std::make_shared<System::TunnelItems::IfList::DepItems>())
    , vnode_items(std::make_shared<System::TunnelItems::IfList::VnodeItems>())
    , idep_items(std::make_shared<System::TunnelItems::IfList::IdepItems>())
    , odev_items(std::make_shared<System::TunnelItems::IfList::OdevItems>())
    , bank_items(std::make_shared<System::TunnelItems::IfList::BankItems>())
    , portif_items(std::make_shared<System::TunnelItems::IfList::PortifItems>())
    , rtvrfmbr_items(std::make_shared<System::TunnelItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::TunnelItems::IfList::RtnwPathToIfItems>())
    , rstunnelmbrifs_items(std::make_shared<System::TunnelItems::IfList::RstunnelMbrIfsItems>())
    , rstunneltoloosenode_items(std::make_shared<System::TunnelItems::IfList::RstunnelToLooseNodeItems>())
{
    dep_items->parent = this;
    vnode_items->parent = this;
    idep_items->parent = this;
    odev_items->parent = this;
    bank_items->parent = this;
    portif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rstunnelmbrifs_items->parent = this;
    rstunneltoloosenode_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "tunnel-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TunnelItems::IfList::~IfList()
{
}

bool System::TunnelItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| src.is_set
	|| dest.is_set
	|| ttype.is_set
	|| vrfname.is_set
	|| cfgdmtu.is_set
	|| keepalvintvl.is_set
	|| keepalvretries.is_set
	|| adminst.is_set
	|| type.is_set
	|| tlayer.is_set
	|| mac.is_set
	|| iod.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| delinprog.is_set
	|| name.is_set
	|| descr.is_set
	|| (dep_items !=  nullptr && dep_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (idep_items !=  nullptr && idep_items->has_data())
	|| (odev_items !=  nullptr && odev_items->has_data())
	|| (bank_items !=  nullptr && bank_items->has_data())
	|| (portif_items !=  nullptr && portif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rstunnelmbrifs_items !=  nullptr && rstunnelmbrifs_items->has_data())
	|| (rstunneltoloosenode_items !=  nullptr && rstunneltoloosenode_items->has_data());
}

bool System::TunnelItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(dest.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(cfgdmtu.yfilter)
	|| ydk::is_set(keepalvintvl.yfilter)
	|| ydk::is_set(keepalvretries.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(tlayer.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(delinprog.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (dep_items !=  nullptr && dep_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (idep_items !=  nullptr && idep_items->has_operation())
	|| (odev_items !=  nullptr && odev_items->has_operation())
	|| (bank_items !=  nullptr && bank_items->has_operation())
	|| (portif_items !=  nullptr && portif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rstunnelmbrifs_items !=  nullptr && rstunnelmbrifs_items->has_operation())
	|| (rstunneltoloosenode_items !=  nullptr && rstunneltoloosenode_items->has_operation());
}

std::string System::TunnelItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/tunnel-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TunnelItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (dest.is_set || is_set(dest.yfilter)) leaf_name_data.push_back(dest.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (cfgdmtu.is_set || is_set(cfgdmtu.yfilter)) leaf_name_data.push_back(cfgdmtu.get_name_leafdata());
    if (keepalvintvl.is_set || is_set(keepalvintvl.yfilter)) leaf_name_data.push_back(keepalvintvl.get_name_leafdata());
    if (keepalvretries.is_set || is_set(keepalvretries.yfilter)) leaf_name_data.push_back(keepalvretries.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (tlayer.is_set || is_set(tlayer.yfilter)) leaf_name_data.push_back(tlayer.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (delinprog.is_set || is_set(delinprog.yfilter)) leaf_name_data.push_back(delinprog.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dep-items")
    {
        if(dep_items == nullptr)
        {
            dep_items = std::make_shared<System::TunnelItems::IfList::DepItems>();
        }
        return dep_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::TunnelItems::IfList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "idep-items")
    {
        if(idep_items == nullptr)
        {
            idep_items = std::make_shared<System::TunnelItems::IfList::IdepItems>();
        }
        return idep_items;
    }

    if(child_yang_name == "odev-items")
    {
        if(odev_items == nullptr)
        {
            odev_items = std::make_shared<System::TunnelItems::IfList::OdevItems>();
        }
        return odev_items;
    }

    if(child_yang_name == "bank-items")
    {
        if(bank_items == nullptr)
        {
            bank_items = std::make_shared<System::TunnelItems::IfList::BankItems>();
        }
        return bank_items;
    }

    if(child_yang_name == "portif-items")
    {
        if(portif_items == nullptr)
        {
            portif_items = std::make_shared<System::TunnelItems::IfList::PortifItems>();
        }
        return portif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::TunnelItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::TunnelItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rstunnelMbrIfs-items")
    {
        if(rstunnelmbrifs_items == nullptr)
        {
            rstunnelmbrifs_items = std::make_shared<System::TunnelItems::IfList::RstunnelMbrIfsItems>();
        }
        return rstunnelmbrifs_items;
    }

    if(child_yang_name == "rstunnelToLooseNode-items")
    {
        if(rstunneltoloosenode_items == nullptr)
        {
            rstunneltoloosenode_items = std::make_shared<System::TunnelItems::IfList::RstunnelToLooseNodeItems>();
        }
        return rstunneltoloosenode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dep_items != nullptr)
    {
        children["dep-items"] = dep_items;
    }

    if(vnode_items != nullptr)
    {
        children["vnode-items"] = vnode_items;
    }

    if(idep_items != nullptr)
    {
        children["idep-items"] = idep_items;
    }

    if(odev_items != nullptr)
    {
        children["odev-items"] = odev_items;
    }

    if(bank_items != nullptr)
    {
        children["bank-items"] = bank_items;
    }

    if(portif_items != nullptr)
    {
        children["portif-items"] = portif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(rstunnelmbrifs_items != nullptr)
    {
        children["rstunnelMbrIfs-items"] = rstunnelmbrifs_items;
    }

    if(rstunneltoloosenode_items != nullptr)
    {
        children["rstunnelToLooseNode-items"] = rstunneltoloosenode_items;
    }

    return children;
}

void System::TunnelItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest")
    {
        dest = value;
        dest.value_namespace = name_space;
        dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgdMtu")
    {
        cfgdmtu = value;
        cfgdmtu.value_namespace = name_space;
        cfgdmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepAlvIntvl")
    {
        keepalvintvl = value;
        keepalvintvl.value_namespace = name_space;
        keepalvintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepAlvRetries")
    {
        keepalvretries = value;
        keepalvretries.value_namespace = name_space;
        keepalvretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tLayer")
    {
        tlayer = value;
        tlayer.value_namespace = name_space;
        tlayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delInProg")
    {
        delinprog = value;
        delinprog.value_namespace = name_space;
        delinprog.value_namespace_prefix = name_space_prefix;
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

void System::TunnelItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "dest")
    {
        dest.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "cfgdMtu")
    {
        cfgdmtu.yfilter = yfilter;
    }
    if(value_path == "keepAlvIntvl")
    {
        keepalvintvl.yfilter = yfilter;
    }
    if(value_path == "keepAlvRetries")
    {
        keepalvretries.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "tLayer")
    {
        tlayer.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "delInProg")
    {
        delinprog.yfilter = yfilter;
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

bool System::TunnelItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dep-items" || name == "vnode-items" || name == "idep-items" || name == "odev-items" || name == "bank-items" || name == "portif-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "rstunnelMbrIfs-items" || name == "rstunnelToLooseNode-items" || name == "id" || name == "src" || name == "dest" || name == "tType" || name == "vrfName" || name == "cfgdMtu" || name == "keepAlvIntvl" || name == "keepAlvRetries" || name == "adminSt" || name == "type" || name == "tLayer" || name == "mac" || name == "iod" || name == "operSt" || name == "operStQual" || name == "delInProg" || name == "name" || name == "descr")
        return true;
    return false;
}

System::TunnelItems::IfList::DepItems::DepItems()
    :
    dep_list(this, {"mac", "encap"})
{

    yang_name = "dep-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::DepItems::~DepItems()
{
}

bool System::TunnelItems::IfList::DepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::DepItems::has_operation() const
{
    for (std::size_t index=0; index<dep_list.len(); index++)
    {
        if(dep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::DepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::DepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::DepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DEp-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::DepItems::DEpList>();
        c->parent = this;
        dep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::DepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::DepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::DepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::DepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DEp-list")
        return true;
    return false;
}

System::TunnelItems::IfList::DepItems::DEpList::DEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    lcc{YType::str, "lcC"},
    ip{YType::str, "ip"},
    uuid{YType::str, "uuid"}
{

    yang_name = "DEp-list"; yang_parent_name = "dep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::DepItems::DEpList::~DEpList()
{
}

bool System::TunnelItems::IfList::DepItems::DEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| name.is_set
	|| id.is_set
	|| lcc.is_set
	|| ip.is_set
	|| uuid.is_set;
}

bool System::TunnelItems::IfList::DepItems::DEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lcc.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(uuid.yfilter);
}

std::string System::TunnelItems::IfList::DepItems::DEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::DepItems::DEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lcc.is_set || is_set(lcc.yfilter)) leaf_name_data.push_back(lcc.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::DepItems::DEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::DepItems::DEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::DepItems::DEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "lcC")
    {
        lcc = value;
        lcc.value_namespace = name_space;
        lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::DepItems::DEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
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
    if(value_path == "lcC")
    {
        lcc.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::DepItems::DEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "name" || name == "id" || name == "lcC" || name == "ip" || name == "uuid")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::~VnodeItems()
{
}

bool System::TunnelItems::IfList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList>();
        c->parent = this;
        vnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::TunnelItems::IfList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvvnode_items != nullptr)
    {
        children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        children["rslNode-items"] = rslnode_items;
    }

    return children;
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        c->parent = this;
        rtfvvnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvvnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        c->parent = this;
        rslnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rslnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IdepItems()
    :
    idep_list(this, {"mac", "encap"})
{

    yang_name = "idep-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::~IdepItems()
{
}

bool System::TunnelItems::IfList::IdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::IdepItems::has_operation() const
{
    for (std::size_t index=0; index<idep_list.len(); index++)
    {
        if(idep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEp-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList>();
        c->parent = this;
        idep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : idep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::IdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::IdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEp-list")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::IDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    vendorid{YType::enumeration, "vendorId"},
    domname{YType::str, "domName"},
    ctrlrname{YType::str, "ctrlrName"},
    eppdn{YType::str, "eppdn"},
    compvmdn{YType::str, "compVmDn"},
    comphvdn{YType::str, "compHvDn"},
    epgid{YType::str, "epgID"},
    ephostaddr{YType::str, "epHostAddr"},
    hypervisorname{YType::str, "hypervisorName"},
    portid{YType::uint32, "portId"},
    gtag{YType::uint32, "gtag"},
    brifid{YType::str, "brIfId"},
    containername{YType::str, "containerName"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    eppdownloadhint{YType::enumeration, "eppDownloadHint"},
    handle{YType::uint64, "handle"},
    insttype{YType::enumeration, "instType"},
    pcifid{YType::uint32, "pcIfId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    lcc{YType::str, "lcC"},
    ip{YType::str, "ip"},
    uuid{YType::str, "uuid"}
        ,
    idepcntr_items(std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems>())
    , vdep_items(std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems>())
{
    idepcntr_items->parent = this;
    vdep_items->parent = this;

    yang_name = "IDEp-list"; yang_parent_name = "idep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::~IDEpList()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| vendorid.is_set
	|| domname.is_set
	|| ctrlrname.is_set
	|| eppdn.is_set
	|| compvmdn.is_set
	|| comphvdn.is_set
	|| epgid.is_set
	|| ephostaddr.is_set
	|| hypervisorname.is_set
	|| portid.is_set
	|| gtag.is_set
	|| brifid.is_set
	|| containername.is_set
	|| transitionstatus.is_set
	|| eppdownloadhint.is_set
	|| handle.is_set
	|| insttype.is_set
	|| pcifid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| lcc.is_set
	|| ip.is_set
	|| uuid.is_set
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_data())
	|| (vdep_items !=  nullptr && vdep_items->has_data());
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(vendorid.yfilter)
	|| ydk::is_set(domname.yfilter)
	|| ydk::is_set(ctrlrname.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(compvmdn.yfilter)
	|| ydk::is_set(comphvdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(ephostaddr.yfilter)
	|| ydk::is_set(hypervisorname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(gtag.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(containername.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(eppdownloadhint.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lcc.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_operation())
	|| (vdep_items !=  nullptr && vdep_items->has_operation());
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (vendorid.is_set || is_set(vendorid.yfilter)) leaf_name_data.push_back(vendorid.get_name_leafdata());
    if (domname.is_set || is_set(domname.yfilter)) leaf_name_data.push_back(domname.get_name_leafdata());
    if (ctrlrname.is_set || is_set(ctrlrname.yfilter)) leaf_name_data.push_back(ctrlrname.get_name_leafdata());
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (compvmdn.is_set || is_set(compvmdn.yfilter)) leaf_name_data.push_back(compvmdn.get_name_leafdata());
    if (comphvdn.is_set || is_set(comphvdn.yfilter)) leaf_name_data.push_back(comphvdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (ephostaddr.is_set || is_set(ephostaddr.yfilter)) leaf_name_data.push_back(ephostaddr.get_name_leafdata());
    if (hypervisorname.is_set || is_set(hypervisorname.yfilter)) leaf_name_data.push_back(hypervisorname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (gtag.is_set || is_set(gtag.yfilter)) leaf_name_data.push_back(gtag.get_name_leafdata());
    if (brifid.is_set || is_set(brifid.yfilter)) leaf_name_data.push_back(brifid.get_name_leafdata());
    if (containername.is_set || is_set(containername.yfilter)) leaf_name_data.push_back(containername.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (eppdownloadhint.is_set || is_set(eppdownloadhint.yfilter)) leaf_name_data.push_back(eppdownloadhint.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lcc.is_set || is_set(lcc.yfilter)) leaf_name_data.push_back(lcc.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idepcntr-items")
    {
        if(idepcntr_items == nullptr)
        {
            idepcntr_items = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems>();
        }
        return idepcntr_items;
    }

    if(child_yang_name == "vdep-items")
    {
        if(vdep_items == nullptr)
        {
            vdep_items = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems>();
        }
        return vdep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idepcntr_items != nullptr)
    {
        children["idepcntr-items"] = idepcntr_items;
    }

    if(vdep_items != nullptr)
    {
        children["vdep-items"] = vdep_items;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorId")
    {
        vendorid = value;
        vendorid.value_namespace = name_space;
        vendorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domName")
    {
        domname = value;
        domname.value_namespace = name_space;
        domname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrName")
    {
        ctrlrname = value;
        ctrlrname.value_namespace = name_space;
        ctrlrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppdn")
    {
        eppdn = value;
        eppdn.value_namespace = name_space;
        eppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compVmDn")
    {
        compvmdn = value;
        compvmdn.value_namespace = name_space;
        compvmdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compHvDn")
    {
        comphvdn = value;
        comphvdn.value_namespace = name_space;
        comphvdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr = value;
        ephostaddr.value_namespace = name_space;
        ephostaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname = value;
        hypervisorname.value_namespace = name_space;
        hypervisorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gtag")
    {
        gtag = value;
        gtag.value_namespace = name_space;
        gtag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIfId")
    {
        brifid = value;
        brifid.value_namespace = name_space;
        brifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "containerName")
    {
        containername = value;
        containername.value_namespace = name_space;
        containername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint = value;
        eppdownloadhint.value_namespace = name_space;
        eppdownloadhint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lcC")
    {
        lcc = value;
        lcc.value_namespace = name_space;
        lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::IdepItems::IDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "vendorId")
    {
        vendorid.yfilter = yfilter;
    }
    if(value_path == "domName")
    {
        domname.yfilter = yfilter;
    }
    if(value_path == "ctrlrName")
    {
        ctrlrname.yfilter = yfilter;
    }
    if(value_path == "eppdn")
    {
        eppdn.yfilter = yfilter;
    }
    if(value_path == "compVmDn")
    {
        compvmdn.yfilter = yfilter;
    }
    if(value_path == "compHvDn")
    {
        comphvdn.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "epHostAddr")
    {
        ephostaddr.yfilter = yfilter;
    }
    if(value_path == "hypervisorName")
    {
        hypervisorname.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "gtag")
    {
        gtag.yfilter = yfilter;
    }
    if(value_path == "brIfId")
    {
        brifid.yfilter = yfilter;
    }
    if(value_path == "containerName")
    {
        containername.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "eppDownloadHint")
    {
        eppdownloadhint.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lcC")
    {
        lcc.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idepcntr-items" || name == "vdep-items" || name == "mac" || name == "encap" || name == "vendorId" || name == "domName" || name == "ctrlrName" || name == "eppdn" || name == "compVmDn" || name == "compHvDn" || name == "epgID" || name == "epHostAddr" || name == "hypervisorName" || name == "portId" || name == "gtag" || name == "brIfId" || name == "containerName" || name == "transitionStatus" || name == "eppDownloadHint" || name == "handle" || name == "instType" || name == "pcIfId" || name == "state" || name == "name" || name == "id" || name == "lcC" || name == "ip" || name == "uuid")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IdepcntrItems()
    :
    idepcntr_list(this, {"mac", "encap"})
{

    yang_name = "idepcntr-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::~IdepcntrItems()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::has_operation() const
{
    for (std::size_t index=0; index<idepcntr_list.len(); index++)
    {
        if(idepcntr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idepcntr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEpCntr-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList>();
        c->parent = this;
        idepcntr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : idepcntr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDEpCntr-list")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::IDEpCntrList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    drop{YType::uint64, "drop"},
    ucast{YType::uint64, "ucast"},
    mcast{YType::uint64, "mcast"},
    bcast{YType::uint64, "bcast"},
    pkts{YType::uint64, "pkts"},
    bytes{YType::uint64, "bytes"},
    direction{YType::enumeration, "direction"},
    pktsresetmask{YType::uint32, "pktsResetMask"},
    bytesresetmask{YType::uint32, "bytesResetMask"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "IDEpCntr-list"; yang_parent_name = "idepcntr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::~IDEpCntrList()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| drop.is_set
	|| ucast.is_set
	|| mcast.is_set
	|| bcast.is_set
	|| pkts.is_set
	|| bytes.is_set
	|| direction.is_set
	|| pktsresetmask.is_set
	|| bytesresetmask.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(ucast.yfilter)
	|| ydk::is_set(mcast.yfilter)
	|| ydk::is_set(bcast.yfilter)
	|| ydk::is_set(pkts.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(pktsresetmask.yfilter)
	|| ydk::is_set(bytesresetmask.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDEpCntr-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (ucast.is_set || is_set(ucast.yfilter)) leaf_name_data.push_back(ucast.get_name_leafdata());
    if (mcast.is_set || is_set(mcast.yfilter)) leaf_name_data.push_back(mcast.get_name_leafdata());
    if (bcast.is_set || is_set(bcast.yfilter)) leaf_name_data.push_back(bcast.get_name_leafdata());
    if (pkts.is_set || is_set(pkts.yfilter)) leaf_name_data.push_back(pkts.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (pktsresetmask.is_set || is_set(pktsresetmask.yfilter)) leaf_name_data.push_back(pktsresetmask.get_name_leafdata());
    if (bytesresetmask.is_set || is_set(bytesresetmask.yfilter)) leaf_name_data.push_back(bytesresetmask.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast")
    {
        ucast = value;
        ucast.value_namespace = name_space;
        ucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast")
    {
        mcast = value;
        mcast.value_namespace = name_space;
        mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcast")
    {
        bcast = value;
        bcast.value_namespace = name_space;
        bcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts")
    {
        pkts = value;
        pkts.value_namespace = name_space;
        pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktsResetMask")
    {
        pktsresetmask = value;
        pktsresetmask.value_namespace = name_space;
        pktsresetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesResetMask")
    {
        bytesresetmask = value;
        bytesresetmask.value_namespace = name_space;
        bytesresetmask.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "ucast")
    {
        ucast.yfilter = yfilter;
    }
    if(value_path == "mcast")
    {
        mcast.yfilter = yfilter;
    }
    if(value_path == "bcast")
    {
        bcast.yfilter = yfilter;
    }
    if(value_path == "pkts")
    {
        pkts.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "pktsResetMask")
    {
        pktsresetmask.yfilter = yfilter;
    }
    if(value_path == "bytesResetMask")
    {
        bytesresetmask.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "drop" || name == "ucast" || name == "mcast" || name == "bcast" || name == "pkts" || name == "bytes" || name == "direction" || name == "pktsResetMask" || name == "bytesResetMask" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VdepItems()
    :
    vdep_list(this, {"mac", "encap", "brifid"})
{

    yang_name = "vdep-items"; yang_parent_name = "IDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::~VdepItems()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::has_operation() const
{
    for (std::size_t index=0; index<vdep_list.len(); index++)
    {
        if(vdep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vdep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VDEp-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList>();
        c->parent = this;
        vdep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vdep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VDEp-list")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::VDEpList()
    :
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    brifid{YType::str, "brIfId"},
    eppdn{YType::str, "eppdn"},
    epgid{YType::str, "epgID"},
    portid{YType::uint32, "portId"},
    gtag{YType::uint32, "gtag"},
    insttype{YType::enumeration, "instType"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    lcc{YType::str, "lcC"},
    ip{YType::str, "ip"},
    uuid{YType::str, "uuid"}
        ,
    rsvnode_items(std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>())
{
    rsvnode_items->parent = this;

    yang_name = "VDEp-list"; yang_parent_name = "vdep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::~VDEpList()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| encap.is_set
	|| brifid.is_set
	|| eppdn.is_set
	|| epgid.is_set
	|| portid.is_set
	|| gtag.is_set
	|| insttype.is_set
	|| name.is_set
	|| id.is_set
	|| lcc.is_set
	|| ip.is_set
	|| uuid.is_set
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_data());
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(gtag.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lcc.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_operation());
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VDEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    ADD_KEY_TOKEN(encap, "encap");
    ADD_KEY_TOKEN(brifid, "brIfId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (brifid.is_set || is_set(brifid.yfilter)) leaf_name_data.push_back(brifid.get_name_leafdata());
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (gtag.is_set || is_set(gtag.yfilter)) leaf_name_data.push_back(gtag.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lcc.is_set || is_set(lcc.yfilter)) leaf_name_data.push_back(lcc.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvNode-items")
    {
        if(rsvnode_items == nullptr)
        {
            rsvnode_items = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems>();
        }
        return rsvnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvnode_items != nullptr)
    {
        children["rsvNode-items"] = rsvnode_items;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIfId")
    {
        brifid = value;
        brifid.value_namespace = name_space;
        brifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eppdn")
    {
        eppdn = value;
        eppdn.value_namespace = name_space;
        eppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gtag")
    {
        gtag = value;
        gtag.value_namespace = name_space;
        gtag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instType")
    {
        insttype = value;
        insttype.value_namespace = name_space;
        insttype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lcC")
    {
        lcc = value;
        lcc.value_namespace = name_space;
        lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "brIfId")
    {
        brifid.yfilter = yfilter;
    }
    if(value_path == "eppdn")
    {
        eppdn.yfilter = yfilter;
    }
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "gtag")
    {
        gtag.yfilter = yfilter;
    }
    if(value_path == "instType")
    {
        insttype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lcC")
    {
        lcc.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvNode-items" || name == "mac" || name == "encap" || name == "brIfId" || name == "eppdn" || name == "epgID" || name == "portId" || name == "gtag" || name == "instType" || name == "name" || name == "id" || name == "lcC" || name == "ip" || name == "uuid")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsvNodeItems()
    :
    rsvnode_list(this, {"tdn"})
{

    yang_name = "rsvNode-items"; yang_parent_name = "VDEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::~RsvNodeItems()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rsvnode_list.len(); index++)
    {
        if(rsvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList>();
        c->parent = this;
        rsvnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsvnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsVNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::RsVNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsVNode-list"; yang_parent_name = "rsvNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::~RsVNodeList()
{
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::OdevItems()
    :
    odev_list(this, {"devid"})
{

    yang_name = "odev-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::~OdevItems()
{
}

bool System::TunnelItems::IfList::OdevItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::OdevItems::has_operation() const
{
    for (std::size_t index=0; index<odev_list.len(); index++)
    {
        if(odev_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odev-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODev-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList>();
        c->parent = this;
        odev_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : odev_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::OdevItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::OdevItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ODev-list")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::ODevList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    ip{YType::str, "ip"},
    mac{YType::str, "mac"},
    encap{YType::str, "encap"},
    updatets{YType::uint64, "updateTs"},
    hostname{YType::str, "hostName"},
    ipaddr{YType::str, "ipAddr"},
    numhb{YType::uint32, "numHB"},
    lastnumhb{YType::uint32, "lastNumHB"},
    hbstatus{YType::enumeration, "hbStatus"},
    operst{YType::enumeration, "operSt"},
    devoperissues{YType::str, "devOperIssues"},
    maxmisshb{YType::uint32, "maxMissHb"},
    pcifid{YType::uint32, "pcIfId"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    domname{YType::str, "domName"},
    ctrlrname{YType::str, "ctrlrName"},
    portid{YType::uint32, "portId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    odevcap_items(std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems>())
    , vnode_items(std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems>())
    , opnic_items(std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems>())
{
    odevcap_items->parent = this;
    vnode_items->parent = this;
    opnic_items->parent = this;

    yang_name = "ODev-list"; yang_parent_name = "odev-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::~ODevList()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| ip.is_set
	|| mac.is_set
	|| encap.is_set
	|| updatets.is_set
	|| hostname.is_set
	|| ipaddr.is_set
	|| numhb.is_set
	|| lastnumhb.is_set
	|| hbstatus.is_set
	|| operst.is_set
	|| devoperissues.is_set
	|| maxmisshb.is_set
	|| pcifid.is_set
	|| transitionstatus.is_set
	|| domname.is_set
	|| ctrlrname.is_set
	|| portid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| (odevcap_items !=  nullptr && odevcap_items->has_data())
	|| (vnode_items !=  nullptr && vnode_items->has_data())
	|| (opnic_items !=  nullptr && opnic_items->has_data());
}

bool System::TunnelItems::IfList::OdevItems::ODevList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(updatets.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(numhb.yfilter)
	|| ydk::is_set(lastnumhb.yfilter)
	|| ydk::is_set(hbstatus.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(devoperissues.yfilter)
	|| ydk::is_set(maxmisshb.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(domname.yfilter)
	|| ydk::is_set(ctrlrname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (odevcap_items !=  nullptr && odevcap_items->has_operation())
	|| (vnode_items !=  nullptr && vnode_items->has_operation())
	|| (opnic_items !=  nullptr && opnic_items->has_operation());
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ODev-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (updatets.is_set || is_set(updatets.yfilter)) leaf_name_data.push_back(updatets.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (numhb.is_set || is_set(numhb.yfilter)) leaf_name_data.push_back(numhb.get_name_leafdata());
    if (lastnumhb.is_set || is_set(lastnumhb.yfilter)) leaf_name_data.push_back(lastnumhb.get_name_leafdata());
    if (hbstatus.is_set || is_set(hbstatus.yfilter)) leaf_name_data.push_back(hbstatus.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (devoperissues.is_set || is_set(devoperissues.yfilter)) leaf_name_data.push_back(devoperissues.get_name_leafdata());
    if (maxmisshb.is_set || is_set(maxmisshb.yfilter)) leaf_name_data.push_back(maxmisshb.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (domname.is_set || is_set(domname.yfilter)) leaf_name_data.push_back(domname.get_name_leafdata());
    if (ctrlrname.is_set || is_set(ctrlrname.yfilter)) leaf_name_data.push_back(ctrlrname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odevcap-items")
    {
        if(odevcap_items == nullptr)
        {
            odevcap_items = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems>();
        }
        return odevcap_items;
    }

    if(child_yang_name == "vnode-items")
    {
        if(vnode_items == nullptr)
        {
            vnode_items = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems>();
        }
        return vnode_items;
    }

    if(child_yang_name == "opnic-items")
    {
        if(opnic_items == nullptr)
        {
            opnic_items = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems>();
        }
        return opnic_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(odevcap_items != nullptr)
    {
        children["odevcap-items"] = odevcap_items;
    }

    if(vnode_items != nullptr)
    {
        children["vnode-items"] = vnode_items;
    }

    if(opnic_items != nullptr)
    {
        children["opnic-items"] = opnic_items;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updateTs")
    {
        updatets = value;
        updatets.value_namespace = name_space;
        updatets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostName")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numHB")
    {
        numhb = value;
        numhb.value_namespace = name_space;
        numhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb = value;
        lastnumhb.value_namespace = name_space;
        lastnumhb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hbStatus")
    {
        hbstatus = value;
        hbstatus.value_namespace = name_space;
        hbstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devOperIssues")
    {
        devoperissues = value;
        devoperissues.value_namespace = name_space;
        devoperissues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb = value;
        maxmisshb.value_namespace = name_space;
        maxmisshb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcIfId")
    {
        pcifid = value;
        pcifid.value_namespace = name_space;
        pcifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus = value;
        transitionstatus.value_namespace = name_space;
        transitionstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domName")
    {
        domname = value;
        domname.value_namespace = name_space;
        domname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlrName")
    {
        ctrlrname = value;
        ctrlrname.value_namespace = name_space;
        ctrlrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portId")
    {
        portid = value;
        portid.value_namespace = name_space;
        portid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::OdevItems::ODevList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "updateTs")
    {
        updatets.yfilter = yfilter;
    }
    if(value_path == "hostName")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "numHB")
    {
        numhb.yfilter = yfilter;
    }
    if(value_path == "lastNumHB")
    {
        lastnumhb.yfilter = yfilter;
    }
    if(value_path == "hbStatus")
    {
        hbstatus.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "devOperIssues")
    {
        devoperissues.yfilter = yfilter;
    }
    if(value_path == "maxMissHb")
    {
        maxmisshb.yfilter = yfilter;
    }
    if(value_path == "pcIfId")
    {
        pcifid.yfilter = yfilter;
    }
    if(value_path == "transitionStatus")
    {
        transitionstatus.yfilter = yfilter;
    }
    if(value_path == "domName")
    {
        domname.yfilter = yfilter;
    }
    if(value_path == "ctrlrName")
    {
        ctrlrname.yfilter = yfilter;
    }
    if(value_path == "portId")
    {
        portid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::OdevItems::ODevList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odevcap-items" || name == "vnode-items" || name == "opnic-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "ip" || name == "mac" || name == "encap" || name == "updateTs" || name == "hostName" || name == "ipAddr" || name == "numHB" || name == "lastNumHB" || name == "hbStatus" || name == "operSt" || name == "devOperIssues" || name == "maxMissHb" || name == "pcIfId" || name == "transitionStatus" || name == "domName" || name == "ctrlrName" || name == "portId" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::OdevcapItems()
    :
    version{YType::str, "version"},
    devid{YType::uint32, "devId"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "odevcap-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::~OdevcapItems()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| devid.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odevcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "devId" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VnodeItems()
    :
    vnode_list(this, {"devid"})
{

    yang_name = "vnode-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::~VnodeItems()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::has_operation() const
{
    for (std::size_t index=0; index<vnode_list.len(); index++)
    {
        if(vnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList>();
        c->parent = this;
        vnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::VNodeList()
    :
    devid{YType::uint32, "devId"},
    devtype{YType::enumeration, "devType"},
    lnodedn{YType::str, "lNodeDn"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
        ,
    rtfvvnode_items(std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>())
    , rslnode_items(std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>())
{
    rtfvvnode_items->parent = this;
    rslnode_items->parent = this;

    yang_name = "VNode-list"; yang_parent_name = "vnode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::~VNodeList()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::has_data() const
{
    if (is_presence_container) return true;
    return devid.is_set
	|| devtype.is_set
	|| lnodedn.is_set
	|| name.is_set
	|| id.is_set
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_data())
	|| (rslnode_items !=  nullptr && rslnode_items->has_data());
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(devid.yfilter)
	|| ydk::is_set(devtype.yfilter)
	|| ydk::is_set(lnodedn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| (rtfvvnode_items !=  nullptr && rtfvvnode_items->has_operation())
	|| (rslnode_items !=  nullptr && rslnode_items->has_operation());
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VNode-list";
    ADD_KEY_TOKEN(devid, "devId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (devid.is_set || is_set(devid.yfilter)) leaf_name_data.push_back(devid.get_name_leafdata());
    if (devtype.is_set || is_set(devtype.yfilter)) leaf_name_data.push_back(devtype.get_name_leafdata());
    if (lnodedn.is_set || is_set(lnodedn.yfilter)) leaf_name_data.push_back(lnodedn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvVNode-items")
    {
        if(rtfvvnode_items == nullptr)
        {
            rtfvvnode_items = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems>();
        }
        return rtfvvnode_items;
    }

    if(child_yang_name == "rslNode-items")
    {
        if(rslnode_items == nullptr)
        {
            rslnode_items = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems>();
        }
        return rslnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvvnode_items != nullptr)
    {
        children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        children["rslNode-items"] = rslnode_items;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "devId")
    {
        devid = value;
        devid.value_namespace = name_space;
        devid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "devType")
    {
        devtype = value;
        devtype.value_namespace = name_space;
        devtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn = value;
        lnodedn.value_namespace = name_space;
        lnodedn.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "devId")
    {
        devid.yfilter = yfilter;
    }
    if(value_path == "devType")
    {
        devtype.yfilter = yfilter;
    }
    if(value_path == "lNodeDn")
    {
        lnodedn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvVNode-items" || name == "rslNode-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtfvVNodeItems()
    :
    rtfvvnode_list(this, {"tdn"})
{

    yang_name = "rtfvVNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::~RtfvVNodeItems()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvvnode_list.len(); index++)
    {
        if(rtfvvnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvVNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        c->parent = this;
        rtfvvnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvvnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvVNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::RtFvVNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvVNode-list"; yang_parent_name = "rtfvVNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::~RtFvVNodeList()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvVNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RslNodeItems()
    :
    rslnode_list(this, {"tdn"})
{

    yang_name = "rslNode-items"; yang_parent_name = "VNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::~RslNodeItems()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rslnode_list.len(); index++)
    {
        if(rslnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        c->parent = this;
        rslnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rslnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::RsLNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLNode-list"; yang_parent_name = "rslNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::~RsLNodeList()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OpnicItems()
    :
    opnic_list(this, {"mac"})
{

    yang_name = "opnic-items"; yang_parent_name = "ODev-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::~OpnicItems()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::has_operation() const
{
    for (std::size_t index=0; index<opnic_list.len(); index++)
    {
        if(opnic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opnic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        c->parent = this;
        opnic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : opnic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OPNic-list")
        return true;
    return false;
}

System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::OPNicList()
    :
    mac{YType::str, "mac"},
    ip{YType::str, "ip"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"}
{

    yang_name = "OPNic-list"; yang_parent_name = "opnic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::~OPNicList()
{
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| ip.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OPNic-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
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
}

void System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip" || name == "state" || name == "name" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::BankItems::BankItems()
    :
    bank_list(this, {"type"})
{

    yang_name = "bank-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::BankItems::~BankItems()
{
}

bool System::TunnelItems::IfList::BankItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::BankItems::has_operation() const
{
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::BankItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::BankItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::BankItems::BankList>();
        c->parent = this;
        bank_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::BankItems::get_children() const
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

void System::TunnelItems::IfList::BankItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::BankItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::BankItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bank-list")
        return true;
    return false;
}

System::TunnelItems::IfList::BankItems::BankList::BankList()
    :
    type{YType::enumeration, "type"}
        ,
    dbgingrtep_items(std::make_shared<System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems>())
    , dbgegrtep_items(std::make_shared<System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems>())
{
    dbgingrtep_items->parent = this;
    dbgegrtep_items->parent = this;

    yang_name = "Bank-list"; yang_parent_name = "bank-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::BankItems::BankList::~BankList()
{
}

bool System::TunnelItems::IfList::BankItems::BankList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (dbgingrtep_items !=  nullptr && dbgingrtep_items->has_data())
	|| (dbgegrtep_items !=  nullptr && dbgegrtep_items->has_data());
}

bool System::TunnelItems::IfList::BankItems::BankList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (dbgingrtep_items !=  nullptr && dbgingrtep_items->has_operation())
	|| (dbgegrtep_items !=  nullptr && dbgegrtep_items->has_operation());
}

std::string System::TunnelItems::IfList::BankItems::BankList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bank-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::BankItems::BankList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dbgIngrTep-items")
    {
        if(dbgingrtep_items == nullptr)
        {
            dbgingrtep_items = std::make_shared<System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems>();
        }
        return dbgingrtep_items;
    }

    if(child_yang_name == "dbgEgrTep-items")
    {
        if(dbgegrtep_items == nullptr)
        {
            dbgegrtep_items = std::make_shared<System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems>();
        }
        return dbgegrtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dbgingrtep_items != nullptr)
    {
        children["dbgIngrTep-items"] = dbgingrtep_items;
    }

    if(dbgegrtep_items != nullptr)
    {
        children["dbgEgrTep-items"] = dbgegrtep_items;
    }

    return children;
}

void System::TunnelItems::IfList::BankItems::BankList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::BankItems::BankList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::BankItems::BankList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbgIngrTep-items" || name == "dbgEgrTep-items" || name == "type")
        return true;
    return false;
}

System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::DbgIngrTepItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIngrTep-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::~DbgIngrTepItems()
{
}

bool System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIngrTep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::DbgEgrTepItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgEgrTep-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::~DbgEgrTepItems()
{
}

bool System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEgrTep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortifItems()
    :
    portif_list(this, {"id"})
{

    yang_name = "portif-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::~PortifItems()
{
}

bool System::TunnelItems::IfList::PortifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<portif_list.len(); index++)
    {
        if(portif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::PortifItems::has_operation() const
{
    for (std::size_t index=0; index<portif_list.len(); index++)
    {
        if(portif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::PortifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortIf-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList>();
        c->parent = this;
        portif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : portif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::PortifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::PortifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::PortifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PortIf-list")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortIfList::PortIfList()
    :
    id{YType::str, "id"}
        ,
    bank_items(std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems>())
{
    bank_items->parent = this;

    yang_name = "PortIf-list"; yang_parent_name = "portif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::PortIfList::~PortIfList()
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (bank_items !=  nullptr && bank_items->has_data());
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (bank_items !=  nullptr && bank_items->has_operation());
}

std::string System::TunnelItems::IfList::PortifItems::PortIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PortIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::PortIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::PortIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-items")
    {
        if(bank_items == nullptr)
        {
            bank_items = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems>();
        }
        return bank_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bank_items != nullptr)
    {
        children["bank-items"] = bank_items;
    }

    return children;
}

void System::TunnelItems::IfList::PortifItems::PortIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::PortifItems::PortIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-items" || name == "id")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankItems()
    :
    bank_list(this, {"type"})
{

    yang_name = "bank-items"; yang_parent_name = "PortIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::~BankItems()
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::has_operation() const
{
    for (std::size_t index=0; index<bank_list.len(); index++)
    {
        if(bank_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList>();
        c->parent = this;
        bank_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_children() const
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

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bank-list")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::BankList()
    :
    type{YType::enumeration, "type"}
        ,
    dbgingrtep_items(std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems>())
    , dbgegrtep_items(std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems>())
{
    dbgingrtep_items->parent = this;
    dbgegrtep_items->parent = this;

    yang_name = "Bank-list"; yang_parent_name = "bank-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::~BankList()
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (dbgingrtep_items !=  nullptr && dbgingrtep_items->has_data())
	|| (dbgegrtep_items !=  nullptr && dbgegrtep_items->has_data());
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (dbgingrtep_items !=  nullptr && dbgingrtep_items->has_operation())
	|| (dbgegrtep_items !=  nullptr && dbgegrtep_items->has_operation());
}

std::string System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bank-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dbgIngrTep-items")
    {
        if(dbgingrtep_items == nullptr)
        {
            dbgingrtep_items = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems>();
        }
        return dbgingrtep_items;
    }

    if(child_yang_name == "dbgEgrTep-items")
    {
        if(dbgegrtep_items == nullptr)
        {
            dbgegrtep_items = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems>();
        }
        return dbgegrtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dbgingrtep_items != nullptr)
    {
        children["dbgIngrTep-items"] = dbgingrtep_items;
    }

    if(dbgegrtep_items != nullptr)
    {
        children["dbgEgrTep-items"] = dbgegrtep_items;
    }

    return children;
}

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbgIngrTep-items" || name == "dbgEgrTep-items" || name == "type")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::DbgIngrTepItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIngrTep-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::~DbgIngrTepItems()
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIngrTep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::DbgEgrTepItems()
    :
    fwdpkts{YType::uint64, "fwdPkts"},
    fwdbytes{YType::uint64, "fwdBytes"},
    droppkts{YType::uint64, "dropPkts"},
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgEgrTep-items"; yang_parent_name = "Bank-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::~DbgEgrTepItems()
{
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::has_data() const
{
    if (is_presence_container) return true;
    return fwdpkts.is_set
	|| fwdbytes.is_set
	|| droppkts.is_set
	|| dropbytes.is_set;
}

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fwdpkts.yfilter)
	|| ydk::is_set(fwdbytes.yfilter)
	|| ydk::is_set(droppkts.yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEgrTep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwdpkts.is_set || is_set(fwdpkts.yfilter)) leaf_name_data.push_back(fwdpkts.get_name_leafdata());
    if (fwdbytes.is_set || is_set(fwdbytes.yfilter)) leaf_name_data.push_back(fwdbytes.get_name_leafdata());
    if (droppkts.is_set || is_set(droppkts.yfilter)) leaf_name_data.push_back(droppkts.get_name_leafdata());
    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fwdPkts" || name == "fwdBytes" || name == "dropPkts" || name == "dropBytes")
        return true;
    return false;
}

System::TunnelItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::TunnelItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::TunnelItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RtnwPathToIfItems::get_children() const
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

void System::TunnelItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::RstunnelMbrIfsItems::RstunnelMbrIfsItems()
    :
    rstunnelmbrifs_list(this, {"tdn"})
{

    yang_name = "rstunnelMbrIfs-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RstunnelMbrIfsItems::~RstunnelMbrIfsItems()
{
}

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rstunnelmbrifs_list.len(); index++)
    {
        if(rstunnelmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rstunnelmbrifs_list.len(); index++)
    {
        if(rstunnelmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::RstunnelMbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstunnelMbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RstunnelMbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RstunnelMbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTunnelMbrIfs-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList>();
        c->parent = this;
        rstunnelmbrifs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RstunnelMbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rstunnelmbrifs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::RstunnelMbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::RstunnelMbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsTunnelMbrIfs-list")
        return true;
    return false;
}

System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::RsTunnelMbrIfsList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsTunnelMbrIfs-list"; yang_parent_name = "rstunnelMbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::~RsTunnelMbrIfsList()
{
}

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsTunnelMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::TunnelItems::IfList::RstunnelToLooseNodeItems::RstunnelToLooseNodeItems()
    :
    rstunneltoloosenode_list(this, {"tdn"})
{

    yang_name = "rstunnelToLooseNode-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RstunnelToLooseNodeItems::~RstunnelToLooseNodeItems()
{
}

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rstunneltoloosenode_list.len(); index++)
    {
        if(rstunneltoloosenode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rstunneltoloosenode_list.len(); index++)
    {
        if(rstunneltoloosenode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstunnelToLooseNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTunnelToLooseNode-list")
    {
        auto c = std::make_shared<System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList>();
        c->parent = this;
        rstunneltoloosenode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rstunneltoloosenode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::TunnelItems::IfList::RstunnelToLooseNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TunnelItems::IfList::RstunnelToLooseNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsTunnelToLooseNode-list")
        return true;
    return false;
}

System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::RsTunnelToLooseNodeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsTunnelToLooseNode-list"; yang_parent_name = "rstunnelToLooseNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::~RsTunnelToLooseNodeList()
{
}

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsTunnelToLooseNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::VtpItems::VtpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::VtpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vtp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VtpItems::~VtpItems()
{
}

bool System::VtpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::VtpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::VtpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VtpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["Inst-items"] = inst_items;
    }

    return children;
}

void System::VtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::VtpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::VtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::VtpItems::InstItems::InstItems()
    :
    domain{YType::str, "domain"},
    version{YType::uint32, "version"},
    mode{YType::str, "mode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "Inst-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VtpItems::InstItems::~InstItems()
{
}

bool System::VtpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| version.is_set
	|| mode.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set;
}

bool System::VtpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter);
}

std::string System::VtpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::VtpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VtpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::VtpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::VtpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::VtpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
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

void System::VtpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
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

bool System::VtpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "version" || name == "mode" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::NbmItems::NbmItems()
    :
    conf_items(std::make_shared<System::NbmItems::ConfItems>())
    , show_items(std::make_shared<System::NbmItems::ShowItems>())
{
    conf_items->parent = this;
    show_items->parent = this;

    yang_name = "nbm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::~NbmItems()
{
}

bool System::NbmItems::has_data() const
{
    if (is_presence_container) return true;
    return (conf_items !=  nullptr && conf_items->has_data())
	|| (show_items !=  nullptr && show_items->has_data());
}

bool System::NbmItems::has_operation() const
{
    return is_set(yfilter)
	|| (conf_items !=  nullptr && conf_items->has_operation())
	|| (show_items !=  nullptr && show_items->has_operation());
}

std::string System::NbmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conf-items")
    {
        if(conf_items == nullptr)
        {
            conf_items = std::make_shared<System::NbmItems::ConfItems>();
        }
        return conf_items;
    }

    if(child_yang_name == "show-items")
    {
        if(show_items == nullptr)
        {
            show_items = std::make_shared<System::NbmItems::ShowItems>();
        }
        return show_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(conf_items != nullptr)
    {
        children["conf-items"] = conf_items;
    }

    if(show_items != nullptr)
    {
        children["show-items"] = show_items;
    }

    return children;
}

void System::NbmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conf-items" || name == "show-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::ConfItems()
    :
    global_items(std::make_shared<System::NbmItems::ConfItems::GlobalItems>())
    , flowpolicytable_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems>())
    , hostpolicytable_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems>())
{
    global_items->parent = this;
    flowpolicytable_items->parent = this;
    hostpolicytable_items->parent = this;

    yang_name = "conf-items"; yang_parent_name = "nbm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::~ConfItems()
{
}

bool System::NbmItems::ConfItems::has_data() const
{
    if (is_presence_container) return true;
    return (global_items !=  nullptr && global_items->has_data())
	|| (flowpolicytable_items !=  nullptr && flowpolicytable_items->has_data())
	|| (hostpolicytable_items !=  nullptr && hostpolicytable_items->has_data());
}

bool System::NbmItems::ConfItems::has_operation() const
{
    return is_set(yfilter)
	|| (global_items !=  nullptr && global_items->has_operation())
	|| (flowpolicytable_items !=  nullptr && flowpolicytable_items->has_operation())
	|| (hostpolicytable_items !=  nullptr && hostpolicytable_items->has_operation());
}

std::string System::NbmItems::ConfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-items")
    {
        if(global_items == nullptr)
        {
            global_items = std::make_shared<System::NbmItems::ConfItems::GlobalItems>();
        }
        return global_items;
    }

    if(child_yang_name == "flowpolicytable-items")
    {
        if(flowpolicytable_items == nullptr)
        {
            flowpolicytable_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems>();
        }
        return flowpolicytable_items;
    }

    if(child_yang_name == "hostpolicytable-items")
    {
        if(hostpolicytable_items == nullptr)
        {
            hostpolicytable_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems>();
        }
        return hostpolicytable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_items != nullptr)
    {
        children["global-items"] = global_items;
    }

    if(flowpolicytable_items != nullptr)
    {
        children["flowpolicytable-items"] = flowpolicytable_items;
    }

    if(hostpolicytable_items != nullptr)
    {
        children["hostpolicytable-items"] = hostpolicytable_items;
    }

    return children;
}

void System::NbmItems::ConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-items" || name == "flowpolicytable-items" || name == "hostpolicytable-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::GlobalItems::GlobalItems()
    :
    senderhostpolicy{YType::enumeration, "senderHostPolicy"},
    localrcvrhostpolicy{YType::enumeration, "localRcvrHostPolicy"},
    remotercvrhostpolicy{YType::enumeration, "remoteRcvrHostPolicy"},
    flowbwmbps{YType::uint32, "flowBwMbps"},
    unicastbwpct{YType::uint8, "unicastBwPct"}
{

    yang_name = "global-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GlobalItems::~GlobalItems()
{
}

bool System::NbmItems::ConfItems::GlobalItems::has_data() const
{
    if (is_presence_container) return true;
    return senderhostpolicy.is_set
	|| localrcvrhostpolicy.is_set
	|| remotercvrhostpolicy.is_set
	|| flowbwmbps.is_set
	|| unicastbwpct.is_set;
}

bool System::NbmItems::ConfItems::GlobalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(senderhostpolicy.yfilter)
	|| ydk::is_set(localrcvrhostpolicy.yfilter)
	|| ydk::is_set(remotercvrhostpolicy.yfilter)
	|| ydk::is_set(flowbwmbps.yfilter)
	|| ydk::is_set(unicastbwpct.yfilter);
}

std::string System::NbmItems::ConfItems::GlobalItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GlobalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GlobalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (senderhostpolicy.is_set || is_set(senderhostpolicy.yfilter)) leaf_name_data.push_back(senderhostpolicy.get_name_leafdata());
    if (localrcvrhostpolicy.is_set || is_set(localrcvrhostpolicy.yfilter)) leaf_name_data.push_back(localrcvrhostpolicy.get_name_leafdata());
    if (remotercvrhostpolicy.is_set || is_set(remotercvrhostpolicy.yfilter)) leaf_name_data.push_back(remotercvrhostpolicy.get_name_leafdata());
    if (flowbwmbps.is_set || is_set(flowbwmbps.yfilter)) leaf_name_data.push_back(flowbwmbps.get_name_leafdata());
    if (unicastbwpct.is_set || is_set(unicastbwpct.yfilter)) leaf_name_data.push_back(unicastbwpct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::GlobalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::GlobalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ConfItems::GlobalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "senderHostPolicy")
    {
        senderhostpolicy = value;
        senderhostpolicy.value_namespace = name_space;
        senderhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRcvrHostPolicy")
    {
        localrcvrhostpolicy = value;
        localrcvrhostpolicy.value_namespace = name_space;
        localrcvrhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteRcvrHostPolicy")
    {
        remotercvrhostpolicy = value;
        remotercvrhostpolicy.value_namespace = name_space;
        remotercvrhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowBwMbps")
    {
        flowbwmbps = value;
        flowbwmbps.value_namespace = name_space;
        flowbwmbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicastBwPct")
    {
        unicastbwpct = value;
        unicastbwpct.value_namespace = name_space;
        unicastbwpct.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::GlobalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "senderHostPolicy")
    {
        senderhostpolicy.yfilter = yfilter;
    }
    if(value_path == "localRcvrHostPolicy")
    {
        localrcvrhostpolicy.yfilter = yfilter;
    }
    if(value_path == "remoteRcvrHostPolicy")
    {
        remotercvrhostpolicy.yfilter = yfilter;
    }
    if(value_path == "flowBwMbps")
    {
        flowbwmbps.yfilter = yfilter;
    }
    if(value_path == "unicastBwPct")
    {
        unicastbwpct.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::GlobalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "senderHostPolicy" || name == "localRcvrHostPolicy" || name == "remoteRcvrHostPolicy" || name == "flowBwMbps" || name == "unicastBwPct")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::FlowpolicytableItems()
    :
    name_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "flowpolicytable-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::~FlowpolicytableItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowpolicytable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::FlowpolicytableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(name_items != nullptr)
    {
        children["name-items"] = name_items;
    }

    return children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::NameItems()
    :
    flowpolicy_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "flowpolicytable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::~NameItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowpolicy_list.len(); index++)
    {
        if(flowpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<flowpolicy_list.len(); index++)
    {
        if(flowpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/flowpolicytable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowPolicy-list")
    {
        auto c = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList>();
        c->parent = this;
        flowpolicy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flowpolicy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::FlowPolicyList()
    :
    name{YType::str, "name"},
    bwmbps{YType::uint64, "bwMbps"},
    dscp{YType::uint32, "dscp"},
    queueid{YType::uint8, "queueId"}
        ,
    bgn_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems>())
{
    bgn_items->parent = this;

    yang_name = "FlowPolicy-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::~FlowPolicyList()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| bwmbps.is_set
	|| dscp.is_set
	|| queueid.is_set
	|| (bgn_items !=  nullptr && bgn_items->has_data());
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bwmbps.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(queueid.yfilter)
	|| (bgn_items !=  nullptr && bgn_items->has_operation());
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/flowpolicytable-items/name-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowPolicy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bwmbps.is_set || is_set(bwmbps.yfilter)) leaf_name_data.push_back(bwmbps.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (queueid.is_set || is_set(queueid.yfilter)) leaf_name_data.push_back(queueid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgn-items")
    {
        if(bgn_items == nullptr)
        {
            bgn_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems>();
        }
        return bgn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgn_items != nullptr)
    {
        children["bgn-items"] = bgn_items;
    }

    return children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwMbps")
    {
        bwmbps = value;
        bwmbps.value_namespace = name_space;
        bwmbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queueId")
    {
        queueid = value;
        queueid.value_namespace = name_space;
        queueid.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bwMbps")
    {
        bwmbps.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "queueId")
    {
        queueid.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgn-items" || name == "name" || name == "bwMbps" || name == "dscp" || name == "queueId")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::BgnItems()
    :
    flowpolicyrange_list(this, {"groupbegin", "groupend"})
{

    yang_name = "bgn-items"; yang_parent_name = "FlowPolicy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::~BgnItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowpolicyrange_list.len(); index++)
    {
        if(flowpolicyrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::has_operation() const
{
    for (std::size_t index=0; index<flowpolicyrange_list.len(); index++)
    {
        if(flowpolicyrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowPolicyRange-list")
    {
        auto c = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList>();
        c->parent = this;
        flowpolicyrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flowpolicyrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowPolicyRange-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::FlowPolicyRangeList()
    :
    groupbegin{YType::str, "groupBegin"},
    groupend{YType::str, "groupEnd"}
{

    yang_name = "FlowPolicyRange-list"; yang_parent_name = "bgn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::~FlowPolicyRangeList()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_data() const
{
    if (is_presence_container) return true;
    return groupbegin.is_set
	|| groupend.is_set;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groupbegin.yfilter)
	|| ydk::is_set(groupend.yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowPolicyRange-list";
    ADD_KEY_TOKEN(groupbegin, "groupBegin");
    ADD_KEY_TOKEN(groupend, "groupEnd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groupbegin.is_set || is_set(groupbegin.yfilter)) leaf_name_data.push_back(groupbegin.get_name_leafdata());
    if (groupend.is_set || is_set(groupend.yfilter)) leaf_name_data.push_back(groupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groupBegin")
    {
        groupbegin = value;
        groupbegin.value_namespace = name_space;
        groupbegin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupEnd")
    {
        groupend = value;
        groupend.value_namespace = name_space;
        groupend.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groupBegin")
    {
        groupbegin.yfilter = yfilter;
    }
    if(value_path == "groupEnd")
    {
        groupend.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupBegin" || name == "groupEnd")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::HostpolicytableItems()
    :
    seq_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqItems>())
    , seqnum_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems>())
{
    seq_items->parent = this;
    seqnum_items->parent = this;

    yang_name = "hostpolicytable-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::~HostpolicytableItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_data() const
{
    if (is_presence_container) return true;
    return (seq_items !=  nullptr && seq_items->has_data())
	|| (seqnum_items !=  nullptr && seqnum_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_operation() const
{
    return is_set(yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation())
	|| (seqnum_items !=  nullptr && seqnum_items->has_operation());
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostpolicytable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::HostpolicytableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqItems>();
        }
        return seq_items;
    }

    if(child_yang_name == "seqnum-items")
    {
        if(seqnum_items == nullptr)
        {
            seqnum_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems>();
        }
        return seqnum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::HostpolicytableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(seq_items != nullptr)
    {
        children["seq-items"] = seq_items;
    }

    if(seqnum_items != nullptr)
    {
        children["seqnum-items"] = seqnum_items;
    }

    return children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items" || name == "seqnum-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SeqItems()
    :
    senderhostpolicy_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "hostpolicytable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::~SeqItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<senderhostpolicy_list.len(); index++)
    {
        if(senderhostpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<senderhostpolicy_list.len(); index++)
    {
        if(senderhostpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SenderHostPolicy-list")
    {
        auto c = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList>();
        c->parent = this;
        senderhostpolicy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : senderhostpolicy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SenderHostPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::SenderHostPolicyList()
    :
    seqnum{YType::uint32, "seqNum"},
    host{YType::str, "host"},
    group{YType::str, "group"},
    groupmask{YType::uint8, "groupMask"},
    permission{YType::enumeration, "permission"}
{

    yang_name = "SenderHostPolicy-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::~SenderHostPolicyList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| host.is_set
	|| group.is_set
	|| groupmask.is_set
	|| permission.is_set;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(permission.yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/seq-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SenderHostPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupMask")
    {
        groupmask = value;
        groupmask.value_namespace = name_space;
        groupmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permission")
    {
        permission = value;
        permission.value_namespace = name_space;
        permission.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "groupMask")
    {
        groupmask.yfilter = yfilter;
    }
    if(value_path == "permission")
    {
        permission.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "host" || name == "group" || name == "groupMask" || name == "permission")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::SeqnumItems()
    :
    receiverhostpolicy_list(this, {"seqnum"})
{

    yang_name = "seqnum-items"; yang_parent_name = "hostpolicytable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::~SeqnumItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receiverhostpolicy_list.len(); index++)
    {
        if(receiverhostpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::has_operation() const
{
    for (std::size_t index=0; index<receiverhostpolicy_list.len(); index++)
    {
        if(receiverhostpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seqnum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReceiverHostPolicy-list")
    {
        auto c = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList>();
        c->parent = this;
        receiverhostpolicy_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : receiverhostpolicy_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReceiverHostPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::ReceiverHostPolicyList()
    :
    seqnum{YType::uint32, "seqNum"},
    host{YType::str, "host"},
    group{YType::str, "group"},
    groupmask{YType::uint8, "groupMask"},
    permission{YType::enumeration, "permission"}
{

    yang_name = "ReceiverHostPolicy-list"; yang_parent_name = "seqnum-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::~ReceiverHostPolicyList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| host.is_set
	|| group.is_set
	|| groupmask.is_set
	|| permission.is_set;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(permission.yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/seqnum-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReceiverHostPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupMask")
    {
        groupmask = value;
        groupmask.value_namespace = name_space;
        groupmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permission")
    {
        permission = value;
        permission.value_namespace = name_space;
        permission.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "groupMask")
    {
        groupmask.yfilter = yfilter;
    }
    if(value_path == "permission")
    {
        permission.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "host" || name == "group" || name == "groupMask" || name == "permission")
        return true;
    return false;
}

System::NbmItems::ShowItems::ShowItems()
    :
    flows_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems>())
{
    flows_items->parent = this;

    yang_name = "show-items"; yang_parent_name = "nbm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::~ShowItems()
{
}

bool System::NbmItems::ShowItems::has_data() const
{
    if (is_presence_container) return true;
    return (flows_items !=  nullptr && flows_items->has_data());
}

bool System::NbmItems::ShowItems::has_operation() const
{
    return is_set(yfilter)
	|| (flows_items !=  nullptr && flows_items->has_operation());
}

std::string System::NbmItems::ShowItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows-items")
    {
        if(flows_items == nullptr)
        {
            flows_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems>();
        }
        return flows_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flows_items != nullptr)
    {
        children["flows-items"] = flows_items;
    }

    return children;
}

void System::NbmItems::ShowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flows-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::FlowsItems()
    :
    source_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems>())
{
    source_items->parent = this;

    yang_name = "flows-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::~FlowsItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::has_data() const
{
    if (is_presence_container) return true;
    return (source_items !=  nullptr && source_items->has_data());
}

bool System::NbmItems::ShowItems::FlowsItems::has_operation() const
{
    return is_set(yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::NbmItems::ShowItems::FlowsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::FlowsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::SourceItems()
    :
    nbmflow_list(this, {"source", "group"})
{

    yang_name = "source-items"; yang_parent_name = "flows-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::~SourceItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbmflow_list.len(); index++)
    {
        if(nbmflow_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<nbmflow_list.len(); index++)
    {
        if(nbmflow_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/flows-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NbmFlow-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList>();
        c->parent = this;
        nbmflow_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::SourceItems::get_children() const
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

void System::NbmItems::ShowItems::FlowsItems::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NbmFlow-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::NbmFlowList()
    :
    source{YType::str, "source"},
    group{YType::str, "group"},
    ingressif{YType::uint32, "ingressIf"},
    ingressifname{YType::str, "ingressIfName"},
    egressifcount{YType::uint32, "egressIfCount"},
    bwkbps{YType::uint64, "bwKbps"},
    dscp{YType::uint32, "dscp"},
    qid{YType::uint32, "qid"},
    isfhr{YType::enumeration, "isFhr"},
    tstamp{YType::uint64, "tStamp"}
        ,
    oif_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "NbmFlow-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::~NbmFlowList()
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| group.is_set
	|| ingressif.is_set
	|| ingressifname.is_set
	|| egressifcount.is_set
	|| bwkbps.is_set
	|| dscp.is_set
	|| qid.is_set
	|| isfhr.is_set
	|| tstamp.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(ingressifname.yfilter)
	|| ydk::is_set(egressifcount.yfilter)
	|| ydk::is_set(bwkbps.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(qid.yfilter)
	|| ydk::is_set(isfhr.yfilter)
	|| ydk::is_set(tstamp.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/flows-items/source-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NbmFlow-list";
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (ingressifname.is_set || is_set(ingressifname.yfilter)) leaf_name_data.push_back(ingressifname.get_name_leafdata());
    if (egressifcount.is_set || is_set(egressifcount.yfilter)) leaf_name_data.push_back(egressifcount.get_name_leafdata());
    if (bwkbps.is_set || is_set(bwkbps.yfilter)) leaf_name_data.push_back(bwkbps.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (qid.is_set || is_set(qid.yfilter)) leaf_name_data.push_back(qid.get_name_leafdata());
    if (isfhr.is_set || is_set(isfhr.yfilter)) leaf_name_data.push_back(isfhr.get_name_leafdata());
    if (tstamp.is_set || is_set(tstamp.yfilter)) leaf_name_data.push_back(tstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "source" || name == "group" || name == "ingressIf" || name == "ingressIfName" || name == "egressIfCount" || name == "bwKbps" || name == "dscp" || name == "qid" || name == "isFhr" || name == "tStamp")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifItems()
    :
    oiflist_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "NbmFlow-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::~OifItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oiflist_list.len(); index++)
    {
        if(oiflist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oiflist_list.len(); index++)
    {
        if(oiflist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifList-list")
    {
        auto c = std::make_shared<System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList>();
        c->parent = this;
        oiflist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::get_children() const
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

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifList-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::OifListList()
    :
    oif{YType::uint32, "oif"},
    oifname{YType::str, "oifName"},
    reporterip{YType::str, "reporterIP"},
    oiftstamp{YType::uint64, "oifTstamp"}
{

    yang_name = "OifList-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::~OifListList()
{
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| oifname.is_set
	|| reporterip.is_set
	|| oiftstamp.is_set;
}

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(reporterip.yfilter)
	|| ydk::is_set(oiftstamp.yfilter);
}

std::string System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifList-list";
    ADD_KEY_TOKEN(oif, "oif");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (reporterip.is_set || is_set(reporterip.yfilter)) leaf_name_data.push_back(reporterip.get_name_leafdata());
    if (oiftstamp.is_set || is_set(oiftstamp.yfilter)) leaf_name_data.push_back(oiftstamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif" || name == "oifName" || name == "reporterIP" || name == "oifTstamp")
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
    image_err{YType::str, "image_err"}
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
	|| image_err.is_set;
}

bool System::BootItems::ImageItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sup1.yfilter)
	|| ydk::is_set(sup2.yfilter)
	|| ydk::is_set(image_err.yfilter);
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
}

bool System::BootItems::ImageItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup1" || name == "sup2" || name == "image_err")
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
    , indled_items(std::make_shared<System::ChItems::IndledItems>())
    , locled_items(std::make_shared<System::ChItems::LocledItems>())
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
    indled_items->parent = this;
    locled_items->parent = this;
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
	|| (indled_items !=  nullptr && indled_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
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
	|| (indled_items !=  nullptr && indled_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
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

    if(child_yang_name == "indled-items")
    {
        if(indled_items == nullptr)
        {
            indled_items = std::make_shared<System::ChItems::IndledItems>();
        }
        return indled_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::LocledItems>();
        }
        return locled_items;
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

    if(indled_items != nullptr)
    {
        children["indled-items"] = indled_items;
    }

    if(locled_items != nullptr)
    {
        children["locled-items"] = locled_items;
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
    if(name == "ejpol-items" || name == "indled-items" || name == "locled-items" || name == "supslot-items" || name == "lcslot-items" || name == "fcslot-items" || name == "scslot-items" || name == "psuslot-items" || name == "ftslot-items" || name == "spbp-items" || name == "bslot-items" || name == "nslot-items" || name == "p-items" || name == "role" || name == "operSt" || name == "operStQual" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "id" || name == "descr")
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

System::ChItems::IndledItems::IndledItems()
    :
    indled_list(this, {"id"})
{

    yang_name = "indled-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::IndledItems::~IndledItems()
{
}

bool System::ChItems::IndledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<indled_list.len(); index++)
    {
        if(indled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::IndledItems::has_operation() const
{
    for (std::size_t index=0; index<indled_list.len(); index++)
    {
        if(indled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::IndledItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::IndledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::IndledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::IndledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IndLed-list")
    {
        auto c = std::make_shared<System::ChItems::IndledItems::IndLedList>();
        c->parent = this;
        indled_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::IndledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : indled_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::IndledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::IndledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::IndledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IndLed-list")
        return true;
    return false;
}

System::ChItems::IndledItems::IndLedList::IndLedList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    type{YType::enumeration, "type"}
{

    yang_name = "IndLed-list"; yang_parent_name = "indled-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::IndledItems::IndLedList::~IndLedList()
{
}

bool System::ChItems::IndledItems::IndLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| type.is_set;
}

bool System::ChItems::IndledItems::IndLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::IndledItems::IndLedList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/indled-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::IndledItems::IndLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IndLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::IndledItems::IndLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::IndledItems::IndLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::IndledItems::IndLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::IndledItems::IndLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::IndledItems::IndLedList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::IndledItems::IndLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "color" || name == "operSt" || name == "type")
        return true;
    return false;
}

System::ChItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LocledItems::~LocledItems()
{
}

bool System::ChItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LocledItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto c = std::make_shared<System::ChItems::LocledItems::LocLedList>();
        c->parent = this;
        locled_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : locled_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    type{YType::enumeration, "type"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| type.is_set
	|| adminst.is_set;
}

bool System::ChItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::LocledItems::LocLedList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/locled-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
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
}

void System::ChItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "color" || name == "operSt" || name == "type" || name == "adminSt")
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
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    cardoperst{YType::enumeration, "cardOperSt"},
    loc{YType::enumeration, "loc"}
        ,
    sup_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems>())
    , rstrec_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RstrecItems>())
    , remrstrec_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RemrstrecItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems>())
{
    sup_items->parent = this;
    rstrec_items->parent = this;
    remrstrec_items->parent = this;
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
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| cardoperst.is_set
	|| loc.is_set
	|| (sup_items !=  nullptr && sup_items->has_data())
	|| (rstrec_items !=  nullptr && rstrec_items->has_data())
	|| (remrstrec_items !=  nullptr && remrstrec_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(cardoperst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (sup_items !=  nullptr && sup_items->has_operation())
	|| (rstrec_items !=  nullptr && rstrec_items->has_operation())
	|| (remrstrec_items !=  nullptr && remrstrec_items->has_operation())
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
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (cardoperst.is_set || is_set(cardoperst.yfilter)) leaf_name_data.push_back(cardoperst.get_name_leafdata());
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

    if(child_yang_name == "rstrec-items")
    {
        if(rstrec_items == nullptr)
        {
            rstrec_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RstrecItems>();
        }
        return rstrec_items;
    }

    if(child_yang_name == "remrstrec-items")
    {
        if(remrstrec_items == nullptr)
        {
            remrstrec_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RemrstrecItems>();
        }
        return remrstrec_items;
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

    if(rstrec_items != nullptr)
    {
        children["rstrec-items"] = rstrec_items;
    }

    if(remrstrec_items != nullptr)
    {
        children["remrstrec-items"] = remrstrec_items;
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
    if(value_path == "cardOperSt")
    {
        cardoperst = value;
        cardoperst.value_namespace = name_space;
        cardoperst.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cardOperSt")
    {
        cardoperst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup-items" || name == "rstrec-items" || name == "remrstrec-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "cardOperSt" || name == "loc")
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
    macl{YType::uint16, "macL"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"}
        ,
    running_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems>())
    , indled_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::IndledItems>())
    , locled_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems>())
    , cpuport_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuportItems>())
    , eobc_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems>())
    , epc_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems>())
    , mgmt_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems>())
    , console_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems>())
    , sensor_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems>())
    , spsup_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems>())
    , asic_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems>())
    , fpga_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::FpgaItems>())
    , dimm_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    indled_items->parent = this;
    locled_items->parent = this;
    cpuport_items->parent = this;
    eobc_items->parent = this;
    epc_items->parent = this;
    mgmt_items->parent = this;
    console_items->parent = this;
    sensor_items->parent = this;
    spsup_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    fpga_items->parent = this;
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
	|| macl.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (indled_items !=  nullptr && indled_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (cpuport_items !=  nullptr && cpuport_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (epc_items !=  nullptr && epc_items->has_data())
	|| (mgmt_items !=  nullptr && mgmt_items->has_data())
	|| (console_items !=  nullptr && console_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (spsup_items !=  nullptr && spsup_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (fpga_items !=  nullptr && fpga_items->has_data())
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
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (indled_items !=  nullptr && indled_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (cpuport_items !=  nullptr && cpuport_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (epc_items !=  nullptr && epc_items->has_operation())
	|| (mgmt_items !=  nullptr && mgmt_items->has_operation())
	|| (console_items !=  nullptr && console_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (spsup_items !=  nullptr && spsup_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (fpga_items !=  nullptr && fpga_items->has_operation())
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
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());

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

    if(child_yang_name == "indled-items")
    {
        if(indled_items == nullptr)
        {
            indled_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::IndledItems>();
        }
        return indled_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "cpuport-items")
    {
        if(cpuport_items == nullptr)
        {
            cpuport_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuportItems>();
        }
        return cpuport_items;
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

    if(child_yang_name == "fpga-items")
    {
        if(fpga_items == nullptr)
        {
            fpga_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::FpgaItems>();
        }
        return fpga_items;
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

    if(indled_items != nullptr)
    {
        children["indled-items"] = indled_items;
    }

    if(locled_items != nullptr)
    {
        children["locled-items"] = locled_items;
    }

    if(cpuport_items != nullptr)
    {
        children["cpuport-items"] = cpuport_items;
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

    if(fpga_items != nullptr)
    {
        children["fpga-items"] = fpga_items;
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
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "indled-items" || name == "locled-items" || name == "cpuport-items" || name == "eobc-items" || name == "epc-items" || name == "mgmt-items" || name == "console-items" || name == "sensor-items" || name == "spsup-items" || name == "asic-items" || name == "cpu-items" || name == "fpga-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macL" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber")
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


}
}

