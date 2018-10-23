
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_36.hpp"
#include "Cisco_NX_OS_device_37.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::RtRtmapRtDstAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtRtmapRtDstAtt-list"; yang_parent_name = "rtrtmapRtDstAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::~RtRtmapRtDstAttList()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtRtmapRtDstAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstAttItems::RtRtmapRtDstAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtrtmapRtDstV6AttItems()
    :
    rtrtmaprtdstv6att_list(this, {"tdn"})
{

    yang_name = "rtrtmapRtDstV6Att-items"; yang_parent_name = "RuleV6-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::~RtrtmapRtDstV6AttItems()
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtrtmaprtdstv6att_list.len(); index++)
    {
        if(rtrtmaprtdstv6att_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::has_operation() const
{
    for (std::size_t index=0; index<rtrtmaprtdstv6att_list.len(); index++)
    {
        if(rtrtmaprtdstv6att_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrtmapRtDstV6Att-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtDstV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList>();
        ent_->parent = this;
        rtrtmaprtdstv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtdstv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtRtmapRtDstV6Att-list")
        return true;
    return false;
}

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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtNhAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList>();
        ent_->parent = this;
        rtrtmaprtnhatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtnhatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtNhV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList>();
        ent_->parent = this;
        rtrtmaprtnhv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtnhv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtSrcAtt-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList>();
        ent_->parent = this;
        rtrtmaprtsrcatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtsrcatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtRtmapRtSrcV6Att-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList>();
        ent_->parent = this;
        rtrtmaprtsrcv6att_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtrtmaprtsrcv6att_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtregcomItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ent_items != nullptr)
    {
        _children["ent-items"] = ent_items;
    }

    if(rtregcommatt_items != nullptr)
    {
        _children["rtRegCommAtt-items"] = rtregcommatt_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Entry-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList>();
        ent_->parent = this;
        entry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(item_items != nullptr)
    {
        _children["item-items"] = item_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Item-list")
    {
        auto ent_ = std::make_shared<System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList>();
        ent_->parent = this;
        item_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : item_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IpSrcIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpSrcIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_items != nullptr)
    {
        _children["dns-items"] = dns_items;
    }

    if(tftp_items != nullptr)
    {
        _children["tftp-items"] = tftp_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IpSrcIfItems::DnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DnsSrcIf-list")
    {
        auto ent_ = std::make_shared<System::IpSrcIfItems::DnsItems::DnsSrcIfList>();
        ent_->parent = this;
        dnssrcif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpSrcIfItems::DnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dnssrcif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpSrcIfItems::DnsItems::DnsSrcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::IpSrcIfItems::TftpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Tftp-list")
    {
        auto ent_ = std::make_shared<System::IpSrcIfItems::TftpItems::TftpList>();
        ent_->parent = this;
        tftp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpSrcIfItems::TftpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tftp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::IpSrcIfItems::TftpItems::TftpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IpSrcIfItems::TftpItems::TftpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::SwpkgsItems::SwpkgsItems()
    :
    rpmaction_items(std::make_shared<System::SwpkgsItems::RpmactionItems>())
    , rpminfo_items(std::make_shared<System::SwpkgsItems::RpminfoItems>())
{
    rpmaction_items->parent = this;
    rpminfo_items->parent = this;

    yang_name = "swpkgs-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SwpkgsItems::~SwpkgsItems()
{
}

bool System::SwpkgsItems::has_data() const
{
    if (is_presence_container) return true;
    return (rpmaction_items !=  nullptr && rpmaction_items->has_data())
	|| (rpminfo_items !=  nullptr && rpminfo_items->has_data());
}

bool System::SwpkgsItems::has_operation() const
{
    return is_set(yfilter)
	|| (rpmaction_items !=  nullptr && rpmaction_items->has_operation())
	|| (rpminfo_items !=  nullptr && rpminfo_items->has_operation());
}

std::string System::SwpkgsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SwpkgsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swpkgs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SwpkgsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SwpkgsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpmaction-items")
    {
        if(rpmaction_items == nullptr)
        {
            rpmaction_items = std::make_shared<System::SwpkgsItems::RpmactionItems>();
        }
        return rpmaction_items;
    }

    if(child_yang_name == "rpminfo-items")
    {
        if(rpminfo_items == nullptr)
        {
            rpminfo_items = std::make_shared<System::SwpkgsItems::RpminfoItems>();
        }
        return rpminfo_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SwpkgsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpmaction_items != nullptr)
    {
        _children["rpmaction-items"] = rpmaction_items;
    }

    if(rpminfo_items != nullptr)
    {
        _children["rpminfo-items"] = rpminfo_items;
    }

    return _children;
}

void System::SwpkgsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SwpkgsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SwpkgsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpmaction-items" || name == "rpminfo-items")
        return true;
    return false;
}

System::SwpkgsItems::RpmactionItems::RpmactionItems()
    :
    pkgaction{YType::enumeration, "pkgAction"},
    url{YType::str, "url"},
    lastactionstatus{YType::str, "lastActionStatus"}
{

    yang_name = "rpmaction-items"; yang_parent_name = "swpkgs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SwpkgsItems::RpmactionItems::~RpmactionItems()
{
}

bool System::SwpkgsItems::RpmactionItems::has_data() const
{
    if (is_presence_container) return true;
    return pkgaction.is_set
	|| url.is_set
	|| lastactionstatus.is_set;
}

bool System::SwpkgsItems::RpmactionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pkgaction.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(lastactionstatus.yfilter);
}

std::string System::SwpkgsItems::RpmactionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/swpkgs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SwpkgsItems::RpmactionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpmaction-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SwpkgsItems::RpmactionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkgaction.is_set || is_set(pkgaction.yfilter)) leaf_name_data.push_back(pkgaction.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (lastactionstatus.is_set || is_set(lastactionstatus.yfilter)) leaf_name_data.push_back(lastactionstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SwpkgsItems::RpmactionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SwpkgsItems::RpmactionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SwpkgsItems::RpmactionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pkgAction")
    {
        pkgaction = value;
        pkgaction.value_namespace = name_space;
        pkgaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastActionStatus")
    {
        lastactionstatus = value;
        lastactionstatus.value_namespace = name_space;
        lastactionstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::SwpkgsItems::RpmactionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pkgAction")
    {
        pkgaction.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "lastActionStatus")
    {
        lastactionstatus.yfilter = yfilter;
    }
}

bool System::SwpkgsItems::RpmactionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pkgAction" || name == "url" || name == "lastActionStatus")
        return true;
    return false;
}

System::SwpkgsItems::RpminfoItems::RpminfoItems()
    :
    rpminfo_list(this, {"name"})
{

    yang_name = "rpminfo-items"; yang_parent_name = "swpkgs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SwpkgsItems::RpminfoItems::~RpminfoItems()
{
}

bool System::SwpkgsItems::RpminfoItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpminfo_list.len(); index++)
    {
        if(rpminfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SwpkgsItems::RpminfoItems::has_operation() const
{
    for (std::size_t index=0; index<rpminfo_list.len(); index++)
    {
        if(rpminfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SwpkgsItems::RpminfoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/swpkgs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SwpkgsItems::RpminfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpminfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SwpkgsItems::RpminfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SwpkgsItems::RpminfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RpmInfo-list")
    {
        auto ent_ = std::make_shared<System::SwpkgsItems::RpminfoItems::RpmInfoList>();
        ent_->parent = this;
        rpminfo_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SwpkgsItems::RpminfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpminfo_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SwpkgsItems::RpminfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SwpkgsItems::RpminfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SwpkgsItems::RpminfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RpmInfo-list")
        return true;
    return false;
}

System::SwpkgsItems::RpminfoItems::RpmInfoList::RpmInfoList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    lastaction{YType::enumeration, "lastAction"},
    lastactionresult{YType::enumeration, "lastActionResult"},
    lastactionfailedreason{YType::str, "lastActionFailedReason"}
{

    yang_name = "RpmInfo-list"; yang_parent_name = "rpminfo-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SwpkgsItems::RpminfoItems::RpmInfoList::~RpmInfoList()
{
}

bool System::SwpkgsItems::RpminfoItems::RpmInfoList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| lastaction.is_set
	|| lastactionresult.is_set
	|| lastactionfailedreason.is_set;
}

bool System::SwpkgsItems::RpminfoItems::RpmInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(lastaction.yfilter)
	|| ydk::is_set(lastactionresult.yfilter)
	|| ydk::is_set(lastactionfailedreason.yfilter);
}

std::string System::SwpkgsItems::RpminfoItems::RpmInfoList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/swpkgs-items/rpminfo-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SwpkgsItems::RpminfoItems::RpmInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RpmInfo-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SwpkgsItems::RpminfoItems::RpmInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (lastaction.is_set || is_set(lastaction.yfilter)) leaf_name_data.push_back(lastaction.get_name_leafdata());
    if (lastactionresult.is_set || is_set(lastactionresult.yfilter)) leaf_name_data.push_back(lastactionresult.get_name_leafdata());
    if (lastactionfailedreason.is_set || is_set(lastactionfailedreason.yfilter)) leaf_name_data.push_back(lastactionfailedreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SwpkgsItems::RpminfoItems::RpmInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SwpkgsItems::RpminfoItems::RpmInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SwpkgsItems::RpminfoItems::RpmInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastAction")
    {
        lastaction = value;
        lastaction.value_namespace = name_space;
        lastaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastActionResult")
    {
        lastactionresult = value;
        lastactionresult.value_namespace = name_space;
        lastactionresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastActionFailedReason")
    {
        lastactionfailedreason = value;
        lastactionfailedreason.value_namespace = name_space;
        lastactionfailedreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::SwpkgsItems::RpminfoItems::RpmInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "lastAction")
    {
        lastaction.yfilter = yfilter;
    }
    if(value_path == "lastActionResult")
    {
        lastactionresult.yfilter = yfilter;
    }
    if(value_path == "lastActionFailedReason")
    {
        lastactionfailedreason.yfilter = yfilter;
    }
}

bool System::SwpkgsItems::RpminfoItems::RpmInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "operSt" || name == "lastAction" || name == "lastActionResult" || name == "lastActionFailedReason")
        return true;
    return false;
}

System::SysmgrItems::SysmgrItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SysmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sys_items != nullptr)
    {
        _children["sys-items"] = sys_items;
    }

    if(syscfg_items != nullptr)
    {
        _children["sysCfg-items"] = syscfg_items;
    }

    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
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
}

bool System::SysmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys-items" || name == "sysCfg-items" || name == "core-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SysmgrItems::SysItems::SysItems()
    :
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
    return name.is_set
	|| (sup_items !=  nullptr && sup_items->has_data())
	|| (image_items !=  nullptr && image_items->has_data());
}

bool System::SysmgrItems::SysItems::has_operation() const
{
    return is_set(yfilter)
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sup_items != nullptr)
    {
        _children["sup-items"] = sup_items;
    }

    if(image_items != nullptr)
    {
        _children["image-items"] = image_items;
    }

    return _children;
}

void System::SysmgrItems::SysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SysmgrItems::SysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sup-items" || name == "image-items" || name == "name")
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

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysItems::SupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupSt-list")
    {
        auto ent_ = std::make_shared<System::SysmgrItems::SysItems::SupItems::SupStList>();
        ent_->parent = this;
        supst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysItems::SupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : supst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| name.is_set;
}

bool System::SysmgrItems::SysItems::SupItems::SupStList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysItems::SupItems::SupStList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysItems::SupItems::SupStList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SysmgrItems::SysItems::SupItems::SupStList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "operSt" || name == "name")
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

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysItems::ImageItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FwSt-list")
    {
        auto ent_ = std::make_shared<System::SysmgrItems::SysItems::ImageItems::FwStList>();
        ent_->parent = this;
        fwst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysItems::ImageItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fwst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| mode.is_set
	|| name.is_set;
}

bool System::SysmgrItems::SysItems::ImageItems::FwStList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
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
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysItems::ImageItems::FwStList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysItems::ImageItems::FwStList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SysmgrItems::SysItems::ImageItems::FwStList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(name == "type" || name == "mode" || name == "name")
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

std::shared_ptr<ydk::Entity> System::SysmgrItems::SysCfgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::SysCfgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::SysmgrItems::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cores-list")
    {
        auto ent_ = std::make_shared<System::SysmgrItems::CoreItems::CoresList>();
        ent_->parent = this;
        cores_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cores_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::SysmgrItems::CoreItems::CoresList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SysmgrItems::CoreItems::CoresList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

System::ShowversionItems::ShowversionItems()
    :
    copyright{YType::str, "copyRight"},
    biosversion{YType::str, "biosVersion"},
    nxosversion{YType::str, "nxosVersion"},
    bioscompiletime{YType::str, "biosCompileTime"},
    nxosimagefile{YType::str, "nxosImageFile"},
    nxoscompiletime{YType::str, "nxosCompileTime"},
    bootflashsize{YType::uint32, "bootflashSize"},
    kerneluptime{YType::str, "kernelUptime"},
    lastresettime{YType::str, "lastResetTime"},
    lastresetreason{YType::str, "lastResetReason"},
    lastresetsysversion{YType::str, "lastResetSysVersion"},
    lastresetservice{YType::str, "lastResetService"},
    plugin{YType::str, "plugin"},
    activepackage{YType::str, "activePackage"}
{

    yang_name = "showversion-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ShowversionItems::~ShowversionItems()
{
}

bool System::ShowversionItems::has_data() const
{
    if (is_presence_container) return true;
    return copyright.is_set
	|| biosversion.is_set
	|| nxosversion.is_set
	|| bioscompiletime.is_set
	|| nxosimagefile.is_set
	|| nxoscompiletime.is_set
	|| bootflashsize.is_set
	|| kerneluptime.is_set
	|| lastresettime.is_set
	|| lastresetreason.is_set
	|| lastresetsysversion.is_set
	|| lastresetservice.is_set
	|| plugin.is_set
	|| activepackage.is_set;
}

bool System::ShowversionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(copyright.yfilter)
	|| ydk::is_set(biosversion.yfilter)
	|| ydk::is_set(nxosversion.yfilter)
	|| ydk::is_set(bioscompiletime.yfilter)
	|| ydk::is_set(nxosimagefile.yfilter)
	|| ydk::is_set(nxoscompiletime.yfilter)
	|| ydk::is_set(bootflashsize.yfilter)
	|| ydk::is_set(kerneluptime.yfilter)
	|| ydk::is_set(lastresettime.yfilter)
	|| ydk::is_set(lastresetreason.yfilter)
	|| ydk::is_set(lastresetsysversion.yfilter)
	|| ydk::is_set(lastresetservice.yfilter)
	|| ydk::is_set(plugin.yfilter)
	|| ydk::is_set(activepackage.yfilter);
}

std::string System::ShowversionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ShowversionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "showversion-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ShowversionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (copyright.is_set || is_set(copyright.yfilter)) leaf_name_data.push_back(copyright.get_name_leafdata());
    if (biosversion.is_set || is_set(biosversion.yfilter)) leaf_name_data.push_back(biosversion.get_name_leafdata());
    if (nxosversion.is_set || is_set(nxosversion.yfilter)) leaf_name_data.push_back(nxosversion.get_name_leafdata());
    if (bioscompiletime.is_set || is_set(bioscompiletime.yfilter)) leaf_name_data.push_back(bioscompiletime.get_name_leafdata());
    if (nxosimagefile.is_set || is_set(nxosimagefile.yfilter)) leaf_name_data.push_back(nxosimagefile.get_name_leafdata());
    if (nxoscompiletime.is_set || is_set(nxoscompiletime.yfilter)) leaf_name_data.push_back(nxoscompiletime.get_name_leafdata());
    if (bootflashsize.is_set || is_set(bootflashsize.yfilter)) leaf_name_data.push_back(bootflashsize.get_name_leafdata());
    if (kerneluptime.is_set || is_set(kerneluptime.yfilter)) leaf_name_data.push_back(kerneluptime.get_name_leafdata());
    if (lastresettime.is_set || is_set(lastresettime.yfilter)) leaf_name_data.push_back(lastresettime.get_name_leafdata());
    if (lastresetreason.is_set || is_set(lastresetreason.yfilter)) leaf_name_data.push_back(lastresetreason.get_name_leafdata());
    if (lastresetsysversion.is_set || is_set(lastresetsysversion.yfilter)) leaf_name_data.push_back(lastresetsysversion.get_name_leafdata());
    if (lastresetservice.is_set || is_set(lastresetservice.yfilter)) leaf_name_data.push_back(lastresetservice.get_name_leafdata());
    if (plugin.is_set || is_set(plugin.yfilter)) leaf_name_data.push_back(plugin.get_name_leafdata());
    if (activepackage.is_set || is_set(activepackage.yfilter)) leaf_name_data.push_back(activepackage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ShowversionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ShowversionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ShowversionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "copyRight")
    {
        copyright = value;
        copyright.value_namespace = name_space;
        copyright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosVersion")
    {
        biosversion = value;
        biosversion.value_namespace = name_space;
        biosversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nxosVersion")
    {
        nxosversion = value;
        nxosversion.value_namespace = name_space;
        nxosversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosCompileTime")
    {
        bioscompiletime = value;
        bioscompiletime.value_namespace = name_space;
        bioscompiletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nxosImageFile")
    {
        nxosimagefile = value;
        nxosimagefile.value_namespace = name_space;
        nxosimagefile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nxosCompileTime")
    {
        nxoscompiletime = value;
        nxoscompiletime.value_namespace = name_space;
        nxoscompiletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootflashSize")
    {
        bootflashsize = value;
        bootflashsize.value_namespace = name_space;
        bootflashsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kernelUptime")
    {
        kerneluptime = value;
        kerneluptime.value_namespace = name_space;
        kerneluptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastResetTime")
    {
        lastresettime = value;
        lastresettime.value_namespace = name_space;
        lastresettime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastResetReason")
    {
        lastresetreason = value;
        lastresetreason.value_namespace = name_space;
        lastresetreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastResetSysVersion")
    {
        lastresetsysversion = value;
        lastresetsysversion.value_namespace = name_space;
        lastresetsysversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastResetService")
    {
        lastresetservice = value;
        lastresetservice.value_namespace = name_space;
        lastresetservice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plugin")
    {
        plugin = value;
        plugin.value_namespace = name_space;
        plugin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activePackage")
    {
        activepackage = value;
        activepackage.value_namespace = name_space;
        activepackage.value_namespace_prefix = name_space_prefix;
    }
}

void System::ShowversionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "copyRight")
    {
        copyright.yfilter = yfilter;
    }
    if(value_path == "biosVersion")
    {
        biosversion.yfilter = yfilter;
    }
    if(value_path == "nxosVersion")
    {
        nxosversion.yfilter = yfilter;
    }
    if(value_path == "biosCompileTime")
    {
        bioscompiletime.yfilter = yfilter;
    }
    if(value_path == "nxosImageFile")
    {
        nxosimagefile.yfilter = yfilter;
    }
    if(value_path == "nxosCompileTime")
    {
        nxoscompiletime.yfilter = yfilter;
    }
    if(value_path == "bootflashSize")
    {
        bootflashsize.yfilter = yfilter;
    }
    if(value_path == "kernelUptime")
    {
        kerneluptime.yfilter = yfilter;
    }
    if(value_path == "lastResetTime")
    {
        lastresettime.yfilter = yfilter;
    }
    if(value_path == "lastResetReason")
    {
        lastresetreason.yfilter = yfilter;
    }
    if(value_path == "lastResetSysVersion")
    {
        lastresetsysversion.yfilter = yfilter;
    }
    if(value_path == "lastResetService")
    {
        lastresetservice.yfilter = yfilter;
    }
    if(value_path == "plugin")
    {
        plugin.yfilter = yfilter;
    }
    if(value_path == "activePackage")
    {
        activepackage.yfilter = yfilter;
    }
}

bool System::ShowversionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "copyRight" || name == "biosVersion" || name == "nxosVersion" || name == "biosCompileTime" || name == "nxosImageFile" || name == "nxosCompileTime" || name == "bootflashSize" || name == "kernelUptime" || name == "lastResetTime" || name == "lastResetReason" || name == "lastResetSysVersion" || name == "lastResetService" || name == "plugin" || name == "activePackage")
        return true;
    return false;
}

System::TcpudpItems::TcpudpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
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
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::TcpudpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TcpudpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TcpudpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
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
}

bool System::TcpudpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::TcpudpItems::InstItems::InstItems()
    :
    synwaittime{YType::uint16, "synWaitTime"},
    pathmtudiscovery{YType::enumeration, "pathMtuDiscovery"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
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
	|| ctrl.is_set;
}

bool System::TcpudpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synwaittime.yfilter)
	|| ydk::is_set(pathmtudiscovery.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TcpudpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TcpudpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::TcpudpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synWaitTime" || name == "pathMtuDiscovery" || name == "name" || name == "adminSt" || name == "ctrl")
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

std::shared_ptr<ydk::Entity> System::TermlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ln_items != nullptr)
    {
        _children["ln-items"] = ln_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cons_items != nullptr)
    {
        _children["cons-items"] = cons_items;
    }

    if(vty_items != nullptr)
    {
        _children["vty-items"] = vty_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exectmeout_items != nullptr)
    {
        _children["execTmeout-items"] = exectmeout_items;
    }

    if(wdth_items != nullptr)
    {
        _children["wdth-items"] = wdth_items;
    }

    if(lgth_items != nullptr)
    {
        _children["lgth-items"] = lgth_items;
    }

    if(speed_items != nullptr)
    {
        _children["speed-items"] = speed_items;
    }

    if(databits_items != nullptr)
    {
        _children["databits-items"] = databits_items;
    }

    if(stopbits_items != nullptr)
    {
        _children["stopbits-items"] = stopbits_items;
    }

    if(parity_items != nullptr)
    {
        _children["parity-items"] = parity_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::ExecTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::WdthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::WdthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::LgthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::LgthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::SpeedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::SpeedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::DatabitsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::DatabitsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::StopbitsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::StopbitsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::ConsItems::ParityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::ConsItems::ParityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::VtyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::VtyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exectmeout_items != nullptr)
    {
        _children["execTmeout-items"] = exectmeout_items;
    }

    if(abstmeout_items != nullptr)
    {
        _children["absTmeout-items"] = abstmeout_items;
    }

    if(sslmt_items != nullptr)
    {
        _children["ssLmt-items"] = sslmt_items;
    }

    if(lgoutwarning_items != nullptr)
    {
        _children["lgoutWarning-items"] = lgoutwarning_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::VtyItems::ExecTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::VtyItems::AbsTmeoutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::VtyItems::SsLmtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::VtyItems::SsLmtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlItems::LnItems::VtyItems::LgoutWarningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TermlogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TermlogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TestRuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CRule-list")
    {
        auto ent_ = std::make_shared<System::TestRuleItems::CRuleList>();
        ent_->parent = this;
        crule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TestRuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TestRuleItems::CRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TestRuleItems::CRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TestRsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CRslt-list")
    {
        auto ent_ = std::make_shared<System::TestRsltItems::CRsltList>();
        ent_->parent = this;
        crslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TestRsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : crslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    qual{YType::str, "qual"}
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
	|| qual.is_set;
}

bool System::TestRsltItems::CRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(qual.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TestRsltItems::CRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TestRsltItems::CRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
}

bool System::TestRsltItems::CRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ts" || name == "trig" || name == "operSt" || name == "qual")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::get_children() const
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
    operst{YType::enumeration, "operSt"},
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
	|| operst.is_set
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
	|| ydk::is_set(operst.yfilter)
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
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dep_items != nullptr)
    {
        _children["dep-items"] = dep_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(idep_items != nullptr)
    {
        _children["idep-items"] = idep_items;
    }

    if(odev_items != nullptr)
    {
        _children["odev-items"] = odev_items;
    }

    if(bank_items != nullptr)
    {
        _children["bank-items"] = bank_items;
    }

    if(portif_items != nullptr)
    {
        _children["portif-items"] = portif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(rstunnelmbrifs_items != nullptr)
    {
        _children["rstunnelMbrIfs-items"] = rstunnelmbrifs_items;
    }

    if(rstunneltoloosenode_items != nullptr)
    {
        _children["rstunnelToLooseNode-items"] = rstunneltoloosenode_items;
    }

    return _children;
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
}

bool System::TunnelItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dep-items" || name == "vnode-items" || name == "idep-items" || name == "odev-items" || name == "bank-items" || name == "portif-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "rstunnelMbrIfs-items" || name == "rstunnelToLooseNode-items" || name == "id" || name == "src" || name == "dest" || name == "tType" || name == "vrfName" || name == "cfgdMtu" || name == "keepAlvIntvl" || name == "keepAlvRetries" || name == "adminSt" || name == "type" || name == "tLayer" || name == "mac" || name == "operSt" || name == "name" || name == "descr")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::DepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DEp-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::DepItems::DEpList>();
        ent_->parent = this;
        dep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::DepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| uuid.is_set;
}

bool System::TunnelItems::IfList::DepItems::DEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
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
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::DepItems::DEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::DepItems::DEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::DepItems::DEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "encap" || name == "name" || name == "id" || name == "uuid")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEp-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList>();
        ent_->parent = this;
        idep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    eppdn{YType::str, "eppdn"},
    compvmdn{YType::str, "compVmDn"},
    comphvdn{YType::str, "compHvDn"},
    epgid{YType::str, "epgID"},
    ephostaddr{YType::str, "epHostAddr"},
    hypervisorname{YType::str, "hypervisorName"},
    portid{YType::uint32, "portId"},
    containername{YType::str, "containerName"},
    transitionstatus{YType::enumeration, "transitionStatus"},
    eppdownloadhint{YType::enumeration, "eppDownloadHint"},
    handle{YType::uint64, "handle"},
    insttype{YType::enumeration, "instType"},
    pcifid{YType::uint32, "pcIfId"},
    state{YType::enumeration, "state"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
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
	|| eppdn.is_set
	|| compvmdn.is_set
	|| comphvdn.is_set
	|| epgid.is_set
	|| ephostaddr.is_set
	|| hypervisorname.is_set
	|| portid.is_set
	|| containername.is_set
	|| transitionstatus.is_set
	|| eppdownloadhint.is_set
	|| handle.is_set
	|| insttype.is_set
	|| pcifid.is_set
	|| state.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (idepcntr_items !=  nullptr && idepcntr_items->has_data())
	|| (vdep_items !=  nullptr && vdep_items->has_data());
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(eppdn.yfilter)
	|| ydk::is_set(compvmdn.yfilter)
	|| ydk::is_set(comphvdn.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(ephostaddr.yfilter)
	|| ydk::is_set(hypervisorname.yfilter)
	|| ydk::is_set(portid.yfilter)
	|| ydk::is_set(containername.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
	|| ydk::is_set(eppdownloadhint.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
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
    if (eppdn.is_set || is_set(eppdn.yfilter)) leaf_name_data.push_back(eppdn.get_name_leafdata());
    if (compvmdn.is_set || is_set(compvmdn.yfilter)) leaf_name_data.push_back(compvmdn.get_name_leafdata());
    if (comphvdn.is_set || is_set(comphvdn.yfilter)) leaf_name_data.push_back(comphvdn.get_name_leafdata());
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (ephostaddr.is_set || is_set(ephostaddr.yfilter)) leaf_name_data.push_back(ephostaddr.get_name_leafdata());
    if (hypervisorname.is_set || is_set(hypervisorname.yfilter)) leaf_name_data.push_back(hypervisorname.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (containername.is_set || is_set(containername.yfilter)) leaf_name_data.push_back(containername.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (eppdownloadhint.is_set || is_set(eppdownloadhint.yfilter)) leaf_name_data.push_back(eppdownloadhint.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idepcntr_items != nullptr)
    {
        _children["idepcntr-items"] = idepcntr_items;
    }

    if(vdep_items != nullptr)
    {
        _children["vdep-items"] = vdep_items;
    }

    return _children;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idepcntr-items" || name == "vdep-items" || name == "mac" || name == "encap" || name == "eppdn" || name == "compVmDn" || name == "compHvDn" || name == "epgID" || name == "epHostAddr" || name == "hypervisorName" || name == "portId" || name == "containerName" || name == "transitionStatus" || name == "eppDownloadHint" || name == "handle" || name == "instType" || name == "pcIfId" || name == "state" || name == "name" || name == "id" || name == "uuid")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDEpCntr-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList>();
        ent_->parent = this;
        idepcntr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idepcntr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    direction{YType::enumeration, "direction"},
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
	|| direction.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(direction.yfilter)
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
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
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
    if(name == "mac" || name == "encap" || name == "direction" || name == "name" || name == "id")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VDEp-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList>();
        ent_->parent = this;
        vdep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vdep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    epgid{YType::str, "epgID"},
    insttype{YType::enumeration, "instType"},
    name{YType::str, "name"},
    id{YType::uint64, "id"},
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
	|| epgid.is_set
	|| insttype.is_set
	|| name.is_set
	|| id.is_set
	|| uuid.is_set
	|| (rsvnode_items !=  nullptr && rsvnode_items->has_data());
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(brifid.yfilter)
	|| ydk::is_set(epgid.yfilter)
	|| ydk::is_set(insttype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
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
    if (epgid.is_set || is_set(epgid.yfilter)) leaf_name_data.push_back(epgid.get_name_leafdata());
    if (insttype.is_set || is_set(insttype.yfilter)) leaf_name_data.push_back(insttype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvnode_items != nullptr)
    {
        _children["rsvNode-items"] = rsvnode_items;
    }

    return _children;
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
    if(value_path == "epgID")
    {
        epgid = value;
        epgid.value_namespace = name_space;
        epgid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "epgID")
    {
        epgid.yfilter = yfilter;
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
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
}

bool System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvNode-items" || name == "mac" || name == "encap" || name == "brIfId" || name == "epgID" || name == "instType" || name == "name" || name == "id" || name == "uuid")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsVNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList>();
        ent_->parent = this;
        rsvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ODev-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList>();
        ent_->parent = this;
        odev_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odev_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    encap{YType::str, "encap"},
    hostname{YType::str, "hostName"},
    ipaddr{YType::str, "ipAddr"},
    numhb{YType::uint32, "numHB"},
    lastnumhb{YType::uint32, "lastNumHB"},
    hbstatus{YType::enumeration, "hbStatus"},
    operst{YType::enumeration, "operSt"},
    maxmisshb{YType::uint32, "maxMissHb"},
    pcifid{YType::uint32, "pcIfId"},
    transitionstatus{YType::enumeration, "transitionStatus"},
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
	|| encap.is_set
	|| hostname.is_set
	|| ipaddr.is_set
	|| numhb.is_set
	|| lastnumhb.is_set
	|| hbstatus.is_set
	|| operst.is_set
	|| maxmisshb.is_set
	|| pcifid.is_set
	|| transitionstatus.is_set
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
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(numhb.yfilter)
	|| ydk::is_set(lastnumhb.yfilter)
	|| ydk::is_set(hbstatus.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxmisshb.yfilter)
	|| ydk::is_set(pcifid.yfilter)
	|| ydk::is_set(transitionstatus.yfilter)
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
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (numhb.is_set || is_set(numhb.yfilter)) leaf_name_data.push_back(numhb.get_name_leafdata());
    if (lastnumhb.is_set || is_set(lastnumhb.yfilter)) leaf_name_data.push_back(lastnumhb.get_name_leafdata());
    if (hbstatus.is_set || is_set(hbstatus.yfilter)) leaf_name_data.push_back(hbstatus.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxmisshb.is_set || is_set(maxmisshb.yfilter)) leaf_name_data.push_back(maxmisshb.get_name_leafdata());
    if (pcifid.is_set || is_set(pcifid.yfilter)) leaf_name_data.push_back(pcifid.get_name_leafdata());
    if (transitionstatus.is_set || is_set(transitionstatus.yfilter)) leaf_name_data.push_back(transitionstatus.get_name_leafdata());
    if (portid.is_set || is_set(portid.yfilter)) leaf_name_data.push_back(portid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odevcap_items != nullptr)
    {
        _children["odevcap-items"] = odevcap_items;
    }

    if(vnode_items != nullptr)
    {
        _children["vnode-items"] = vnode_items;
    }

    if(opnic_items != nullptr)
    {
        _children["opnic-items"] = opnic_items;
    }

    return _children;
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
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
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
    if(name == "odevcap-items" || name == "vnode-items" || name == "opnic-items" || name == "devId" || name == "devType" || name == "lNodeDn" || name == "encap" || name == "hostName" || name == "ipAddr" || name == "numHB" || name == "lastNumHB" || name == "hbStatus" || name == "operSt" || name == "maxMissHb" || name == "pcIfId" || name == "transitionStatus" || name == "portId" || name == "state" || name == "name" || name == "id")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList>();
        ent_->parent = this;
        vnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvvnode_items != nullptr)
    {
        _children["rtfvVNode-items"] = rtfvvnode_items;
    }

    if(rslnode_items != nullptr)
    {
        _children["rslNode-items"] = rslnode_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvVNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList>();
        ent_->parent = this;
        rtfvvnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvvnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList>();
        ent_->parent = this;
        rslnode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslnode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OPNic-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList>();
        ent_->parent = this;
        opnic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opnic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
	|| state.is_set
	|| name.is_set
	|| id.is_set;
}

bool System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
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
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
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
    if(name == "mac" || name == "state" || name == "name" || name == "id")
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::BankItems::BankList>();
        ent_->parent = this;
        bank_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::BankItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bank_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dbgingrtep_items != nullptr)
    {
        _children["dbgIngrTep-items"] = dbgingrtep_items;
    }

    if(dbgegrtep_items != nullptr)
    {
        _children["dbgEgrTep-items"] = dbgegrtep_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PortIf-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList>();
        ent_->parent = this;
        portif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : portif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::PortIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bank_items != nullptr)
    {
        _children["bank-items"] = bank_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bank-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList>();
        ent_->parent = this;
        bank_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bank_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dbgingrtep_items != nullptr)
    {
        _children["dbgIngrTep-items"] = dbgingrtep_items;
    }

    if(dbgegrtep_items != nullptr)
    {
        _children["dbgEgrTep-items"] = dbgegrtep_items;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RtnwPathToIfItems::get_children() const
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RstunnelMbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTunnelMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList>();
        ent_->parent = this;
        rstunnelmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RstunnelMbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rstunnelmbrifs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsTunnelToLooseNode-list")
    {
        auto ent_ = std::make_shared<System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList>();
        ent_->parent = this;
        rstunneltoloosenode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RstunnelToLooseNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rstunneltoloosenode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> System::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::VtpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
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
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::VtpItems::InstItems::InstItems()
    :
    domain{YType::str, "domain"},
    version{YType::uint32, "version"},
    password{YType::str, "password"},
    filepath{YType::str, "filePath"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
{

    yang_name = "inst-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::VtpItems::InstItems::~InstItems()
{
}

bool System::VtpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| version.is_set
	|| password.is_set
	|| filepath.is_set
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
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(filepath.yfilter)
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
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::VtpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (filepath.is_set || is_set(filepath.yfilter)) leaf_name_data.push_back(filepath.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::VtpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::VtpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filePath")
    {
        filepath = value;
        filepath.value_namespace = name_space;
        filepath.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "filePath")
    {
        filepath.yfilter = yfilter;
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
    if(name == "domain" || name == "version" || name == "password" || name == "filePath" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
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

std::shared_ptr<ydk::Entity> System::NbmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(conf_items != nullptr)
    {
        _children["conf-items"] = conf_items;
    }

    if(show_items != nullptr)
    {
        _children["show-items"] = show_items;
    }

    return _children;
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
    grouprangelist_items(std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems>())
    , interfaces_items(std::make_shared<System::NbmItems::ConfItems::InterfacesItems>())
    , global_items(std::make_shared<System::NbmItems::ConfItems::GlobalItems>())
    , flowpolicytable_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems>())
    , hostpolicytable_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems>())
{
    grouprangelist_items->parent = this;
    interfaces_items->parent = this;
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
    return (grouprangelist_items !=  nullptr && grouprangelist_items->has_data())
	|| (interfaces_items !=  nullptr && interfaces_items->has_data())
	|| (global_items !=  nullptr && global_items->has_data())
	|| (flowpolicytable_items !=  nullptr && flowpolicytable_items->has_data())
	|| (hostpolicytable_items !=  nullptr && hostpolicytable_items->has_data());
}

bool System::NbmItems::ConfItems::has_operation() const
{
    return is_set(yfilter)
	|| (grouprangelist_items !=  nullptr && grouprangelist_items->has_operation())
	|| (interfaces_items !=  nullptr && interfaces_items->has_operation())
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

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grouprangelist-items")
    {
        if(grouprangelist_items == nullptr)
        {
            grouprangelist_items = std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems>();
        }
        return grouprangelist_items;
    }

    if(child_yang_name == "interfaces-items")
    {
        if(interfaces_items == nullptr)
        {
            interfaces_items = std::make_shared<System::NbmItems::ConfItems::InterfacesItems>();
        }
        return interfaces_items;
    }

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

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grouprangelist_items != nullptr)
    {
        _children["grouprangelist-items"] = grouprangelist_items;
    }

    if(interfaces_items != nullptr)
    {
        _children["interfaces-items"] = interfaces_items;
    }

    if(global_items != nullptr)
    {
        _children["global-items"] = global_items;
    }

    if(flowpolicytable_items != nullptr)
    {
        _children["flowpolicytable-items"] = flowpolicytable_items;
    }

    if(hostpolicytable_items != nullptr)
    {
        _children["hostpolicytable-items"] = hostpolicytable_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grouprangelist-items" || name == "interfaces-items" || name == "global-items" || name == "flowpolicytable-items" || name == "hostpolicytable-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::GrouprangelistItems::GrouprangelistItems()
    :
    dom_items(std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "grouprangelist-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GrouprangelistItems::~GrouprangelistItems()
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ConfItems::GrouprangelistItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grouprangelist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GrouprangelistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GrouprangelistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GrouprangelistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::GrouprangelistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::GrouprangelistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::DomItems()
    :
    grouprangedom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "grouprangelist-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grouprangedom_list.len(); index++)
    {
        if(grouprangedom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<grouprangedom_list.len(); index++)
    {
        if(grouprangedom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/grouprangelist-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GrouprangelistItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GroupRangeDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList>();
        ent_->parent = this;
        grouprangedom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grouprangedom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GroupRangeDom-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GroupRangeDomList()
    :
    name{YType::str, "name"}
        ,
    g_items(std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems>())
{
    g_items->parent = this;

    yang_name = "GroupRangeDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::~GroupRangeDomList()
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (g_items !=  nullptr && g_items->has_data());
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (g_items !=  nullptr && g_items->has_operation());
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/grouprangelist-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GroupRangeDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g-items")
    {
        if(g_items == nullptr)
        {
            g_items = std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems>();
        }
        return g_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g_items != nullptr)
    {
        _children["g-items"] = g_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GItems()
    :
    grouprange_list(this, {"group", "groupmask"})
{

    yang_name = "g-items"; yang_parent_name = "GroupRangeDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::~GItems()
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grouprange_list.len(); index++)
    {
        if(grouprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::has_operation() const
{
    for (std::size_t index=0; index<grouprange_list.len(); index++)
    {
        if(grouprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GroupRange-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList>();
        ent_->parent = this;
        grouprange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grouprange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GroupRange-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::GroupRangeList()
    :
    group{YType::str, "group"},
    groupmask{YType::uint16, "groupMask"},
    rangetype{YType::enumeration, "rangeType"}
{

    yang_name = "GroupRange-list"; yang_parent_name = "g-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::~GroupRangeList()
{
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| groupmask.is_set
	|| rangetype.is_set;
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(rangetype.yfilter);
}

std::string System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GroupRange-list";
    ADD_KEY_TOKEN(group, "group");
    ADD_KEY_TOKEN(groupmask, "groupMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (rangetype.is_set || is_set(rangetype.yfilter)) leaf_name_data.push_back(rangetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rangeType")
    {
        rangetype = value;
        rangetype.value_namespace = name_space;
        rangetype.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "groupMask")
    {
        groupmask.yfilter = yfilter;
    }
    if(value_path == "rangeType")
    {
        rangetype.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "groupMask" || name == "rangeType")
        return true;
    return false;
}

System::NbmItems::ConfItems::InterfacesItems::InterfacesItems()
    :
    dom_items(std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "interfaces-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::InterfacesItems::~InterfacesItems()
{
}

bool System::NbmItems::ConfItems::InterfacesItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ConfItems::InterfacesItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ConfItems::InterfacesItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::InterfacesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::InterfacesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::InterfacesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::InterfacesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::InterfacesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::InterfacesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::InterfacesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::DomItems()
    :
    interfacesdom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "interfaces-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interfacesdom_list.len(); index++)
    {
        if(interfacesdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<interfacesdom_list.len(); index++)
    {
        if(interfacesdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/interfaces-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::InterfacesItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::InterfacesItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterfacesDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList>();
        ent_->parent = this;
        interfacesdom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::InterfacesItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interfacesdom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterfacesDom-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::InterfacesDomList()
    :
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems>())
{
    if_items->parent = this;

    yang_name = "InterfacesDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::~InterfacesDomList()
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/interfaces-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterfacesDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfItems()
    :
    if_list(this, {"if_"})
{

    yang_name = "if-items"; yang_parent_name = "InterfacesDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::~IfItems()
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::get_children() const
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

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::IfList()
    :
    if_{YType::uint32, "if"},
    role{YType::enumeration, "role"}
{

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::~IfList()
{
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| role.is_set;
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "role")
        return true;
    return false;
}

System::NbmItems::ConfItems::GlobalItems::GlobalItems()
    :
    dom_items(std::make_shared<System::NbmItems::ConfItems::GlobalItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "global-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GlobalItems::~GlobalItems()
{
}

bool System::NbmItems::ConfItems::GlobalItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ConfItems::GlobalItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
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


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GlobalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ConfItems::GlobalItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GlobalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::GlobalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::GlobalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::GlobalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::GlobalItems::DomItems::DomItems()
    :
    globalconfdom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "global-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GlobalItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<globalconfdom_list.len(); index++)
    {
        if(globalconfdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<globalconfdom_list.len(); index++)
    {
        if(globalconfdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::GlobalItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/global-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GlobalItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GlobalItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GlobalItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GlobalConfDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList>();
        ent_->parent = this;
        globalconfdom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GlobalItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : globalconfdom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GlobalConfDom-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalConfDomList()
    :
    name{YType::str, "name"}
        ,
    global_items(std::make_shared<System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_>())
{
    global_items->parent = this;

    yang_name = "GlobalConfDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::~GlobalConfDomList()
{
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (global_items !=  nullptr && global_items->has_data());
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (global_items !=  nullptr && global_items->has_operation());
}

std::string System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/global-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GlobalConfDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-items")
    {
        if(global_items == nullptr)
        {
            global_items = std::make_shared<System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_>();
        }
        return global_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_items != nullptr)
    {
        _children["global-items"] = global_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::GlobalItems_()
    :
    opermode{YType::enumeration, "operMode"},
    defaultsenderhostpolicy{YType::enumeration, "defaultSenderHostPolicy"},
    defaultreceiverhostpolicy{YType::enumeration, "defaultReceiverHostPolicy"},
    defaultpimhostpolicy{YType::enumeration, "defaultPimHostPolicy"},
    defaultflowbw{YType::uint32, "defaultflowBw"},
    defaultflowbwunit{YType::enumeration, "defaultflowBwUnit"},
    defaultdscp{YType::uint32, "defaultDscp"},
    unicastbwpercent{YType::uint8, "unicastBwPercent"},
    beaconack{YType::str, "beaconAck"},
    subscriptionid{YType::uint32, "subscriptionId"}
{

    yang_name = "global-items"; yang_parent_name = "GlobalConfDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::~GlobalItems_()
{
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::has_data() const
{
    if (is_presence_container) return true;
    return opermode.is_set
	|| defaultsenderhostpolicy.is_set
	|| defaultreceiverhostpolicy.is_set
	|| defaultpimhostpolicy.is_set
	|| defaultflowbw.is_set
	|| defaultflowbwunit.is_set
	|| defaultdscp.is_set
	|| unicastbwpercent.is_set
	|| beaconack.is_set
	|| subscriptionid.is_set;
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(defaultsenderhostpolicy.yfilter)
	|| ydk::is_set(defaultreceiverhostpolicy.yfilter)
	|| ydk::is_set(defaultpimhostpolicy.yfilter)
	|| ydk::is_set(defaultflowbw.yfilter)
	|| ydk::is_set(defaultflowbwunit.yfilter)
	|| ydk::is_set(defaultdscp.yfilter)
	|| ydk::is_set(unicastbwpercent.yfilter)
	|| ydk::is_set(beaconack.yfilter)
	|| ydk::is_set(subscriptionid.yfilter);
}

std::string System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (defaultsenderhostpolicy.is_set || is_set(defaultsenderhostpolicy.yfilter)) leaf_name_data.push_back(defaultsenderhostpolicy.get_name_leafdata());
    if (defaultreceiverhostpolicy.is_set || is_set(defaultreceiverhostpolicy.yfilter)) leaf_name_data.push_back(defaultreceiverhostpolicy.get_name_leafdata());
    if (defaultpimhostpolicy.is_set || is_set(defaultpimhostpolicy.yfilter)) leaf_name_data.push_back(defaultpimhostpolicy.get_name_leafdata());
    if (defaultflowbw.is_set || is_set(defaultflowbw.yfilter)) leaf_name_data.push_back(defaultflowbw.get_name_leafdata());
    if (defaultflowbwunit.is_set || is_set(defaultflowbwunit.yfilter)) leaf_name_data.push_back(defaultflowbwunit.get_name_leafdata());
    if (defaultdscp.is_set || is_set(defaultdscp.yfilter)) leaf_name_data.push_back(defaultdscp.get_name_leafdata());
    if (unicastbwpercent.is_set || is_set(unicastbwpercent.yfilter)) leaf_name_data.push_back(unicastbwpercent.get_name_leafdata());
    if (beaconack.is_set || is_set(beaconack.yfilter)) leaf_name_data.push_back(beaconack.get_name_leafdata());
    if (subscriptionid.is_set || is_set(subscriptionid.yfilter)) leaf_name_data.push_back(subscriptionid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultSenderHostPolicy")
    {
        defaultsenderhostpolicy = value;
        defaultsenderhostpolicy.value_namespace = name_space;
        defaultsenderhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultReceiverHostPolicy")
    {
        defaultreceiverhostpolicy = value;
        defaultreceiverhostpolicy.value_namespace = name_space;
        defaultreceiverhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultPimHostPolicy")
    {
        defaultpimhostpolicy = value;
        defaultpimhostpolicy.value_namespace = name_space;
        defaultpimhostpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultflowBw")
    {
        defaultflowbw = value;
        defaultflowbw.value_namespace = name_space;
        defaultflowbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultflowBwUnit")
    {
        defaultflowbwunit = value;
        defaultflowbwunit.value_namespace = name_space;
        defaultflowbwunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultDscp")
    {
        defaultdscp = value;
        defaultdscp.value_namespace = name_space;
        defaultdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicastBwPercent")
    {
        unicastbwpercent = value;
        unicastbwpercent.value_namespace = name_space;
        unicastbwpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beaconAck")
    {
        beaconack = value;
        beaconack.value_namespace = name_space;
        beaconack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriptionId")
    {
        subscriptionid = value;
        subscriptionid.value_namespace = name_space;
        subscriptionid.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "defaultSenderHostPolicy")
    {
        defaultsenderhostpolicy.yfilter = yfilter;
    }
    if(value_path == "defaultReceiverHostPolicy")
    {
        defaultreceiverhostpolicy.yfilter = yfilter;
    }
    if(value_path == "defaultPimHostPolicy")
    {
        defaultpimhostpolicy.yfilter = yfilter;
    }
    if(value_path == "defaultflowBw")
    {
        defaultflowbw.yfilter = yfilter;
    }
    if(value_path == "defaultflowBwUnit")
    {
        defaultflowbwunit.yfilter = yfilter;
    }
    if(value_path == "defaultDscp")
    {
        defaultdscp.yfilter = yfilter;
    }
    if(value_path == "unicastBwPercent")
    {
        unicastbwpercent.yfilter = yfilter;
    }
    if(value_path == "beaconAck")
    {
        beaconack.yfilter = yfilter;
    }
    if(value_path == "subscriptionId")
    {
        subscriptionid.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operMode" || name == "defaultSenderHostPolicy" || name == "defaultReceiverHostPolicy" || name == "defaultPimHostPolicy" || name == "defaultflowBw" || name == "defaultflowBwUnit" || name == "defaultDscp" || name == "unicastBwPercent" || name == "beaconAck" || name == "subscriptionId")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::FlowpolicytableItems()
    :
    dom_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "flowpolicytable-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::~FlowpolicytableItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::DomItems()
    :
    flowpolicydom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "flowpolicytable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowpolicydom_list.len(); index++)
    {
        if(flowpolicydom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<flowpolicydom_list.len(); index++)
    {
        if(flowpolicydom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/flowpolicytable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowPolicyDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList>();
        ent_->parent = this;
        flowpolicydom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flowpolicydom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowPolicyDom-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::FlowPolicyDomList()
    :
    name{YType::str, "name"}
        ,
    name_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems>())
{
    name_items->parent = this;

    yang_name = "FlowPolicyDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::~FlowPolicyDomList()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (name_items !=  nullptr && name_items->has_data());
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/flowpolicytable-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowPolicyDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::NameItems()
    :
    flowpolicy_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "FlowPolicyDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::~NameItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowpolicy_list.len(); index++)
    {
        if(flowpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::has_operation() const
{
    for (std::size_t index=0; index<flowpolicy_list.len(); index++)
    {
        if(flowpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowPolicy-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList>();
        ent_->parent = this;
        flowpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flowpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::FlowPolicyList()
    :
    name{YType::str, "name"},
    bw{YType::uint64, "bw"},
    bwunit{YType::enumeration, "bwUnit"},
    dscp{YType::uint32, "dscp"}
        ,
    bgn_items(std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems>())
{
    bgn_items->parent = this;

    yang_name = "FlowPolicy-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::~FlowPolicyList()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| bw.is_set
	|| bwunit.is_set
	|| dscp.is_set
	|| (bgn_items !=  nullptr && bgn_items->has_data());
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(bwunit.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (bgn_items !=  nullptr && bgn_items->has_operation());
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowPolicy-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (bwunit.is_set || is_set(bwunit.yfilter)) leaf_name_data.push_back(bwunit.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgn-items")
    {
        if(bgn_items == nullptr)
        {
            bgn_items = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems>();
        }
        return bgn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgn_items != nullptr)
    {
        _children["bgn-items"] = bgn_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwUnit")
    {
        bwunit = value;
        bwunit.value_namespace = name_space;
        bwunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "bwUnit")
    {
        bwunit.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgn-items" || name == "name" || name == "bw" || name == "bwUnit" || name == "dscp")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::BgnItems()
    :
    flowpolicyrange_list(this, {"groupbegin", "groupend"})
{

    yang_name = "bgn-items"; yang_parent_name = "FlowPolicy-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::~BgnItems()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flowpolicyrange_list.len(); index++)
    {
        if(flowpolicyrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::has_operation() const
{
    for (std::size_t index=0; index<flowpolicyrange_list.len(); index++)
    {
        if(flowpolicyrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FlowPolicyRange-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList>();
        ent_->parent = this;
        flowpolicyrange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flowpolicyrange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FlowPolicyRange-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::FlowPolicyRangeList()
    :
    groupbegin{YType::str, "groupBegin"},
    groupend{YType::str, "groupEnd"}
{

    yang_name = "FlowPolicyRange-list"; yang_parent_name = "bgn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::~FlowPolicyRangeList()
{
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_data() const
{
    if (is_presence_container) return true;
    return groupbegin.is_set
	|| groupend.is_set;
}

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groupbegin.yfilter)
	|| ydk::is_set(groupend.yfilter);
}

std::string System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FlowPolicyRange-list";
    ADD_KEY_TOKEN(groupbegin, "groupBegin");
    ADD_KEY_TOKEN(groupend, "groupEnd");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groupbegin.is_set || is_set(groupbegin.yfilter)) leaf_name_data.push_back(groupbegin.get_name_leafdata());
    if (groupend.is_set || is_set(groupend.yfilter)) leaf_name_data.push_back(groupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupBegin" || name == "groupEnd")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::HostpolicytableItems()
    :
    dom_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "hostpolicytable-items"; yang_parent_name = "conf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::~HostpolicytableItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::DomItems()
    :
    hostpolicydom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "hostpolicytable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostpolicydom_list.len(); index++)
    {
        if(hostpolicydom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<hostpolicydom_list.len(); index++)
    {
        if(hostpolicydom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostPolicyDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList>();
        ent_->parent = this;
        hostpolicydom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostpolicydom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostPolicyDom-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::HostPolicyDomList()
    :
    name{YType::str, "name"}
        ,
    sender_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems>())
    , receiver_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems>())
    , pim_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems>())
{
    sender_items->parent = this;
    receiver_items->parent = this;
    pim_items->parent = this;

    yang_name = "HostPolicyDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::~HostPolicyDomList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (sender_items !=  nullptr && sender_items->has_data())
	|| (receiver_items !=  nullptr && receiver_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sender_items !=  nullptr && sender_items->has_operation())
	|| (receiver_items !=  nullptr && receiver_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation());
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/conf-items/hostpolicytable-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostPolicyDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-items")
    {
        if(sender_items == nullptr)
        {
            sender_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems>();
        }
        return sender_items;
    }

    if(child_yang_name == "receiver-items")
    {
        if(receiver_items == nullptr)
        {
            receiver_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems>();
        }
        return receiver_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems>();
        }
        return pim_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sender_items != nullptr)
    {
        _children["sender-items"] = sender_items;
    }

    if(receiver_items != nullptr)
    {
        _children["receiver-items"] = receiver_items;
    }

    if(pim_items != nullptr)
    {
        _children["pim-items"] = pim_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-items" || name == "receiver-items" || name == "pim-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SenderItems()
    :
    seq_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "sender-items"; yang_parent_name = "HostPolicyDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::~SenderItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::has_data() const
{
    if (is_presence_container) return true;
    return (seq_items !=  nullptr && seq_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::has_operation() const
{
    return is_set(yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SeqItems()
    :
    senderhostpolicy_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "sender-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::~SeqItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<senderhostpolicy_list.len(); index++)
    {
        if(senderhostpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<senderhostpolicy_list.len(); index++)
    {
        if(senderhostpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SenderHostPolicy-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList>();
        ent_->parent = this;
        senderhostpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : senderhostpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SenderHostPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::SenderHostPolicyList()
    :
    seqnum{YType::uint32, "seqNum"},
    host{YType::str, "host"},
    group{YType::str, "group"},
    groupmask{YType::uint16, "groupMask"},
    permission{YType::enumeration, "permission"}
{

    yang_name = "SenderHostPolicy-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::~SenderHostPolicyList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| host.is_set
	|| group.is_set
	|| groupmask.is_set
	|| permission.is_set;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(permission.yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SenderHostPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "host" || name == "group" || name == "groupMask" || name == "permission")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::ReceiverItems()
    :
    seq_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "receiver-items"; yang_parent_name = "HostPolicyDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::~ReceiverItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::has_data() const
{
    if (is_presence_container) return true;
    return (seq_items !=  nullptr && seq_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::has_operation() const
{
    return is_set(yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiver-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::SeqItems()
    :
    receiverhostpolicy_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "receiver-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::~SeqItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<receiverhostpolicy_list.len(); index++)
    {
        if(receiverhostpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<receiverhostpolicy_list.len(); index++)
    {
        if(receiverhostpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReceiverHostPolicy-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList>();
        ent_->parent = this;
        receiverhostpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : receiverhostpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReceiverHostPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::ReceiverHostPolicyList()
    :
    seqnum{YType::uint32, "seqNum"},
    host{YType::str, "host"},
    source{YType::str, "source"},
    group{YType::str, "group"},
    groupmask{YType::uint16, "groupMask"},
    permission{YType::enumeration, "permission"}
{

    yang_name = "ReceiverHostPolicy-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::~ReceiverHostPolicyList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| host.is_set
	|| source.is_set
	|| group.is_set
	|| groupmask.is_set
	|| permission.is_set;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(permission.yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReceiverHostPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
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

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "host" || name == "source" || name == "group" || name == "groupMask" || name == "permission")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::PimItems()
    :
    seq_items(std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "HostPolicyDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::~PimItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return (seq_items !=  nullptr && seq_items->has_data());
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::SeqItems()
    :
    pimhostpolicy_list(this, {"seqnum"})
{

    yang_name = "seq-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::~SeqItems()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimhostpolicy_list.len(); index++)
    {
        if(pimhostpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<pimhostpolicy_list.len(); index++)
    {
        if(pimhostpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PimHostPolicy-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList>();
        ent_->parent = this;
        pimhostpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pimhostpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PimHostPolicy-list")
        return true;
    return false;
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::PimHostPolicyList()
    :
    seqnum{YType::uint32, "seqNum"},
    source{YType::str, "source"},
    group{YType::str, "group"},
    groupmask{YType::uint16, "groupMask"},
    permission{YType::enumeration, "permission"}
{

    yang_name = "PimHostPolicy-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::~PimHostPolicyList()
{
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| source.is_set
	|| group.is_set
	|| groupmask.is_set
	|| permission.is_set;
}

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(groupmask.yfilter)
	|| ydk::is_set(permission.yfilter);
}

std::string System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PimHostPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (groupmask.is_set || is_set(groupmask.yfilter)) leaf_name_data.push_back(groupmask.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
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

void System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
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

bool System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "source" || name == "group" || name == "groupMask" || name == "permission")
        return true;
    return false;
}

System::NbmItems::ShowItems::ShowItems()
    :
    appliedpolicies_items(std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems>())
    , flows_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems>())
    , stats_items(std::make_shared<System::NbmItems::ShowItems::StatsItems>())
    , global_items(std::make_shared<System::NbmItems::ShowItems::GlobalItems>())
    , endpoints_items(std::make_shared<System::NbmItems::ShowItems::EndpointsItems>())
{
    appliedpolicies_items->parent = this;
    flows_items->parent = this;
    stats_items->parent = this;
    global_items->parent = this;
    endpoints_items->parent = this;

    yang_name = "show-items"; yang_parent_name = "nbm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::~ShowItems()
{
}

bool System::NbmItems::ShowItems::has_data() const
{
    if (is_presence_container) return true;
    return (appliedpolicies_items !=  nullptr && appliedpolicies_items->has_data())
	|| (flows_items !=  nullptr && flows_items->has_data())
	|| (stats_items !=  nullptr && stats_items->has_data())
	|| (global_items !=  nullptr && global_items->has_data())
	|| (endpoints_items !=  nullptr && endpoints_items->has_data());
}

bool System::NbmItems::ShowItems::has_operation() const
{
    return is_set(yfilter)
	|| (appliedpolicies_items !=  nullptr && appliedpolicies_items->has_operation())
	|| (flows_items !=  nullptr && flows_items->has_operation())
	|| (stats_items !=  nullptr && stats_items->has_operation())
	|| (global_items !=  nullptr && global_items->has_operation())
	|| (endpoints_items !=  nullptr && endpoints_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appliedpolicies-items")
    {
        if(appliedpolicies_items == nullptr)
        {
            appliedpolicies_items = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems>();
        }
        return appliedpolicies_items;
    }

    if(child_yang_name == "flows-items")
    {
        if(flows_items == nullptr)
        {
            flows_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems>();
        }
        return flows_items;
    }

    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::NbmItems::ShowItems::StatsItems>();
        }
        return stats_items;
    }

    if(child_yang_name == "global-items")
    {
        if(global_items == nullptr)
        {
            global_items = std::make_shared<System::NbmItems::ShowItems::GlobalItems>();
        }
        return global_items;
    }

    if(child_yang_name == "endpoints-items")
    {
        if(endpoints_items == nullptr)
        {
            endpoints_items = std::make_shared<System::NbmItems::ShowItems::EndpointsItems>();
        }
        return endpoints_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(appliedpolicies_items != nullptr)
    {
        _children["appliedpolicies-items"] = appliedpolicies_items;
    }

    if(flows_items != nullptr)
    {
        _children["flows-items"] = flows_items;
    }

    if(stats_items != nullptr)
    {
        _children["stats-items"] = stats_items;
    }

    if(global_items != nullptr)
    {
        _children["global-items"] = global_items;
    }

    if(endpoints_items != nullptr)
    {
        _children["endpoints-items"] = endpoints_items;
    }

    return _children;
}

void System::NbmItems::ShowItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appliedpolicies-items" || name == "flows-items" || name == "stats-items" || name == "global-items" || name == "endpoints-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::AppliedpoliciesItems()
    :
    dom_items(std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "appliedpolicies-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::~AppliedpoliciesItems()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appliedpolicies-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::DomItems()
    :
    appliedpolicydom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "appliedpolicies-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::~DomItems()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appliedpolicydom_list.len(); index++)
    {
        if(appliedpolicydom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<appliedpolicydom_list.len(); index++)
    {
        if(appliedpolicydom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/appliedpolicies-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppliedPolicyDom-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList>();
        ent_->parent = this;
        appliedpolicydom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appliedpolicydom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppliedPolicyDom-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::AppliedPolicyDomList()
    :
    name{YType::str, "name"}
        ,
    host_items(std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems>())
{
    host_items->parent = this;

    yang_name = "AppliedPolicyDom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::~AppliedPolicyDomList()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nbm-items/show-items/appliedpolicies-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppliedPolicyDom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host_items != nullptr)
    {
        _children["host-items"] = host_items;
    }

    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "name")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::HostItems()
    :
    seq_items(std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems>())
{
    seq_items->parent = this;

    yang_name = "host-items"; yang_parent_name = "AppliedPolicyDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::~HostItems()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    return (seq_items !=  nullptr && seq_items->has_data());
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::has_operation() const
{
    return is_set(yfilter)
	|| (seq_items !=  nullptr && seq_items->has_operation());
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-items")
    {
        if(seq_items == nullptr)
        {
            seq_items = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems>();
        }
        return seq_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(seq_items != nullptr)
    {
        _children["seq-items"] = seq_items;
    }

    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-items")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::SeqItems()
    :
    appliedpolicy_list(this, {"seqnum", "policytype", "if_"})
{

    yang_name = "seq-items"; yang_parent_name = "host-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::~SeqItems()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<appliedpolicy_list.len(); index++)
    {
        if(appliedpolicy_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::has_operation() const
{
    for (std::size_t index=0; index<appliedpolicy_list.len(); index++)
    {
        if(appliedpolicy_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AppliedPolicy-list")
    {
        auto ent_ = std::make_shared<System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList>();
        ent_->parent = this;
        appliedpolicy_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : appliedpolicy_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AppliedPolicy-list")
        return true;
    return false;
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::AppliedPolicyList()
    :
    seqnum{YType::uint64, "seqNum"},
    policytype{YType::enumeration, "policyType"},
    if_{YType::uint32, "if"},
    ifname{YType::str, "ifName"},
    isactive{YType::enumeration, "isActive"}
{

    yang_name = "AppliedPolicy-list"; yang_parent_name = "seq-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::~AppliedPolicyList()
{
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::has_data() const
{
    if (is_presence_container) return true;
    return seqnum.is_set
	|| policytype.is_set
	|| if_.is_set
	|| ifname.is_set
	|| isactive.is_set;
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seqnum.yfilter)
	|| ydk::is_set(policytype.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(isactive.yfilter);
}

std::string System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AppliedPolicy-list";
    ADD_KEY_TOKEN(seqnum, "seqNum");
    ADD_KEY_TOKEN(policytype, "policyType");
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());
    if (policytype.is_set || is_set(policytype.yfilter)) leaf_name_data.push_back(policytype.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (isactive.is_set || is_set(isactive.yfilter)) leaf_name_data.push_back(isactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seqNum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyType")
    {
        policytype = value;
        policytype.value_namespace = name_space;
        policytype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "isActive")
    {
        isactive = value;
        isactive.value_namespace = name_space;
        isactive.value_namespace_prefix = name_space_prefix;
    }
}

void System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seqNum")
    {
        seqnum.yfilter = yfilter;
    }
    if(value_path == "policyType")
    {
        policytype.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "isActive")
    {
        isactive.yfilter = yfilter;
    }
}

bool System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seqNum" || name == "policyType" || name == "if" || name == "ifName" || name == "isActive")
        return true;
    return false;
}

System::NbmItems::ShowItems::FlowsItems::FlowsItems()
    :
    dom_items(std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "flows-items"; yang_parent_name = "show-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NbmItems::ShowItems::FlowsItems::~FlowsItems()
{
}

bool System::NbmItems::ShowItems::FlowsItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NbmItems::ShowItems::FlowsItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
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

std::shared_ptr<ydk::Entity> System::NbmItems::ShowItems::FlowsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NbmItems::ShowItems::FlowsItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NbmItems::ShowItems::FlowsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::NbmItems::ShowItems::FlowsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NbmItems::ShowItems::FlowsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NbmItems::ShowItems::FlowsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}


}
}

